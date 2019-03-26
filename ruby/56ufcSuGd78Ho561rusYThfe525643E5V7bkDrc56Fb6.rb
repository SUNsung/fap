
        
            def at_xpath(*args)
      doc.at_xpath(*args)
    end
    
        def assert_index(index)
      i = index.is_a?(Integer) ? index : @filters.index(filter_const(index))
      raise 'No such filter to insert: #{index}' unless i
      i
    end
  end
end

    
        private
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
        if self.junk_headers
      while str.length < 4096
        if self.fold
          str << 'X-#{Rex::Text.rand_text_alphanumeric(rand(30) + 5)}:\r\n\t#{Rex::Text.rand_text_alphanumeric(rand(1024) + 1)}\r\n'
        else
          str << 'X-#{Rex::Text.rand_text_alphanumeric(rand(30) + 5)}: #{Rex::Text.rand_text_alphanumeric(rand(1024) + 1)}\r\n'
        end
      end
    end
    
        # Send it off.
    put(response.to_s)
  end
    
    IAX_CTRL_HANGUP   = 1
IAX_CTRL_RINGING  = 3
IAX_CTRL_ANSWER   = 4
IAX_CTRL_BUSY     = 5
IAX_CTRL_PROGRESS = 14
IAX_CTRL_PROCEED  = 15
    
        data =
    [   # Maximum access
      0x00, 0x00,
      # Reserved
      0x00, 0x00
    ].pack('C*') +
    console_session_id +
    [
      0x00, 0x00, 0x00, 0x08,
      0x01, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x08,
      # HMAC-SHA1
      0x01, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x08,
      # AES Encryption
      0x01, 0x00, 0x00, 0x00
    ].pack('C*')
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes the pvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_pvno(input)
            input.value[0].value.to_i
          end
    
              # Decodes the key_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_type(input)
            input.value[0].value.to_i
          end
    
            fields = object.preferences.keys.map do |key|
          if object.has_preference?(key)
            form.label('preferred_#{key}', Spree.t(key) + ': ') +
              preference_field_for(form, 'preferred_#{key}', type: object.preference_type(key))
          end
        end
        safe_join(fields, '<br />'.html_safe)
      end
    
      context 'shipping an order', js: true do
    before do
      visit spree.admin_orders_path
      within_row(1) do
        click_link 'R100'
      end
    end
    
              def serialized_current_order
            serialize_order(spree_current_order)
          end
        end
      end
    end
  end
end

    
            def order_params
          if params[:order]
            normalize_params
            params.require(:order).permit(permitted_order_attributes)
          else
            {}
          end
        end
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
        # Outputs a single category as an <a> link.
    #
    #  +category+ is a category string to format as an <a> link
    #
    # Returns string
    #
    def category_link(category)
      dir = @context.registers[:site].config['category_dir']
      '<a class='category' href='/#{dir}/#{category.to_url}/'>#{category}</a>'
    end
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
      # Used on the blog index to split posts on the <!--more--> marker
  def excerpt(input)
    if input.index(/<!--\s*more\s*-->/i)
      input.split(/<!--\s*more\s*-->/i)[0]
    else
      input
    end
  end