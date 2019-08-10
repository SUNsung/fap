
        
            def run(path, color = nil)
      unless color
        color = Frameit::Color::BLACK
        color = Frameit::Color::SILVER if Frameit.config[:white] || Frameit.config[:silver]
        color = Frameit::Color::GOLD if Frameit.config[:gold]
        color = Frameit::Color::ROSE_GOLD if Frameit.config[:rose_gold]
      end
    
          it 'raises an error if something is wrong' do
        TunesStubbing.itc_stub_applications_broken_first_create
        expect do
          Spaceship::Tunes::Application.create!(name: 'My Name',
                                                sku: 'SKU123',
                                                bundle_id: 'net.sunapps.123')
        end.to raise_error('You must provide a company name to use on the App Store. You must provide a company name to use on the App Store.')
      end
    end
    
          it 'returns team_name from selected team_id' do
        allow_any_instance_of(Spaceship::PortalClient).to receive(:teams).and_return([
                                                                                       { 'teamId' => 'XXXXXXXXXX', 'name' => 'SpaceShip', 'currentTeamMember' => { 'teamMemberId' => '' } },
                                                                                       { 'teamId' => 'ABCDEF', 'name' => 'PirateShip', 'currentTeamMember' => { 'teamMemberId' => '' } }
                                                                                     ])
    
            # There should only be more than 1 device type if
        # it is iOS or tvOS, therefore, if there is more than 1
        # device in the array, and they are not all iOS or tvOS
        # as checked above, that would imply that this is a mixed bag
        return devices.count == 1
      end
    
          def self.details
        sample = <<-SAMPLE.markdown_sample
          ```ruby
          lane :refresh_dsyms do
            download_dsyms                  # Download dSYM files from iTC
            upload_symbols_to_crashlytics   # Upload them to Crashlytics
            clean_build_artifacts           # Delete the local dSYM files
          end
          ```
        SAMPLE
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
            end
        it 'restarts dead workers' do
          stub.instance_of(HuginnScheduler).thread { OpenStruct.new(alive?: false) }
          mock.instance_of(HuginnScheduler).run!
          @agent_runner.send(:restart_dead_workers)
        end
      end
    end
  end
    
        it 'outputs control links to agents within the incoming set, but not outside it' do
      agents(:jane_rain_notifier_agent).control_targets = [agents(:jane_weather_agent), agents(:jane_basecamp_agent)]
      agents(:jane_rain_notifier_agent).save!
    
        it 'should work' do
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options).to eq({'auth_token' => 'token', 'color' => 'yellow', 'notify' => false, 'room_name' => 'test', 'username' => '{{username}}', 'message' => '{{message}}'})
    end
    
      describe '#check' do
    it 'should check that initial run creates an event' do
      @checker.memory[:last_updated_at] = '2016-03-15T14:01:05+00:00'
      expect { @checker.check }.to change { Event.count }.by(1)
    end
  end
end

    
      describe 'validating' do
    before do
      expect(@checker).to be_valid
    end
    
        desc 'Build all packages'
    task :all => GEMS_AND_ROOT_DIRECTORIES.keys
  end
    
    desc 'generate gemspec'
task 'rack-protection.gemspec' do
  require 'rack/protection/version'
  content = File.binread 'rack-protection.gemspec'
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end