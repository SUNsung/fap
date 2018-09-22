
        
            Category.transaction do
      lounge.group_names = ['trust_level_3']
      unless lounge.save
        puts lounge.errors.full_messages
        raise 'Failed to set permissions on trust level 3 lounge category!'
      end
    
            unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for Staff category!'
        end
    
        # Accesses a machine by UUID and returns a {MachineIndex::Entry}
    #
    # The entry returned is locked and can't be read again or updated by
    # this process or any other. To unlock the machine, call {#release}
    # with the entry.
    #
    # You can only {#set} an entry (update) when the lock is held.
    #
    # @param [String] uuid UUID for the machine to access.
    # @return [MachineIndex::Entry]
    def get(uuid)
      entry = nil
    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
              @registered.each do |plugin|
            plugin.components.provider_capabilities.each do |provider, caps|
              results[provider].merge!(caps)
            end
          end
    
      it 'raises a TypeError when passed nil' do
    lambda { sleep(nil)   }.should raise_error(TypeError)
  end
    
    describe 'Kernel.test' do
  it 'needs to be reviewed for spec completeness'
end

    
          # Creates a masked version of the authenticity token that varies
      # on each request. The masking is used to mitigate SSL attacks
      # like BREACH.
      def mask_token(token)
        token = decode_token(token)
        one_time_pad = SecureRandom.random_bytes(token.length)
        encrypted_token = xor_byte_strings(one_time_pad, token)
        masked_token = one_time_pad + encrypted_token
        encode_token(masked_token)
      end
    
        it 'sets a session authenticity token if one does not exist' do
      session = {}
      allow(Rack::Protection::AuthenticityToken).to receive(:random_token).and_return(token)
      allow_any_instance_of(Rack::Protection::AuthenticityToken).to receive(:mask_token).and_return(masked_token)
      Rack::Protection::AuthenticityToken.token(session)
      expect(session[:csrf]).to eq(token)
    end
  end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
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

    
            def next
          authorize! :update, @order, order_token
          @order.next!
          respond_with(@order, default_template: 'spree/api/v1/orders/show', status: 200)
        rescue StateMachines::InvalidTransition
          respond_with(@order, default_template: 'spree/api/v1/orders/could_not_transition', status: 422)
        end
    
              @line_item = Spree::Cart::AddItem.call(order: order,
                                                 variant: variant,
                                                 quantity: params[:line_item][:quantity],
                                                 options: line_item_params[:options]).value
          if @line_item.errors.empty?
            respond_with(@line_item, status: 201, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
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