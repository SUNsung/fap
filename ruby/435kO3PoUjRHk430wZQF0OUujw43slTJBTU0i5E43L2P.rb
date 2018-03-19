
        
        def pr(url)
  if url.end_with?(FORWARD_SLASH)
    url
  else
    url_dir = File.dirname(url)
    url_dir.end_with?(FORWARD_SLASH) ? url_dir : '#{url_dir}/'
  end
end
    
    def source_dir(*subdirs)
  test_dir('source', *subdirs)
end
    
    puts 'Stackprof Mode: #{MODE}'
    
      p.action do |args, _|
    if args.empty?
      Jekyll.logger.error 'A subcommand is required.'
      puts p
      abort
    else
      subcommand = args.first
      unless p.has_command? subcommand
        Jekyll.logger.abort_with 'fatal: 'jekyll #{args.first}' could not' \
          ' be found. You may need to install the jekyll-#{args.first} gem' \
          ' or a related gem to be able to use this subcommand.'
      end
    end
  end
end

    
    def run_rubygem(args)
  run_in_shell('gem', *args.strip.split(' '))
end
    
      test 'should accept confirmation email token after 2 days when expiration is set to 3 days' do
    swap Devise, confirm_within: 3.days do
      assert confirm_user_by_token_with_confirmation_sent_at(2.days.ago)
    end
  end
    
        # Check if proper Lockable module methods are present & unlock strategy
    # allows to unlock resource on password reset
    def unlockable?(resource)
      resource.respond_to?(:unlock_access!) &&
        resource.respond_to?(:unlock_strategy_enabled?) &&
        resource.unlock_strategy_enabled?(:email)
    end
    
      # Controllers inheriting DeviseController are advised to override this
  # method so that other controllers inheriting from them would use
  # existing translations.
  def translation_scope
    'devise.#{controller_name}'
  end
    
        def redirect
      store_location!
      if is_flashing_format?
        if flash[:timedout] && flash[:alert]
          flash.keep(:timedout)
          flash.keep(:alert)
        else
          flash[:alert] = i18n_message
        end
      end
      redirect_to redirect_url
    end
    
          if valid_type?(type)
        type.constantize.new(attributes).tap do |instance|
          instance.user = user if instance.respond_to?(:user=)
        end
      else
        const_get(:BASE_CLASS_NAME).constantize.new(attributes).tap do |instance|
          instance.type = type
          instance.user = user if instance.respond_to?(:user=)
        end
      end
    end
  end
end
    
        respond_to do |format|
      format.html
      format.json { render json: @events }
    end
  end
    
      def destroy
    @services = current_user.services.find(params[:id])
    @services.destroy
    
          def handle_prompt_none
        if params[:prompt] == 'none'
          if user_signed_in?
            handle_prompt_with_signed_in_user
          else
            handle_params_error('login_required', 'User must already be logged in when `prompt` is `none`')
          end
        else
          handle_params_error('invalid_request', 'The 'none' value cannot be used with any other prompt value')
        end
      end
    
          rescue_from Api::OpenidConnect::Error::InvalidRedirectUri do |e|
        validation_fail_redirect_uri(e)
      end
    
          def create
        req = Rack::Request.new(request.env)
        if req['client_assertion_type'] == 'urn:ietf:params:oauth:client-assertion-type:jwt-bearer'
          handle_jwt_bearer(req)
        end
        self.status, headers, self.response_body = Api::OpenidConnect::TokenEndpoint.new.call(request.env)
        headers.each {|name, value| response.headers[name] = value }
        nil
      end
    
          @options               = options
      @post_processing       = true
      @queued_for_delete     = []
      @queued_for_write      = {}
      @errors                = {}
      @dirty                 = false
      @interpolator          = options[:interpolator]
      @url_generator         = options[:url_generator].new(self)
      @source_file_options   = options[:source_file_options]
      @whiny                 = options[:whiny]
    
        # Returns the id of the instance in a split path form. e.g. returns
    # 000/001/234 for an id of 1234.
    def id_partition attachment, style_name
      case id = attachment.instance.id
      when Integer
        ('%09d'.freeze % id).scan(/\d{3}/).join('/'.freeze)
      when String
        id.scan(/.{3}/).first(3).join('/'.freeze)
      else
        nil
      end
    end
    
          if app.config.respond_to?(:paperclip_defaults)
        Paperclip::Attachment.default_options.merge!(app.config.paperclip_defaults)
      end
    end
    
      def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
          def snapshot
        agent.metric.collector.snapshot_metric
      end
    
      def twenty_five_percent
    [1, (maximum * 0.25)].max.floor
  end