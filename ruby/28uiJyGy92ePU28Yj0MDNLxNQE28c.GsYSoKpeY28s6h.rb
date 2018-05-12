
        
            def register_sprockets
      Sprockets.append_path(stylesheets_path)
      Sprockets.append_path(fonts_path)
      Sprockets.append_path(javascripts_path)
    end
  end
end
    
      # Show full error reports and disable caching.
  config.consider_all_requests_local       = true
  config.action_controller.perform_caching = false
    
          def delete_authorization_session_variables
        session.delete(:client_id)
        session.delete(:response_type)
        session.delete(:redirect_uri)
        session.delete(:scopes)
        session.delete(:state)
        session.delete(:nonce)
      end
    
          attr_reader :agent
    
          def define_deprecated_accessors_for(option, opts, &block)
        define_deprecated_writer_for(option, opts, &block)
      end
    
          def clear
        entries.clear
      end