
        
              it 'requires the passwords to match when changing them' do
        visit edit_admin_user_path(users(:bob))
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: 'no_match'
        click_on 'Update User'
        expect(page).to have_text('Password confirmation doesn't match')
      end
    end
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
        it 'returns a label 'No' if any falsy value is given' do
      [false, nil].each { |value|
        label = yes_no(value)
        expect(label).to be_html_safe
        expect(Nokogiri(label).text).to eq 'No'
      }
    end
  end
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
        describe 'file' do
      it 'should be invalid when the uploaded file doesn't contain a scenario' do
        subject.file = StringIO.new('foo')
        expect(subject).not_to be_valid
        expect(subject.errors[:base]).to include('The provided data does not appear to be a valid Scenario.')
    
      describe '#values_at' do
    it 'returns arrays of matching values' do
      expect(Utils.values_at({ :foo => { :bar => :baz }}, 'foo.bar')).to eq(%w[baz])
      expect(Utils.values_at({ :foo => [ { :bar => :baz }, { :bar => :bing } ]}, 'foo[*].bar')).to eq(%w[baz bing])
      expect(Utils.values_at({ :foo => [ { :bar => :baz }, { :bar => :bing } ]}, 'foo[*].bar')).to eq(%w[baz bing])
    end
    
        it 'requires an agent' do
      @log.agent = nil
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:agent)
    end
    
        @opts = {
      'api_key' => '800deeaf-e285-9d62-bc90-j999c1973cc9',
      'path' => 'trackings'
    }
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
    class BugTest < ActionDispatch::IntegrationTest
  include Rack::Test::Methods
  include Warden::Test::Helpers
    
          def extract_path_from_location(location)
        uri = parse_uri(location)
    
          def remember_me!
        self.remember_token ||= self.class.remember_token if respond_to?(:remember_token)
        self.remember_created_at ||= Time.now.utc
        save(validate: false) if self.changed?
      end
    
            # Executes a command and returns true if the command succeeded,
        # and false otherwise. By default, this executes as a normal user,
        # and it is up to the communicator implementation if they expose an
        # option for running tests as an administrator.
        #
        # @see #execute
        def test(command, opts=nil)
        end
      end
    end
  end
end

    
            # Returns the instance variables as a hash of key-value pairs.
        def instance_variables_hash
          instance_variables.inject({}) do |acc, iv|
            acc[iv.to_s[1..-1]] = instance_variable_get(iv)
            acc
          end
        end
    
            # This registers a plugin. This should _NEVER_ be called by the public
        # and should only be called from within Vagrant. Vagrant will
        # automatically register V1 plugins when a name is set on the
        # plugin.
        def register(plugin)
          if !@registered.include?(plugin)
            @logger.info('Registered plugin: #{plugin.name}')
            @registered << plugin
          end
        end
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
            # This contains all the registered guest capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :guest_capabilities
    
            # This returns all the registered commands.
        #
        # @return [Registry<Symbol, Array<Proc, Hash>>]
        def commands
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.commands)
            end
          end
        end
    
    Then(/^it creates the file with the remote_task prerequisite$/) do
  TestApp.linked_files.each do |file|
    run_vagrant_command(test_file_exists(TestApp.shared_path.join(file)))
  end
end
    
        def configure_sshkit_output(sshkit)
      format_args = [fetch(:format)]
      format_args.push(fetch(:format_options)) if any?(:format_options)
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
    set_if_empty :local_user, -> { ENV['USER'] || ENV['LOGNAME'] || ENV['USERNAME'] }

    
        validate_target_file
    LogStash::Bundler.invoke!({:package => true, :all => true})
    archive_manager.compress(LogStash::Environment::CACHE_PATH, target_file)
    FileUtils.rm_rf(LogStash::Environment::CACHE_PATH) if clean?
    
        assert_no_match /Edit/, last_response.body, ''Edit' link not blocked in history template'
    
      test 'delete a page' do
    name = 'deleteme'
    post '/create', :content => 'abc', :page => name,
         :format             => 'markdown', :message => 'foo'
    page = @wiki.page(name)
    assert_equal 'abc', page.raw_data
    
            def render_error_payload(error, status = 422)
          if error.is_a?(Struct)
            render json: { error: error.to_s, errors: error.to_h }, status: status, content_type: content_type
          elsif error.is_a?(String)
            render json: { error: error }, status: status, content_type: content_type
          end
        end
    
          resources :products do
        resources :images
        resources :variants
        resources :product_properties
      end
    
      s.add_dependency 'activemerchant', '~> 1.67'
  s.add_dependency 'acts_as_list', '~> 0.8'
  s.add_dependency 'awesome_nested_set', '~> 3.1.4'
  s.add_dependency 'carmen', '~> 1.0.0'
  s.add_dependency 'cancancan', '~> 2.0'
  s.add_dependency 'deface', '~> 1.0'
  s.add_dependency 'ffaker', '~> 2.9'
  s.add_dependency 'friendly_id', '~> 5.2.1'
  s.add_dependency 'highline', '~> 2.0.0' # Necessary for the install generator
  s.add_dependency 'kaminari', '~> 1.0.1'
  s.add_dependency 'money', '~> 6.13'
  s.add_dependency 'monetize', '~> 1.9'
  s.add_dependency 'paranoia', '~> 2.4.1'
  s.add_dependency 'premailer-rails'
  s.add_dependency 'acts-as-taggable-on', '~> 6.0'
  s.add_dependency 'rails', '~> 5.2.1', '>= 5.2.1.1'
  s.add_dependency 'ransack', '~> 2.1.1'
  s.add_dependency 'responders'
  s.add_dependency 'state_machines-activerecord', '~> 0.5'
  s.add_dependency 'stringex'
  s.add_dependency 'twitter_cldr', '~> 4.3'
  s.add_dependency 'sprockets-rails'
  s.add_dependency 'mini_magick', '~> 4.8.0'
    
          def unauthorized
        render 'spree/api/errors/unauthorized', status: 401 and return
      end
    
            def create
          authorize! :create, Spree::OptionValue
          @option_value = scope.new(option_value_params)
          if @option_value.save
            render :show, status: 201
          else
            invalid_resource!(@option_value)
          end
        end
    
              if @product_property.update_attributes(product_property_params)
            respond_with(@product_property, status: 200, default_template: :show)
          else
            invalid_resource!(@product_property)
          end
        end
    
        # Outputs a single category as an <a> link.
    #
    #  +category+ is a category string to format as an <a> link
    #
    # Returns string
    #
    def category_link(category)
      dir = @context.registers[:site].config['category_dir']
      '<a class='category' href='/#{dir}/#{category.to_url}/'>#{category}</a>'
    end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file
    
    Monitoring = Thread.new do
  watchdog('monitor thread') do
    while true
      sleep 1
      qsize, retries = Sidekiq.redis do |conn|
        conn.pipelined do
          conn.llen 'queue:default'
          conn.zcard 'retry'
        end
      end.map(&:to_i)
      total = qsize + retries
      #GC.start
      Sidekiq.logger.error('RSS: #{Process.rss} Pending: #{total}')
      if total == 0
        Sidekiq.logger.error('Done')
        exit(0)
      end
    end
  end
end
    
        def raw_push(payloads)
      @redis_pool.with do |conn|
        conn.multi do
          atomic_push(conn, payloads)
        end
      end
      true
    end
    
          nr = 0
      to_reopen.each do |fp|
        orig_st = begin
          fp.stat
        rescue IOError, Errno::EBADF
          next
        end
    
        def match(request_method, path)
      case matcher
      when String
        {} if path == matcher
      else
        if path_match = path.match(matcher)
          Hash[path_match.names.map(&:to_sym).zip(path_match.captures)]
        end
      end
    end
  end
end

    
    Vagrant.configure('2') do |config|
  # All Vagrant configuration is done here. The most common configuration
  # options are documented and commented below. For a complete reference,
  # please see the online documentation at vagrantup.com.
    
        # If --inputs was specified, read it as a file.
    if !inputs.nil?
      if !File.exists?(inputs)
        logger.fatal('File given for --inputs does not exist (#{inputs})')
        return 1
      end
    
        # The only way to get npm to respect the 'prefix' setting appears to
    # be to set the --global flag.
    #install_args << '--global'
    install_args += npm_flags
    
      # Extract name and version from PackageInfo XML
  def extract_info(package)
    build_path('expand').tap do |path|
      doc = REXML::Document.new File.open(File.join(path, 'PackageInfo'))
      pkginfo_elem = doc.elements['pkg-info']
      identifier = pkginfo_elem.attribute('identifier').value
      self.version = pkginfo_elem.attribute('version').value
      # set name to the last dot element of the identifier
      self.name = identifier.split('.').last
      logger.info('inferring name #{self.name} from pkg-id #{identifier}')
    end
  end # def extract_info
    
        # Execute the transmogrification on the manifest
    pkg_mogrify = safesystemout('pkgmogrify', manifest_fn)
    File.write(build_path('#{name}.p5m.2'), pkg_mogrify)
    safesystem('cp', build_path('#{name}.p5m.2'), manifest_fn)
    
        # do channel-discover if required
    if !attributes[:pear_channel].nil?
      logger.info('Custom channel specified', :channel => attributes[:pear_channel])
      channel_list = safesystemout('pear', '-c', config, 'list-channels')
      if channel_list !~ /#{Regexp.quote(attributes[:pear_channel])}/
        logger.info('Discovering new channel', :channel => attributes[:pear_channel])
        safesystem('pear', '-c', config, 'channel-discover', attributes[:pear_channel])
      end
      input_package = '#{attributes[:pear_channel]}/#{input_package}'
      logger.info('Prefixing package name with channel', :package => input_package)
    end
    
      def architecture
    case @architecture
    when nil, 'native'
      @architecture = %x{uname -p}.chomp
    end
    # 'all' is a valid arch according to
    # http://www.bolthole.com/solaris/makeapackage.html
    
        safesystem('tar', *args)