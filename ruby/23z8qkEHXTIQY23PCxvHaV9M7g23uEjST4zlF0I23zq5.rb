
        
            # Require each of the runtime_dependencies specified by the theme's gemspec.
    #
    # Returns false only if no dependencies have been specified, otherwise nothing.
    def require_theme_deps
      return false unless site.theme.runtime_dependencies
      site.theme.runtime_dependencies.each do |dep|
        next if dep.name == 'jekyll'
        External.require_with_graceful_fail(dep.name) if plugin_allowed?(dep.name)
      end
    end
    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :name,
                                       env_name: 'KEYCHAIN_NAME',
                                       description: 'Keychain name',
                                       conflicting_options: [:path],
                                       is_string: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :path,
                                       env_name: 'KEYCHAIN_PATH',
                                       description: 'Path to keychain',
                                       is_string: true,
                                       conflicting_options: [:name],
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :password,
                                       env_name: 'KEYCHAIN_PASSWORD',
                                       description: 'Password for the keychain',
                                       sensitive: true,
                                       optional: false),
          FastlaneCore::ConfigItem.new(key: :default_keychain,
                                       description: 'Should the newly created Keychain be the new system default keychain',
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :unlock,
                                       description: 'Unlock keychain after create',
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :timeout,
                                       description: 'timeout interval in seconds. Set `false` if you want to specify 'no time-out'',
                                       is_string: false,
                                       default_value: 300),
          FastlaneCore::ConfigItem.new(key: :lock_when_sleeps,
                                       description: 'Lock keychain when the system sleeps',
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :lock_after_timeout,
                                       description: 'Lock keychain after timeout interval',
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :add_to_search_list,
                                       description: 'Add keychain to search list',
                                       is_string: false,
                                       default_value: true)
        ]
      end
    
            self.tasks
      end
    end
  end
end

    
        def initialize(username, domain)
      @username = username
      @domain = domain
    end
    
      task :ensure_id_sequences_exist do
    each_schema_load_environment do
      Mastodon::Snowflake.ensure_id_sequences_exist
    end
  end
end

    
      def perform(user_id)
    @user = User.find(user_id)
    deliver_digest if @user.allows_digest_emails?
  end