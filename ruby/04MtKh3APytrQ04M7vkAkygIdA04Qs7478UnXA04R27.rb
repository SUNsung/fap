
        
          def test_pretty_print_new
    topic = Topic.new
    actual = +''
    PP.pp(topic, StringIO.new(actual))
    expected = <<~PRETTY
      #<Topic:0xXXXXXX
       id: nil,
       title: nil,
       author_name: nil,
       author_email_address: 'test@test.com',
       written_on: nil,
       bonus_time: nil,
       last_read: nil,
       content: nil,
       important: nil,
       approved: true,
       replies_count: 0,
       unique_replies_count: 0,
       parent_id: nil,
       parent_title: nil,
       type: nil,
       group: nil,
       created_at: nil,
       updated_at: nil>
    PRETTY
    assert actual.start_with?(expected.split('XXXXXX').first)
    assert actual.end_with?(expected.split('XXXXXX').last)
  end
    
        assert_kind_of BigDecimal, m1.big_bank_balance
    assert_equal BigDecimal('1000234000567.95'), m1.big_bank_balance
  end
    
        assert_not_predicate klass.new(wibble: '97.179'), :valid?
    assert_not_predicate klass.new(wibble: 97.179), :valid?
    assert_not_predicate klass.new(wibble: BigDecimal('97.179')), :valid?
  end
    
        it 'should return the right path for `nil` version' do
      optimized = Fabricate.build(:optimized_image, upload: upload, version: nil)
      expect(FileStore::BaseStore.new.get_path_for_optimized_image(optimized)).to eq(optimized_path)
    end
  end
    
        it 'returns the overridden key after switching the locale' do
      override_translation('en', 'foo', 'Overwritten foo in EN')
      override_translation('de', 'foo', 'Overwritten foo in DE')
    
            warden_config.serialize_from_session(mapping.name) do |args|
          mapping.to.serialize_from_session(*args)
        end
      end
    
      # Configure the class responsible to send e-mails.
  # config.mailer = 'Devise::Mailer'
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
          @path = (options[:path] || name).to_s
      @path_prefix = options[:path_prefix]
    
        it 'calls an action to determine the ID' do
      allow(provider_config).to receive(:compose).and_return(false)
      allow(platform).to receive(:windows?).and_return(false)
      allow(platform).to receive(:darwin?).and_return(false)
      expect(machine).to receive(:id).and_return('foo')
      expect(driver_obj).to receive(:created?).with('foo').and_return(false)
    
            # Returns the path to the Chef binary, taking into account the
        # `binary_path` configuration option.
        def chef_binary_path(binary)
          return binary if !@config.binary_path
          return File.join(@config.binary_path, binary)
        end
    
      describe '#chef_installed' do
    let(:version) { '15.0.0' }
    let(:command) { 'test -x /opt/chef_solo/bin/knife&& /opt/chef_solo/bin/knife --version | grep '15.0.0'' }
    
      spec.required_ruby_version = '>= 2.3.0'
    
        @inflator.inflate(@zeros) do |chunk|
      @chunks << chunk
      break
    end
    
        def lookup(type, plugin_name, &block)
      @mutex.synchronize do
        plugin_spec = get(type, plugin_name)
        # Assume that we have a legacy plugin
        if plugin_spec.nil?
          plugin_spec = legacy_lookup(type, plugin_name)
        end
    
        # Configure Logstash logging facility, this need to be done before everything else to
    # make sure the logger has the correct settings and the log level is correctly defined.
    java.lang.System.setProperty('ls.logs', setting('path.logs'))
    java.lang.System.setProperty('ls.log.format', setting('log.format'))
    java.lang.System.setProperty('ls.log.level', setting('log.level'))
    unless java.lang.System.getProperty('log4j.configurationFile')
      log4j_config_location = ::File.join(setting('path.settings'), 'log4j2.properties')
    
            if specs.size > 0
          specs
        else
          raise LogStash::PluginManager::PluginNotFoundError, 'Cannot find plugins matching: `#{plugin_pattern}`'
        end
      end.flatten
    end
    
          def pack_uri(plugin_name)
        url = '#{elastic_pack_base_uri}/#{plugin_name}/#{plugin_name}-#{LOGSTASH_VERSION}.#{PACK_EXTENSION}'
        URI.parse(url)
      end
    
        def valid_format?(local_file)
      ::File.extname(local_file).downcase == PACK_EXTENSION
    end
  end
end end end

    
      private
  def update_all?
    plugins_arg.size == 0
  end
    
          super
    end
    
    module OctopressFilters
  def self.pre_filter(page)
    if page.ext.match('html|textile|markdown|md|haml|slim|xml')
      input = BacktickCodeBlock::render_code_block(page.content)
      page.content = input.gsub /(<figure.+?>.+?<\/figure>)/m do
        TemplateWrapper::safe_wrap($1)
      end
    end
  end
  def self.post_filter(page)
    if page.ext.match('html|textile|markdown|md|haml|slim|xml')
      page.output = TemplateWrapper::unwrap(page.output)
    end
  end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
    module Jekyll
    
      def check_mx_records!
    check_mx_records
    save!
  end
    
      def require_organization_owner
    unless organization.owner == current_user
      redirect_to organization_root_path(organization), :alert => 'This page can only be accessed by the organization's owner (#{organization.owner.name})'
    end
  end
    
      before_action { @server = organization.servers.present.find_by_permalink!(params[:server_id]) }
  before_action { params[:id] && @credential = @server.credentials.find_by_key!(params[:id]) }
    
      def setup
    unless @domain.verified?
      redirect_to [:verify, organization, @server, @domain], :alert => 'You can't set up DNS for this domain until it has been verified.'
    end
  end
    
      def new
    @ip_pool_rule = @server ? @server.ip_pool_rules.build : organization.ip_pool_rules.build
  end
    
      def update
    extra_params = [:spam_threshold, :spam_failure_threshold, :postmaster_address]
    extra_params += [:send_limit, :allow_sender, :log_smtp_data, :outbound_spam_threshold, :message_retention_days, :raw_message_retention_days, :raw_message_retention_size] if current_user.admin?
    if @server.update(safe_params(*extra_params))
      redirect_to_with_json organization_server_path(organization, @server), :notice => 'Server settings have been updated'
    else
      render_form_errors 'edit', @server
    end
  end