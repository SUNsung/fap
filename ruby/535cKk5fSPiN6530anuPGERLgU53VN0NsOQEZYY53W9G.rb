
        
          # Prepare the ingress controller used to receive mail
  # config.action_mailbox.ingress = :postfix
    
          test '`rake routes` outputs routes' do
        app_file 'config/routes.rb', <<-RUBY
          Rails.application.routes.draw do
            get '/cart', to: 'cart#show'
          end
        RUBY
    
          def test_helpers_with_symbol
        @controller.process(:with_symbol)
        assert_equal 'I respond to bare_a: true', @controller.response_body
      end
    
          it 'activates an existing user' do
        users(:bob).deactivate!
        visit admin_users_path
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/activate']').click
        expect(page).to have_no_text('inactive')
        users(:bob).reload
        expect(users(:bob)).to be_active
      end
    end
  end
end

    
        it 'understands hl=8-' do
      stub(params).[](:hl) { '8-' }
      expect((1..10).select { |i| highlighted?(i) }).to eq [8, 9, 10]
    end
    
    describe DotHelper do
  describe 'with example Agents' do
    class Agents::DotFoo < Agent
      default_schedule '2pm'
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
          @log.level = 5
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:level)
    
        it 'should require credentials' do
      @checker.options['api_key'] = nil
      expect(@checker).not_to be_valid
    end
  end
    
    describe Agents::CsvAgent do
  before(:each) do
    @valid_params = {
                      'mode' => 'parse',
                      'separator' => ',',
                      'use_fields' => '',
                      'output' => 'event_per_row',
                      'with_header' => 'true',
                      'data_path' => '$.data',
                      'data_key' => 'data'
                    }
    
          def book
        @doc = at_css('.page-inner section')
    
            css('pre > code').each do |node|
          node['class'] ||= ''
          lang = if node['class'].include?('lang-html') || node.content =~ /\A</
            'html'
          elsif node['class'].include?('lang-css')
            'css'
          elsif node['class'].include?('lang-js') || node['class'].include?('lang-javascript')
            'javascript'
          end
          node.parent['data-language'] = lang if lang
          node.before(node.children).remove
        end
    
        def normalized_path
      path == '' ? '/' : path
    end
    
      def failure_message
    exception = request.respond_to?(:get_header) ? request.get_header('omniauth.error') : request.env['omniauth.error']
    error   = exception.error_reason if exception.respond_to?(:error_reason)
    error ||= exception.error        if exception.respond_to?(:error)
    error ||= (request.respond_to?(:get_header) ? request.get_header('omniauth.error.type') : request.env['omniauth.error.type']).to_s
    error.to_s.humanize if error
  end
    
      # Gets the actual resource stored in the instance variable
  def resource
    instance_variable_get(:'@#{resource_name}')
  end
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
          def devise_mapping
        @devise_mapping ||= Devise.mappings[scope_name]
      end
    
    module Devise
  # Responsible for handling devise mappings and routes configuration. Each
  # resource configured by devise_for in routes is actually creating a mapping
  # object. You can refer to devise_for in routes for usage options.
  #
  # The required value in devise_for is actually not used internally, but it's
  # inflected to find all other values.
  #
  #   map.devise_for :users
  #   mapping = Devise.mappings[:user]
  #
  #   mapping.name #=> :user
  #   # is the scope used in controllers and warden, given in the route as :singular.
  #
  #   mapping.as   #=> 'users'
  #   # how the mapping should be search in the path, given in the route as :as.
  #
  #   mapping.to   #=> User
  #   # is the class to be loaded from routes, given in the route as :class_name.
  #
  #   mapping.modules  #=> [:authenticatable]
  #   # is the modules included in the class
  #
  class Mapping #:nodoc:
    attr_reader :singular, :scoped_path, :path, :controllers, :path_names,
                :class_name, :sign_out_via, :format, :used_routes, :used_helpers,
                :failure_app, :router_name
    
          accessors.each do |accessor|
        mod.class_eval <<-METHOD, __FILE__, __LINE__ + 1
          def #{accessor}
            if defined?(@#{accessor})
              @#{accessor}
            elsif superclass.respond_to?(:#{accessor})
              superclass.#{accessor}
            else
              Devise.#{accessor}
            end
          end
    
            if @type && !VALID_TRIGGER_TYPES.include?(@type)
          errors << I18n.t('vagrant.config.triggers.bad_trigger_type',
                           type: @type,
                           trigger: @command,
                           types: VALID_TRIGGER_TYPES.join(', '))
        end
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
        it 'is set to the cwd given' do
      Dir.mktmpdir('vagrant-test-env-set-cwd') do |directory|
        instance = described_class.new(cwd: directory)
        expect(instance.cwd).to eq(Pathname.new(directory))
      end
    end
    
        # Initializes by loading a Vagrantfile.
    #
    # @param [Config::Loader] loader Configuration loader that should
    #   already be configured with the proper Vagrantfile locations.
    #   This usually comes from {Vagrant::Environment}
    # @param [Array<Symbol>] keys The Vagrantfiles to load and the
    #   order to load them in (keys within the loader).
    def initialize(loader, keys)
      @keys   = keys
      @loader = loader
      @config, _ = loader.load(keys)
      @logger = Log4r::Logger.new('vagrant::vagrantfile')
    end
    
          it 'should flag threads as being parallel actions' do
        parallel = nil
        subject.custom(machine) { |m| parallel = Thread.current[:batch_parallel_action] }
        subject.custom(machine) { |*_| }
        subject.run
        expect(parallel).to eq(true)
      end
    
          @logger.debug('Enabling user defined remote RubyGems sources')
      all_sources.each do |src|
        begin
          next if File.file?(src) || URI.parse(src).scheme.nil?
        rescue URI::InvalidURIError
          next
        end
        @logger.debug('Adding RubyGems source #{src}')
        Gem.sources << src
      end
    
          # @return [String, Nil] the dSYM path, if one exists
      #
      attr_reader :dsym_path
    
    # It is very likely that we'll need these and as some of those paths will atm
# result in a I18n deprecation warning, we load those here now so that we can
# get rid of that warning.
require 'active_support/core_ext/string/strip'
require 'active_support/core_ext/string/inflections'
require 'active_support/core_ext/array/conversions'
# TODO: check what this actually does by the time we're going to add support for
# other locales.
require 'i18n'
if I18n.respond_to?(:enforce_available_locales=)
  I18n.enforce_available_locales = false
end
    
            # @return [Bool] Bool indicating if this project is a pod target subproject.
        # Used by `generate_multiple_pod_projects` installation option.
        #
        attr_reader :pod_target_subproject
    
          # Matches the given patterns to the file present in the root of the path
      # list.
      #
      # @param  [Array<String>] patterns
      #         The patterns to expand.
      #
      # @param  [Hash] options
      #         The options to use to expand the patterns to file paths.
      #
      # @option options [String] :dir_pattern
      #         The pattern to add to directories.
      #
      # @option options [Array<String>] :exclude_patterns
      #         The exclude patterns to pass to the PathList.
      #
      # @option options [Bool] :include_dirs
      #         Whether directories should be also included or just plain
      #         files.
      #
      # @raise  [Informative] If the pod does not exists.
      #
      # @return [Array<Pathname>] A list of the paths.
      #
      def expanded_paths(patterns, options = {})
        return [] if patterns.empty?
        path_list.glob(patterns, options).flatten.compact.uniq
      end
    
          private
    
        def roles
      ['--roles ROLES', '-r',
       'Run SSH commands only on hosts matching these roles',
       lambda do |value|
         Configuration.env.add_cmdline_filter(:role, value)
       end]
    end
    
          def servers_by_key
        @servers_by_key ||= {}
      end
    
    %i(git_strategy hg_strategy svn_strategy).each do |strategy|
  validate(strategy) do |key, _value|
    warn(
      '[Deprecation Warning] #{key} is deprecated and will be removed in '\
      'Capistrano 3.7.0.\n'\
      'https://github.com/capistrano/capistrano/blob/master/UPGRADING-3.7.md'
    )
  end
end
    
      def test_locale_determination
    obj = Helpers.new
    assert_equal 'en', obj.locale
    
      describe 'error handling' do
    it 'deals with user-specified error handlers which raise errors' do
      output = capture_logging do
        begin
          Sidekiq.error_handlers << proc {|x, hash|
            raise 'boom'
          }
          cli = Sidekiq::CLI.new
          cli.handle_exception(RuntimeError.new('hello'))
        ensure
          Sidekiq.error_handlers.pop
        end
      end
      assert_includes output, 'boom'
      assert_includes output, 'ERROR'
    end
  end
    
        ## Write the results to a file
    ## Requires railsexpress patched MRI build
    # brew install qcachegrind
    #File.open('callgrind.profile', 'w') do |f|
      #RubyProf::CallTreePrinter.new(result).print(f, :min_percent => 1)
    #end
  end
end