
        
              def installed_gem_version(gem_name)
        Gem.loaded_specs[gem_name].version
      end
    
        # Fetch a var from the context
    # @param [Symbol] variable The variable to fetch
    # @param [Object] default  The default value if not found
    #
    def fetch(*args)
      context.fetch(*args)
    end