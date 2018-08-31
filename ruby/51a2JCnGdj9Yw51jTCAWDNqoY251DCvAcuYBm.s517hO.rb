
        
                if msg = blacklisted?(query)
          if count > 0
            puts
            puts 'If you meant #{query.inspect} precisely:'
            puts
          end
          puts msg
        elsif count == 0
          puts 'No formula found for #{query.inspect}.'
          begin
            GitHub.print_pull_requests_matching(query)
          rescue GitHub::Error => e
            SEARCH_ERROR_QUEUE << e
          end
        end
      end
    end
    
              entry.public_send(selected_attr) # rubocop:disable GitlabSecurity/PublicSend
        end
      end
    end
  end
end

    
          def current_request
        @current_request ||= ensure_action_dispatch_request(request)
      end
    
          class MergeRequest < ActiveRecord::Base
        self.table_name = 'merge_requests'
    
            def value_text
          STATUS_RENAME[@status.to_s] || @status.to_s
        end