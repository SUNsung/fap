
        
            # Grabs a screenshot from the specified video at the specified timestamp using `ffmpeg`
    # @param video_path (String) the path to the video file
    # @param timestamp (String) the `ffmpeg` timestamp format (e.g. 00.00)
    # @param dimensions (Array) the dimension of the screenshot to generate
    # @return the TempFile containing the generated screenshot
    def grab_video_preview(video_path, timestamp, dimensions)
      width, height = dimensions
      require 'tempfile'
      tmp = Tempfile.new(['video_preview', '.jpg'])
      file = tmp.path
      command = 'ffmpeg -y -i \'#{video_path}\' -s #{width}x#{height} -ss \'#{timestamp}\' -vframes 1 \'#{file}\' 2>&1 >/dev/null'
      # puts 'COMMAND: #{command}'
      `#{command}`
      raise 'Failed to grab screenshot at #{timestamp} from #{video_path} (using #{command})' unless $CHILD_STATUS.to_i == 0
      tmp
    end
    
          attr_mapping(
        'assetToken' => :asset_token,
        'fileType' => :type_of_file,
        'url' => :url,
        'name' => :original_file_name
      )
    
            # Gets actual simctl device type from device name
        return device_names.map do |device_name|
          device = SimCtl.device(name: device_name)
          if device
            device.devicetype.name
          end
        end.compact
      end
    end
  end
end

    
          def suffix
        return []
      end
    
            name = params[:name]
        udid = params[:udid]
    
          def self.deprecated_notes
        [
          'You are using legacy `shenzhen` to build your app, which will be removed soon!',
          'It is recommended to upgrade to _gym_.',
          'To do so, just replace `ipa(...)` with `gym(...)` in your Fastfile.',
          'To make code signing work, follow [https://docs.fastlane.tools/codesigning/xcode-project/](https://docs.fastlane.tools/codesigning/xcode-project/).'
        ].join('\n')
      end
    end
  end
end
# rubocop:enable Lint/AssignmentInCondition

    
          def self.example_code
        [
          'make_changelog_from_jenkins(
            # Optional, lets you set a changelog in the case is not generated on Jenkins or if ran outside of Jenkins
            fallback_changelog: 'Bug fixes and performance enhancements'
          )'
        ]
      end
    
          def self.category
        :misc
      end
    end
  end
end

    
        context 'creating new users' do
      it 'follow the 'new user' link' do
        visit admin_users_path
        click_on('New User')
        expect(page).to have_text('Create new User')
      end
    
      it 'imports a scenario which requires a service' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'spec/data_fixtures/twitter_scenario.json'))
    click_on 'Start Import'
    check('I confirm that I want to import these Agents.')
    expect { click_on 'Finish Import' }.to change(Scenario, :count).by(1)
    expect(page).to have_text('Import successful!')
  end
end

    
        describe '#agents_dot' do
      before do
        @agents = [
          @foo = Agents::DotFoo.new(name: 'foo').tap { |agent|
            agent.user = users(:bob)
            agent.save!
          },
    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
      it 'truncates message to a reasonable length' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), :level => 3)
    log.message = 'a' * 11_000
    log.save!
    expect(log.message.length).to eq(10_000)
  end
    
      before(:each) do
    stub_request(:get, /events.json$/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/basecamp.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    stub_request(:get, /projects.json$/).to_return(
      :body => JSON.dump([{name: 'test', id: 1234},{name: 'test1', id: 1235}]),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    stub_request(:get, /02:00$/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/basecamp.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    @valid_params = { :project_id => 6789 }
    
      describe 'validating' do
    before do
      expect(@checker).to be_valid
    end
    
          event = Event.new
      event.agent = agents(:bob_rain_notifier_agent)
      event.payload = {
        'url' => 'http://xkcd.com',
        'link' => 'Random',
      }
      agent.receive([event])
    end