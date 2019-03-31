      it 'updates an existing user' do
        visit edit_admin_user_path(users(:bob))
        check 'Admin'
        click_on 'Update User'
        expect(page).to have_text('User 'bob' was successfully updated.')
        visit edit_admin_user_path(users(:bob))
        expect(page).to have_checked_field('Admin')
      end
    
              expect(scenario_import.scenario.name).to eq(name)
          expect(scenario_import.scenario.description).to eq(description)
          expect(scenario_import.scenario.guid).to eq(guid)
          expect(scenario_import.scenario.tag_fg_color).to eq(tag_fg_color)
          expect(scenario_import.scenario.tag_bg_color).to eq(tag_bg_color)
          expect(scenario_import.scenario.icon).to eq(icon)
          expect(scenario_import.scenario.source_url).to eq(source_url)
          expect(scenario_import.scenario.public).to be_falsey
        end
    
        it 'should require access token' do
      @checker.options['user_credentials'] = nil
      expect(@checker).not_to be_valid
    end
  end
    
      def prepend(*paths)
    @paths = parse(*paths, *@paths)
    self
  end
    
      def path
    HOMEBREW_PINNED_KEGS/@f.name
  end
    
        def oss_only?
      return true if ENV['OSS']=='true'
    
          def get_installer_for(plugin_name)
        uri = pack_uri(plugin_name)
    
    class LogStash::PluginManager::Update < LogStash::PluginManager::Command
  REJECTED_OPTIONS = [:path, :git, :github]
  # These are local gems used by LS and needs to be filtered out of other plugin gems
  NON_PLUGIN_LOCAL_GEMS = ['logstash-core', 'logstash-core-plugin-api']