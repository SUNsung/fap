
        
            def log_processed(name)
      puts green '    #{name}'
    end
    
      #forward some requests to status message, because a poll is just attached to a status message and is not sharable itself
  delegate :author_id, :diaspora_handle, :public?, :subscribers, to: :status_message
    
          interp = node_or_interp
      after_string_or_interp =
        if interp.after
          to_string_interpolation(interp.after)
        else
          string_literal('')
        end
      if interp.after && interp.whitespace_after
        after_string_or_interp = concat(string_literal(' '), after_string_or_interp)
      end
    
      def api_error?(error)
    error.is_a?(LogStash::Api::ApiError)
  end