
        
              # Check for mixed tab/spaces. Upgrade this to an error() soon.
      if (ln.length > 1) and (ln =~ /^([\t ]*)/) and ($1.match(/\x20\x09|\x09\x20/))
        warn('Space-Tab mixed indent: #{ln.inspect}', idx)
      end
    
        xml_header = %Q|<?xml version='1.0' encoding='UTF-8'?>
\t<c:contact c:Version='1' xmlns:c='http://schemas.microsoft.com/Contact' xmlns:xsi='http://www.w3.org/2001/XMLSchema-instance' xmlns:MSP2P='http://schemas.microsoft.com/Contact/Extended/MSP2P'>
\t<c:CreationDate>2019-04-10T20:19:26Z</c:CreationDate><c:Extended xsi:nil='true'/>
\t|
    
      #
  # Flushes all header pairs.
  #
  def reset
    self.cmd_string = ''
    self.clear
    self.dcase_hash.clear
  end
    
    
      # If we found the resource handler for this resource, call its
      # procedure.
      if (p[1] == true)
        Rex::ThreadFactory.spawn('HTTPServerRequestHandler', false) {
          handler.on_request(cli, request)
        }
      else
        handler.on_request(cli, request)
      end
    else
      elog('Failed to find handler for resource: #{request.resource}',
        LogSource)
    
      def ring_time
    (self.ring_finish || Time.now).to_i - self.ring_start.to_i
  end
    
              # Encodes the msg_type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_msg_type
            bn = OpenSSL::BN.new(msg_type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
    Then(/^the specified stage files are created$/) do
  qa = TestApp.test_app_path.join('config/deploy/qa.rb')
  production = TestApp.test_app_path.join('config/deploy/production.rb')
  expect(File.exist?(qa)).to be true
  expect(File.exist?(production)).to be true
end
    
          def warn_set_scm_is_deprecated
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] `set :scm, #{scm_name.inspect}` is deprecated.
To ensure your project is compatible with future versions of Capistrano,
remove the :scm setting and instead add these lines to your Capfile after
`require 'capistrano/deploy'`:
    
          def escaped_name
        CGI.escape(@name)
      end
    
      test 'clean path without leading slash' do
    assert_equal '/Mordor', clean_path('Mordor')
  end
    
    # internal
require File.expand_path('../gollum/uri_encode_component', __FILE__)
    
    require 'gollum'
require 'gollum/views/layout'
require 'gollum/views/editable'
require 'gollum/views/has_page'
    
        it 'returns nil if an except is provided' do
      valid_article = create(:article, tags: 'explainlikeimfive')
      expect(described_class.new(valid_article, 'explainlikeimfive').tag).to eq(nil)
    end
    
      describe 'POST /users/api_secrets' do
    context 'when create succeeds' do
      let(:valid_params) { { description: 'My Test 3rd Party App' } }
    
    RSpec.describe 'all routes', type: :routing do
  let(:podcast)     { create(:podcast) }
  let(:user)        { create(:user) }
    
        private
    
                if response.cvv_result
              self.cvv_response_code = response.cvv_result['code']
              self.cvv_response_message = response.cvv_result['message']
            end
          end
          send('#{success_state}!')
        else
          send(failure_state)
          gateway_error(response)
        end
      end
    
        def method_missing(method, *args)
      name = method.to_s.delete('=')
      if has_preference? name
        if method.to_s =~ /=$/
          set_preference(name, args.first)
        else
          get_preference name
        end
      else
        super
      end
    end
  end
end

    
          return_items.group_by(&:exchange_variant).map do |variant, variant_return_items|
        variant_inventory_units = variant_return_items.map(&:exchange_inventory_units).flatten
        line_item = Spree::LineItem.create!(variant: variant, quantity: variant_return_items.count, order: order)
        variant_inventory_units.each { |i| i.update!(line_item_id: line_item.id, order_id: order.id) }
      end
    
            def show
          authorize! :show, @order, order_token
          @address = find_address
          respond_with(@address)
        end
    
            def inventory_unit
          @inventory_unit ||= InventoryUnit.accessible_by(current_ability, :show).find(params[:id])
        end
    
            def destroy
          @option_value = scope.accessible_by(current_ability, :destroy).find(params[:id])
          @option_value.destroy
          render plain: nil, status: 204
        end