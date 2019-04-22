    def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
          alias :expire_data_after_sign_out! :expire_data_after_sign_in!
    end
  end
end

    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
            if Devise.activerecord51?
          def clear_reset_password_token?
            encrypted_password_changed = respond_to?(:will_save_change_to_encrypted_password?) && will_save_change_to_encrypted_password?
            authentication_keys_changed = self.class.authentication_keys.any? do |attribute|
              respond_to?('will_save_change_to_#{attribute}?') && send('will_save_change_to_#{attribute}?')
            end
    
            # Executes a command and returns true if the command succeeded,
        # and false otherwise. By default, this executes as a normal user,
        # and it is up to the communicator implementation if they expose an
        # option for running tests as an administrator.
        #
        # @see #execute
        def test(command, opts=nil)
        end
      end
    end
  end
end

    
            # This method is automatically called when the system is available (when
        # Vagrant can successfully SSH into the machine) to give the system a chance
        # to determine the distro and return a distro-specific system.
        #
        # If this method returns nil, then this instance is assumed to be
        # the most specific guest implementation.
        def distro_dispatch
        end
    
            # This is what is called on the class to actually execute it. Any
        # subclasses should implement this method and do any option parsing
        # and validation here.
        def execute
        end
    
            # This contains all the guests and their parents.
        #
        # @return [Registry<Symbol, Array<Class, Symbol>>]
        attr_reader :guests
    
            # Defines a capability for the given provider. The block should return
        # a class/module that has a method with the capability name, ready
        # to be executed. This means that if it is an instance method,
        # the block should return an instance of the class.
        #
        # @param [String] provider The name of the provider
        # @param [String] cap The name of the capability
        def self.provider_capability(provider, cap, &block)
          components.provider_capabilities[provider.to_sym].register(cap.to_sym, &block)
          nil
        end
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @short_output = argv.flag?('short')
          super
        end
    
    #{stack}
#{executable_path}
### Plugins
    
            def execute_repl_command(repl_command)
          unless repl_command == '\n'
            repl_commands = repl_command.split
            subcommand = repl_commands.shift.capitalize
            arguments = repl_commands
            subcommand_class = Pod::Command::IPC.const_get(subcommand)
            subcommand_class.new(CLAide::ARGV.new(arguments)).run
            signal_end_of_output
          end
        end
      end
    end
  end
end

    
    run SinatraStaticServer

    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
    ERR
      end
    end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end