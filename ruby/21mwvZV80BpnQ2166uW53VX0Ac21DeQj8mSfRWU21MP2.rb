
        
                class RadioButtonBuilder < Builder # :nodoc:
          def radio_button(extra_html_options = {})
            html_options = extra_html_options.merge(@input_html_options)
            html_options[:skip_default_ids] = false
            @template_object.radio_button(@object_name, @method_name, @value, html_options)
          end
        end
    
              content_is_options = content_or_options.is_a?(Hash)
          if content_is_options
            options.merge! content_or_options
            @content = nil
          else
            @content = content_or_options
          end
    
    require 'action_view/helpers/tags/placeholderable'
    
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
    
        private
    
            css('.code-example > h4').each do |node|
          node['class'] = 'pre-title'
        end
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
            css('pre > code').each do |node|
          node['class'] ||= ''
          lang = if node['class'].include?('lang-html') || node.content =~ /\A</
            'html'
          elsif node['class'].include?('lang-css')
            'css'
          elsif node['class'].include?('lang-js') || node['class'].include?('lang-javascript')
            'javascript'
          end
          node.parent['data-language'] = lang if lang