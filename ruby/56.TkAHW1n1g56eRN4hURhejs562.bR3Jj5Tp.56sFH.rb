
        
        source 'https://rubygems.org'
    
      def resource_params
    params.fetch(resource_name, {})
  end
    
    class DeviseCreateUsers < ActiveRecord::Migration
  def change
    create_table(:users) do |t|
      t.string :email,              null: false
      t.string :encrypted_password, null: true
      t.timestamps null: false
    end
    
      def self.activerecord51? # :nodoc:
    defined?(ActiveRecord) && ActiveRecord.gem_version >= Gem::Version.new('5.1.x')
  end
    
          # Sign in a user bypassing the warden callbacks and stores the user
      # straight in session. This option is useful in cases the user is already
      # signed in, but we want to refresh the credentials in session.
      #
      # Examples:
      #
      #   bypass_sign_in @user, scope: :user
      #   bypass_sign_in @user
      def bypass_sign_in(resource, scope: nil)
        scope ||= Devise::Mapping.find_scope!(resource)
        expire_data_after_sign_in!
        warden.session_serializer.store(resource, scope)
      end
    
        if last_request_at.is_a? Integer
      last_request_at = Time.at(last_request_at).utc
    elsif last_request_at.is_a? String
      last_request_at = Time.parse(last_request_at)
    end
    
      include SignatureVerification
    
        def set_account_moderation_note
      @account_moderation_note = AccountModerationNote.find(params[:id])
    end
  end
end

    
        def filter_params
      params.permit(
        :domain_name
      )
    end
  end
end

    
            if params[:create_and_unresolve]
          @report.unresolve!
          log_action :reopen, @report
        end
    
        def load_imports
      if options.show_tasks && Rake::Task.task_defined?('load:defaults')
        invoke 'load:defaults'
        set(:stage, '')
        Dir[deploy_config_path].each { |f| add_import f }
      end
    
          def built_in_scm_plugin_class_name
        'Capistrano::SCM::#{scm_name.to_s.capitalize}'
      end
    
          def self.[](host)
        host.is_a?(Server) ? host : new(host)
      end
    
    SPREE_GEMS = %w(core api cmd backend frontend sample).freeze
    
            def show
          respond_with(@property)
        end