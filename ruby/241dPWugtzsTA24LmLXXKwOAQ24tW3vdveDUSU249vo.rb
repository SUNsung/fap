
        
            # Fetch a var from the context
    # @param [Symbol] variable The variable to fetch
    # @param [Object] default  The default value if not found
    #
    def fetch(*args)
      context.fetch(*args)
    end
    
      mkdir_p deploy_dir