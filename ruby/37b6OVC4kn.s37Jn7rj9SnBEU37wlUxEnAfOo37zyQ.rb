
        
        ###
### dependencies
###
    
          def handle_start_point_response(endpoint)
        _status, header, response = endpoint.call(request.env)
        if response.redirect?
          redirect_to header['Location']
        else
          save_params_and_render_consent_form(endpoint)
        end
      end
    
    post '/' do
  connections.each { |out| out << 'data: #{params[:msg]}\n\n' }
  204 # response without entity body
end
    
          def drop_session(env)
        session(env).clear if session? env
      end
    
        it 'denies requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end