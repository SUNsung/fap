
        
              it 'adds no-build flag to command if no_build is set to true' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              no_build: true
            )
          end').runner.execute(:test)
    
          it 'passes the deprecated pathspec parameter to path parameter' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(pathspec: 'myfile.txt')
          end').runner.execute(:test)
        end
      end
    
            expect(result).to eq('git commit -m message ./fastlane/README.md ./LICENSE')
      end
    
            allow(File).to receive(:file?).and_return(false)
        allow(File).to receive(:file?).with(keychain_path).and_return(true)
        allow(File).to receive(:exist?).and_return(false)
        expect(File).to receive(:exist?).with(cert_name).and_return(true)
        allow(FastlaneCore::Helper).to receive(:backticks).with(allowed_command, print: false)
        expect(FastlaneCore::Helper).to receive(:backticks).with(expected_command, print: false)
    
          it 'raises an exception when the default compile_commands.json is not present' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            oclint
          end').runner.execute(:test)
        end.to raise_error('Could not find json compilation database at path 'compile_commands.json'')
      end
    
            keychain = 'keychain with spaces.keychain'
        cmd = %r{curl -f -o (([A-Z]\:)?\/.+) https://developer\.apple\.com/certificationauthority/AppleWWDRCA.cer && security import \1 -k #{Regexp.escape(keychain.shellescape)}}
        require 'open3'
    
    # test shellescape Windows implementation directly
describe 'WindowsShellwords#shellescape' do
  os = 'windows'
  shellescape_testcases.each do |testcase|
    it testcase['it'] + ': ' + testcase['it_result'][os] do
      str = testcase['str']
      escaped = WindowsShellwords.shellescape(str)
    
      it 'imports a scenario which requires a service' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'spec/data_fixtures/twitter_scenario.json'))
    click_on 'Start Import'
    check('I confirm that I want to import these Agents.')
    expect { click_on 'Finish Import' }.to change(Scenario, :count).by(1)
    expect(page).to have_text('Import successful!')
  end
end

    
        it 'returns a label 'Disabled' if a given agent is disabled' do
      stub(@agent).disabled? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Disabled'
    end
    
          it 'generates a richer DOT script' do
        expect(agents_dot(@agents, rich: true)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            (graph \[ [^\]]+ \];)?
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo,tooltip='Dot \x20 Foo',URL='#{Regexp.quote(agent_path(@foo))}'\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar1))}'\];
            \k<bar2> \[label=bar2,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar2))}',style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar3))}'\];
          \}
          \z
        }x)
      end
    end
  end
    
      describe '#relative_distance_of_time_in_words' do
    it 'in the past' do
      expect(relative_distance_of_time_in_words(Time.now-5.minutes)).to eq('5m ago')
    end
    
        it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_string('Received <$.content.text.*> from <$.content.name> .') }.
        to raise_error('JSONPath '$.content.text.*' is too complex, please check your migration.')
    end
  end
    
        it 'should revert extract and template options for an updated WebsiteAgent' do
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
      ConvertWebsiteAgentTemplateForMerge.new.down
      agent.reload
      expect(agent.options).to include('extract' => reverted_extract,
                                       'template' => reverted_template)
    end
  end
end

    
      it 'truncates message to a reasonable length' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), :level => 3)
    log.message = 'a' * 11_000
    log.save!
    expect(log.message.length).to eq(10_000)
  end
    
        describe '.async_receive' do
      it 'should not run disabled Agents' do
        mock(Agent).find(agents(:bob_rain_notifier_agent).id) { agents(:bob_rain_notifier_agent) }
        do_not_allow(agents(:bob_rain_notifier_agent)).receive
        agents(:bob_rain_notifier_agent).update_attribute :disabled, true
        Agent.async_receive(agents(:bob_rain_notifier_agent).id, [1, 2, 3])
      end
    end
    
        # This reopens ALL logfiles in the process that have been rotated
    # using logrotate(8) (without copytruncate) or similar tools.
    # A +File+ object is considered for reopening if it is:
    #   1) opened with the O_APPEND and O_WRONLY flags
    #   2) the current open file handle does not match its original open path
    #   3) unbuffered (as far as userspace buffering goes, not O_SYNC)
    # Returns the number of files reopened
    def self.reopen_logs
      to_reopen = []
      append_flags = File::WRONLY | File::APPEND
    
          def initialize
        @entries = []
        yield self if block_given?
      end
    
          # Drain all queued jobs across all workers
      def drain_all
        while jobs.any?
          worker_classes = jobs.map { |job| job['class'] }.uniq