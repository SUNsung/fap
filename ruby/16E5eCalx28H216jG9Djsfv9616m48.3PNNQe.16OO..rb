
        
                def location
          location = get_info(:address)
          if location.is_a?(Hash)
            [location.locality.presence, location.country.presence].compact.join(', ')
          else
            location
          end
        end
    
          def find_sessionless_user
        find_user_from_access_token || find_user_from_feed_token
      rescue Gitlab::Auth::AuthenticationError
        nil
      end
    
            MergeRequest
          .where(id: start_id..stop_id)
          .where(latest_merge_request_diff_id: nil)
          .each_batch(of: BATCH_SIZE) do |relation|