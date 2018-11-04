
        
        describe 'Kernel#throw' do
  it 'is a private method' do
    Kernel.should have_private_instance_method(:throw)
  end
end

    
        $Kernel_trace_var_global = 'foo'
    captured.should == 'foo'
  end
    
        def URIAddEncodedOctetToBuffer(octet, result, index)
      result[index] = 37; # Char code of '%'.
      index         += 1
      result[index] = @@hexCharCodeArray[octet >> 4];
      index         += 1
      result[index] = @@hexCharCodeArray[octet & 0x0F];
      index += 1
      return index;
    end
    
        assert last_response.ok?
    assert_match /りんご/, last_response.body
    assert_match /みかん/, last_response.body
    assert_match /バナナ/, last_response.body
    assert_match /スイカ/, last_response.body
  end
    
      base_path = wiki_options[:base_path]
    
        def emoji(name)
      if emoji = Gemojione.index.find_by_name(name)
        IO.read(EMOJI_PATHNAME.join('#{emoji['unicode']}.png'))
      else
        fail ArgumentError, 'emoji `#{name}' not found'
      end
    end
    
      s.executables = ['gollum']
    
          before_action :set_content_type
      before_action :load_user
      before_action :authorize_for_order, if: proc { order_token.present? }
      before_action :authenticate_user
      before_action :load_user_roles
    
            def state_callback(before_or_after = :before)
          method_name = :'#{before_or_after}_#{@order.state}'
          send(method_name) if respond_to?(method_name, true)
        end
    
            def cancel
          authorize! :update, @order, params[:token]
          @order.canceled_by(current_api_user)
          respond_with(@order, default_template: :show)
        end