
        
          def human?
    params.has_key?('human') && (params['human'].nil? || as_boolean(params['human']) == true)
  end
end

    
        # Simple callback system. Implements before and after callbacks for
    # use within the controllers.
    #
    # We didn't use the ActiveSupport callbacks because they do not support
    # passing in any arbitrary object into the callback method (which we
    # need to do)