
        
          let(:options) do
    # A typical options hash expected from Deliver::DetectValues
    {
      username: 'bill@acme.com',
      ipa: 'ACME.ipa',
      app_identifier: 'com.acme.acme',
      app_version: '1.0.7',
      app: double('app', { apple_id: 'YI8C2AS' }),
      platform: 'ios'
    }
  end
    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :serial,
                                       env_name: 'FL_ANDROID_SERIAL',
                                       description: 'Android serial of the device to use for this command',
                                       is_string: true,
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :command,
                                       env_name: 'FL_ADB_COMMAND',
                                       description: 'All commands you want to pass to the adb command, e.g. `kill-server`',
                                       optional: true,
                                       is_string: true),
          FastlaneCore::ConfigItem.new(key: :adb_path,
                                       env_name: 'FL_ADB_PATH',
                                       optional: true,
                                       description: 'The path to your `adb` binary (can be left blank if the ANDROID_SDK_ROOT environment variable is set)',
                                       is_string: true,
                                       default_value: 'adb')
        ]
      end
    
          def self.is_supported?(platform)
        true
      end
    end
  end
end

    
          private
    
            def value_color
          case @status
          when 95..100 then STATUS_COLOR[:good]
          when 90..95 then STATUS_COLOR[:acceptable]
          when 75..90 then STATUS_COLOR[:medium]
          when 0..75 then STATUS_COLOR[:low]
          else
            STATUS_COLOR[:unknown]
          end
        end
      end
    end
  end
end

    
            def template
          @template ||= Pipeline::Template.new(self)
        end
      end
    end
  end
end

    
      describe 'DotHelper::DotDrawer' do
    describe '#id' do
      it 'properly escapes double quotaion and backslash' do
        expect(DotHelper::DotDrawer.draw(foo: '') {
          id('hello\\'')
        }).to eq(''hello\\\\\\''')
      end
    end
  end
end

    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
        it 'can not be turned off' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
  end
end

    
      context '#set_traps' do
    it 'sets traps for INT TERM and QUIT' do
      agent_runner = AgentRunner.new
      mock(Signal).trap('INT')
      mock(Signal).trap('TERM')
      mock(Signal).trap('QUIT')
      agent_runner.set_traps
    
        it 'should work with the human task agent' do
      valid_params = {
        'expected_receive_period_in_days' => 2,
        'trigger_on' => 'event',
        'hit' =>
          {
            'assignments' => 1,
            'title' => 'Sentiment evaluation',
            'description' => 'Please rate the sentiment of this message: '<$.message>'',
            'reward' => 0.05,
            'lifetime_in_seconds' => 24 * 60 * 60,
            'questions' =>
              [
                {
                  'type' => 'selection',
                  'key' => 'sentiment',
                  'name' => 'Sentiment',
                  'required' => 'true',
                  'question' => 'Please select the best sentiment value:',
                  'selections' =>
                    [
                      { 'key' => 'happy', 'text' => 'Happy' },
                      { 'key' => 'sad', 'text' => 'Sad' },
                      { 'key' => 'neutral', 'text' => 'Neutral' }
                    ]
                },
                {
                  'type' => 'free_text',
                  'key' => 'feedback',
                  'name' => 'Have any feedback for us?',
                  'required' => 'false',
                  'question' => 'Feedback',
                  'default' => 'Type here...',
                  'min_length' => '2',
                  'max_length' => '2000'
                }
              ]
          }
      }
      @agent = Agents::HumanTaskAgent.new(:name => 'somename', :options => valid_params)
      @agent.user = users(:jane)
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options['hit']['description']).to eq('Please rate the sentiment of this message: '{{message}}'')
    end
  end
end
    
    describe AgentLog do
  describe 'validations' do
    before do
      @log = AgentLog.new(:agent => agents(:jane_website_agent), :message => 'The agent did something', :level => 3)
      expect(@log).to be_valid
    end
    
        execute 'INSERT INTO share_visibilities (user_id, shareable_id, shareable_type) ' \
            'SELECT post_visibility.user_id, photos.id, 'Photo' FROM photos ' \
            'INNER JOIN posts ON posts.guid = photos.status_message_guid AND posts.type = 'StatusMessage' ' \
            'LEFT OUTER JOIN share_visibilities ON share_visibilities.shareable_id = photos.id ' \
            'INNER JOIN share_visibilities AS post_visibility ON post_visibility.shareable_id = posts.id ' \
            'WHERE photos.public = false AND share_visibilities.shareable_id IS NULL ' \
            'AND post_visibility.shareable_type = 'Post''
  end
    
    describe ConversationsController, :type => :controller do
  describe '#index' do
    before do
      @person = alice.contacts.first.person
      hash = {
        :author => @person,
        :participant_ids => [alice.person.id, @person.id],
        :subject => 'not spam',
        :messages_attributes => [ {:author => @person, :text => 'cool stuff'} ]
      }
      @conv1 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv1.id)
             .increase_unread(alice)
      Message.create(:author => @person, :created_at => Time.now + 200, :text => 'another message', :conversation_id => @conv1.id)
             .increase_unread(alice)
    
      end
    
      # Extracts raw content DIV from template, used for page description as {{ content }}
  # contains complete sub-template code on main page level
  def raw_content(input)
    /<div class='entry-content'>(?<content>[\s\S]*?)<\/div>\s*<(footer|\/article)>/ =~ input
    return (content.nil?) ? input : content
  end
    
    