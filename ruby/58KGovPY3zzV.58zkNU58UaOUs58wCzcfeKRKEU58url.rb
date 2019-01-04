
        
          def set_statuses
    return unless page_requested?
    
        private
    
        active_session.update!(web_push_subscription: web_subscription)
    
        define_method provider do
      @user = User.find_for_oauth(request.env['omniauth.auth'], current_user)