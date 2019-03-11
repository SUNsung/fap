
        
                  def render_collection
            @collection.map do |item|
              value = value_for_collection(item, @value_method)
              text  = value_for_collection(item, @text_method)
              default_html_options = default_html_options_for_collection(item, value)
              additional_html_options = option_html_attributes(item)
    
    require 'action_view/helpers/tags/placeholderable'
    
          cattr_accessor :type_klass
    
        class ClearHelpersTest < ActiveSupport::TestCase
      def setup
        @controller = HelperyTestController.new
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
    
              # Encodes the auth_time field
          #
          # @return [String]
          def encode_auth_time
            [auth_time].pack('N')
          end
    
                checksum = cipher[0, 16]
            data = cipher[16, cipher.length - 1]
    
              # Decodes the pa_data from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Array<Rex::Proto::Kerberos::Model::PreAuthData>]
          def decode_asn1_pa_data(input)
            pre_auth = []
            input.value[0].value.each do |pre_auth_data|
              pre_auth << Rex::Proto::Kerberos::Model::PreAuthData.decode(pre_auth_data)
            end
    
              # Decodes the till field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_till(input)
            input.value[0].value
          end
    
          def link_to_with_icon(icon_name, text, url, options = {})
        options[:class] = (options[:class].to_s + ' icon-link with-tip action-#{icon_name}').strip
        options[:title] = text if options[:no_text]
        text = options[:no_text] ? '' : content_tag(:span, text, class: 'text')
        options.delete(:no_text)
        if icon_name
          icon = content_tag(:span, '', class: '#{'mr-2' unless text.empty?} icon icon-#{icon_name}')
          text.insert(0, icon + ' ')
        end
        link_to(text.html_safe, url, options)
      end
    
                it 'adds variant to order just fine' do
              select2_search tote.name, from: Spree.t(:name_or_sku)
              within('table.stock-levels') do
                fill_in 'stock_item_quantity', with: 1
                click_icon :add
              end
    
    describe 'Shipments', type: :feature do
  stub_authorization!
    
              def render_order(result)
            if result.success?
              render_serialized_payload { serialized_current_order }
            else
              render_error_payload(result.error)
            end
          end
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
                if @order.completed? || @order.next
              state_callback(:after)
              respond_with(@order, default_template: 'spree/api/v1/orders/show')
            else
              respond_with(@order, default_template: 'spree/api/v1/orders/could_not_transition', status: 422)
            end
          else
            invalid_resource!(@order)
          end
        end
    
    run SinatraStaticServer

    
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
    
        def html_output_for(script_url, code)
      code = CGI.escapeHTML code
      <<-HTML
<div><script src='#{script_url}'></script>
<noscript><pre><code>#{code}</code></pre></noscript></div>
      HTML
    end
    
        def self.clear
      instance.clear
    end
    
          original_extension = extension(attachment, style_name)
      style = attachment.styles[style_name.to_s.to_sym]
      if style && style[:format]
        style[:format].to_s
      elsif extensions_for_mime_type.include? original_extension
        original_extension
      elsif !extensions_for_mime_type.empty?
        extensions_for_mime_type.first
      else
        # It's possible, though unlikely, that the mime type is not in the
        # database, so just use the part after the '/' in the mime type as the
        # extension.
        %r{/([^/]*)\z}.match(attachment.content_type)[1]
      end
    end