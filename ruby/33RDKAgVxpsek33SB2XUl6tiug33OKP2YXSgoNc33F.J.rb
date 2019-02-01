
        
            group.add(moderator)
    group.save
    
              pipelines.each do |pipeline|
            self.new(pipeline).tap do |preloader|
              preloader.preload_commit_authors
              preloader.preload_pipeline_warnings
              preloader.preload_stages_warnings
            end
          end
        end
    
              hash = {
            iid: issue.number,
            title: issue.title,
            description: issue.body,
            milestone_number: issue.milestone&.number,
            state: issue.state == 'open' ? :opened : :closed,
            assignees: issue.assignees.map do |u|
              Representation::User.from_api_response(u)
            end,
            label_names: issue.labels.map(&:name),
            author: user,
            created_at: issue.created_at,
            updated_at: issue.updated_at,
            pull_request: issue.pull_request ? true : false
          }
    
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
    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
      describe '#check_registrations_open_or_valid_invite!' do
    before do
      AppConfig.settings.enable_registrations = false
    end
    
        desc 'Run the functional specs'
    task :functional, [:spec] => 'fixture_tarballs:unpack' do |_t, args|
      args.with_defaults(:spec => '**/*')
      sh 'bundle exec bacon #{specs('functional/#{args[:spec]}')}'
    end