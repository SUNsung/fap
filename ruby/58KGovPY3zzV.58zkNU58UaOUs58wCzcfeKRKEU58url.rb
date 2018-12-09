
        
            def find_file(path, prefixes = [], *args)
      _find_all(path, prefixes, args, true).first || raise(MissingTemplate.new(self, path, prefixes, *args))
    end
    
        initializer 'action_view.caching' do |app|
      ActiveSupport.on_load(:action_view) do
        if app.config.action_view.cache_template_loading.nil?
          ActionView::Resolver.caching = app.config.cache_classes
        end
      end
    end
    
    module ActionView
  # This class defines the interface for a renderer. Each class that
  # subclasses +AbstractRenderer+ is used by the base +Renderer+ class to
  # render a specific type of object.
  #
  # The base +Renderer+ class uses its +render+ method to delegate to the
  # renderers. These currently consist of
  #
  #   PartialRenderer - Used for rendering partials
  #   TemplateRenderer - Used for rendering other types of templates
  #   StreamingTemplateRenderer - Used for streaming
  #
  # Whenever the +render+ method is called on the base +Renderer+ class, a new
  # renderer object of the correct type is created, and the +render+ method on
  # that new object is called in turn. This abstracts the setup and rendering
  # into a separate classes for partials and templates.
  class AbstractRenderer #:nodoc:
    delegate :find_template, :find_file, :template_exists?, :any_templates?, :with_fallbacks, :with_layout_format, :formats, to: :@lookup_context
    
          private
    
            # Should be overriden if you have areas of your checkout that don't match
        # up to a step within checkout_steps, such as a registration step
        def skip_state_validation?
          false
        end
    
            def scope
          if params[:product_id]
            Spree::Product.friendly.find(params[:product_id])
          elsif params[:variant_id]
            Spree::Variant.find(params[:variant_id])
          end
        end
      end
    end
  end
end

    
            def update
          @option_type = Spree::OptionType.accessible_by(current_ability, :update).find(params[:id])
          if @option_type.update_attributes(option_type_params)
            render :show
          else
            invalid_resource!(@option_type)
          end
        end
    
            def new
          authorize! :admin, ReturnAuthorization
        end
    
              count_on_hand = 0
          if params[:stock_item].key?(:count_on_hand)
            count_on_hand = params[:stock_item][:count_on_hand].to_i
            params[:stock_item].delete(:count_on_hand)
          end
    
            private