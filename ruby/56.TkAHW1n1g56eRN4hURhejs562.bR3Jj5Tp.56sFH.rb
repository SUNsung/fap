
        
            context 'a private message' do
      it 'doesn't increase unread_notifications' do
        expect { Fabricate(:private_message_notification, user: user); user.reload }.not_to change(user, :unread_notifications)
      end
    
    BadgeGrouping.seed do |g|
  g.id = BadgeGrouping::Community
  g.name = 'Community'
  g.default_position = 11
end
    
          def testers_for_app(app_id: nil)
        assert_required_params(__method__, binding)
        page_size = 40 # that's enforced by the iTC servers
        resulting_array = []
        initial_url = 'providers/#{team_id}/apps/#{app_id}/testers?limit=#{page_size}&sort=email&order=asc'
        response = request(:get, initial_url)
        link_from_response = proc do |r|
          # I weep for Swift nil chaining
          (l = r.headers['link']) && (m = l.match(/<(.*)>/)) && m.captures.first
        end
        next_link = link_from_response.call(response)
        result = Array(handle_response(response))
        resulting_array += result
        return resulting_array if result.count == 0
    
        describe '#build_trains failing' do
      # it 'automatically re-tries the request when getting a ITC.response.error.OPERATION_FAILED when receive build trains' do
      #   # Ensuring the fix for https://github.com/fastlane/fastlane/issues/6419
    
              result = Array(
            simulators
              .select { |sim| sim.name == default_device_name }
              .reverse # more efficient, because `simctl` prints higher versions first
              .sort_by! { |sim| Gem::Version.new(sim.os_version) }
              .last || simulators.first
          )
    
            # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
                    @env.machine_names.each do |machine_name|
                  if machine_name =~ regex
                    machines << get_machine.call(machine_name)
                  end
                end
    
            # This returns any automatically detected errors.
        #
        # @return [Array<String>]
        def _detected_errors
          return [] if !@__invalid_methods || @__invalid_methods.empty?
          return [I18n.t('vagrant.config.common.bad_field',
                         fields: @__invalid_methods.to_a.sort.join(', '))]
        end
    
            # This registers a plugin. This should _NEVER_ be called by the public
        # and should only be called from within Vagrant. Vagrant will
        # automatically register V2 plugins when a name is set on the
        # plugin.
        def register(plugin)
          if !@registered.include?(plugin)
            @logger.info('Registered plugin: #{plugin.name}')
            @registered << plugin
          end
        end
    
            # Defines additional configuration keys to be available in the
        # Vagrantfile. The configuration class should be returned by a
        # block passed to this method. This is done to ensure that the class
        # is lazy loaded, so if your class inherits from any classes that
        # are specific to Vagrant 1.0, then the plugin can still be defined
        # without breaking anything in future versions of Vagrant.
        #
        # @param [String] name Configuration key.
        def self.config(name, scope=nil, &block)
          scope ||= :top
          components.configs[scope].register(name.to_sym, &block)
          nil
        end
    
            # This method is called if the underlying machine ID changes. Providers
        # can use this method to load in new data for the actual backing
        # machine or to realize that the machine is now gone (the ID can
        # become `nil`). No parameters are given, since the underlying machine
        # is simply the machine instance given to this object. And no
        # return value is necessary.
        def machine_id_changed
        end