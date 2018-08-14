
        
          end
    
      def set_permission(permission_name, value)
    self.send('#{permission_name}=', value)
    save_and_refresh_staff_groups!
  end
    
      def is_form_configurable?
    true
  end
    
        def terminate_thread!
      if thread
        thread.instance_eval { ActiveRecord::Base.connection_pool.release_connection }
        thread.wakeup if thread.status == 'sleep'
        thread.terminate
      end
    end
    
      included do
    include Oauthable
    
      def destroy
    @event.destroy
    
        respond_to do |format|
      if @user_credential.update_attributes(user_credential_params)
        format.html { redirect_to user_credentials_path, notice: 'Your credential was successfully updated.' }
        format.json { head :no_content }
      else
        format.html { render action: 'edit' }
        format.json { render json: @user_credential.errors, status: :unprocessable_entity }
      end
    end
  end
    
            while true
          begin
            if Platform.windows?
              # Windows doesn't support non-blocking reads on
              # file descriptors or pipes so we have to get
              # a bit more creative.
    
              if argv.length == 2
            # @deprecated
            @env.ui.warn('WARNING: The second argument to `vagrant box remove`')
            @env.ui.warn('is deprecated. Please use the --provider flag. This')
            @env.ui.warn('feature will stop working in the next version.')
            options[:provider] = argv[1]
          end
    
          def execute
        options = {}
        options[:check] = false
    
      # Uninstalls this logger from \{Sass.logger\}. This should only be called if
  # the logger was installed using \{#install!}
  def uninstall!
    if Sass.logger != self
      throw Exception.new('Can't uninstall a logger that's not currently installed.')
    end
    
            {
          :always_update     => false,
          :template_location => root + '/public/stylesheets/sass',
          :css_location      => root + '/public/stylesheets',
          :cache_location    => root + '/tmp/sass-cache',
          :always_check      => env != 'production',
          :quiet             => env != 'production',
          :full_exception    => env != 'production'
        }.freeze
      end
    end
  end
    
              if @address.update_attributes(address_params)
            respond_with(@address, default_template: :show)
          else
            invalid_resource!(@address)
          end
        end
    
            def stock_location
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:id])
        end
    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end