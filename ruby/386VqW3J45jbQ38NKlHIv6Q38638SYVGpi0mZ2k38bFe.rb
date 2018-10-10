
        
          # Setup the root logger with the Rails log level and the desired set of
  # appenders. The list of appenders to use should be set in the environment
  # specific configuration file.
  #
  # For example, in a production application you would not want to log to
  # STDOUT, but you would want to send an email for 'error' and 'fatal'
  # messages:
  #
  # => config/environments/production.rb
  #
  #     config.log_to = %w[file email]
  #
  # In development you would want to log to STDOUT and possibly to a file:
  #
  # => config/environments/development.rb
  #
  #     config.log_to = %w[stdout file]
  #
  Logging.logger.root.appenders = config.log_to unless config.log_to.empty?
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
    When /^I submit the password reset form$/ do
  submit_password_reset_form
end
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
    # This is basically a copy of the original bundler 'bundle' shim
# with the addition of the loading of our Bundler patches that
# modify Bundler's caching behaviour.
    
        validate_target_file
    LogStash::Bundler.invoke!({:package => true, :all => true})
    archive_manager.compress(LogStash::Environment::CACHE_PATH, target_file)
    FileUtils.rm_rf(LogStash::Environment::CACHE_PATH) if clean?
    
      gem.files         = Dir.glob(['logstash-core-plugin-api.gemspec', 'lib/**/*.rb', 'spec/**/*.rb'])
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.name          = 'logstash-core-plugin-api'
  gem.require_paths = ['lib']
  gem.version       = LOGSTASH_CORE_PLUGIN_API
    
        context 'without a username / password' do
      let(:scheme) { 'myscheme' }
      let(:user) { nil }
      let(:password) { nil }
      let(:hostname) { 'myhostname' }
      let(:path) { '/my/path' }
      let(:uri_str) { '#{scheme}://#{hostname}#{path}' }
      let(:uri_hidden) { '#{scheme}://#{hostname}#{path}' }
    
        desc 'Halt all VM's involved in the acceptance test round'
    task :halt, :platform do |t, args|
      config   = PlatformConfig.new
      experimental = (ENV['LS_QA_EXPERIMENTAL_OS'].to_s.downcase || 'false') == 'true'
      machines = config.select_names_for(args[:platform], {'experimental' => experimental})
    
      module DSLRSpecProxyInstaller
    module ClassMethods
      def included(base)
        if defined?(::RSpec::Matchers)
          base.include(::Capybara::RSpecMatcherProxies) if base.include?(::RSpec::Matchers)
        end
        super
      end
    end
    
      context 'when launchy cannot be required' do
    it 'prints out a correct warning message', requires: [:screenshot] do
      file_path = File.join(Dir.tmpdir, 'test.png')
      allow(@session).to receive(:warn)
      allow(@session).to receive(:require).with('launchy').and_raise(LoadError)
      @session.save_and_open_screenshot(file_path)
      expect(@session).to have_received(:warn).with('File saved to #{file_path}.\nPlease install the launchy gem to open the file automatically.')
    end
  end
end

    
      s.authors = ['Thomas Walpole', 'Jonas Nicklas']
  s.email = ['twalpole@gmail.com', 'jonas.nicklas@gmail.com']
  s.description = 'Capybara is an integration testing tool for rack based web applications. It simulates how a user would interact with a website'
    
            if @expected_path.is_a? Regexp
          @actual_path.to_s.match(@expected_path)
        else
          ::Addressable::URI.parse(@expected_path) == ::Addressable::URI.parse(@actual_path)
        end
      end
    
      it 'should accept the alert if the text matches a regexp' do
    @session.accept_alert(/op.{2}ed/) do
      @session.click_link('Open alert')
    end
    expect(@session).to have_xpath('//a[@id='open-alert' and @opened='true']')
  end
    
      it 'should raise an error if there are multiple matches' do
    el = @session.find(:css, '#child')
    expect { el.ancestor('//div') }.to raise_error(Capybara::Ambiguous)
    expect { el.ancestor('//div', text: 'Ancestor') }.to raise_error(Capybara::Ambiguous)
  end