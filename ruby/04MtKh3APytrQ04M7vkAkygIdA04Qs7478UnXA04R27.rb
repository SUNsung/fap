
        
                    DateTimeSelector.new(datetime, options, html_options)
          end
    
              super(object_name, method_name, template_object, options)
        end
    
        # Determine the layout for a given name, taking into account the name type.
    #
    # ==== Parameters
    # * <tt>name</tt> - The name of the template
    def _layout_for_option(name)
      case name
      when String     then _normalize_layout(name)
      when Proc       then name
      when true       then Proc.new { |formats| _default_layout(formats, true)  }
      when :default   then Proc.new { |formats| _default_layout(formats, false) }
      when false, nil then nil
      else
        raise ArgumentError,
          'String, Proc, :default, true, or false, expected for `layout'; you passed #{name.inspect}'
      end
    end
    
        # Direct access to template rendering.
    def render_template(context, options) #:nodoc:
      TemplateRenderer.new(@lookup_context).render(context, options)
    end
    
    class TestController < ApplicationController
  include Rails.application.routes.url_helpers
    
          def mailer_from(mapping)
        mailer_sender(mapping, :from)
      end
    
        # Include the chosen devise modules in your model:
    #
    #   devise :database_authenticatable, :confirmable, :recoverable
    #
    # You can also give any of the devise configuration values in form of a hash,
    # with specific values for this model. Please check your Devise initializer
    # for a complete description on those values.
    #
    def devise(*modules)
      options = modules.extract_options!.dup
    
          # Overwrites active_for_authentication? from Devise::Models::Activatable for locking purposes
      # by verifying whether a user is active to sign in or not based on locked?
      def active_for_authentication?
        super && !access_locked?
      end
    
        def mime_type
      headers['Content-Type'] || 'text/plain'
    end
    
        def initialize(machine, guests, capabilities)
      @capabilities = capabilities
      @guests       = guests
      @machine      = machine
    end
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                result.instance_variable_set(key, obj.instance_variable_get(key))
              end
            end
          end
    
            def initialize
          @logger = Log4r::Logger.new('vagrant::plugin::v1::manager')
          @registered = []
        end
    
            # This contains all the registered provider capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :provider_capabilities
    
              components.providers.register(name.to_sym) do
            [block.call, options]
          end
    
      gem.required_ruby_version = '>= 2.0'
  gem.add_dependency 'airbrussh', '>= 1.0.0'
  gem.add_dependency 'i18n'
  gem.add_dependency 'rake', '>= 10.0.0'
  gem.add_dependency 'sshkit', '>= 1.9.0'
    
        def load_imports
      if options.show_tasks && Rake::Task.task_defined?('load:defaults')
        invoke 'load:defaults'
        set(:stage, '')
        Dir[deploy_config_path].each { |f| add_import f }
      end
    
          def string_to_code string
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
      s.add_development_dependency 'rack-test', '~> 0.6.2'
  s.add_development_dependency 'shoulda', '~> 3.5.0'
  s.add_development_dependency 'minitest-reporters', '~> 0.14.16'
  s.add_development_dependency 'twitter_cldr', '~> 3.2.0'
  s.add_development_dependency 'mocha', '~> 1.1.0'
  s.add_development_dependency 'test-unit', '~> 3.1.0'
  s.add_development_dependency 'webrick', '~> 1.3.1'
    
          if data.code.to_i != 200
        raise RuntimeError, 'Gist replied with #{data.code} for #{gist_url}'
      end
    
    module Jekyll