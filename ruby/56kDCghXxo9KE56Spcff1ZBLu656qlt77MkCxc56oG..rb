
        
        if ENV['SELENIUM'] == '1'
  gem 'capybara'
  gem 'selenium-webdriver'
end

    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def request_one(url)
      Response.new read_file(file_path_for(url)), URL.parse(url)
    end
    
      def set_account
    @account = Account.find_local!(params[:account_username]) if params[:account_username]
  end
    
      def page_params
    { page: true, max_id: params[:max_id], min_id: params[:min_id] }.compact
  end
end

    
        def filter_params
      params.permit(
        :local,
        :remote,
        :by_domain,
        :silenced,
        :recent,
        :suspended,
        :username,
        :display_name,
        :email,
        :ip,
        :staff
      )
    end
  end
end

    
        def disable
      authorize @custom_emoji, :disable?
      @custom_emoji.update!(disabled: true)
      log_action :disable, @custom_emoji
      flash[:notice] = I18n.t('admin.custom_emojis.disabled_msg')
      redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end
    
        def destroy
      authorize @email_domain_block, :destroy?
      @email_domain_block.destroy!
      log_action :destroy, @email_domain_block
      redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.destroyed_msg')
    end
    
          @form         = Form::StatusBatch.new(form_status_batch_params.merge(current_account: current_account, action: action_from_button))
      flash[:alert] = I18n.t('admin.statuses.failed_to_execute') unless @form.save
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
      def payload
    @_payload ||= request.body.read
  end
    
        self.store(key, value) if (stored == false)
    self.dcase_hash[key.downcase] = value
  end
    
    
  #
  # Payload types were copied from xCAT-server source code (IPMI.pm)
  #
  RMCP_ERRORS = {
    1 => 'Insufficient resources to create new session (wait for existing sessions to timeout)',
    2 => 'Invalid Session ID', #this shouldn't occur...
    3 => 'Invalid payload type',#shouldn't occur..
    4 => 'Invalid authentication algorithm', #if this happens, we need to enhance our mechanism for detecting supported auth algorithms
    5 => 'Invalid integrity algorithm', #same as above
    6 => 'No matching authentication payload',
    7 => 'No matching integrity payload',
    8 => 'Inactive Session ID', #this suggests the session was timed out while trying to negotiate, shouldn't happen
    9 => 'Invalid role',
    0xa => 'Unauthorised role or privilege level requested',
    0xb => 'Insufficient resources to create a session at the requested role',
    0xc => 'Invalid username length',
    0xd => 'Unauthorized name',
    0xe => 'Unauthorized GUID',
    0xf => 'Invalid integrity check value',
    0x10 => 'Invalid confidentiality algorithm',
    0x11 => 'No cipher suite match with proposed security algorithms',
    0x12 => 'Illegal or unrecognized parameter', #have never observed this, would most likely mean a bug in xCAT or IPMI device
  }
    
                k3 = OpenSSL::HMAC.digest('MD5', k1, checksum)
    
              # Encodes the authenticator field
          #
          # @return [String]
          def encode_authenticator
            authenticator.encode
          end
        end
      end
    end
  end
end
    
              def self.attr_accessor(*vars)
            @attributes ||= []
            @attributes.concat vars
            super(*vars)
          end
    
              # Encodes a Rex::Proto::Kerberos::Model::EncryptedData into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            etype_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_etype], 0, :CONTEXT_SPECIFIC)
            elems << etype_asn1
    
          def load_user_roles
        @current_user_roles = @current_api_user ? @current_api_user.spree_roles.pluck(:name) : []
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

    
            def order_id
          super || params[:id]
        end
      end
    end
  end
end

    
            def stock_location
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:id])
        end