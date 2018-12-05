
        
                def render(&block)
          render_collection_for(RadioButtonBuilder, &block)
        end
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class DateSelect < Base # :nodoc:
        def initialize(object_name, method_name, template_object, options, html_options)
          @html_options = html_options
    
        def find_all(path, prefixes = [], *args)
      _find_all path, prefixes, args, false
    end
    
        initializer 'action_view.form_with_generates_ids' do |app|
      ActiveSupport.on_load(:action_view) do
        form_with_generates_ids = app.config.action_view.delete(:form_with_generates_ids)
        unless form_with_generates_ids.nil?
          ActionView::Helpers::FormHelper.form_with_generates_ids = form_with_generates_ids
        end
      end
    end
    
        def execute(command: nil, target_object: nil)
      action_name = command.method_name
      action_class_ref = class_ref_for_action(named: action_name)
      parameter_map = {}
      closure_argument_value = nil
    
          launch_event = builder.new_event(:launch)
      post_thread = client.post_event(launch_event)
      unless post_thread.nil?
        @threads << post_thread
      end
    end
    
            expect(result[3]).to start_with('security set-keychain-settings')
        expect(result[3]).to include('-t 600')
        expect(result[3]).to include('-l')
        expect(result[3]).to include('-u')
        expect(result[3]).to include('~/Library/Keychains/test.keychain')
      end
    end
  end
end

    
          it 'shellescapes the exclude_dirs correctly' do
        directory = 'My Dir'
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['#{directory}'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir #{directory.shellescape}')
      end
    
            Fastlane::FastFile.new.parse('lane :test do
          import_certificate ({
            keychain_name: '#{keychain}',
            certificate_path: '#{cert_name}',
            certificate_password: '#{password}',
            log_output: true
          })
        end').runner.execute(:test)
      end
    end
  end
end

    
        it 'shelljoins multiple args' do
      message = 'A message'
      command = command_from_args('git', 'commit', '-m', message)
      expect(command).to eq('git commit -m #{message.shellescape}')
    end
    
          @key = key
      @env_name = env_name
      @description = description
      @short_option = short_option
      @default_value = default_value
      @default_value_dynamic = default_value_dynamic
      @verify_block = verify_block
      @is_string = is_string
      @data_type = type
      @data_type = String if type == :shell_string
      @optional = optional
      @conflicting_options = conflicting_options
      @conflict_block = conflict_block
      @deprecated = deprecated
      @sensitive = sensitive
      @code_gen_sensitive = code_gen_sensitive || sensitive
      @allow_shell_conversion = (type == :shell_string)
      @display_in_shell = display_in_shell
      @skip_type_validation = skip_type_validation # sometimes we allow multiple types which causes type validation failures, e.g.: export_options in gym
    
            FastlaneCore::CertChecker.wwdr_certificate_installed?
      end
    
            # this command is also sent on macOS Sierra and we need to allow it or else the test will fail
        allowed_command = 'security set-key-partition-list -S apple-tool:,apple: -k #{''.shellescape} #{Dir.home}/Library/Keychains/login.keychain-db &> /dev/null'
    
      # If http authentication is enabled by default.
  mattr_accessor :http_authenticatable
  @@http_authenticatable = false
    
          # Sign in a user that already was authenticated. This helper is useful for logging
      # users in after sign up. All options given to sign_in is passed forward
      # to the set_user method in warden.
      # If you are using a custom warden strategy and the timeoutable module, you have to
      # set `env['devise.skip_timeout'] = true` in the request to use this method, like we do
      # in the sessions controller: https://github.com/plataformatec/devise/blob/master/app/controllers/devise/sessions_controller.rb#L7
      #
      # Examples:
      #
      #   sign_in :user, @user                      # sign_in(scope, resource)
      #   sign_in @user                             # sign_in(resource)
      #   sign_in @user, event: :authentication     # sign_in(resource, options)
      #   sign_in @user, store: false               # sign_in(resource, options)
      #
      def sign_in(resource_or_scope, *args)
        options  = args.extract_options!
        scope    = Devise::Mapping.find_scope!(resource_or_scope)
        resource = args.last || resource_or_scope
    
          # Set up a subject doing an I18n lookup. At first, it attempts to set a subject
      # based on the current mapping:
      #
      #   en:
      #     devise:
      #       mailer:
      #         confirmation_instructions:
      #           user_subject: '...'
      #
      # If one does not exist, it fallbacks to ActionMailer default:
      #
      #   en:
      #     devise:
      #       mailer:
      #         confirmation_instructions:
      #           subject: '...'
      #
      def subject_for(key)
        I18n.t(:'#{devise_mapping.name}_subject', scope: [:devise, :mailer, key],
          default: [:subject, key.to_s.humanize])
      end
    end
  end
end

    
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
    
    Given /^I attach :attachment$/ do
  attach_attachment('attachment')
end
    
        def cropping dst, ratio, scale
      if ratio.horizontal? || ratio.square?
        '%dx%d+%d+%d' % [ dst.width, dst.height, 0, (self.height * scale - dst.height) / 2 ]
      else
        '%dx%d+%d+%d' % [ dst.width, dst.height, (self.width * scale - dst.width) / 2, 0 ]
      end
    end
    
        def add_required_validations
      options = Paperclip::Attachment.default_options.deep_merge(@options)
      if options[:validate_media_type] != false
        name = @name
        @klass.validates_media_type_spoof_detection name,
          :if => ->(instance){ instance.send(name).dirty? }
      end
    end