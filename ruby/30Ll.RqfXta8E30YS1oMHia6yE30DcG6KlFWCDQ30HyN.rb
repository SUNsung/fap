
        
                if parallel?
          raise RateLimitError
        else
          sleep(rate_limit_resets_in)
        end
      end
    
              new(hash)
        end