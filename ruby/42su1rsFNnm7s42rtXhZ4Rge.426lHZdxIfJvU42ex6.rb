
        
            def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
          def mailer_from(mapping)
        mailer_sender(mapping, :from)
      end
    
        def default_controllers(options)
      mod = options[:module] || 'devise'
      @controllers = Hash.new { |h,k| h[k] = '#{mod}/#{k}' }
      @controllers.merge!(options[:controllers]) if options[:controllers]
      @controllers.each { |k,v| @controllers[k] = v.to_s }
    end
    
        t = c.send(@method) { }
    t.join
    
        10.times { sleep 0.1 if after_sleep1 != true }
    10.times { sleep 0.1 if t.status and t.status != 'sleep' }
    after_sleep2.should == false # t should be blocked on the second sleep
    t.send(@method)
    
    process_args
list_login_items_for_app $app_path

    
    module Hbc
  class DSL
    class Container
      VALID_KEYS = Set.new [
        :type,
        :nested,
      ]
    
    class DependencyCollector
  module Compat
    # Define the languages that we can handle as external dependencies.
    LANGUAGE_MODULES = Set[
      :lua, :lua51, :perl, :python, :python3, :ruby
    ].freeze
    
      def patch(strip = :p1, src = nil, &block)
    p = Patch.create(strip, src, &block)
    dependency_collector.add(p.resource) if p.is_a? ExternalPatch
    patches << p
  end