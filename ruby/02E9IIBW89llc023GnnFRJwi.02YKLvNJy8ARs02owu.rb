
        
                  Actions.sh('cd '#{clone_folder}' && git checkout #{checkout_param} '#{path}'')
    
          it 'adds clean_output param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            clean_output: true
          )
        end').runner.execute(:test)
    
          it 'Does not include merge commits in the list of commits' do
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(include_merges: false)
        end').runner.execute(:test)
    
          it 'works with keychain-settings and name and password' do
        result = Fastlane::FastFile.new.parse('lane :test do
          create_keychain ({
            name: 'test.keychain',
            password: 'testpassword',
            timeout: 600,
            lock_when_sleeps: true,
            lock_after_timeout: true,
          })
        end').runner.execute(:test)
    
          it 'generates the correct git command with an array of paths and/or pathspecs' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: ['./fastlane/*.md', './LICENSE'], message: 'message')
        end').runner.execute(:test)
    
                expect do
              Fastlane::FastFile.new.parse('lane :test do
                swiftlint
              end').runner.execute(:test)
            end.to raise_error(/SwiftLint finished with errors/)
          end
        end
    
        # An empty argument will be skipped, so return empty quotes.
    # https://github.com/ruby/ruby/blob/a6413848153e6c37f6b0fea64e3e871460732e34/lib/shellwords.rb#L142-L143
    return ''''.dup if str.empty?
    
    # test monkey patched method on both (simulated) OSes
describe 'monkey patch of String.shellescape (via CrossplatformShellwords)' do
  describe 'on Windows' do
    before(:each) do
      allow(FastlaneCore::Helper).to receive(:windows?).and_return(true)
    end
    
              @bar2 = Agents::DotBar.new(name: 'bar2').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.propagate_immediately = true
            agent.disabled = true
            agent.save!
          },
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
        it 'outputs a structure containing name, description, the date, all agents & their links' do
      data = exporter.as_json
      expect(data[:name]).to eq(name)
      expect(data[:description]).to eq(description)
      expect(data[:source_url]).to eq(source_url)
      expect(data[:guid]).to eq(guid)
      expect(data[:schema_version]).to eq(1)
      expect(data[:tag_fg_color]).to eq(tag_fg_color)
      expect(data[:tag_bg_color]).to eq(tag_bg_color)
      expect(data[:icon]).to eq(icon)
      expect(Time.parse(data[:exported_at])).to be_within(2).of(Time.now.utc)
      expect(data[:links]).to eq([{ :source => guid_order(agent_list, :jane_weather_agent), :receiver => guid_order(agent_list, :jane_rain_notifier_agent)}])
      expect(data[:control_links]).to eq([])
      expect(data[:agents]).to eq(agent_list.sort_by{|a| a.guid}.map { |agent| exporter.agent_as_json(agent) })
      expect(data[:agents].all? { |agent_json| agent_json[:guid].present? && agent_json[:type].present? && agent_json[:name].present? }).to be_truthy
    
          expect(Utils.unindent('Hello\n  I am indented')).to eq('Hello\n  I am indented')
    
      it 'truncates message to a reasonable length' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), :level => 3)
    log.message = 'a' * 11_000
    log.save!
    expect(log.message.length).to eq(10_000)
  end
    
      it 'no raises a RuntimeError on symbols' do
    v = :sym
    lambda { v.taint }.should_not raise_error(RuntimeError)
    v.tainted?.should == false
  end
    
    describe 'Kernel.throw' do
  it 'transfers control to the end of the active catch block waiting for symbol' do
    catch(:blah) do
      :value
      throw :blah
      fail('throw didn't transfer the control')
    end.should be_nil
  end
    
        desc 'Rebuilds integration fixtures'
    task :rebuild_integration_fixtures do
      unless system('which hg')
        puts red('[!] Mercurial (`hg`) must be installed to rebuild the integration fixtures.')
        exit 1
      end
      title 'Running Integration tests'
      rm_rf 'tmp'
      title 'Building all the fixtures'
      sh('bundle exec bacon spec/integration.rb') {}
      title 'Storing fixtures'
      # Copy the files to the files produced by the specs to the after folders
      FileList['tmp/*/transformed'].each do |source|
        name = source.match(%r{^tmp/(.+)/transformed$})[1]
        destination = 'spec/cocoapods-integration-specs/#{name}/after'
        if File.exist?(destination)
          rm_rf destination
          mv source, destination
        end
      end