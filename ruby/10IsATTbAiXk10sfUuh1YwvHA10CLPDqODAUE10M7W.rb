
        
          has_many :citations, foreign_key: 'book1_id'
  has_many :references, -> { distinct }, through: :citations, source: :reference_of
    
          def self.services_mapping
        {
            access_wifi: 'access_wifi',
            app_group: 'app_group',
            apple_pay: 'apple_pay',
            associated_domains: 'associated_domains',
            auto_fill_credential: 'auto_fill_credential',
            data_protection: 'data_protection',
            game_center: 'game_center',
            health_kit: 'healthkit',
            home_kit: 'homekit',
            hotspot: 'hotspot',
            icloud: 'icloud',
            in_app_purchase: 'in_app_purchase',
            inter_app_audio: 'inter_app_audio',
            multipath: 'multipath',
            network_extension: 'network_extension',
            nfc_tag_reading: 'nfc_tag_reading',
            personal_vpn: 'personal_vpn',
            passbook: 'passbook',
            push_notification: 'push_notification',
            siri_kit: 'sirikit',
            vpn_configuration: 'vpn_conf',
            wallet: 'wallet',
            wireless_accessory: 'wireless_conf'
        }
      end
    
      describe 'keys api' do
    let(:api_root) { 'https://developer.apple.com/services-account/QH65B2/account/auth/key' }
    before do
      MockAPI::DeveloperPortalServer.post('/services-account/QH65B2/account/auth/key/:action') do
        {
          keys: []
        }
      end
    end
    
          def pipe(device_type, language, locale)
        log_path = xcodebuild_log_path(device_type: device_type, language: language, locale: locale)
        return ['| tee #{log_path.shellescape} | xcpretty #{Snapshot.config[:xcpretty_args]}']
      end
    
          def self.output
        [
          ['MATCH_PROVISIONING_PROFILE_MAPPING', 'The match provisioning profile mapping'],
          ['SIGH_PROFILE_TYPE', 'The profile type, can be appstore, adhoc, development, enterprise']
        ]
      end
    
            it 'raises an error if `apple_id` is set to bundle identifier' do
          expect do
            options = {
              username: 'username@example.com',
              apple_id: 'com.bundle.identifier'
            }
            pilot_config = FastlaneCore::Configuration.create(Pilot::Options.available_options, options)
          end.to raise_error('`apple_id` value is incorrect. The correct value should be taken from Apple ID property in the App Information section in App Store Connect.')
        end
    
        let(:custom_tester_group) do
      Spaceship::ConnectAPI::BetaGroup.new('1', {
        name: 'Test Group'
      })
    end
    
            # Build up the actual command to execute
        command = [
          'rsync',
          args,
          '-e', rsh.flatten.join(' '),
          excludes.map { |e| ['--exclude', e] },
          hostpath,
          '#{username}@#{host}:#{guestpath}',
        ].flatten
    
      before do
    allow(machine).to receive(:communicate).and_return(communicator)
  end
    
          if config_class
        p.config(name, :provider) { config_class }
      end
    end
    
      describe '#initialize' do
    let(:gemrc_location) { 'C:\\My\\Config\\File' }
    
    
  subject{ described_class.new(machine) }
    
        def prepare_output
      @output_encoding = nil
      return unless @output.is_a?(StringIO)
    
        def test_struct_aset
      s = Struct.new(:foo).new
      name = noninterned_name
      assert_raise(NameError) {s[name] = true}
      assert_not_interned(name)
    end
    
      it 'calls the given block for each byte in the stream, passing the byte as an argument' do
    gz = Zlib::GzipReader.new @io
    
      it 'increments position' do
    gz = Zlib::GzipReader.new @io
    (0..@data.size).each do |i|
      gz.pos.should == i
      gz.getc
    end
  end
    
        quarantine! do # https://bugs.ruby-lang.org/issues/13675
      describe 'with nil' do
        it 'does not insert anything into the stream' do
          @gz.ungetbyte nil
          @gz.read.should == 'abcde'
        end
    
      it 'inflates chunked data' do
    @chunks.map { |chunk| chunk.length }.should == [16384, 16384, 16384, 16384, 16384, 16384, 1696]
  end
    
    module LogStash
  module Api
    module Modules
      class Node < ::LogStash::Api::Modules::Base
        def node
          factory.build(:node)
        end
    
            get '/pipelines/:id?' do
          payload = pipeline_payload(params['id'])
          halt(404) if payload.empty?
          respond_with(:pipelines => payload)
        end
    
          {
          :type => queue_type,
          :events_count => events,
          :queue_size_in_bytes => queue_size_in_bytes,
          :max_queue_size_in_bytes => max_queue_size_in_bytes,
      }
    end
  end
end; end;

    
          @event.remove('@timestamp')
      @event.remove('@version')
    
          case op
      when :and
        return jdsl.eAnd(source_meta, left, right);
      when :nand
        return jdsl.eNand(source_meta, left, right);
      when :or
        return jdsl.eOr(source_meta, left, right);
      when :xor
        return jdsl.eXor(source_meta, left, right);
      else
        raise 'Unknown op #{jop}'
      end
    end
    
    task :spec    => 'spec:all'
task :default => :spec
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
      end
    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)

    
    Liquid::Template.register_tag('video', Jekyll::VideoTag)