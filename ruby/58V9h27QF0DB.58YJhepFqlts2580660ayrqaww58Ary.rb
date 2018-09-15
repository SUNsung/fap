
        
        Badge.seed do |b|
  b.id = Badge::FirstOnebox
  b.name = 'First Onebox'
  b.badge_type_id = BadgeType::Bronze
  b.multiple_grant = false
  b.target_posts = true
  b.show_posts = true
  b.query = nil
  b.badge_grouping_id = BadgeGrouping::GettingStarted
  b.default_badge_grouping_id = BadgeGrouping::GettingStarted
  b.trigger = Badge::Trigger::None
  b.system = true
end
    
            unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for trust level 3 lounge!'
        end
    
          def local_variable_get(binding, name)
        if binding.respond_to?(:local_variable_get)
          binding.local_variable_get(name)
        else
          binding.eval(name.to_s)
        end
      end
    
          all_reviews
    end
    
    def du_upload_geojson_failure
  stub_request(:post, 'https://du-itc.itunes.apple.com/upload/geo-json').
    with(body: du_upload_invalid_geojson.bytes,
           headers: { 'Accept' => 'application/json, text/plain, */*', 'Accept-Encoding' => 'gzip;q=1.0,deflate;q=0.6,identity;q=0.3', 'Connection' => 'keep-alive', 'Content-Length' => du_upload_invalid_geojson.file_size, 'Content-Type' => 'application/json', 'Referrer' => 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/ng/app/898536088',
                     'X-Apple-Jingle-Correlation-Key' => 'iOS App:AdamId=898536088:Version=0.9.13', 'X-Apple-Upload-Appleid' => '898536088', 'X-Apple-Upload-Contentproviderid' => '1234567', 'X-Apple-Upload-Itctoken' => 'sso token for image',
                     'X-Apple-Upload-Referrer' => 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/ng/app/898536088', 'X-Original-Filename' => 'ftl_FAKEMD5_upload_invalid.GeoJSON' }).
    to_return(status: 400, body: du_read_upload_geojson_response_failed, headers: { 'Content-Type' => 'application/json' })
end
    
          #   # First, stub a failing request
      #   stub_request(:get, 'https://appstoreconnect.apple.com/testflight/v2/providers/1234/apps/898536088/platforms/ios/trains').
      #     # to_return(status: 200, body: TunesStubbing.itc_read_fixture_file('build_trains_operation_failed.json'), headers: { 'Content-Type' => 'application/json' }).times(2).
      #     to_return(status: 200, body: TunesStubbing.itc_read_fixture_file('build_trains.json'), headers: { 'Content-Type' => 'application/json' })
    
        # returns true if fastlane was installed via RubyGems
    def self.rubygems?
      !self.bundler? && !self.contained_fastlane? && !self.homebrew? && !self.mac_app?
    end
    
          describe 'with scan option :include_simulator_logs set to false' do
        it 'does not copy any device logs to the output directory', requires_xcodebuild: true do
          # Circle CI is setting the SCAN_INCLUDE_SIMULATOR_LOGS env var, so just leaving
          # the include_simulator_logs option out does not let it default to false
          Scan.config = FastlaneCore::Configuration.create(Scan::Options.available_options, {
            output_directory: '/tmp/scan_results',
            project: './scan/examples/standard/app.xcodeproj',
            include_simulator_logs: false
          })
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelper.swift')
  warn('You modified `SnapshotHelper.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
            context 'otherwise' do
          it 'converts a floating point number in dd.dddd form' do
            format('%#{f}', 0.0001).should == '0.0001'
            format('%#{f}', -0.0001).should == '-0.0001'
            format('%#{f}', 123456).should == '123456'
            format('%#{f}', -123456).should == '-123456'
          end
    
      it 'accepts a negative seed' do
    srand(-17)
    srand.should == -17
  end
    
      after :each do
    $VERBOSE = @before_verbose
    $/ = @before_separator
  end
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
              # Decodes the cipher from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Sting]
          def decode_cipher(input)
            input.value[0].value
          end
    
          spec['version'] = Bootstrap::VERSION
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      namespace :release do
    GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
      desc 'Release #{gem} as a package'
      task gem => 'package:#{gem}' do
        sh <<-SH
          gem install #{package(gem, '.gem')} --local &&
          gem push #{package(gem, '.gem')}
        SH
      end
    end
    
          env['rack.errors'] = errors
    
          # Essentially the inverse of +mask_token+.
      def unmask_token(masked_token)
        # Split the token into the one-time pad and the encrypted
        # value and decrypt it
        token_length = masked_token.length / 2
        one_time_pad = masked_token[0...token_length]
        encrypted_token = masked_token[token_length..-1]
        xor_byte_strings(one_time_pad, encrypted_token)
      end
    
          def react_and_close(env, body)
        reaction = react(env)
    
    desc 'Test the paperclip plugin.'
RSpec::Core::RakeTask.new(:spec)
    
    When /^I rollback a migration$/ do
  step %[I successfully run `rake db:rollback STEPS=1 --trace`]
end