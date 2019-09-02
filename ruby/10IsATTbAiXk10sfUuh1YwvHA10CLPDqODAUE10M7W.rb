
        
        #############################################################################
#
# Helper functions
#
#############################################################################
    
    
def pathutil_relative
  Pathutil.new(DOC_PATH).relative_path_from(COL_PATH).to_s
end
    
          def after_features(features)
        @io.puts
        print_worst_offenders
        print_summary(features)
      end
    
            case bump_type
        when 'patch'
          patch += 1
        when 'minor'
          minor += 1
          patch = 0
        when 'major'
          major += 1
          minor = 0
          patch = 0
        end
    
          it 'is processed on active' do
        mock_client_response(:get_build) do
          {
            'externalState' => 'testflight.build.state.testing.active'
          }
        end
        expect(build).to be_processed
      end
    
          describe '#live_version weirdities' do
        it 'no live version if app isn't yet uploaded' do
          app = Spaceship::Application.find(1_000_000_000)
          expect(app.live_version).to eq(nil)
          expect(app.edit_version.is_live).to eq(false)
          expect(app.latest_version.is_live).to eq(false)
        end
      end
    
        describe '#devices' do
      let(:devices) { subject.devices }
      it 'returns a list of device hashes' do
        expect(devices).to be_instance_of(Array)
        expect(devices.first.keys).to eq(['deviceId', 'name', 'deviceNumber', 'devicePlatform', 'status', 'model', 'deviceClass'])
      end
    end
    
              # after blocks are only called if no exception was raised before
          # Call the platform specific after block and then the general one
          execute_flow_block(after_each_blocks, current_platform, current_lane, parameters)
          execute_flow_block(after_all_blocks, current_platform, current_lane, parameters)
        end
    
          context 'when both primary and secondary are available and same value' do
        let(:result) do
          csm.merge_profile_mapping(primary_mapping: { primary_key => 'AppStore' },
                                    secondary_mapping: { secondary_key => 'AppStore' },
                                    export_method: 'development')
        end
        context 'when primary's key is symbol and secondary's key is also symbol' do
          let(:primary_key) { :'identifier.1' }
          let(:secondary_key) { :'identifier.1' }
          it 'is merged correctly' do
            expect(result).to eq({ :'identifier.1' => 'AppStore' })
          end
        end
        context 'when primary's key is symbol and secondary's key is string' do
          let(:primary_key) { :'identifier.1' }
          let(:secondary_key) { 'identifier.1' }
          it 'is merged correctly' do
            expect(result).to eq({ :'identifier.1' => 'AppStore' })
          end
        end
        context 'when primary's key is string and secondary's key is also string' do
          let(:primary_key) { 'identifier.1' }
          let(:secondary_key) { 'identifier.1' }
          it 'is merged correctly' do
            expect(result).to eq({ :'identifier.1' => 'AppStore' })
          end
        end
        context 'when primary's key is string and secondary's key is also symbol' do
          let(:primary_key) { 'identifier.1' }
          let(:secondary_key) { :'identifier.1' }
          it 'is merged correctly' do
            expect(result).to eq({ :'identifier.1' => 'AppStore' })
          end
        end
      end
    end
    
      # Create a fake app with number_of_builds candidate builds
  # the builds will be in date ascending order
  def make_fake_builds(number_of_builds)
    (0...number_of_builds).map do |num|
      OpenStruct.new({ upload_date: Time.now.utc + 60 * num, processing: false }) # minutes_from_now
    end
  end
    
          def self.upload_dsym(params, path)
        UI.message('Uploading '#{path}'...')
        command = []
        command << File.expand_path(params[:binary_path]).shellescape
        if params[:gsp_path]
          command << '-gsp #{params[:gsp_path].shellescape}'
        elsif params[:api_token]
          command << '-a #{params[:api_token]}'
        end
        command << '-p #{params[:platform] == 'appletvos' ? 'tvos' : params[:platform]}'
        command << File.expand_path(path).shellescape
        begin
          command_to_execute = command.join(' ')
          UI.verbose('upload_dsym using command: #{command_to_execute}')
          Actions.sh(command_to_execute, log: false)
        rescue => ex
          UI.error(ex.to_s) # it fails, however we don't want to fail everything just for this
        end
      end
    
          # Maps the bundle identifier to the appropriate provisioning profile
      # This is used in the _gym_ action as part of the export options
      # e.g.
      #
      #   export_options: {
      #     provisioningProfiles: { 'me.themoji.app.beta': 'match AppStore me.themoji.app.beta' }
      #   }
      #
      def self.define_provisioning_profile_mapping(params)
        mapping = Actions.lane_context[SharedValues::MATCH_PROVISIONING_PROFILE_MAPPING] || {}
    
          it 'prefers an explicitly specified changelog value' do
        values = Fastlane::FastFile.new.parse('lane :test do
          # changelog_from_git_commits sets this lane context variable
          Actions.lane_context[SharedValues::FL_CHANGELOG] = 'autogenerated changelog'
          pilot(changelog: 'custom changelog')
        end').runner.execute(:test)
    
          def check
        create_event :payload => {}
      end
    end
    
        it 'for the afternoon' do
      expect(@scheduler.send(:hour_to_schedule_name, 17)).to eq('5pm')
    end
  end
    
        it 'should raise error when invalid response arrives' do
      stub(HTTParty).post { {'blah' => 'blah'} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Invalid response from Boxcar:/)
    end
    
      sidekiq_retries_exhausted do |msg, err|
    next if err.is_a?(ActiveRecord::RecordNotFound)
    
        def search_filenames(query)
      repository.search_files_by_name(query, ref)
    end
  end
end

    
    shared_examples 'unfoldable diff' do
  let(:subject) { described_class.new(diffable, diff_options: nil) }
    
    protected
    
      def initialize(info = {})
    super(merge_info(info,
      'Name'          => 'Bind TCP Stager (RC4 Stage Encryption, Metasm)',
      'Description'   => 'Connect back to the attacker',
      'Author'        => ['hdm', 'skape', 'sf', 'mihi', 'max3raza', 'RageLtMan'],
      'License'       => MSF_LICENSE,
      'Platform'      => 'win',
      'Arch'          => ARCH_X64,
      'Handler'       => Msf::Handler::BindTcp,
      'Convention'    => 'sockrdi',
      'Stager'        => { 'RequiresMidstager' => false }
      ))
  end
end

    
            # Check that we have the hashes and save them
        if sha1_hash !~ /0000000000000000000000000/
          report_hash('SHA-1', sha1_hash, user)
        end
        if nt_hash !~ /000000000000000/
          report_hash('NT', nt_hash, user)
        end
        if lm_hash !~ /0000000000000/
          report_hash('LM', lm_hash, user)
        end
      end
    end
  end
    
      def extract_authors(urls)
    print_status 'Processing #{urls.size} URLs...'
    
        if res.body.include?('Administrator')
      vprint_good('ACL bypass successful')
      checkcode = CheckCode::Vulnerable
    else
      vprint_error('ACL bypass unsuccessful')
      return CheckCode::Safe
    end
    
        @clean_up_rc = 'execute -H -f sc.exe -a \'delete #{@service_name}\'\n' + @clean_up_rc
    @clean_up_rc = 'execute -H -f sc.exe -a \'stop #{@service_name}\'\n'   + @clean_up_rc
  end
    
        # Execute the powershell script
    print_status 'Building remote code.'
    cmd_out, running_pids, open_channels = execute_script(script, true)
    get_ps_output(cmd_out, eof)
    vprint_good 'Cleaning up #{running_pids.join(', ')}'
    
      #
  # Setup the exploit/multi/handler if requested
  #
  if(autoconn)
    print_status('Trying to connect to the Meterpreter service at #{client.session_host}:#{rport}...')
    mul = client.framework.exploits.create('multi/handler')
    mul.datastore['WORKSPACE'] = client.workspace
    mul.datastore['PAYLOAD'] = 'windows/metsvc_bind_tcp'
    mul.datastore['LPORT']   = rport
    mul.datastore['RHOST']   = client.session_host
    mul.datastore['ExitOnSession'] = false
    mul.exploit_simple(
      'Payload'        => mul.datastore['PAYLOAD'],
      'RunAsJob'       => true
    )
  end
    
    
    
          alias default_reaction deny
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS and others
    # Supported browsers:: Firefox 23+, Safari 7+, Chrome 25+, Opera 15+
    #
    # Description:: Content Security Policy, a mechanism web applications
    #               can use to mitigate a broad class of content injection
    #               vulnerabilities, such as cross-site scripting (XSS).
    #               Content Security Policy is a declarative policy that lets
    #               the authors (or server administrators) of a web application
    #               inform the client about the sources from which the
    #               application expects to load resources.
    #
    # More info::   W3C CSP Level 1 : https://www.w3.org/TR/CSP1/ (deprecated)
    #               W3C CSP Level 2 : https://www.w3.org/TR/CSP2/ (current)
    #               W3C CSP Level 3 : https://www.w3.org/TR/CSP3/ (draft)
    #               https://developer.mozilla.org/en-US/docs/Web/Security/CSP
    #               http://caniuse.com/#search=ContentSecurityPolicy
    #               http://content-security-policy.com/
    #               https://securityheaders.io
    #               https://scotthelme.co.uk/csp-cheat-sheet/
    #               http://www.html5rocks.com/en/tutorials/security/content-security-policy/
    #
    # Sets the 'Content-Security-Policy[-Report-Only]' header.
    #
    # Options: ContentSecurityPolicy configuration is a complex topic with
    #          several levels of support that has evolved over time.
    #          See the W3C documentation and the links in the more info
    #          section for CSP usage examples and best practices. The
    #          CSP3 directives in the 'NO_ARG_DIRECTIVES' constant need to be
    #          presented in the options hash with a boolean 'true' in order
    #          to be used in a policy.
    #
    class ContentSecurityPolicy < Base
      default_options default_src: :none, script_src: ''self'',
                      img_src: ''self'', style_src: ''self'',
                      connect_src: ''self'', report_only: false
    
            reaction
      end
    
      it 'should ignore CSP3 no arg directives unless they are set to true' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :block_all_mixed_content => false, :disown_opener => 'false', :upgrade_insecure_requests => 'foo'
    
        it 'redirects requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/')
    end
    
        it 'leaves TempFiles untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['file'][:filename] + '\n' + \
                                                 request.params['file'][:tempfile].read + '\n' + \
                                                 request.params['other']]]
      end
    
    class Component
  include Sidekiq::ExceptionHandler
    
      it 'logs large payloads' do
    output = capture_logging(Logger::WARN) do
      SomeClass.delay.doit('a' * 8192)
    end
    assert_match(/#{SomeClass}.doit job argument is/, output)
  end
    
        # Assume we can pass any class as time to perform_in
    class TimeDuck
      def to_f; 42.0 end
    end