
        
        describe 'Dry running an Agent', js: true do
  let(:agent)   { agents(:bob_website_agent) }
  let(:formatting_agent) { agents(:bob_formatting_agent) }
  let(:user)    { users(:bob) }
  let(:emitter) { agents(:bob_weather_agent) }
    
        describe '#agents_dot' do
      before do
        @agents = [
          @foo = Agents::DotFoo.new(name: 'foo').tap { |agent|
            agent.user = users(:bob)
            agent.save!
          },
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
      # Gets the actual resource stored in the instance variable
  def resource
    instance_variable_get(:'@#{resource_name}')
  end
    
      config.middleware.use Warden::Manager do |config|
    Devise.warden_config = config
  end
    
    module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
          # Configure default email options
      def devise_mail(record, action, opts = {}, &block)
        initialize_from_record(record)
        mail headers_for(action, opts), &block
      end
    
          def rememberable_value
        if respond_to?(:remember_token)
          remember_token
        elsif respond_to?(:authenticatable_salt) && (salt = authenticatable_salt.presence)
          salt
        else
          raise 'authenticatable_salt returned nil for the #{self.class.name} model. ' \
            'In order to use rememberable, you must ensure a password is always set ' \
            'or have a remember_token column in your model or implement your own ' \
            'rememberable_value in the model with custom logic.'
        end
      end
    
    puts '\nUnable to find an RSS feed for the following blogs:'
puts '==================================================='
unavailable.each do |b|
  puts '#{b.name} | #{b.web_url}'
end
puts '==================================================='

    
    
    {              # Needed to ensure that static libraries won't try to embed the swift stdlib,
              # since there's no where to embed in for a static library.
              # Not necessary for dynamic frameworks either, since the aggregate targets are never shipped
              # on their own, and are always further embedded into an app target.
              'ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES' => 'NO',
            }
            super.merge(settings)
          end
    
            it 'can be compared for equality with another variant with the same specs, platform, and whether it requires frameworks' do
          spec = PodVariant.new(@specs, [], [], @platform, false)
          spec.should == PodVariant.new(@specs, [], [], @platform, false)
          spec.should.not == PodVariant.new([@specs.first], [], [], @platform)
          spec.should.not == PodVariant.new(@specs, [], [], Platform.osx, false)
          spec.should.not == PodVariant.new(@specs, [], [], @platform, true)
        end
    
                it 'adds the framework build path to the xcconfig, with quotes, as system framework search paths' do
              @xcconfig.to_hash['OTHER_CFLAGS'].should.include '-iframework '${PODS_CONFIGURATION_BUILD_DIR}/OrangeFramework''
            end
    
            private
    
            if deprecated_pods.any?
          UI.section 'The following pods are deprecated:' do
            deprecated_pods.each do |spec|
              if spec.deprecated_in_favor_of
                UI.puts '- #{spec.name}' \
                  ' (in favor of #{spec.deprecated_in_favor_of})'
              else
                UI.puts '- #{spec.name}'
              end
            end
          end
        end
      end
    
            it 'does not add an embed frameworks build phase if the target to integrate is a messages extension' do
          @pod_bundle.stubs(:build_type => Target::BuildType.dynamic_framework)
          target = @target_integrator.send(:native_targets).first
          target.stubs(:symbol_type).returns(:messages_extension)
          @target_integrator.integrate!
          phase = target.shell_script_build_phases.find { |bp| bp.name == @embed_framework_phase_name }
          phase.nil?.should == true
        end
    
      GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
    file package(gem, '.gem') => ['pkg/', '#{directory + '/' + gem}.gemspec'] do |f|
      sh 'cd #{directory} && gem build #{gem}.gemspec'
      mv directory + '/' + File.basename(f.name), f.name
    end
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil
    
      subject { described_class.new(lambda {}) }
    
      context 'with custom session key' do
    it 'denies requests with duplicate session cookies' do
      mock_app do
        use Rack::Protection::CookieTossing, :session_key => '_session'
        run DummyApp
      end
    
        attr_reader :commands, :index, :name, :project
    
      factory :project_with_force_detach, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/detach.yml') }
    end
    initialize_with { Tmuxinator::Project.new(file, force_detach: true) }
  end
    
      if pane_base_index = options.fetch(:pane_base_index) { 1 }
    standard_options << 'pane-base-index #{pane_base_index}'
  end
    
            yaml = {
          'name' => name,
          'project_root' => project_root,
          'windows' => windows.map do |window_name, layout, window_panes|
            {
              window_name => {
                'layout' => layout,
                'panes' => window_panes
              }
            }
          end
        }
    
          it 'returns true' do
        expect(described_class.editor?).to be_truthy
      end
    end