
        
                    value = options.fetch(:selected) { value() }
            select = content_tag('select', add_options(option_tags, options, value), html_options)
    
            class RadioButtonBuilder < Builder # :nodoc:
          def radio_button(extra_html_options = {})
            html_options = extra_html_options.merge(@input_html_options)
            html_options[:skip_default_ids] = false
            @template_object.radio_button(@object_name, @method_name, @value, html_options)
          end
        end