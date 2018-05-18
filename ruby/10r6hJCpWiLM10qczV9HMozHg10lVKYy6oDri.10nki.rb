def build_configs(overrides, base_hash = Jekyll::Configuration::DEFAULTS)
  Jekyll::Utils.deep_merge_hashes(base_hash, overrides)
end
    
    class Paths
  SOURCE_DIR = Pathname.new(File.expand_path('../..', __dir__))
  def self.test_dir; source_dir.join('tmp', 'jekyll'); end
    
          def render(*args)
        measure_time do
          measure_bytes do
            @template.render(*args)
          end
        end
      end
    
        # Public: Setup the plugin search path
    #
    # Returns an Array of plugin search paths
    def plugins_path
      if site.config['plugins_dir'].eql? Jekyll::Configuration::DEFAULTS['plugins_dir']
        [site.in_source_dir(site.config['plugins_dir'])]
      else
        Array(site.config['plugins_dir']).map { |d| File.expand_path(d) }
      end
    end
    
        # The path used after sending reset password instructions
    def after_sending_reset_password_instructions_path_for(resource_name)
      new_session_path(resource_name) if is_navigational_format?
    end
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
        proxy = Devise::Hooks::Proxy.new(warden)
    
    class DigestMailerWorker
  include Sidekiq::Worker
    
          expect_updated_sign_in_at(user)
    end
    
    class NotificationMailerPreview < ActionMailer::Preview
  # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/mention
  def mention
    m = Mention.last
    NotificationMailer.mention(m.account, Notification.find_by(activity: m))
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
