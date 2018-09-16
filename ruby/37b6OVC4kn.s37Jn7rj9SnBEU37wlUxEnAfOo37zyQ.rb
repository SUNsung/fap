
        
              Notification.create!(read: false,
                           user_id: user.id,
                           topic_id: t.id,
                           post_number: 1,
                           data: '{}',
                           notification_type: Notification.types[:private_message])
    
    gem 'activemodel-serializers-xml', github: 'rails/activemodel-serializers-xml'
    
      if respond_to?(:helper_method)
    helpers = %w(resource scope_name resource_name signed_in_resource
                 resource_class resource_params devise_mapping)
    helper_method(*helpers)
  end
    
      def test_returns_success
    Warden.test_mode!
    
      before do
    if request.host == OUT_HOST && !request.path.start_with?('/s/')
      query_string = '?#{request.query_string}' unless request.query_string.empty?
      redirect 'https://devdocs.io#{request.path}#{query_string}', 302
    end
  end
    
          def store_page?(page)
        page[:entries].present?
      end
    
        def filter_const(name)
      if name.is_a? Array
        name.map &method(:filter_const)
      else
        Docs.const_get '#{name}_filter'.camelize
      end
    end
    
          private
    
            reaction
      end