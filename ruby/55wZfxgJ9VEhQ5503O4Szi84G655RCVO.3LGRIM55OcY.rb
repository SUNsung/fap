
        
        When /^I (?:like|unlike) the post '([^']*)' in the stream$/ do |post_text|
  like_stream_post(post_text)
end
    
          it 'should not be catched when it is unexpected' do
        @target = alice.post :status_message, text: 'AWESOME', to: @alices_aspect.id
        allow(alice).to receive(:like!).and_raise('something')
        allow(@controller).to receive(:current_user).and_return(alice)
        expect { post :create, params: like_hash, format: :json }.to raise_error('something')
      end
    end
  end
    
        it 'should redirect back in the mobile version if it has > 0 notifications' do
      FactoryGirl.create(:notification, recipient: alice, type: 'Notifications::StartedSharing')
      get :read_all, params: {type: 'liked'}, format: :mobile
      expect(response).to redirect_to(notifications_path)
    end
    
        def pattern_path(path)
      return ::File.join(LOGSTASH_HOME, 'patterns', path)
    end
    
        class Main < Clamp::Command
      subcommand 'list', 'List all installed Logstash plugins', LogStash::PluginManager::List
      subcommand 'install', 'Install a Logstash plugin', LogStash::PluginManager::Install
      subcommand 'remove', 'Remove a Logstash plugin', LogStash::PluginManager::Remove
      subcommand 'update', 'Update a plugin', LogStash::PluginManager::Update
      subcommand 'pack', 'Package currently installed plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Pack
      subcommand 'unpack', 'Unpack packaged plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Unpack
      subcommand 'generate', 'Create the foundation for a new plugin', LogStash::PluginManager::Generate
      subcommand 'uninstall', 'Uninstall a plugin. Deprecated: Please use remove instead', LogStash::PluginManager::Remove
      subcommand 'prepare-offline-pack', 'Create an archive of specified plugins to use for offline installation', LogStash::PluginManager::PrepareOfflinePack
    end
  end
end
    
          prepare_package(explicit_plugins_specs, temp_path)
      LogStash::Util::Zip.compress(temp_path, @target)
    ensure
      FileUtils.rm_rf(temp_path)
    end
    
          def get_installer_for(plugin_name)
        uri = pack_uri(plugin_name)
    
          post_install_messages.compact.each do |message|
        PluginManager.ui.info(message)
      end
    
        def user_feedback_string_for(action, platform, machines, options={})
      experimental_string = options['experimental'] ? 'experimental' : 'non experimental'
      message  = '#{action} all #{experimental_string} VM's defined in acceptance/Vagrantfile'
      '#{message} for #{platform}: #{machines}' if !platform.nil?
    end