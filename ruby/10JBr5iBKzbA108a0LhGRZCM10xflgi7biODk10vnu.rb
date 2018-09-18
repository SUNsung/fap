
        
        def du_upload_geojson_failure
  stub_request(:post, 'https://du-itc.itunes.apple.com/upload/geo-json').
    with(body: du_upload_invalid_geojson.bytes,
           headers: { 'Accept' => 'application/json, text/plain, */*', 'Accept-Encoding' => 'gzip;q=1.0,deflate;q=0.6,identity;q=0.3', 'Connection' => 'keep-alive', 'Content-Length' => du_upload_invalid_geojson.file_size, 'Content-Type' => 'application/json', 'Referrer' => 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/ng/app/898536088',
                     'X-Apple-Jingle-Correlation-Key' => 'iOS App:AdamId=898536088:Version=0.9.13', 'X-Apple-Upload-Appleid' => '898536088', 'X-Apple-Upload-Contentproviderid' => '1234567', 'X-Apple-Upload-Itctoken' => 'sso token for image',
                     'X-Apple-Upload-Referrer' => 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/ng/app/898536088', 'X-Original-Filename' => 'ftl_FAKEMD5_upload_invalid.GeoJSON' }).
    to_return(status: 400, body: du_read_upload_geojson_response_failed, headers: { 'Content-Type' => 'application/json' })
end
    
          it 'raises an error if something is wrong' do
        TunesStubbing.itc_stub_applications_broken_first_create
        expect do
          Spaceship::Tunes::Application.create!(name: 'My Name',
                                                sku: 'SKU123',
                                                bundle_id: 'net.sunapps.123')
        end.to raise_error('You must provide a company name to use on the App Store. You must provide a company name to use on the App Store.')
      end
    end
    
        # checks if given file is a valid json file
    # base taken from: http://stackoverflow.com/a/26235831/1945875
    def self.json_file?(filename)
      return false unless File.exist?(filename)
      begin
        JSON.parse(File.read(filename))
        return true
      rescue JSON::ParserError
        return false
      end
    end
    
            return plugins
      end
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelper.swift')
  warn('You modified `SnapshotHelper.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
      def open_dry_run_modal(agent)
    visit edit_agent_path(agent)
    click_on('Dry Run')
    expect(page).to have_text('Event to send')
  end
    
        it 'understands hl=-2' do
      stub(params).[](:hl) { '-2' }
      expect((1..10).select { |i| highlighted?(i) }).to eq [1, 2]
    end
    
              it 'translates keep_events_for from days to seconds' do
            scenario_import.import
            expect(scenario_import.errors).to be_empty
            weather_agent = scenario_import.scenario.agents.find_by(:guid => 'a-weather-agent')
            trigger_agent = scenario_import.scenario.agents.find_by(:guid => 'a-trigger-agent')
    
          it 'does not load workers specified in the :except option' do
        agent_runner = AgentRunner.new(except: HuginnScheduler)
        workers = agent_runner.send(:load_workers)
        expect(workers.keys).to eq(['DelayedJobWorker'])
    
      it 'considers a location empty if either latitude or longitude is missing' do
    expect(Location.new.empty?).to be_truthy
    expect(Location.new(lat: 2, radius: 1).present?).to be_falsy
    expect(Location.new(lng: 3, radius: 1).present?).to be_falsy
  end
    
        it 'should revert extract and template options for an updated WebsiteAgent' do
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
      ConvertWebsiteAgentTemplateForMerge.new.down
      agent.reload
      expect(agent.options).to include('extract' => reverted_extract,
                                       'template' => reverted_template)
    end
  end
end

    
    class Devise::OmniauthCallbacksController < DeviseController
  prepend_before_action { request.env['devise.skip_timeout'] = true }
    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
      end
end
    
      # Time interval the confirmation token is valid. nil = unlimited
  mattr_accessor :confirm_within
  @@confirm_within = nil
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
            def initialize(argv, env)
          @argv = argv
          @env  = env
          @logger = Log4r::Logger.new('vagrant::command::#{self.class.to_s.downcase}')
        end
    
            # Execute a command on the remote machine. The exact semantics
        # of this method are up to the implementor, but in general the
        # users of this class will expect this to be a shell.
        #
        # This method gives you no way to write data back to the remote
        # machine, so only execute commands that don't expect input.
        #
        # @param [String] command Command to execute.
        # @yield [type, data] Realtime output of the command being executed.
        # @yieldparam [String] type Type of the output. This can be
        #   `:stdout`, `:stderr`, etc. The exact types are up to the
        #   implementor.
        # @yieldparam [String] data Data for the given output.
        # @return [Integer] Exit code of the command.
        def execute(command, opts=nil)
        end
    
              hosts
        end
    
                # If we were told this is an upgrade safe configuration class
            # then we add it to the set.
            if upgrade_safe
              data[:config_upgrade_safe] ||= Set.new
              data[:config_upgrade_safe].add(name.to_sym)
            end
          end
    
            # This method is expected to return a class that is used for
        # configuring the provisioner. This return value is expected to be
        # a subclass of {Config}.
        #
        # @return [Config]
        def self.config_class
        end
    
            # This contains all the command plugins by name, and returns
        # the command class and options. The command class is wrapped
        # in a Proc so that it can be lazy loaded.
        #
        # @return [Registry<Symbol, Array<Proc, Hash>>]
        attr_reader :commands
    
            # Registers additional provisioners to be available.
        #
        # @param [String] name Name of the provisioner.
        def self.provisioner(name=UNSET_VALUE, &block)
          data[:provisioners] ||= Registry.new
    
        when IAX_TYPE_VOICE
      v_codec = stype
      if self.state == :answered
        handle_audio(pkt)
      end
      self.client.send_ack(self)
    
    IAX_IE_CALLED_NUMBER  = 1
IAX_IE_CALLING_NUMBER = 2
IAX_IE_AUTH_METHODS   = 3
IAX_IE_CALLING_NAME   = 4
IAX_IE_USERNAME       = 6
IAX_IE_DESIRED_CODEC  = 9
IAX_IE_ORIGINAL_DID   = 10
IAX_IE_ACTUAL_CODECS  = 8
IAX_IE_PROTO_VERSION  = 11
IAX_IE_REG_REFRESH    = 19
IAX_IE_CHALLENGE_DATA = 15
IAX_IE_CHALLENGE_RESP = 16
IAX_IE_APPARENT_ADDR  = 18
IAX_IE_REGREJ_CAUSE   = 22
IAX_IE_HANGUP_CAUSE   = 42
    
    
  # open rmcpplus_request with cipherzero
  def self.create_ipmi_session_open_cipher_zero_request(console_session_id)
    head = [
      0x06, 0x00, 0xff, 0x07,   # RMCP Header
      0x06,                     # RMCP+ Authentication Type
      PAYLOAD_RMCPPLUSOPEN_REQ, # Payload Type
      0x00, 0x00, 0x00, 0x00,   # Session ID
      0x00, 0x00, 0x00, 0x00    # Sequence Number
    ].pack('C*')
    
              # Encodes the options field
          #
          # @return [OpenSSL::ASN1::BitString]
          def encode_options
            OpenSSL::ASN1::BitString.new([options].pack('N'))
          end
    
              # Encodes a Rex::Proto::Kerberos::Model::AuthorizationData into an ASN.1 String
          #
          # @return [String]
          def encode
            seqs = []
            elements.each do |elem|
              elems = []
              type_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_type(elem[:type])], 0, :CONTEXT_SPECIFIC)
              elems << type_asn1
              data_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_data(elem[:data])], 1, :CONTEXT_SPECIFIC)
              elems << data_asn1
              seqs << OpenSSL::ASN1::Sequence.new(elems)
            end
    
              # @!attribute type
          #   @return [Integer] The type of value
          attr_accessor :type
          # @!attribute value
          #   @return [Time] the time of the last request
          attr_accessor :value
    
    team = ['Ryan Tomayko', 'Blake Mizerany', 'Simon Rozet', 'Konstantin Haase', 'Zachary Scott']
desc 'list of contributors'
task :thanks, ['release:all', :backports] do |t, a|
  a.with_defaults :release => '#{prev_version}..HEAD',
    :backports => '#{prev_feature}.0..#{prev_feature}.x'
  included = `git log --format=format:'%aN\t%s' #{a.release}`.lines.map { |l| l.force_encoding('binary') }
  excluded = `git log --format=format:'%aN\t%s' #{a.backports}`.lines.map { |l| l.force_encoding('binary') }
  commits  = (included - excluded).group_by { |c| c[/^[^\t]+/] }
  authors  = commits.keys.sort_by { |n| - commits[n].size } - team
  puts authors[0..-2].join(', ') << ' and ' << authors.last,
    '(based on commits included in #{a.release}, but not in #{a.backports})'
end
    
          def encode_token(token)
        Base64.strict_encode64(token)
      end
    
          def html?(headers)
        return false unless header = headers.detect { |k,v| k.downcase == 'content-type' }
        options[:html_types].include? header.last[/^\w+\/\w+/]
      end
    end
  end
end

    
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
    
          def empty_cookie(host, path)
        {:value => '', :domain => host, :path => path, :expires => Time.at(0)}
      end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
        def get_cache_file_for(gist, file)
      bad_chars = /[^a-zA-Z0-9\-_.]/
      gist      = gist.gsub bad_chars, ''
      file      = file.gsub bad_chars, ''
      md5       = Digest::MD5.hexdigest '#{gist}-#{file}'
      File.join @cache_folder, '#{gist}-#{file}-#{md5}.cache'
    end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)
