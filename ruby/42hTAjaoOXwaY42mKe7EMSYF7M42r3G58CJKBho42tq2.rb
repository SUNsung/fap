
        
                # Setup and normalize the configuration:
        #   * Create Kramdown if it doesn't exist.
        #   * Set syntax_highlighter, detecting enable_coderay and merging
        #       highlighter if none.
        #   * Merge kramdown[coderay] into syntax_highlighter_opts stripping coderay_.
        #   * Make sure `syntax_highlighter_opts` exists.
    
    $LOAD_PATH.unshift File.expand_path('lib', __dir__)
require 'jekyll/version'
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
      p.action do |args, _|
    if args.empty?
      Jekyll.logger.error 'A subcommand is required.'
      puts p
      abort
    else
      subcommand = args.first
      unless p.has_command? subcommand
        Jekyll.logger.abort_with 'fatal: 'jekyll #{args.first}' could not' \
          ' be found. You may need to install the jekyll-#{args.first} gem' \
          ' or a related gem to be able to use this subcommand.'
      end
    end
  end
end

    
      describe '#can_remove?' do
    context 'when user can destroy_group_member' do
      before do
        allow(presenter).to receive(:can?).with(user, :destroy_group_member, presenter).and_return(true)
      end
    
    shared_examples 'diff statistics' do |test_include_stats_flag: true|
  def stub_stats_find_by_path(path, stats_mock)
    expect_next_instance_of(Gitlab::Git::DiffStatsCollection) do |collection|
      allow(collection).to receive(:find_by_path).and_call_original
      expect(collection).to receive(:find_by_path).with(path).and_return(stats_mock)
    end
  end
    
              if access_requester.persisted?
            present access_requester, with: Entities::AccessRequester
          else
            render_validation_error!(access_requester)
          end
        end
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
          # Sign out all active users or scopes. This helper is useful for signing out all roles
      # in one click. This signs out ALL scopes in warden. Returns true if there was at least one logout
      # and false if there was no user logged in on all scopes.
      def sign_out_all_scopes(lock=true)
        users = Devise.mappings.keys.map { |s| warden.user(scope: s, run_callbacks: false) }
    
          # Stores the provided location to redirect the user after signing in.
      # Useful in combination with the `stored_location_for` helper.
      #
      # Example:
      #
      #   store_location_for(:user, dashboard_path)
      #   redirect_to user_facebook_omniauth_authorize_path
      #
      def store_location_for(resource_or_scope, location)
        session_key = stored_location_key_for(resource_or_scope)
        
        path = extract_path_from_location(location)
        session[session_key] = path if path
      end
    
        def no_input_strategies
      self.strategies & Devise::NO_INPUT
    end
    
          attr_accessor :remember_me
    
      #
  # Starts monitoring for an outbound connection to become established.
  #
  def start_handler
    
            case identifier
        when 'CVE'
          cve_assigned = true
          warn('Invalid CVE format: '#{value}'') if value !~ /^\d{4}\-\d{4,}$/
        when 'BID'
          warn('Invalid BID format: '#{value}'') if value !~ /^\d+$/
        when 'MSB'
          warn('Invalid MSB format: '#{value}'') if value !~ /^MS\d+\-\d+$/
        when 'MIL'
          warn('milw0rm references are no longer supported.')
        when 'EDB'
          warn('Invalid EDB reference') if value !~ /^\d+$/
        when 'US-CERT-VU'
          warn('Invalid US-CERT-VU reference') if value !~ /^\d+$/
        when 'ZDI'
          warn('Invalid ZDI reference') if value !~ /^\d{2}-\d{3}$/
        when 'WPVDB'
          warn('Invalid WPVDB reference') if value !~ /^\d+$/
        when 'PACKETSTORM'
          warn('Invalid PACKETSTORM reference') if value !~ /^\d+$/
        when 'URL'
          if value =~ /^https?:\/\/cvedetails\.com\/cve/
            warn('Please use 'CVE' for '#{value}'')
          elsif value =~ /^https?:\/\/www\.securityfocus\.com\/bid\//
            warn('Please use 'BID' for '#{value}'')
          elsif value =~ /^https?:\/\/www\.microsoft\.com\/technet\/security\/bulletin\//
            warn('Please use 'MSB' for '#{value}'')
          elsif value =~ /^https?:\/\/www\.exploit\-db\.com\/exploits\//
            warn('Please use 'EDB' for '#{value}'')
          elsif value =~ /^https?:\/\/www\.kb\.cert\.org\/vuls\/id\//
            warn('Please use 'US-CERT-VU' for '#{value}'')
          elsif value =~ /^https?:\/\/wpvulndb\.com\/vulnerabilities\//
            warn('Please use 'WPVDB' for '#{value}'')
          elsif value =~ /^https?:\/\/(?:[^\.]+\.)?packetstormsecurity\.(?:com|net|org)\//
            warn('Please use 'PACKETSTORM' for '#{value}'')
          end
        when 'AKA'
          warn('Please include AKA values in the 'notes' section, rather than in 'references'.')
        end
      end
    
        if (opts['uri_dir_fake_relative'])
      buf = ''
      uri_str.split('/',-1).each do |part|
        cnt = rand(8)+2
        1.upto(cnt) { |idx|
          buf << '/' + Rex::Text.rand_text_alphanumeric(rand(32)+1)
        }
        buf << ('/..' * cnt)
        buf << '/' + part
      end
      uri_str = buf
    end
    
      def webroot
    datastore['WEB_ROOT']
  end
    
        xml_body = %Q|
        <c:ContactIDCollection>
          <c:ContactID c:ElementID='492912d2-db87-4da2-9fb0-1a3533284d09'><c:Value>e3b2d76c-3355-4f54-b995-0ce0dcf84c8a</c:Value></c:ContactID>
        </c:ContactIDCollection>
        <c:NameCollection>
          <c:Name c:ElementID='9c47b169-4385-40e9-97cf-cc2f55544c8d'>
            <c:FormattedName>CONTACT_FULL_NAME</c:FormattedName>
            <c:FamilyName>CONTACT_LAST_NAME</c:FamilyName>
            <c:GivenName>CONTACT_FIRST_NAME</c:GivenName>
          </c:Name>
        </c:NameCollection>
        <c:PhotoCollection>
          <c:Photo c:ElementID='9b2b24b3-2ce5-4553-abe1-8cb0cf7ad12e'>
            <c:LabelCollection>
              <c:Label>UserTile</c:Label>
            </c:LabelCollection>
          </c:Photo>
        </c:PhotoCollection>
        <c:UrlCollection c:Version='1' c:ModificationDate='2019-04-10T21:15:00Z'>
          <c:Url c:ElementID='4aca9a0f-72fd-45ff-8683-1524caafd6e9' c:Version='1' c:ModificationDate='2019-04-10T21:15:00Z'>
            <c:Value c:Version='1' c:ModificationDate='2019-04-10T21:15:00Z'>EXE_PATH</c:Value>
            <c:LabelCollection>
              <c:Label c:Version='1' c:ModificationDate='2019-04-10T21:15:00Z'>Business</c:Label>
            </c:LabelCollection>
          </c:Url>
        </c:UrlCollection>
      </c:contact>|.gsub(/\n[ ]*/,'')
    
      def initialize
    super(
      'Name'             => 'PHP Base64 Encoder',
      'Description'      => %q{
        This encoder returns a base64 string encapsulated in
        eval(base64_decode()), increasing the size by a bit more than
        one third.
      },
      'Author'           => 'egypt',
      'License'          => BSD_LICENSE,
      'Arch'             => ARCH_PHP)
  end
    
      #
  # Dispatches the supplied request for a given connection.
  #
  def dispatch_request(cli, request)
    # Is the client requesting keep-alive?
    if ((request['Connection']) and
       (request['Connection'].downcase == 'Keep-Alive'.downcase))
      cli.keepalive = true
    end
    
        data =
    [   # Maximum access
      0x00, 0x00,
      # Reserved
      0x00, 0x00
    ].pack('C*') +
    console_session_id +
    [
      0x00, 0x00, 0x00, 0x08,
      # Cipher 0
      0x00, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x08,
      # Cipher 0
      0x00, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x08,
      # No Encryption
      0x00, 0x00, 0x00, 0x00
    ].pack('C*')
    
              # Rex::Proto::Kerberos::Model::Checksum decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'Checksum decoding not supported'
          end
    
      require ARGV.shift
  exit_status = LogStash::Runner.run('bin/logstash', ARGV)
  exit(exit_status || 0)
end

    
      parameter 'file', 'the package file name', :attribute_name => :package_file, :required => true
    
        def plugin_type_enum
      case section_type
      when 'input'
        Java::OrgLogstashConfigIr::PluginDefinition::Type::INPUT
      when 'codec'
        Java::OrgLogstashConfigIr::PluginDefinition::Type::CODEC
      when 'filter'
        Java::OrgLogstashConfigIr::PluginDefinition::Type::FILTER
      when 'output'
        Java::OrgLogstashConfigIr::PluginDefinition::Type::OUTPUT
      end
    end
    
          def pack_uri(plugin_name)
        url = '#{elastic_pack_base_uri}/#{plugin_name}/#{plugin_name}-#{LOGSTASH_VERSION}.#{PACK_EXTENSION}'
        URI.parse(url)
      end
    
      # retrieve only the latest spec for all locally installed plugins
  # @return [Hash] result hash {plugin_name.downcase => plugin_spec}
  def find_latest_gem_specs
    LogStash::PluginManager.all_installed_plugins_gem_specs(gemfile).inject({}) do |result, spec|
      previous = result[spec.name.downcase]
      result[spec.name.downcase] = previous ? [previous, spec].max_by{|s| s.version} : spec
      result
    end
  end
end

    
      context 'given a distribution without a META.* file' do
    it 'should package IPC::Session' do
      pending('Disabled on travis-ci because it always fails, and there is no way to debug it?') if is_travis
    
          # Value sanity check
      insist { subject.name } == 'name'
      insist { subject.version } == '1.23'
      insist { subject.architecture } == 'noarch' # see #architecture
      insist { subject.iteration } == '100'
      insist { subject.epoch } == 5
      insist { subject.dependencies }.include?('something > 10')
      insist { subject.dependencies }.include?('hello >= 20')
      insist { subject.conflicts[0] } == 'bad < 2'
      insist { subject.license } == @generator.license.split('\n').join(' ') # See issue #252
      insist { subject.provides[0] } == 'bacon = 1.0'
      
    end
    it 'should not cause errors when reading rpm with script in input (#802)' do
      @generator.scripts[:before_install] = 'example before_install'
      @generator.scripts[:after_install] = 'example after_install'
      @generator.scripts[:before_remove] = 'example before_remove'
      @generator.scripts[:after_remove] = 'example after_remove'
      @generator.scripts[:rpm_verifyscript] = 'example rpm_verifyscript'
      @generator.scripts[:rpm_posttrans] = 'example rpm_posttrans'
      @generator.scripts[:rpm_pretrans] = 'example rpm_pretrans'
    
      config.vm.define 'debian7' do |debian7|
    debian7.vm.box = 'puppetlabs/centos-7.0-64-puppet'
  end
    
      option '--compression', 'COMPRESSION', 'The compression type to use, must ' \
    'be one of #{COMPRESSION_TYPES.join(', ')}.', :default => 'xz' do |value|
    if !COMPRESSION_TYPES.include?(value)
      raise ArgumentError, 'Pacman compression value of '#{value}' is invalid. ' \
        'Must be one of #{COMPRESSION_TYPES.join(', ')}'
    end
    value
  end