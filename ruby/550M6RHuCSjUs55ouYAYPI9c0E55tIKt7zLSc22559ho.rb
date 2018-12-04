
        
            def destroy
      authorize @account_moderation_note, :destroy?
      @account_moderation_note.destroy!
      redirect_to admin_account_path(@account_moderation_note.target_account_id), notice: I18n.t('admin.account_moderation_notes.destroyed_msg')
    end
    
        def check_confirmation
      if @user.confirmed?
        flash[:error] = I18n.t('admin.accounts.resend_confirmation.already_confirmed')
        redirect_to admin_accounts_path
      end
    end
  end
end

    
      def update
    response, status = process_push_request
    render plain: response, status: status
  end
    
      def verify_payload?
    payload.present? && VerifySalmonService.new.call(payload)
  end
    
      def set_web_push_subscription
    @web_subscription = ::Web::PushSubscription.find_by(access_token_id: doorkeeper_token.id)
  end
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
            def advance
          authorize! :update, @order, order_token
          while @order.next; end
          respond_with(@order, default_template: 'spree/api/v1/orders/show', status: 200)
        end
    
            def create
          authorize! :create, Spree::OptionValue
          @option_value = scope.new(option_value_params)
          if @option_value.save
            render :show, status: 201
          else
            invalid_resource!(@option_value)
          end
        end
    
            def index
          @zones = Zone.accessible_by(current_ability, :read).order('name ASC').ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@zones)
        end
    
    post '/msg' do
  SinatraWorker.perform_async params[:msg]
  redirect to('/')
end
    
            begin
          File.open(fp.path, 'a') { |tmpfp| fp.reopen(tmpfp) }
          fp.sync = true
          nr += 1
        rescue IOError, Errno::EBADF
          # not much we can do...
        end
      end
      nr
    rescue RuntimeError => ex
      # RuntimeError: ObjectSpace is disabled; each_object will only work with Class, pass -X+O to enable
      puts 'Unable to reopen logs: #{ex.message}'
    end
    
        def disable(*opts)
      opts.each {|key| set(key, false) }
    end
    
    When /^(?:|I )fill in '([^']*)' for '([^']*)'$/ do |value, field|
  fill_in(field, :with => value)
end
    
      def generate_migration
    migration_template('paperclip_migration.rb.erb',
                       'db/migrate/#{migration_file_name}',
                       migration_version: migration_version)
  end
    
        def register(klass, attachment_name, attachment_options)
      @attachments ||= {}
      @attachments[klass] ||= {}
      @attachments[klass][attachment_name] = attachment_options
    end
    
        def initialize(filepath)
      @filepath = filepath
    end