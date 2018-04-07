
        
              # This gets the value of the block with the given key.
      def get(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$\r?\n?(.*?)\r?\n?^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        match  = regexp.match(@value)
        return nil if !match
        match[1]
      end
    
              # Parse the options
          argv = parse_options(opts)
          return if !argv
          raise Vagrant::Errors::CLIInvalidUsage, help: opts.help.chomp if argv.length != 3
    
    output = File.new(OUTPUT_FILENAME, 'wb')
output.write(xml.target!)
output.close
    
        unless user
      EmailInviter.new(email, inviter).send!
      flash[:notice] = 'invitation sent to #{email}'
    else
      flash[:notice]= 'error sending invite to #{email}'
    end
    redirect_to user_search_path, :notice => flash[:notice]
  end
    
          def handle_prompt(prompt, auth)
        if prompt.include? 'select_account'
          handle_params_error('account_selection_required',
                              'There is no support for choosing among multiple accounts')
        elsif prompt.include? 'consent'
          request_authorization_consent_form
        else
          handle_authorization_form(auth)
        end
      end
    
          subdir = parent.join(leaf)
    
    end
    
      def prefixes
    prefixes = ['/bin', '/usr/bin', '/usr/libexec', xcode_app_path]
    prefixes << `brew --prefix`.strip unless `which brew`.strip.empty?
    
              If there is multiple cache for various versions of the requested pod,
          you will be asked which one to clean. Use `--all` to clean them all.
    
            def run
          UI.puts('$CACHE_ROOT: #{@cache.root}') if @short_output
          if @pod_name.nil? # Print all
            @cache.cache_descriptors_per_pod.each do |pod_name, cache_descriptors|
              print_pod_cache_infos(pod_name, cache_descriptors)
            end
          else # Print only for the requested pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            else
              print_pod_cache_infos(@pod_name, cache_descriptors)
            end
          end
        end