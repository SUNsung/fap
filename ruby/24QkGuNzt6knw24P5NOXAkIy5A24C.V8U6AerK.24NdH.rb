
        
            def valid_type?(type)
      const_get(:TYPES).include?(type)
    end
    
          logger.log(sev, message)
    end
    
      included do
    include Oauthable
    
      def load_event
    @event = current_user.events.find(params[:id])
  end
end

    
          if create && !path.directory?
        odebug 'Creating metadata directory #{path}.'
        path.mkpath
      end