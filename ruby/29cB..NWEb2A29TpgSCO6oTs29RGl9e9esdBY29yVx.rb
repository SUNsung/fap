
        
              def handle_start_point_response(endpoint)
        _status, header, response = endpoint.call(request.env)
        if response.redirect?
          redirect_to header['Location']
        else
          save_params_and_render_consent_form(endpoint)
        end
      end
    
      module Option
    
      puts '\n== Removing old logs and tempfiles =='
  system 'rm -f log/*'
  system 'rm -rf tmp/cache'
    
      # Raise an error on page load if there are pending migrations.
  config.active_record.migration_error = :page_load