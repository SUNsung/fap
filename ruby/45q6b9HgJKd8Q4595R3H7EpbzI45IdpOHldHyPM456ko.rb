  before_action :set_filters, only: :index
  before_action :set_filter, only: [:edit, :update, :destroy]
    
      def verify_payload?
    payload.present? && VerifySalmonService.new.call(payload)
  end
    
        Thread.pass until running
    Thread.pass while t.status and t.status != 'sleep'
    
    describe 'Kernel#trace_var' do
  before :each do
    $Kernel_trace_var_global = nil
  end
    
      it 'does not write strings when passed no arguments' do
    lambda {
      $VERBOSE = true
      warn
    }.should output('', '')
  end
    
        def str_to_byte_pos(pos)
      @s.string.slice(0, pos).bytesize
    end
  end
end
    
      # log-levels from the diaspora.yml for SQL and federation debug-logging
  Logging.logger[ActionView::Base].level = Rails.env.development? ? :debug : :warn
  Logging.logger[ActiveRecord::Base].level = AppConfig.environment.logging.debug.sql? ? :debug : :info
  Logging.logger[DiasporaFederation::Salmon::MagicEnvelope].level =
    AppConfig.environment.logging.debug.federation? ? :debug : :info
    
      def up_down(change)
    change.up do
      Mention.update_all(mentions_container_type: 'Post')
      change_column :mentions, :mentions_container_type, :string, null: false
      Notification.where(type: 'Notifications::Mentioned').update_all(type: 'Notifications::MentionedInPost')
    end
    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
    end
  end
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
      puts 'Updating submodules'
  execute_command 'git submodule update --init --recursive'
    
        if rbenv_prefix = prefix_from_bin('rbenv')
      prefixes << rbenv_prefix
    end
    
        def self.verify_xcode_license_approved!
      if `/usr/bin/xcrun clang 2>&1` =~ /license/ && !$?.success?
        raise Informative, 'You have not agreed to the Xcode license, which ' \
          'you must do to use CocoaPods. Agree to the license by running: ' \
          '`xcodebuild -license`.'
      end
    end
  end
end

    
            def validate!
          super
          if @pod_name.nil? && !@wipe_all
            # Security measure, to avoid removing the pod cache too agressively by mistake
            help! 'You should either specify a pod name or use the --all flag'
          end
        end
    
            def image_params
          params.require(:image).permit(permitted_image_attributes)
        end
    
            def inventory_unit
          @inventory_unit ||= InventoryUnit.accessible_by(current_ability, :read).find(params[:id])
        end
    
            def order
          @order ||= Spree::Order.includes(:line_items).find_by!(number: order_id)
          authorize! :update, @order, order_token
        end
    
            def create
          authorize! :create, Product
          params[:product][:available_on] ||= Time.current
          set_up_shipping_category
    
              if params[:page] || params[:per_page]
            @states = @states.page(params[:page]).per(params[:per_page])
          end