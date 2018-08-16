
        
          # PUT /resource/password
  def update
    self.resource = resource_class.reset_password_by_token(resource_params)
    yield resource if block_given?
    
        if successfully_sent?(resource)
      respond_with({}, location: after_sending_unlock_instructions_path_for(resource))
    else
      respond_with(resource)
    end
  end
    
          included do
        include Devise::Controllers::ScopedViews
      end
    
        # If {#limit_to_network} is disabled, this will always return `true`.
    # Otherwise, return `true` only if all of the given IPs are within the
    # project {#boundary boundaries}.
    
    begin
  require 'bundler/setup'
rescue LoadError
  $stderr.puts '[*] Metasploit requires the Bundler gem to be installed'
  $stderr.puts '    $ gem install bundler'
  exit(1)
end
    
    $stdout.puts res

    
    success = clsJavaCompile._invoke('CompileFromMemory','[Ljava.lang.String;[Ljava.lang.String;[Ljava.lang.String;', classNames, codez, compileOpts)
    
    if $PROGRAM_NAME == __FILE__ && !ENV['COCOAPODS_NO_BUNDLER']
  ENV['BUNDLE_GEMFILE'] = File.expand_path('../../Gemfile', __FILE__)
  require 'rubygems'
  require 'bundler/setup'
  $LOAD_PATH.unshift File.expand_path('../../lib', __FILE__)
elsif ENV['COCOAPODS_NO_BUNDLER']
  require 'rubygems'
  gem 'cocoapods'
end
    
            private
    
          #-----------------------------------------------------------------------#
    end
  end
end
