
        
                  def initialize(template_object, object_name, method_name, object, tag_value)
            @template_object = template_object
            @object_name = object_name
            @method_name = method_name
            @object = object
            @tag_value = tag_value
          end
    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end
    
      private
    
        render json: web_subscription, serializer: REST::WebPushSubscriptionSerializer
  end
    
      private
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
          def self.options
        options = []
        options.concat(super.reject { |option, _| option == '--silent' })
      end
    
          # Returns the body of the `for` loop.
      #
      # @return [Node, nil] The body of the `for` loop.
      def body
        node_parts[2]
      end
    end
  end
end

    
              delta(first.key.loc, second.key.loc, alignment)
        end
    
        def directive_parts(comment)
      match = comment.text.match(COMMENT_DIRECTIVE_REGEXP)
      return unless match
    
      test 'rename page catches non-existent target' do
    # Non-existent rename target
    post '/rename/B', :message => 'def'
    assert !last_response.ok?
    assert_equal last_response.status, 500
  end
    
        assert body.include?('<span class='username'>Charles Pence</span>'), '/latest_changes should include the Author Charles Pence'
    assert body.include?('a8ad3c0'), '/latest_changes should include the :latest_changes_count commit'
    assert !body.include?('60f12f4'), '/latest_changes should not include more than latest_changes_count commits'
    assert body.include?('<a href='Data-Two.csv/874f597a5659b4c3b153674ea04e406ff393975e'>Data-Two.csv</a>'), '/latest_changes include links to modified files in #{body}'
    assert body.include?('<a href='Hobbit/874f597a5659b4c3b153674ea04e406ff393975e'>Hobbit.md</a>'), '/latest_changes should include links to modified pages in #{body}'
  end
    
    
    
                expect(order.shipments.count).to eq(2)
            expect(order.shipments.first.inventory_units_for(product.master).sum(&:quantity)).to eq(1)
            expect(order.shipments.last.inventory_units_for(product.master).sum(&:quantity)).to eq(1)
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
    
              if Spree::Dependencies.cart_update_service.constantize.call(order: @order, params: line_items_attributes).success?
            @line_item.reload
            respond_with(@line_item, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
            def apply_coupon_code
          find_order
          authorize! :update, @order, order_token
          @order.coupon_code = params[:coupon_code]
          @handler = PromotionHandler::Coupon.new(@order).apply
          status = @handler.successful? ? 200 : 422
          render 'spree/api/v1/promotions/handler', status: status
        end
    
              def serialize_shipping_rates(shipments)
            shipping_rates_serializer.new(
              shipments,
              include: [:shipping_rates],
              params: { show_rates: true }
            ).serializable_hash
          end
        end
      end
    end
  end
end

    
          @@order_attributes = [
        :id, :number, :item_total, :total, :ship_total, :state, :adjustment_total,
        :user_id, :created_at, :updated_at, :completed_at, :payment_total,
        :shipment_state, :payment_state, :email, :special_instructions, :channel,
        :included_tax_total, :additional_tax_total, :display_included_tax_total,
        :display_additional_tax_total, :tax_total, :currency, :considered_risky,
        :canceler_id
      ]
    
    # Add a script to run after install (should be in the current directory):
package.scripts[:after_install] = 'my_after_install_script.sh'
    
        @name = nil
    @architecture = 'native'
    @description = 'no description given'
    @version = nil
    @epoch = nil
    @iteration = nil
    @url = nil
    @category = 'default'
    @license = 'unknown'
    @vendor = 'none'
    
    # This provides PHP PEAR package support.
#
# This provides input support, but not output support.
class FPM::Package::PEAR < FPM::Package
  option '--package-name-prefix', 'PREFIX',
    'Name prefix for pear package', :default => 'php-pear'
    
        File.write(build_path('packlist'), files.sort.join('\n'))
    
      # Input a tarball. Compressed tarballs should be OK.
  def input(input_path)
    # use part of the filename as the package name
    self.name = File.basename(input_path).split('.').first
    
    When /^I turn off class caching$/ do
  cd('.') do
    file = 'config/environments/test.rb'
    config = IO.read(file)
    config.gsub!(%r{^\s*config.cache_classes.*$},
                 'config.cache_classes = false')
    File.open(file, 'w'){|f| f.write(config) }
  end
end
    
        # Hash assignment of interpolations. Included only for compatibility,
    # and is not intended for normal use.
    def self.[]= name, block
      define_method(name, &block)
      @interpolators_cache = nil
    end