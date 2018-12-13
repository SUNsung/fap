
        
          smoke_user = User.seed do |u|
    u.id = 0
    u.name = 'smoke_user'
    u.username = 'smoke_user'
    u.username_lower = 'smoke_user'
    u.password = 'P4ssw0rd'
    u.active = true
    u.approved = true
    u.approved_at = Time.now
    u.trust_level = TrustLevel[3]
  end.first
    
        Category.transaction do
      lounge.group_names = ['trust_level_3']
      unless lounge.save
        puts lounge.errors.full_messages
        raise 'Failed to set permissions on trust level 3 lounge category!'
      end
    
            # Yields a VM for each target VM for the command.
        #
        # This is a convenience method for easily implementing methods that
        # take a target VM (in the case of multi-VM) or every VM if no
        # specific VM name is specified.
        #
        # @param [String] name The name of the VM. Nil if every VM.
        # @param [Hash] options Additional tweakable settings.
        # @option options [Symbol] :provider The provider to back the
        #   machines with. All machines will be backed with this
        #   provider. If none is given, a sensible default is chosen.
        # @option options [Boolean] :reverse If true, the resulting order
        #   of machines is reversed.
        # @option options [Boolean] :single_target If true, then an
        #   exception will be raised if more than one target is found.
        def with_target_vms(names=nil, options=nil)
          @logger.debug('Getting target VMs for command. Arguments:')
          @logger.debug(' -- names: #{names.inspect}')
          @logger.debug(' -- options: #{options.inspect}')
    
            # This contains all the registered guest capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :guest_capabilities
    
            # Returns the instance variables as a hash of key-value pairs.
        def instance_variables_hash
          instance_variables.inject({}) do |acc, iv|
            acc[iv.to_s[1..-1]] = instance_variable_get(iv)
            acc
          end
        end
    
            # This returns all the registered commands.
        #
        # @return [Registry<Symbol, Array<Proc, Hash>>]
        def commands
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.commands)
            end
          end
        end
    
            # This method is called if the underlying machine ID changes. Providers
        # can use this method to load in new data for the actual backing
        # machine or to realize that the machine is now gone (the ID can
        # become `nil`). No parameters are given, since the underlying machine
        # is simply the machine instance given to this object. And no
        # return value is necessary.
        def machine_id_changed
        end
    
        INVALID_PLUGINS_TO_EXPLICIT_PACK = IGNORE_GEMS_IN_PACK.collect { |name| /^#{name}/ } + [
      /mixin/
    ]
    
        puts('Generated at #{target_file}')
  end
    
            return nil
      end
    end
  end
end end end

    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
      def validate_cache_location
    cache_location = LogStash::Environment::CACHE_PATH
    if File.exist?(cache_location)
      puts('Directory #{cache_location} is going to be overwritten, do you want to continue? (Y/N)')
      override = ( 'y' == STDIN.gets.strip.downcase ? true : false)
      if override
        FileUtils.rm_rf(cache_location)
      else
        puts('Unpack cancelled: file #{cache_location} already exists, please delete or move it')
        exit
      end
    end
  end
end

    
      it 'returns the config_hash' do
    expect(subject.config_hash).not_to be_nil
  end