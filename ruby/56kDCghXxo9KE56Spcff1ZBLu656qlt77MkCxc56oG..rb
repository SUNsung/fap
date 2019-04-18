
        
            it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
        it 'should work with nested arrays' do
      @agent.options['array'] = ['one', '$.two']
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options).to eq({'auth_token' => 'token', 'color' => 'yellow', 'array' => ['one', '{{two}}'], 'notify' => false, 'room_name' => 'test', 'username' => '{{username}}', 'message' => '{{message}}'})
    end
    
      describe '#sort_tuples!' do
    let(:tuples) {
      time = Time.now
      [
        [2, 'a', time - 1],  # 0
        [2, 'b', time - 1],  # 1
        [1, 'b', time - 1],  # 2
        [1, 'b', time],      # 3
        [1, 'a', time],      # 4
        [2, 'a', time + 1],  # 5
        [2, 'a', time],      # 6
      ]
    }
    
        stub_request(:get, /trackings/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/aftership.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    
        context 'single argument' do
      before do
        subject.instance_eval do
          env :userpaths
        end
      end
    
      def down
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id
  end
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
    def await_condition &condition
  start_time = Time.zone.now
  until condition.call
    return false if (Time.zone.now - start_time) > Capybara.default_max_wait_time
    sleep 0.05
  end
  true
end

    
          delete :destroy, params: {post_id: @message.id, id: @like.id}, format: :json
      expect(response.status).to eq(204)
    end
    
          get :update, params: {id: note.id, set_unread: 'true'}, format: :json
      expect(response).to be_success
    
    get '/' do
  stats = Sidekiq::Stats.new
  @failed = stats.failed
  @processed = stats.processed
  @messages = $redis.lrange('sinkiq-example-messages', 0, -1)
  erb :index
end
    
          def create_worker_file
        template 'worker.rb.erb', File.join('app/workers', class_path, '#{file_name}_worker.rb')
      end
    
        # Returns a String describing the file's content type
    def detect
      if blank_name?
        SENSIBLE_DEFAULT
      elsif empty_file?
        EMPTY_TYPE
      elsif calculated_type_matches.any?
        calculated_type_matches.first
      else
        type_from_file_contents || SENSIBLE_DEFAULT
      end.to_s
    end
    
        def initialize(klass, name, options)
      @klass = klass
      @name = name
      @options = options
    end