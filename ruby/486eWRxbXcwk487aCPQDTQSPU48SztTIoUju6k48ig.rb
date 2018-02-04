
        
              # Resend confirmation token.
      # Regenerates the token if the period is expired.
      def resend_confirmation_instructions
        pending_any_confirmation do
          send_confirmation_instructions
        end
      end
    
    class Devise::OmniauthCallbacksController < DeviseController
  prepend_before_action { request.env['devise.skip_timeout'] = true }
    
    group :test do
  gem 'omniauth-facebook'
  gem 'omniauth-openid'
  gem 'webrat', '0.7.3', require: false
  gem 'mocha', '~> 1.1', require: false
end
    
        def translation_scope
      'devise.passwords'
    end
end

    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
    class ApplicationController < ActionController::Base
end
    
      # Defines if email should be reconfirmable.
  mattr_accessor :reconfirmable
  @@reconfirmable = true
    
          # Check if flash messages should be emitted. Default is to do it on
      # navigational formats
      def is_flashing_format?
        is_navigational_format?
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
    
    unless invalids.empty?
  puts '\n\nFailed links:'
  invalids.each do |link|
    puts '- #{link}'
  end
  puts 'Done with errors.'
  exit(1)
end