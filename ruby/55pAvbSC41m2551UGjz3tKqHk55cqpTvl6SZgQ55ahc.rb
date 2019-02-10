
        
                  content_is_options = content_or_options.is_a?(Hash)
          if content_is_options
            options.merge! content_or_options
            @content = nil
          else
            @content = content_or_options
          end
    
            private
    
        # Render but returns a valid Rack body. If fibers are defined, we return
    # a streaming body that renders the template piece by piece.
    #
    # Note that partials are not supported to be rendered with streaming,
    # so in such cases, we just wrap them in an array.
    def render_body(context, options)
      if options.key?(:partial)
        [render_partial(context, options)]
      else
        StreamingTemplateRenderer.new(@lookup_context).render(context, options)
      end
    end
    
        # The content passed to this environment. This is naturally only set
    # for mixin body environments with content passed in.
    #
    # @return {[Array<Sass::Tree::Node>, Environment]?} The content nodes and
    #   the lexical environment of the content block.
    def content
      @content || (@parent && @parent.content)
    end
    
      s.author    = 'You'
  s.email     = 'you@example.com'
  s.homepage  = 'https://github.com/your-github-handle/<%= file_name %>'
  s.license = 'BSD-3-Clause'
    
          it 'returns proper links data' do
        expect(json_response['links']['self']).to include('/api/v2/storefront/account/orders')
        expect(json_response['links']['next']).to include('/api/v2/storefront/account/orders?page=1')
        expect(json_response['links']['prev']).to include('/api/v2/storefront/account/orders?page=1')
      end
    end
    
        it 'return JSON API payload of User and associations (default billing and shipping address)' do
      expect(json_response['data']).to have_id(user.id.to_s)
      expect(json_response['data']).to have_type('user')
      expect(json_response['data']).to have_relationships(:default_shipping_address, :default_billing_address)
    
        shared_examples 'apply coupon code' do
      before { execute }
    
        context 'as a guest user with token' do
      before { get '/api/v2/storefront/order_status/#{order.number}', headers: headers_order_token }
    
              def serialize_resource(resource)
            resource_serializer.new(
              resource,
              include: resource_includes,
              sparse_fields: sparse_fields
            ).serializable_hash
          end
    
              def serialize_order(order)
            resource_serializer.new(order.reload, include: resource_includes, fields: sparse_fields).serializable_hash
          end
    
            include Spree::Core::ControllerHelpers::Auth
        include Spree::Core::ControllerHelpers::Order
        # This before_action comes from Spree::Core::ControllerHelpers::Order
        skip_before_action :set_current_order