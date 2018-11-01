
        
            # @return [Hash] All the lanes available, first the platform, then the lane
    attr_accessor :lanes
    
          return did_show if did_show
    
          def self.details
        list = <<-LIST.markdown_list
          `grouping` is just to keep your tags organised under one 'folder', defaults to 'builds'
          `lane` is the name of the current fastlane lane
          `prefix` is anything you want to stick in front of the version number, e.g. 'v'
          `postfix` is anything you want to stick at the end of the version number, e.g. '-RC1'
          `build_number` is the build number, which defaults to the value emitted by the `increment_build_number` action
        LIST
    
            inner_command = 'git describe `git rev-list --tags --max-count=1`'
        pseudocommand = 'git log --pretty=\'%B\' #{inner_command.shellescape}...HEAD'
        expect(result).to eq(pseudocommand)
      end
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: '#{path}')
          end').runner.execute(:test)
        end
      end
    
            keychain_path = File.expand_path(File.join('~', 'Library', 'Keychains', keychain))
        expected_command = 'security import #{cert_name} -k '#{keychain_path}' -P #{password} -T /usr/bin/codesign -T /usr/bin/security &> /dev/null'
    
          it 'works with multiple ignore patterns' do
        pattern1 = 'Pods/*'
        pattern2 = '../**/*/Xcode*'
        result = Fastlane::FastFile.new.parse('lane :test do
          slather({
            ignore: ['#{pattern1}', '#{pattern2}'],
            proj: 'foo.xcodeproj'
          })
        end').runner.execute(:test)
    
        # execute bundle install and capture any $stdout output. any raised exception in the process will be trapped
    # and returned. logs errors to $stdout.
    # @param [Hash] options invoke options with default values, :max_tries => 10, :clean => false, :install => false, :update => false
    # @option options [Boolean] :max_tries The number of times bundler is going to try the installation before failing (default: 10)
    # @option options [Boolean] :clean It cleans the unused gems (default: false)
    # @option options [Boolean] :install Run the installation of a set of gems defined in a Gemfile (default: false)
    # @option options [Boolean, String, Array] :update Update the current environment, must be either false or a String or an Array of String (default: false)
    # @option options [Boolean] :local Do not attempt to fetch gems remotely and use the gem cache instead (default: false)
    # @option options [Boolean] :package Locks and then caches all dependencies to be reused later on (default: false)
    # @option options [Boolean] :all It packages dependencies defined with :git or :path (default: false)
    # @option options [Array] :without  Exclude gems that are part of the specified named group (default: [:development])
    # @return [String, Exception] the installation captured output and any raised exception or nil if none
    def invoke!(options = {})
      options = {:max_tries => 10, :clean => false, :install => false, :update => false, :local => false,
                 :jobs => 12, :all => false, :package => false, :without => [:development]}.merge(options)
      options[:without] = Array(options[:without])
      options[:update] = Array(options[:update]) if options[:update]
    
        context 'when an environment variable is set' do
      before do
        ENV['FunString'] = 'fancy'
        ENV['FunBool'] = 'true'
        ENV['SERVER_LS_TEST_ADDRESS'] = 'some.host.address.tld'
      end
    
      it 'records when the config was read' do
    expect(subject.read_at).to be <= Time.now
  end
    
              it 'successfully install the plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install #{gem_path_on_vagrant}')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-dns')
          end
        end
    
        context 'with a specific plugin' do
      let(:plugin_name) { 'logstash-input-stdin' }
      it 'list the plugin and display the plugin name' do
        result = logstash.run_command_in_path('bin/logstash-plugin list #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name}$/)
      end