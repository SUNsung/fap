          def instantiate_builder(builder_class, item, value, text, html_options)
            builder_class.new(@template_object, @object_name, @method_name, item,
                              sanitize_attribute_name(value), text, value, html_options)
          end
    
                  time = Time.current
    
              def field_type
            self.class.field_type
          end
      end
    end
  end
end

    
          def self.[](type)
        type_klass[type]
      end