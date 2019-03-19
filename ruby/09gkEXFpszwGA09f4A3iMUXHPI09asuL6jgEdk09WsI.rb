
        
            context '(de)activating users' do
      it 'does not show deactivation buttons for the current user' do
        visit admin_users_path
        expect(page).to have_no_css('a[href='/admin/users/#{users(:jane).id}/deactivate']')
      end
    
        it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
      describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
    
          describe '#import' do
        it 'uses the existing scenario, updating its data' do
          expect {
            scenario_import.import(:skip_agents => true)
            expect(scenario_import.scenario).to eq(existing_scenario)
          }.not_to change { users(:bob).scenarios.count }
    
      describe '#hour_to_schedule_name' do
    it 'for 0h' do
      expect(@scheduler.send(:hour_to_schedule_name, 0)).to eq('midnight')
    end
    
      let :agent do
    Agents::WebsiteAgent.create!(
      user: users(:bob),
      name: 'xkcd',
      options: valid_options,
      keep_events_for: 2.days
    )
  end
    
      describe '#helpers' do
    it 'should return the correct request header' do
      expect(@checker.send(:request_options)).to eq({:headers => {'aftership-api-key' => '800deeaf-e285-9d62-bc90-j999c1973cc9', 'Content-Type'=>'application/json'}})
    end
    
        it 'should provide the since attribute after the first run' do
      time = (Time.now-1.minute).iso8601
      @checker.memory[:last_event] = time
      @checker.save
      expect(@checker.reload.send(:query_parameters)).to eq({:query => {:since => time}})
    end
  end
    
      describe '#receive' do
    it 'sends a message' do
      stub(HTTParty).post { {'id' => 1, 'message' => 'blah', 'title' => 'blah','source_name' => 'Custom Notification'} }
      @checker.receive([@event])
    end
    
        alias log puts
    
      # Use a different cache store in production.
  # config.cache_store = :mem_cache_store
    
      def down
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id
  end
    
      def up_down(change)
    change.up do
      Mention.update_all(mentions_container_type: 'Post')
      change_column :mentions, :mentions_container_type, :string, null: false
      Notification.where(type: 'Notifications::Mentioned').update_all(type: 'Notifications::MentionedInPost')
    end
    
    When /^I put in my password in '([^']*)'$/ do |field|
 step %(I fill in '#{field}' with '#{@me.password}')
end
    
      def navigate_to(page_name)
    path = path_to(page_name)
    if path.is_a?(Hash)
      visit(path[:path])
      await_elem = path[:special_elem]
      find(await_elem.delete(:selector), await_elem)
    else
      visit(path)
    end
  end
    
          sign_in alice, scope: :user
    end
    
        context 'on my own post' do
      before do
        aspect_to_post = alice.aspects.where(:name => 'generic').first
        @post = alice.post :status_message, :text => 'something', :to => aspect_to_post
      end
    
    package = FPM::Package::Dir.new
    
      TAR_CHUNK_SIZE = 512
  TAR_TYPEFLAG_OFFSET = 156
  TAR_NAME_OFFSET_START = 0
  TAR_NAME_OFFSET_END = 99
  TAR_LENGTH_OFFSET_START = 124
  TAR_LENGTH_OFFSET_END = 135
  TAR_CHECKSUM_OFFSET_START = 148
  TAR_CHECKSUM_OFFSET_END = 155
  TAR_MAGIC_START = 257
  TAR_MAGIC_END = 264
  TAR_UID_START = 108
  TAR_UID_END = 115
  TAR_GID_START = 116
  TAR_GID_END = 123
  TAR_UNAME_START = 265
  TAR_UNAME_END = 296
  TAR_GNAME_START = 297
  TAR_GNAME_END = 328
  TAR_MAJOR_START = 329
  TAR_MAJOR_END = 336
  TAR_MINOR_START = 337
  TAR_MINOR_END = 344
    
      option '--channel', 'CHANNEL_URL',
    'The pear channel url to use instead of the default.'
    
        args = [ '-B', build_path('build-info'), '-c', build_path('comment'), '-d', build_path('description'), '-f', build_path('packlist'), '-I', '/opt/local', '-p', staging_path,  '-U', '#{cwd}/#{name}-#{self.version}-#{iteration}.tgz' ]
    safesystem('pkg_create', *args)
    
        libs = [ 'install.sh', 'install-path.sh', 'generate-cleanup.sh' ]
    libs.each do |file|
      base = staging_path(File.join(attributes[:prefix]))
      File.write(File.join(base, file), template(File.join('pleaserun', file)).result(binding))
      File.chmod(0755, File.join(base, file))
    end