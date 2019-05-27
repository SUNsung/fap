  def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
      if respond_to?(:helper)
    helper DeviseHelper
  end
    
    class DeviseCreateUsers < ActiveRecord::Migration
  def change
    create_table(:users) do |t|
      t.string :email,              null: false
      t.string :encrypted_password, null: true
      t.timestamps null: false
    end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
            # Attempt to find a user by its reset_password_token to reset its
        # password. If a user is found and token is still valid, reset its password and automatically
        # try saving the record. If not user is found, returns a new user
        # containing an error in reset_password_token attribute.
        # Attributes must contain reset_password_token, password and confirmation
        def reset_password_by_token(attributes={})
          original_token       = attributes[:reset_password_token]
          reset_password_token = Devise.token_generator.digest(self, :reset_password_token, original_token)
    
          module ClassMethods
        Devise::Models.config(self, :timeout_in)
      end
    end
  end
end

    
          # This module extends user defined helpers
      # to provide some API-specific functionality.
      module BaseHelper
        attr_accessor :api
        def params(name, &block)
          @named_params ||= {}
          @named_params[name] = block
        end
    
              if args.include?(:all)
            namespace_inheritable(:rescue_all, true)
            namespace_inheritable :all_rescue_handler, handler
          elsif args.include?(:grape_exceptions)
            namespace_inheritable(:rescue_all, true)
            namespace_inheritable(:rescue_grape_exceptions, true)
          else
            handler_type =
              case options[:rescue_subclasses]
              when nil, true
                :rescue_handlers
              else
                :base_only_rescue_handlers
              end
    
            # Opens a root-level ParamsScope, defining parameter coercions and
        # validations for the endpoint.
        # @yield instance context of the new scope
        def params(&block)
          Grape::Validations::ParamsScope.new(api: self, type: Hash, &block)
        end
    
    # Example:
#
# set :output, '/path/to/my/cron_log.log'
#
# every 2.hours do
#   command '/usr/bin/some_great_command'
#   runner 'MyModel.some_method'
#   rake 'some:great:rake:task'
# end
#
# every 4.days do
#   runner 'AnotherModel.prune_old_records'
# end
    
            def whenever_options
          fetch(:whenever_options)
        end
    
            start += frequency unless (max + 1).modulo(frequency).zero? || start > 0
        output = (start..max).step(frequency).to_a
    
              # :cron_log was an old option for output redirection, it remains for backwards compatibility
          options[:output] = (options[:cron_log] || @cron_log) if defined?(@cron_log) || options.has_key?(:cron_log)
          # :output is the newer, more flexible option.
          options[:output] = @output if defined?(@output) && !options.has_key?(:output)