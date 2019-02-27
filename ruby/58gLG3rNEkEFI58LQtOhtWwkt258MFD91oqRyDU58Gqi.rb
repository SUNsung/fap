
        
          # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
          def parse_uri(location)
        location && URI.parse(location)
      rescue URI::InvalidURIError
        nil
      end
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
        # Receives an object and find a scope for it. If a scope cannot be found,
    # raises an error. If a symbol is given, it's considered to be the scope.
    def self.find_scope!(obj)
      obj = obj.devise_scope if obj.respond_to?(:devise_scope)
      case obj
      when String, Symbol
        return obj.to_sym
      when Class
        Devise.mappings.each_value { |m| return m.name if obj <= m.to }
      else
        Devise.mappings.each_value { |m| return m.name if obj.is_a?(m.to) }
      end
    
        # Creates configuration values for Devise and for the given module.
    #
    #   Devise::Models.config(Devise::Models::DatabaseAuthenticatable, :stretches)
    #
    # The line above creates:
    #
    #   1) An accessor called Devise.stretches, which value is used by default;
    #
    #   2) Some class methods for your model Model.stretches and Model.stretches=
    #      which have higher priority than Devise.stretches;
    #
    #   3) And an instance method stretches.
    #
    # To add the class methods you need to have a module ClassMethods defined
    # inside the given class.
    #
    def self.config(mod, *accessors) #:nodoc:
      class << mod; attr_accessor :available_configs; end
      mod.available_configs = accessors
    
            it_behaves_like 'returns 400 HTTP status'
      end
    
      describe 'checkout#advance' do
    let(:execute) { patch '/api/v2/storefront/checkout/advance', headers: headers }
    
              it 'returns products sorted by updated_at with descending order' do
            expect(json_response['data'].count).to      eq Spree::Product.count
            expect(json_response['data'].pluck(:id)).to eq Spree::Product.order(updated_at: :desc).pluck(:id).map(&:to_s)
          end
        end
      end
    end
    
        context 'by ids' do
      before { get '/api/v2/storefront/taxons?ids=#{taxons.map(&:id).join(',')}' }
    
              def serialize_resource(resource)
            resource_serializer.new(
              resource,
              include: resource_includes,
              sparse_fields: sparse_fields
            ).serializable_hash
          end
    
        match 'v:api/*path', to: redirect { |params, request|
      format = '.#{params[:format]}' unless params[:format].blank?
      query  = '?#{request.query_string}' unless request.query_string.blank?
    }
    
          private
    
              def serialize_order(order)
            resource_serializer.new(order.reload, include: resource_includes, fields: sparse_fields).serializable_hash
          end