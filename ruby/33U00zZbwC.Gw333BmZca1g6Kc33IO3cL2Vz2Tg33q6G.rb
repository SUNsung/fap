
        
        def docs_folder
  'docs'
end
    
    require 'erb'
    
                # stream_file_data would free us from keeping livereload.js in memory
            # but JRuby blocks on that call and never returns
            send_data(reload_body)
            close_connection_after_writing
          else
            body = 'This port only serves livereload.js over HTTP.\n'
            headers = [
              'HTTP/1.1 400 Bad Request',
              'Content-Type: text/plain',
              'Content-Length: #{body.bytesize}',
              '',
              '',
            ].join('\r\n')
            send_data(headers)
            send_data(body)
            close_connection_after_writing
          end
        end
        # rubocop:enable Metrics/MethodLength
      end
    end
  end
end

    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
      devise_scope :user do
    get '/some/route' => 'some_devise_controller'
  end
    
    ActiveRecord::Base.establish_connection( adapter: :sqlite3, database:  ':memory:')
    
          def add_fragment_back_to_path(uri, path)
        [path, uri.fragment].compact.join('#')
      end
    end
  end
end

    
        def strategies
      @strategies ||= STRATEGIES.values_at(*self.modules).compact.uniq.reverse
    end
    
            # Removes reset_password token
        def clear_reset_password_token
          self.reset_password_token = nil
          self.reset_password_sent_at = nil
        end
    
      def show
    if subscription.valid?(params['hub.topic'])
      @account.update(subscription_expires_at: future_expires)
      render plain: encoded_challenge, status: 200
    else
      head 404
    end
  end
    
        render json: @web_subscription, serializer: REST::WebPushSubscriptionSerializer
  end
    
        unless active_session.web_push_subscription.nil?
      active_session.web_push_subscription.destroy!
      active_session.update!(web_push_subscription: nil)
    end
    
      def send_export_file
    respond_to do |format|
      format.csv { send_data export_data, filename: export_filename }
    end
  end
    
      def set_locale
    I18n.locale = default_locale
    I18n.locale = current_user.locale if user_signed_in?
  rescue I18n::InvalidLocale
    I18n.locale = default_locale
  end
    
        def load_imports
      if options.show_tasks && Rake::Task.task_defined?('load:defaults')
        invoke 'load:defaults'
        set(:stage, '')
        Dir[deploy_config_path].each { |f| add_import f }
      end
    
          def response
        return @response if defined? @response
    
          attr_reader :validators