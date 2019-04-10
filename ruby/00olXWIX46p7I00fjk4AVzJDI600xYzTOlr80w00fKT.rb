        def initialize(object_name, method_name, template_object, checked_value, unchecked_value, options)
          @checked_value   = checked_value
          @unchecked_value = unchecked_value
          super(object_name, method_name, template_object, options)
        end
    
                options = options.dup
            options[:field_name]           = @method_name
            options[:include_position]     = true
            options[:prefix]             ||= @object_name
            options[:index]                = @auto_index if @auto_index && !options.has_key?(:index)
    
                content
          end
        end
    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
            assert_equal size, cache.size
      end
    
          def mask_authenticity_token(session)
        token = set_token(session)
        mask_token(token)
      end
    
      it 'should ignore CSP3 no arg directives unless they are set to true' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :block_all_mixed_content => false, :disown_opener => 'false', :upgrade_insecure_requests => 'foo'