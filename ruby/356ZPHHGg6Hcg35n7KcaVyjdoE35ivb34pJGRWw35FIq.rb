
        
        module Gitlab
  module GithubImport
    module Importer
      class NotesImporter
        include ParallelScheduling
    
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
    
        # Creates configuration values for Devise and for the given module.
    #
    #   Devise::Models.config(Devise::Models::DatabaseAuthenticatable, :stretches)
    #
    # The line above creates:
    #
    #   1) An accessor called Devise.stretches, which value is used by default;
    #
    #   2) Some class methods for your model Model.stretches and Model.stretches=
    #      which have higher priority than Devise.stretches;
    #
    #   3) And an instance method stretches.
    #
    # To add the class methods you need to have a module ClassMethods defined
    # inside the given class.
    #
    def self.config(mod, *accessors) #:nodoc:
      class << mod; attr_accessor :available_configs; end
      mod.available_configs = accessors
    
              recoverable.reset_password_token = original_token if recoverable.reset_password_token.present?
          recoverable
        end
    
      puts '== Installing dependencies =='
  system! 'gem install bundler --conservative'
  system('bundle check') || system!('bundle install')
    
      # Tell Action Mailer not to deliver emails to the real world.
  # The :test delivery method accumulates sent emails in the
  # ActionMailer::Base.deliveries array.
  config.action_mailer.delivery_method = :test
    
      attr_accessor :directories
    
      dont_obsolete_paths = []
  option '--dont-obsolete', 'DONT_OBSOLETE_PATH',
    'A file path for which to 'dont-obsolete' in the built PackageInfo. ' \
    'Can be specified multiple times.' do |path|
      dont_obsolete_paths << path
    end
    
    class FPM::Package::Pacman < FPM::Package
    
    
    
    require 'pleaserun/cli'
    
          def self.has_issues_with_add_symlink?
        return !::Gem::Package::TarWriter.public_instance_methods.include?(:add_symlink)
      end
    end # module TarWriter
  end # module Issues
end # module FPM