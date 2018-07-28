
        
          def validate_email_options
    errors.add(:base, 'subject and expected_receive_period_in_days are required') unless options['subject'].present? && options['expected_receive_period_in_days'].present?
    
      included do
    class_attribute :_form_configurable_fields
    self._form_configurable_fields = HashWithIndifferentAccess.new { |h,k| h[k] = [] }
  end
    
        # The path used after confirmation.
    def after_confirmation_path_for(resource_name, resource)
      if signed_in?(resource_name)
        signed_in_root_path(resource)
      else
        new_session_path(resource_name)
      end
    end
    
      # GET /resource/password/edit?reset_password_token=abcdef
  def edit
    self.resource = resource_class.new
    set_minimum_password_length
    resource.reset_password_token = params[:reset_password_token]
  end
    
    class Devise::SessionsController < DeviseController
  prepend_before_action :require_no_authentication, only: [:new, :create]
  prepend_before_action :allow_params_authentication!, only: :create
  prepend_before_action :verify_signed_out_user, only: :destroy
  prepend_before_action(only: [:create, :destroy]) { request.env['devise.skip_timeout'] = true }
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
        def matching_domain
      if domain.nil?
        Account.where(domain: nil)
      else
        Account.where(Account.arel_table[:domain].lower.eq domain.to_s.downcase)
      end
    end
  end
end

    
      has_one :icon, serializer: ActivityPub::ImageSerializer
    
      private
    
      before do
    routes.draw { get 'show' => 'anonymous#show' }
  end