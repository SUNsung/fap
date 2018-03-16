
        
              module ClassMethods
        # Attempt to find a user by its email. If a record is found, send new
        # confirmation instructions to it. If not, try searching for a user by unconfirmed_email
        # field. If no user is found, returns a new user with an email not found error.
        # Options must contain the user email
        def send_confirmation_instructions(attributes={})
          confirmable = find_by_unconfirmed_email_with_errors(attributes) if reconfirmable
          unless confirmable.try(:persisted?)
            confirmable = find_or_initialize_with_errors(confirmation_keys, attributes, :not_found)
          end
          confirmable.resend_confirmation_instructions if confirmable.persisted?
          confirmable
        end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
      # Used to hash the password. Please generate one with rails secret.
  mattr_accessor :pepper
  @@pepper = nil
    
        def warden_message
      @message ||= warden.message || warden_options[:message]
    end
    
          respond_with do |format|
        format.html { redirect_to admin_pods_path }
        format.json { render json: PodPresenter.new(pod).as_json }
      end
    end
  end
end

    
          def add_claims_to_scopes
        return unless params[:claims]
        claims_json = JSON.parse(params[:claims])
        return unless claims_json
        claims_array = claims_json['userinfo'].try(:keys)
        return unless claims_array
        req = build_rack_request
        claims = claims_array.unshift(req[:scope]).join(' ')
        req.update_param('scope', claims)
      end
    
          rescue_from Rack::OAuth2::Server::Authorize::BadRequest,
                  JSON::JWT::InvalidFormat, JSON::JWK::UnknownAlgorithm do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_request, error_description: e.message, status: 400}
      end
      rescue_from JSON::JWT::VerificationFailed do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_grant, error_description: e.message, status: 400}
      end
    end
  end
end

    
        # True if the dimensions represent a square
    def square?
      height == width
    end
    
            def responds?
          methods = @subject.instance_methods.map(&:to_s)
          methods.include?('#{@attachment_name}') &&
            methods.include?('#{@attachment_name}=') &&
            methods.include?('#{@attachment_name}?')
        end
    
            protected
    
            def in range
          @low, @high = range.first, range.last
          self
        end
    
          private
    
            def on_case(case_node)
          case_node.when_branches.each_with_object([]) do |when_node, previous|
            when_node.each_condition do |condition|
              next unless repeated_condition?(previous, condition)