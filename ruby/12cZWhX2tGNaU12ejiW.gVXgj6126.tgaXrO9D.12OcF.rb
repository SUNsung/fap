
        
                def initialize(object_name, method_name, template_object, checked_value, unchecked_value, options)
          @checked_value   = checked_value
          @unchecked_value = unchecked_value
          super(object_name, method_name, template_object, options)
        end
    
    module Gitlab
  module QueryLimiting
    # Middleware for reporting (or raising) when a request performs more than a
    # certain amount of database queries.
    class Middleware
      CONTROLLER_KEY = 'action_controller.instance'.freeze
      ENDPOINT_KEY = 'api.endpoint'.freeze
    
          it 'requires the passwords to match when changing them' do
        visit edit_admin_user_path(users(:bob))
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: 'no_match'
        click_on 'Update User'
        expect(page).to have_text('Password confirmation doesn't match')
      end
    end
    
        let!(:bob_weather_agent) {
      agents(:bob_weather_agent)
    }
    
      it 'imports a scenario which requires a service' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'spec/data_fixtures/twitter_scenario.json'))
    click_on 'Start Import'
    check('I confirm that I want to import these Agents.')
    expect { click_on 'Finish Import' }.to change(Scenario, :count).by(1)
    expect(page).to have_text('Import successful!')
  end
end

    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
          expect(Utils.unindent('Hello\n  I am indented')).to eq('Hello\n  I am indented')
    
      describe '#log_for_agent' do
    it 'creates AgentLogs' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(log).not_to be_new_record
      expect(log.agent).to eq(agents(:jane_website_agent))
      expect(log.outbound_event).to eq(events(:jane_website_agent_event))
      expect(log.message).to eq('some message')
      expect(log.level).to eq(4)
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
    
    alias printf_orig printf
def printf *args
  # $fp.printf(*args)
end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
      public(:input)
end # class FPM::Package::NPM

    
        pear_cmd = 'pear -c #{config} remote-info #{input_package}'
    logger.info('Fetching package information', :package => input_package, :command => pear_cmd)
    name = %x{#{pear_cmd} | sed -ne '/^Package\s*/s/^Package\s*//p'}.chomp
    self.name = '#{attributes[:pear_package_name_prefix]}-#{name}'
    self.version = %x{#{pear_cmd} | sed -ne '/^Installed\s*/s/^Installed\s*//p'}.chomp
    self.description  = %x{#{pear_cmd} | sed -ne '/^Summary\s*/s/^Summary\s*//p'}.chomp
    logger.debug('Package info', :name => self.name, :version => self.version,
                  :description => self.description)
    
        cwd = ::Dir.pwd
    ::Dir.chdir(staging_path)
    
      public(:input)
end # class FPM::Package::PleaseRun

    
      # Helper for user lookup
  def uid2user(uid)
    begin
      pwent = Etc.getpwuid(uid)
      return pwent.name
    rescue ArgumentError => e
      # Invalid user id? No user? Return the uid.
      logger.warn('Failed to find username for uid #{uid}')
      return uid.to_s
    end
  end # def uid2user
    
        realpath = Pathname.new(input_path).realpath.to_s
    ::Dir.chdir(build_path) do
      safesystem('unzip', realpath)
    end
    
        (@source.empty? || @target.empty? || options.name.empty?) &&
      abort('Must specify package name, source and output')