
        
          #
  # More advanced [] that does downcase comparison.
  #
  def [](key)
    begin
      rv = self.fetch(key)
    rescue IndexError
      rv = nil
    end
    if (rv == nil)
      begin
        rv = self.dcase_hash[key.downcase]
      rescue IndexError
        rv = nil
      end
    end
    
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
    
              # Decodes the error_code field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_error_code(input)
            input.value[0].value.to_i
          end
    
    # The module that contains everything Sass-related:
#
# * {Sass::Engine} is the class used to render Sass/SCSS within Ruby code.
# * {Sass::Plugin} is interfaces with web frameworks (Rails and Merb in particular).
# * {Sass::SyntaxError} is raised when Sass encounters an error.
# * {Sass::CSS} handles conversion of CSS to Sass.
#
# Also see the {file:SASS_REFERENCE.md full Sass reference}.
module Sass
  class << self
    # @private
    attr_accessor :tests_running
  end
    
        # The name of the mixin in which the error occurred.
    # This could be `nil` if the error occurred outside a mixin.
    #
    # @return [String]
    def sass_mixin
      sass_backtrace.first[:mixin]
    end
    
          if output_path
        @options[:to] ||=
          case output_path
          when /\.scss$/; :scss
          when /\.sass$/; :sass
          end
      end
    
          Sass::Plugin.on_template_modified do |template|
        puts '>>> Change detected to: #{template}'
        STDOUT.flush
      end
      Sass::Plugin.on_template_created do |template|
        puts '>>> New template detected: #{template}'
        STDOUT.flush
      end
      Sass::Plugin.on_template_deleted do |template|
        puts '>>> Deleted template detected: #{template}'
        STDOUT.flush
      end
    
    
    
              compare_with_real_token token, session
    
          def csp_policy
        directives = []
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
              it 'does not allow a shipment to split stock to itself' do
            within_row(1) { click_icon 'split' }
            targetted_select2 order.shipments.first.number, from: '#s2id_item_stock_location'
            fill_in 'item_quantity', with: 1
    
        it 'can still be displayed' do
      expect { visit spree.edit_admin_order_path(order) }.not_to raise_error
    end
  end
    
      context 'editing variant option types' do
    it 'allows an admin to create option types for a variant' do
      within_row(1) { click_icon :edit }
    
          link_to text.html_safe, spree.cart_path, class: 'cart-info nav-link #{css_class}'
    end
    
            private
    
              @line_item = Spree::Dependencies.cart_add_item_service.constantize.call(order: order,
                                                                                  variant: variant,
                                                                                  quantity: params[:line_item][:quantity],
                                                                                  options: line_item_params[:options]).value
          if @line_item.errors.empty?
            respond_with(@line_item, status: 201, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
      <h3>Messages</h3>
  <% @messages.each do |msg| %>
    <p><%= msg %></p>
  <% end %>

    
    
    
      end
end

    
        def using?(middleware)
      middlewares.any? do |(m,_)|
        m.kind_of?(Array) && (m[0] == middleware || m[0].kind_of?(middleware))
      end
    end