
        
                  def placeholder_required?(html_options)
            # See https://html.spec.whatwg.org/multipage/forms.html#attr-select-required
            html_options['required'] && !html_options['multiple'] && html_options.fetch('size', 1).to_i == 1
          end
    
                  time = Time.current
    
        initializer 'action_view.embed_authenticity_token_in_remote_forms' do |app|
      ActiveSupport.on_load(:action_view) do
        ActionView::Helpers::FormTagHelper.embed_authenticity_token_in_remote_forms =
          app.config.action_view.delete(:embed_authenticity_token_in_remote_forms)
      end
    end
    
          def instrument(name, **options) # :doc:
        options[:identifier] ||= (@template && @template.identifier) || @path
    
        # Main render entry point shared by Action View and Action Controller.
    def render(context, options)
      if options.key?(:partial)
        render_partial(context, options)
      else
        render_template(context, options)
      end
    end
    
    class SinatraStaticServer < Sinatra::Base
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file
    
      # Extracts raw content DIV from template, used for page description as {{ content }}
  # contains complete sub-template code on main page level
  def raw_content(input)
    /<div class='entry-content'>(?<content>[\s\S]*?)<\/div>\s*<(footer|\/article)>/ =~ input
    return (content.nil?) ? input : content
  end
    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''