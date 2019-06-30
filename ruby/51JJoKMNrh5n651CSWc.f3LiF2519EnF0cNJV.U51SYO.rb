
        
            def extract_to_dir(unpack_dir, basename:, verbose:)
      system_command! AIR_APPLICATION_INSTALLER,
                      args:    ['-silent', '-location', unpack_dir, path],
                      verbose: verbose
    end
  end
end

    
          if @email_domain_block.save
        log_action :create, @email_domain_block
        redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.created_msg')
      else
        render :new
      end
    end
    
      Devise.omniauth_configs.each_key do |provider|
    provides_callback_for provider
  end
    
    module SessionTrackingConcern
  extend ActiveSupport::Concern
    
      def set_user_activity
    return unless user_needs_sign_in_update?
    current_user.update_tracked_fields!(request)
  end
    
      def set_body_classes
    @body_classes = 'modal-layout'
  end
end
