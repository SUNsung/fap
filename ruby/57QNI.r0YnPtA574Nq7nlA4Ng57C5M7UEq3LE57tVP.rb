
        
                # set log level
        log_level = ssh_info[:log_level] || 'FATAL'
    
          subject.rsync_single(machine, ssh_info, opts)
    end
    
        let(:empty_opts) {{:type=>:rsync,
                 :guestpath=>'/vagrant',
                 :hostpath=>'/home/user/syncfolder',
                 :disabled=>false,
                 :__vagrantfile=>true,
                 :exclude=>[],
                 :owner=>'vagrant',
                 :group=>'vagrant'}}
    
          expect(env[:box_added]).to equal(box)
    end
    
              config_file = TemplateRenderer.render(template, {
            custom_configuration: remote_custom_config_path,
            encrypted_data_bag_secret: guest_encrypted_data_bag_secret_key_path,
            environment:      @config.environment,
            file_cache_path:  guest_file_cache_path,
            file_backup_path: guest_file_backup_path,
            log_level:        @config.log_level.to_sym,
            node_name:        @config.node_name,
            verbose_logging:  @config.verbose_logging,
            enable_reporting: @config.enable_reporting,
            http_proxy:       @config.http_proxy,
            http_proxy_user:  @config.http_proxy_user,
            http_proxy_pass:  @config.http_proxy_pass,
            https_proxy:      @config.https_proxy,
            https_proxy_user: @config.https_proxy_user,
            https_proxy_pass: @config.https_proxy_pass,
            no_proxy:         @config.no_proxy,
            formatter:        @config.formatter
          }.merge(template_vars))
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
          it 'should expand the relative host directory' do
        expect(docker_yml).to receive(:write).with(%r{/compose/cwd/path})
      end
    end
    
      def find_user
    return User.find_for_authentication(username: params[:user][:username]) if params[:user][:username]
    
      def add_invites
    InvitationCode.find_by_token(params[:invite_code_id]).add_invites!
    redirect_to user_search_path
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
    
      respond_to :json
    
        begin
      if current_user.auto_follow_back && @aspect.id == current_user.auto_follow_back_aspect.id
        current_user.update(auto_follow_back: false, auto_follow_back_aspect: nil)
        flash[:notice] = I18n.t 'aspects.destroy.success_auto_follow_back', name: @aspect.name
      else
        flash[:notice] = I18n.t 'aspects.destroy.success', name: @aspect.name
      end
      @aspect.destroy
    rescue ActiveRecord::StatementInvalid => e
      flash[:error] = I18n.t 'aspects.destroy.failure', name: @aspect.name
    end
    
      def destroy
    if like_service.destroy(params[:id])
      head :no_content
    else
      render plain: I18n.t('likes.destroy.error'), status: 404
    end
  end
    
      def render_as_json(unread_count, unread_count_by_type, notification_list)
    {
      unread_count:         unread_count,
      unread_count_by_type: unread_count_by_type,
      notification_list:    notification_list.map {|note|
        NotificationSerializer.new(note, default_serializer_options).as_json
      }
    }.as_json
  end
    
    module RailsCommandHelpers
  def framework_version?(version_string)
    framework_version =~ /^#{version_string}/
  end
    
      # Provides configurability to Paperclip. The options available are:
  # * whiny: Will raise an error if Paperclip cannot process thumbnails of
  #   an uploaded image. Defaults to true.
  # * log: Logs progress to the Rails log. Uses ActiveRecord's logger, so honors
  #   log levels, etc. Defaults to true.
  # * command_path: Defines the path at which to find the command line
  #   programs if they are not visible to Rails the system's search path. Defaults to
  #   nil, which uses the first executable found in the user's search path.
  # * use_exif_orientation: Whether to inspect EXIF data to determine an
  #   image's orientation. Defaults to true.
  def self.options
    @options ||= {
      command_path: nil,
      content_type_mappings: {},
      log: true,
      log_command: true,
      read_timeout: nil,
      swallow_stderr: true,
      use_exif_orientation: true,
      whiny: true,
      is_windows: Gem.win_platform?
    }
  end