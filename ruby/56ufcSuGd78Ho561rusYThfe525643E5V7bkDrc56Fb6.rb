
        
          def respond_to_on_destroy
    # We actually need to hardcode this as Rails default responder doesn't
    # support returning empty response on GET request
    respond_to do |format|
      format.all { head :no_content }
      format.any(*navigational_formats) { redirect_to after_sign_out_path_for(resource_name) }
    end
  end
end

    
              self.reset_password_token   = enc
          self.reset_password_sent_at = Time.now.utc
          save(validate: false)
          raw
        end
    
          def escape_string(str)
        str = @escaper.escape_url(str)        if @url
        str = @escaper.escape_html(str)       if @html
        str = @escaper.escape_javascript(str) if @javascript
        str
      end
    end
  end
end

    
      # Get the contents of the script by a given name.
  #
  # If template_scripts? is set in attributes (often by the --template-scripts
  # flag), then apply it as an ERB template.
  def script(script_name)
    if attributes[:template_scripts?]
      erb = ERB.new(scripts[script_name], nil, '-')
      # TODO(sissel): find the original file name for the file.
      erb.filename = 'script(#{script_name})'
      return erb.result(binding)
    else
      return scripts[script_name]
    end
  end # def script
    
        # npm installs dependencies in the module itself, so if you do
    # 'npm install express' it installs dependencies (like 'connect')
    # to: node_modules/express/node_modules/connect/...
    #
    # To that end, I don't think we necessarily need to include
    # any automatic dependency information since every 'npm install'
    # is fully self-contained. That's why you don't see any bother, yet,
    # to include the package's dependencies in here.
    #
    # It's possible someone will want to decouple that in the future,
    # but I will wait for that feature request.
  end
    
          scripts_path(filename).tap do |pkgscript|
        logger.info('Writing pkg script', :source => filename, :target => pkgscript)
        File.write(pkgscript, script(scriptname))
        # scripts are required to be executable
        File.chmod(0755, pkgscript)
      end
    end
  end # def write_scripts
    
        attributes[:pleaserun_name] ||= File.basename(command.first)
    attributes[:prefix] ||= '/usr/share/pleaserun/#{attributes[:pleaserun_name]}'
    
        def default_for(key)
      self.class.send key
    end