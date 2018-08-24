
        
        describe GivenDailyLike do
    
    SiteSetting.refresh!
uncat_id = SiteSetting.uncategorized_category_id
uncat_id = -1 unless Numeric === uncat_id
    
          if staff.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('staff_category_description'),
          title: I18n.t('category.topic_prefix', category: staff.name),
          category: staff.name,
          archetype: Archetype.default
        )
        post = creator.create
    
    gem 'activemodel-serializers-xml', github: 'rails/activemodel-serializers-xml'
    
        if resource.errors.empty?
      set_flash_message!(:notice, :confirmed)
      respond_with_navigational(resource){ redirect_to after_confirmation_path_for(resource_name, resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?
    
    require 'rack/test'
require 'action_controller/railtie'
require 'active_record'
require 'devise/rails/routes'
require 'devise/rails/warden_compat'
    
          def is_navigational_format?
        Devise.navigational_formats.include?(request_format)
      end
    
              path
        end
      end
    
        unless env['devise.skip_trackable']
      warden.session(scope)['last_request_at'] = Time.now.utc.to_i
    end
  end
end

    
          it 'left-justifies the result if specified with $ argument is negative' do
        format('%1$*2$b', 10, -10).should == '1010      '
        format('%1$*2$B', 10, -10).should == '1010      '
        format('%1$*2$d', 112, -10).should == '112       '
        format('%1$*2$i', 112, -10).should == '112       '
        format('%1$*2$o', 87, -10).should == '127       '
        format('%1$*2$u', 112, -10).should == '112       '
        format('%1$*2$x', 196, -10).should == 'c4        '
        format('%1$*2$X', 196, -10).should == 'C4        '
    
    STDOUT.sync = true if ENV['CP_STDOUT_SYNC'] == 'TRUE'
    
      def prefixes
    prefixes = ['/bin', '/usr/bin', '/usr/libexec', xcode_app_path]
    prefixes << `brew --prefix`.strip unless `which brew`.strip.empty?
    
            def validate!
          super
          if @pod_name.nil? && !@wipe_all
            # Security measure, to avoid removing the pod cache too agressively by mistake
            help! 'You should either specify a pod name or use the --all flag'
          end
        end
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
                respond_with(@order, default_template: :show, status: 201)
          else
            @order = Spree::Order.create!(user: current_api_user, store: current_store)
            if Cart::Update.call(order: @order, params: order_params).success?
              respond_with(@order, default_template: :show, status: 201)
            else
              invalid_resource!(@order)
            end
          end
        end
    
            def perform_payment_action(action, *args)
          authorize! action, Payment
          @payment.send('#{action}!', *args)
          respond_with(@payment, default_template: :show)
        end
    
            def index
          @states = scope.ransack(params[:q]).result.includes(:country)