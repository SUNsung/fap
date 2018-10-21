
        
                default_connectors = {
          words_connector: ', ',
          two_words_connector: ' and ',
          last_word_connector: ', and '
        }
        if defined?(I18n)
          i18n_connectors = I18n.translate(:'support.array', locale: options[:locale], default: {})
          default_connectors.merge!(i18n_connectors)
        end
        options = default_connectors.merge!(options)
    
            private
    
                # Prepend a hidden field to make sure something will be sent back to the
            # server if all radio buttons are unchecked.
            if options.fetch('include_hidden', true)
              hidden_field + rendered_collection
            else
              rendered_collection
            end
          end
    
            def initialize(object_name, method_name, template_object, content_or_options = nil, options = nil)
          options ||= {}
    
        attr_reader :paths
    
        initializer 'action_view.per_request_digest_cache' do |app|
      ActiveSupport.on_load(:action_view) do
        unless ActionView::Resolver.caching?
          app.executor.to_run ActionView::Digestor::PerExecutionDigestCacheExpiry
        end
      end
    end
    
      Jekyll::External.require_if_present(Jekyll::External.blessed_gems) do |g, ver_constraint|
    cmd = g.split('-').last
    p.command(cmd.to_sym) do |c|
      c.syntax cmd
      c.action do
        Jekyll.logger.abort_with 'You must install the '#{g}' gem' \
          ' version #{ver_constraint} to use the 'jekyll #{cmd}' command.'
      end
    end
  end
    
        def initialize(machine, guests, capabilities)
      @capabilities = capabilities
      @guests       = guests
      @machine      = machine
    end
    
              # First determine the proper array of VMs.
          vms = []
          if names.length > 0
            names.each do |name|
              if pattern = name[/^\/(.+?)\/$/, 1]
                # This is a regular expression name, so we convert to a regular
                # expression and allow that sort of matching.
                regex = Regexp.new(pattern)
    
            # Checks if the target machine is ready for communication. If this
        # returns true, then all the other methods for communicating with
        # the machine are expected to be functional.
        #
        # @return [Boolean]
        def ready?
          false
        end
    
            # Mounts a shared folder via NFS. This assumes that the exports
        # via the host are already done.
        def mount_nfs(ip, folders)
          raise BaseError, _key: :unsupported_nfs
        end
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
            # This contains all the synced folder implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Integer>>]
        attr_reader :synced_folders
    
              # Return the registry
          data[:communicator]
        end
    
            # This should return an action callable for the given name.
        #
        # @param [Symbol] name Name of the action.
        # @return [Object] A callable action sequence object, whether it
        #   is a proc, object, etc.
        def action(name)
          nil
        end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
          # Decorate Variables#set to add validation behavior.
      def set(key, value=nil, &block)
        assert_value_or_block_not_both(value, block)
    
          include Capistrano::ProcHelpers