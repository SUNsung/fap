
        
          # Raises error for missing translations
  # config.action_view.raise_on_missing_translations = true
    
      # Configure public file server for tests with Cache-Control for performance.
  config.public_file_server.enabled = true
  config.public_file_server.headers = {
    'Cache-Control' => 'public, max-age=#{1.hour.to_i}'
  }