
        
              it 'adds docset_package_filename param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_package_filename: 'DocSet package filename'
          )
        end').runner.execute(:test)
    
    class Array
  def shelljoin
    CrossplatformShellwords.shelljoin(self)
  end
end
    
    exec_arr = ['fastlane', tool_name] + ARGV
    
        context 'with keywords' do
      let(:options) do
        {
          name: { 'en-US' => 'Fastlane Demo' },
          description: { 'en-US' => 'Demo description' },
          keywords: { 'en-US' => 'Some, key, words' }
        }
      end
    
        class [[NAME_CLASS]] < Action
      def self.run(params)
        # fastlane will take care of reading in the parameter and fetching the environment variable:
        UI.message 'Parameter API Token: #{params[:api_token]}'
    
    class PolymorphicMentions < ActiveRecord::Migration[4.2]
  def change
    remove_index :mentions, column: %i(post_id)
    remove_index :mentions, column: %i(person_id post_id), unique: true
    rename_column :mentions, :post_id, :mentions_container_id
    add_column :mentions, :mentions_container_type, :string
    add_index :mentions,
              %i(mentions_container_id mentions_container_type),
              name:   'index_mentions_on_mc_id_and_mc_type',
              length: {mentions_container_type: 191}
    add_index :mentions,
              %i(person_id mentions_container_id mentions_container_type),
              name:   'index_mentions_on_person_and_mc_id_and_mc_type',
              length: {mentions_container_type: 191},
              unique: true
    
        it 'marks a notification as unread without timestamping' do
      note = Timecop.travel(1.hour.ago) do
        FactoryGirl.create(:notification, recipient: alice, unread: false)
      end
    
        context 'with an authenticated user' do
      before do
        sign_in(bob, scope: :user)
        allow(@controller).to receive(:current_user).and_return(bob)
      end
    
          it 'raises an error' do
        expect {
          put :update, params: {id: 42, post_id: @status.id}, format: :js
        }.to raise_error ActiveRecord::RecordNotFound
      end
    
              expect(gon['preloads'][:mentioned_person][:name]).to eq(alice.person.name)
          expect(gon['preloads'][:mentioned_person][:handle]).to eq(alice.person.diaspora_handle)
        end
      end
    end
    
    LogStash::Bundler.setup!
    
      # We compare the before the update and after the update
  def display_updated_plugins(previous_gem_specs_map)
    update_count = 0
    find_latest_gem_specs.values.each do |spec|
      name = spec.name.downcase
      if previous_gem_specs_map.has_key?(name)
        if spec.version != previous_gem_specs_map[name].version
          puts('Updated #{spec.name} #{previous_gem_specs_map[name].version.to_s} to #{spec.version.to_s}')
          update_count += 1
        end
      else
        puts('Installed #{spec.name} #{spec.version.to_s}')
        update_count += 1
      end
    end
    
          puts user_feedback_string_for('bootstrapping', args[:platform], machines, {'experimental' => experimental})
    
    @@ index
  <h1>Sinatra + Sidekiq Example</h1>
  <h2>Failed: <%= @failed %></h2>
  <h2>Processed: <%= @processed %></h2>
    
        config.cache_store = :memory_store
    config.public_file_server.headers = {
      'Cache-Control' => 'public, max-age=#{2.days.to_i}'
    }
  else
    config.action_controller.perform_caching = false
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
          it 'gets the custom tmux command' do
        expect(project.tmux_command).to eq 'byobu'
      end
    end
    
      yield
    
          it 'returns the command' do
        expect(window.commands).to eq ['tmux send-keys -t test:1 vim C-m']
      end
    end