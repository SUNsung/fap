
        
                # This returns all the config classes for the various providers.
        #
        # @return [Hash]
        def provider_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:provider])
            end
          end
        end
    
            # Registers a SIGINT handler. This typically is called from {busy}.
        # Callbacks are only registered once, so calling this multiple times
        # with the same callback has no consequence.
        def register(sig_callback)
          @@mutex.synchronize do
            registered << sig_callback
            registered.uniq!