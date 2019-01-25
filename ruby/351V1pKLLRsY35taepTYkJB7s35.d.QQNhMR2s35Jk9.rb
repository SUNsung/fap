
        
            # Controls whether an action should be rendered using a layout.
    # If you want to disable any <tt>layout</tt> settings for the
    # current action so that it is rendered without a layout then
    # either override this method in your controller to return false
    # for that action or set the <tt>action_has_layout</tt> attribute
    # to false before rendering.
    def action_has_layout?
      @_action_has_layout
    end
    
        # Main render entry point shared by Action View and Action Controller.
    def render(context, options)
      if options.key?(:partial)
        render_partial(context, options)
      else
        render_template(context, options)
      end
    end