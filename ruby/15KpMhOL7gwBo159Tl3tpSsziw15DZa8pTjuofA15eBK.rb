
        
              response.success? && response.html? && process_url?(response.effective_url)
    end
    
    @@ layout
<html>
  <head>
    <title>Sinatra + Sidekiq</title>
    <body>
      <%= yield %>
    </body>
</html>
    
      # Highlight code that triggered database queries in logs.
  config.active_record.verbose_query_logs = true
    
      # a summary or description of the package
  attr_accessor :description
    
      option '--postinstall-action', 'POSTINSTALL_ACTION',
    'Post-install action provided in package metadata. ' \
    'Optionally one of '#{POSTINSTALL_ACTIONS.join('', '')}'.' do |value|
    if !POSTINSTALL_ACTIONS.include?(value)
      raise ArgumentError, 'osxpkg-postinstall-action value of '#{value}' is invalid. ' \
        'Must be one of #{POSTINSTALL_ACTIONS.join(', ')}'
    end
    value
  end
    
    	    safesystem('pkgdepend', 'resolve',  '-m', build_path('#{name}.p5m.3'))
      safesystem('cp', build_path('#{name}.p5m.3.res'), manifest_fn)
    end
    
      option '--bin-dir', 'BIN_DIR',
    'Directory to put binaries in'