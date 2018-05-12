
        
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
    
            expect(result).to eq('git rev-parse --short HEAD')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('git rev-parse --short HEAD')
      end
    end
    
          it 'it increments all targets minor version major' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(bump_type: 'major')
        end').runner.execute(:test)
    
      it 'should not set the X-XSS-Protection for other content types' do
    expect(get('/', {}, 'wants' => 'application/foo').headers['X-XSS-Protection']).to be_nil
  end