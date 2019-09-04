
        
              # Make sure max_allowed_message_recipients setting is respected
      max_allowed_message_recipients = SiteSetting.max_allowed_message_recipients
    
            upload = Upload.last
    
        it 'works when default_locale is not English' do
      SiteSetting.default_locale = :de
    
        stub_request(:get, 'http://169.254.169.254/latest/meta-data/iam/security-credentials/').
      to_return(status: 404, body: '', headers: {})
    
            def select_directory(file_name)
          return [] unless @commit
    
        def aes256_gcm_encrypt(value)
      encrypted_token = Encryptor.encrypt(AES256_GCM_OPTIONS.merge(value: value))
      Base64.strict_encode64(encrypted_token)
    end
    
        context 'when user cannot update_group_member' do
      before do
        allow(presenter).to receive(:can?).with(user, :update_group_member, presenter).and_return(false)
        allow(presenter).to receive(:can?).with(user, :override_group_member, presenter).and_return(false)
      end
    
          it { expect(presenter.can_update?).to eq(true) }
    end
    
            # Check for available deploy keys in other projects
        key = current_user.accessible_deploy_keys.find_by(key: params[:key])
        if key
          deploy_key_project = add_deploy_keys_project(user_project, deploy_key: key, can_push: !!params[:can_push])
    
          def preference_field_tag(name, value, options)
        case options[:type]
        when :integer
          text_field_tag(name, value, preference_field_options(options))
        when :boolean
          hidden_field_tag(name, 0, id: '#{name}_hidden') +
            check_box_tag(name, 1, value, preference_field_options(options))
        when :string
          text_field_tag(name, value, preference_field_options(options))
        when :password
          password_field_tag(name, value, preference_field_options(options))
        when :text
          text_area_tag(name, value, preference_field_options(options))
        else
          text_field_tag(name, value, preference_field_options(options))
        end
      end
    
          def ip
        order.last_ip_address
      end
    
            protect_from_connection_error do
          if payment_method.payment_profiles_supported?
            # Gateways supporting payment profiles will need access to credit card object because this stores the payment profile information
            # so supply the authorization itself as well as the credit card, rather than just the authorization code
            response = payment_method.void(response_code, source, gateway_options)
          else
            # Standard ActiveMerchant void usage
            response = payment_method.void(response_code, gateway_options)
          end
          record_response(response)
    
            context 'when the calculator is not available for that order' do
          before { allow_any_instance_of(ShippingMethod).to receive_message_chain(:calculator, :available?).and_return(false) }
    
            def show
          @inventory_unit = inventory_unit
          respond_with(@inventory_unit)
        end
    
            def new; end
    
            def payment_params
          params.require(:payment).permit(permitted_payment_attributes)
        end
      end
    end
  end
end

    
            def show
          authorize! :admin, ReturnAuthorization
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :show).find(params[:id])
          respond_with(@return_authorization)
        end
    
      factory :noroot_project, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/noroot.yml') }
    end
    
      def commands_match
    @actual.commands == commands
  end
    
          def generate_project_file(name, path)
        template = Tmuxinator::Config.default? ? :default : :sample
        content = File.read(Tmuxinator::Config.send(template.to_sym))
        erb = Erubis::Eruby.new(content).result(binding)
        File.open(path, 'w') { |f| f.write(erb) }
        path
      end
    
        context '$SHELL is not set' do
      before do
        allow(ENV).to receive(:[]).with('SHELL') { nil }
      end
    
      rescue Acme::Client::Error => e
    @retries = 0
    if e.is_a?(Acme::Client::Error::BadNonce) && @retries < 5
      @retries += 1
      logger.info 'Bad nounce encountered. Retrying (#{@retries} of 5 attempts)'
      sleep 1
      verify
    else
      logger.info 'Error: #{e.class} (#{e.message})'
      return false
    end
  end
    
      def new
    @domain = @server ? @server.domains.build : organization.domains.build
  end
    
      def new
    @ip_pool_rule = @server ? @server.ip_pool_rules.build : organization.ip_pool_rules.build
  end
    
      def destroy
    @ip_pool.destroy
    redirect_to_with_json :ip_pools, :notice => 'IP pool has been removed successfully.'
  rescue ActiveRecord::DeleteRestrictionError => e
    redirect_to_with_json [:edit, @ip_pool], :alert => 'IP pool cannot be removed because it is still assigned to servers/rules.'
  end