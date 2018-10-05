
        
            def full_lane_name
      [current_platform, current_lane].reject(&:nil?).join(' ')
    end
    
            # Stub out calls related to the execution environment
        client = double('ingester_client')
        session = FastlaneCore::AnalyticsSession.new(analytics_ingester_client: client)
        expect(client).to receive(:post_event).with({
            client_id: p_hash,
            category: 'fastlane Client Langauge - ruby',
            action: :launch,
            label: nil,
            value: nil
        })
    
          it 'adds docset_platform_family param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_platform_family: 'ios'
          )
        end').runner.execute(:test)
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path.shellescape}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: '#{path}')
          end').runner.execute(:test)
        end
      end
    
              it 'uses system wide oclint' do
            expect(result).to include(command)
          end
        end
    
    # Here be helper
    
          it 'should not be fooled by 10 local code signing identities available' do
        allow(FastlaneCore::CertChecker).to receive(:wwdr_certificate_installed?).and_return(true)
        allow(FastlaneCore::CertChecker).to receive(:list_available_identities).and_return('     10 valid identities found\n')
        expect(FastlaneCore::UI).not_to(receive(:error))
    
        export LANG=en_US.UTF-8
    DOC
  else
    STDERR.puts <<-DOC
    \e[33mWARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile:
    
          it 'should use the value in the variable' do
        expect(subject.oneString).to(be == 'fancy')
        expect(subject.oneBoolean).to(be_truthy)
        expect(subject.oneArray).to(be == [ 'first array value', 'fancy' ])
        expect(subject.oneHash).to(be == { 'key1' => 'fancy', 'key2' => 'fancy is true', 'key3' => 'true or false' })
        expect(subject.nestedHash).to(be == { 'level1' => { 'key1' => 'http://fancy:8080/blah.txt' } })
        expect(subject.nestedArray).to(be == { 'level1' => [{ 'key1' => 'http://fancy:8080/blah.txt' }, { 'key2' => 'http://fancy:8080/foo.txt' }] })
        expect(subject.deepHash).to(be == { 'level1' => { 'level2' => { 'level3' => { 'key1' => 'http://fancy:8080/blah.txt' } } } })
      end
    
        desc 'Halt all VM's involved in the acceptance test round'
    task :halt, :platform do |t, args|
      config   = PlatformConfig.new
      experimental = (ENV['LS_QA_EXPERIMENTAL_OS'].to_s.downcase || 'false') == 'true'
      machines = config.select_names_for(args[:platform], {'experimental' => experimental})
    
    shared_examples 'logstash list' do |logstash|
  describe 'logstash-plugin list on #{logstash.hostname}' do
    before(:all) do
      logstash.install({:version => LOGSTASH_VERSION})
    end