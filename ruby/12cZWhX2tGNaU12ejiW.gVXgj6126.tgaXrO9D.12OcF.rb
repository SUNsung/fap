
        
            should 'hide unpublished page' do
      refute_exist dest_dir('/unpublished.html')
    end
    
    def gem_file
  '#{name}-#{Gem::Version.new(version)}.gem'
end
    
    Nullam luctus fermentum est id blandit. Phasellus consectetur ullamcorper
ligula, at finibus eros laoreet id. Etiam sit amet est in libero efficitur
tristique. Ut nec magna augue. Quisque ut fringilla lacus, ac dictum enim.
Aliquam vel ornare mauris. Suspendisse ornare diam tempor nulla facilisis
aliquet. Sed ultrices placerat ultricies.
TEXT
    
    def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
    DOC_PATH = File.join(File.expand_path(__dir__), '_puppies', 'rover.md')
COL_PATH = File.join(File.expand_path(__dir__), '_puppies')
    
        if successfully_sent?(resource)
      respond_with({}, location: after_resending_confirmation_instructions_path_for(resource_name))
    else
      respond_with(resource)
    end
  end
    
        # The path used after sending unlock password instructions
    def after_sending_unlock_instructions_path_for(resource)
      new_session_path(resource) if is_navigational_format?
    end
    
      def respond_with_navigational(*args, &block)
    respond_with(*args) do |format|
      format.any(*navigational_formats, &block)
    end
  end
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
    DeviseCreateUsers.migrate(:up)
    
          generate_helpers!(Devise::URL_HELPERS)
    
        def initialize(name, options) #:nodoc:
      @scoped_path = options[:as] ? '#{options[:as]}/#{name}' : name.to_s
      @singular = (options[:singular] || @scoped_path.tr('/', '_').singularize).to_sym
    
    describe SoftwareSpec do
  subject(:spec) { described_class.new }
    
          def pretty_name
        to_sym.to_s.split('_').map(&:capitalize).join(' ')
      end
    
          ohai 'Installing Formula dependencies: #{not_installed.map(&:to_s).join(', ')}'
      not_installed.each do |formula|
        FormulaInstaller.new(formula).tap do |fi|
          fi.installed_as_dependency = true
          fi.installed_on_request = false
          fi.show_header = true
          fi.verbose = verbose?
          fi.prelude
          fi.install
          fi.finish
        end
      end
    end
    
          it 'adds the appropriate curl args' do
        expect(subject).to receive(:system_command!) { |*, args:, **|
          expect(args.each_cons(2)).to include(['--user-agent', 'Mozilla/25.0.1'])
        }
    
            # Initialize a new instance from its attributes.
        #
        # @param [Array<Specification>] specs      @see #specs
        # @param [Array<Specification>] test_specs @see #test_specs
        # @param [Array<Specification>] app_specs  @see #app_specs
        # @param [Platform] platform               @see #platform
        # @param [Target::BuildType] build_type    @see #build_type
        #
        def initialize(specs, test_specs, app_specs, platform, build_type = Target::BuildType.static_library)
          @specs = specs
          @test_specs = test_specs
          @app_specs = app_specs
          @platform = platform
          @build_type = build_type
          @hash = [specs, platform, build_type].hash
        end
    
    Then(/^the release is created$/) do
  run_vagrant_command('ls -g #{TestApp.releases_path}')
end
    
        def servers
      @servers ||= Servers.new
    end
    
          def question
        if default.nil?
          I18n.t(:question, key: key, scope: :capistrano)
        else
          I18n.t(:question_default, key: key, default_value: default, scope: :capistrano)
        end
      end
    
            def fetch(key)
          @properties[key]
        end
    
          def each
        servers_by_key.values.each { |server| yield server }
      end
    
          # TODO: translate attribute first
      # if BASE_ATTRIBUTES_KEY.key respond to a string message, then short_message is returned
      # if BASE_ATTRIBUTES_KEY.key respond to a Hash, means it may have problem , summary and resolution
      def compose_message(key, **attributes)
        short_message = translate_message(key, **attributes)
        if short_message.is_a? Hash
          @problem = problem(key, **attributes)
          @summary = summary(key, **attributes)
          @resolution = resolution(key, **attributes)
          [['Problem', @problem], ['Summary', @summary], ['Resolution', @resolution]].reduce('') do |message, detail_array|
            message << '\n#{detail_array[0]}:\n  #{detail_array[1]}' unless detail_array[1].blank?
            message
          end
        else
          short_message
        end
      end
    
          context 'when the fallback locale is not available' do
        before do
          I18n.available_locales = %i[de jp]
          I18n.default_locale = :de
        end
    
              get '/', a: %w[the other]
          expect(last_response.status).to eq(200)
          expect(last_response.body).to eq('['the', 'other']')
    
    task :spec
    
          # This module extends user defined helpers
      # to provide some API-specific functionality.
      module BaseHelper
        attr_accessor :api
        def params(name, &block)
          @named_params ||= {}
          @named_params[name] = block
        end