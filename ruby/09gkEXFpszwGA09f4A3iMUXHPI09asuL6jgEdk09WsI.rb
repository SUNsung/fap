
        
                if options[:bootstrap]
          template 'config/initializers/simple_form_bootstrap.rb'
        elsif options[:foundation]
          template 'config/initializers/simple_form_foundation.rb'
        end
    
      config.wrappers :horizontal_form, tag: 'div', class: 'row', hint_class: :field_with_hint, error_class: :error, valid_class: :valid do |b|
    b.use :html5
    b.use :placeholder
    b.optional :maxlength
    b.optional :minlength
    b.optional :pattern
    b.optional :min_max
    b.optional :readonly
    
          def simple_fields_for(record_name, record_object = nil, options = {}, &block)
        options, record_object = record_object, nil if record_object.is_a?(Hash) && record_object.extractable_options?
        options[:builder] ||= SimpleForm::FormBuilder
    
            '#{html_escape(options[:error_prefix])} #{html_escape(text)}'.lstrip.html_safe
      end
    
          def label_input(wrapper_options = nil)
        if options[:label] == false
          deprecated_component(:input, wrapper_options)
        else
          deprecated_component(:label, wrapper_options) + deprecated_component(:input, wrapper_options)
        end
      end
    
            def i18n_scope
          SimpleForm.i18n_scope
        end
      end
    
          def attribute_validators
        object.class.validators_on(attribute_name)
      end
    
            if collection_translated || collection_classes.include?(Array)
          { label: :first, value: :second }
        elsif collection_includes_basic_objects?(collection_classes)
          { label: :to_s, value: :to_s }
        else
          detect_method_from_class(collection_classes)
        end
      end
    
      context 'raise-out environment' do
    before do
      @rack_env = ENV['RACK_ENV']
      ENV['RACK_ENV'] = 'test'
    
          it 'respects SCRIPT_NAME (a.k.a. BaseURI)' do
        response = strategy.call(make_env('/auth/test', 'SCRIPT_NAME' => '/sub_uri'))
        expect(response[1]['Location']).to eq('/sub_uri/auth/test/callback')
      end