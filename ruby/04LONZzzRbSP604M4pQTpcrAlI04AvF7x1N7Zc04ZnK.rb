    # put the non-standard line terminations back to normal
    # gah.  not having look behinds suck,
    header.gsub!(/([^\r])\n/n,'\1' + '\r\n')
    
        # inject some junk params at the end of the param list, just to be sure :P
    if self.junk_params
      rand(10)+5.times {
        params.push(Rex::Text.rand_text_alpha(rand(32) + 5) + '=' + Rex::Text.rand_text_alpha(rand(64) + 5))
      }
    end
    params.join('&')
  end
    
      #
  # Updates the various parts of the HTTP response command string.
  #
  def update_cmd_parts(str)
    if (md = str.match(/HTTP\/(.+?)\s+(\d+)\s?(.+?)\r?\n?$/))
      self.message = md[3].gsub(/\r/, '')
      self.code    = md[2].to_i
      self.proto   = md[1]
    else
      raise RuntimeError, 'Invalid response command string', caller
    end
    
    require 'rex/proto/ipmi/utils'
    
        data =
    [   # Maximum access
      0x00, 0x00,
      # Reserved
      0x00, 0x00
    ].pack('C*') +
    console_session_id +
    [
      0x00, 0x00, 0x00, 0x08,
      # Cipher 0
      0x00, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x08,
      # Cipher 0
      0x00, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x08,
      # No Encryption
      0x00, 0x00, 0x00, 0x00
    ].pack('C*')
    
              # Rex::Proto::Kerberos::Model::AuthorizationData decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'Authorization Data decoding not supported'
          end
    
              # Decodes the Rex::Proto::Kerberos::Model::KrbError from an input
          #
          # @param input [String, OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::ASN1Data
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode KrbError, invalid input'
            end
    
              # Decodes the key_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_type(input)
            input.value[0].value.to_i
          end
    
            def run
          print_version
          signal_end_of_output
          listen
        end
    
          def link_to_edit(resource, options = {})
        url = options[:url] || edit_object_url(resource)
        options[:data] = { action: 'edit' }
        options[:class] = 'btn btn-primary btn-sm'
        link_to_with_icon('edit', Spree.t(:edit), url, options)
      end
    
            context 'there is not enough stock at the other location' do
          context 'and it cannot backorder' do
            it 'does not allow me to split stock' do
              product.master.stock_items.last.update_column(:backorderable, false)
              product.master.stock_items.last.update_column(:count_on_hand, 0)
    
              def find_spree_current_order
            Spree::Api::Dependencies.storefront_current_order_finder.constantize.new.execute(
              store: spree_current_store,
              user: spree_current_user,
              token: order_token,
              currency: current_currency
            )
          end
    
              if Cart::Update.call(order: @order, params: order_params).success?
            user_id = params[:order][:user_id]
            if current_api_user.has_spree_role?('admin') && user_id
              @order.associate_user!(Spree.user_class.find(user_id))
            end
            respond_with(@order, default_template: :show)
          else
            invalid_resource!(@order)
          end
        end
    
              options = { variants_attrs: variants_params, options_attrs: option_types_params }
          @product = Core::Importer::Product.new(@product, product_params, options).update