
        
              new_path = File.join(FastlaneCore.fastlane_user_dir, file_name)
      did_show = File.exist?(new_path)
    
          it 'handles the extensions parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
          it 'generates the correct git command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: './fastlane/README.md', message: 'message')
        end').runner.execute(:test)
    
            context 'with given path to oclint' do
          let(:result) do
            Fastlane::FastFile.new.parse('lane :test do
              oclint(
                compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
                oclint_path: 'test/bin/oclint'
              )
            end').runner.execute(:test)
          end
          let(:command) { 'cd #{File.expand_path('.').shellescape} && test/bin/oclint -report-type=html -o=oclint_report.html' }
    
        context 'with a postfix block' do
      it 'yields the status, result and command' do
        expect_command('ls', '-la')
        Fastlane::Actions.sh('ls', '-la') do |status, result, command|
          expect(status.exitstatus).to eq(0)
          expect(result).to be_empty
          expect(command).to eq('ls -la')
        end
      end
    
        os = 'windows'
    shellescape_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        str = testcase['str'].to_s
        expect_correct_implementation_to_be_called(str, :shellescape, os)
        escaped = str.shellescape
        expect(escaped).to eq(testcase['expect'][os])
      end
    end
  end
    
        def current_url
      context[:url]
    end
    
        private
    
            doc
      end
    end
  end
end

    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
        context 'on a public post from a stranger' do
      before do
        @post = stranger.post :status_message, :text => 'something', :public => true, :to => 'all'
      end
    
              code = InvitationCode.create(user: bob)
    
    Then(/^the invalid (.+) release is ignored$/) do |filename|
  test = 'ls -g #{TestApp.releases_path} | grep #{filename}'
  _, _, status = vagrant_cli_command('ssh -c #{test.shellescape}')
  expect(status).to be_success
end
    
        def backtrace_pattern
      loc = Rake.application.find_rakefile_location
      return unless loc
    
          def question
        if default.nil?
          I18n.t(:question, key: key, scope: :capistrano)
        else
          I18n.t(:question_default, key: key, default_value: default, scope: :capistrano)
        end
      end
    
          class Properties
        def initialize
          @properties = {}
        end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
    
          explicit_plugins_specs.each do |spec|
        packet_gem.add(spec.name)
      end
    
        puts('Generated at #{target_file}')
  end
    
        def execute
      raise PluginManager::FileNotFoundError, 'Can't file local file #{local_file}' unless ::File.exist?(local_file)
      raise PluginManager::InvalidPackError, 'Invalid format, the pack must be in zip format' unless valid_format?(local_file)
    
        # remove any version constrain from the Gemfile so the plugin(s) can be updated to latest version
    # calling update without requirements will remove any previous requirements
    plugins = plugins_to_update(previous_gem_specs_map)
    # Skipping the major version validation when using a local cache as we can have situations
    # without internet connection.
    filtered_plugins = plugins.map { |plugin| gemfile.find(plugin) }
      .compact
      .reject { |plugin| REJECTED_OPTIONS.any? { |key| plugin.options.has_key?(key) } }
      .each   { |plugin| gemfile.update(plugin.name) }
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
    shared_examples 'logstash update' do |logstash|
  describe 'logstash-plugin update on #{logstash.hostname}' do
    before :each do
      logstash.install({:version => LOGSTASH_VERSION})
    end