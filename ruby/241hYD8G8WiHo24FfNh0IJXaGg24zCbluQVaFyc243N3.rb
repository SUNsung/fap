
        
              GivenDailyLike.decrement_for(user.id)
      expect(value_for(user.id, dt)).to eq(1)
      expect(limit_reached_for(user.id, dt)).to eq(false)
    
        def fetch_remote_tags(folder: nil)
      UI.message('Fetching remote git tags...')
      Actions.sh('cd '#{folder}' && GIT_TERMINAL_PROMPT=0 git fetch --all --tags -q')
    
          @launch_event_sent = true
      builder = AnalyticsEventBuilder.new(
        p_hash: launch_context.p_hash,
        session_id: session_id,
        action_name: nil,
        fastlane_client_language: launch_context.fastlane_client_language
      )
    
          xcode_outdated = false
      begin
        unless FastlaneCore::Helper.xcode_at_least?(Fastlane::MINIMUM_XCODE_RELEASE)
          xcode_outdated = true
        end
      rescue
        # We don't care about exceptions here
        # We'll land here if the user doesn't have Xcode at all for example
        # which is fine for someone who uses fastlane just for Android project
        # What we *do* care about is when someone links an old version of Xcode
      end
    
            expect(result).to eq('carthage bootstrap --platform watchOS')
      end
    
          it 'handles the exclude_dirs parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path[0].shellescape} #{path[1].shellescape}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: #{path})
          end').runner.execute(:test)
        end
      end
    
            allow(File).to receive(:file?).and_return(false)
        allow(File).to receive(:file?).with(keychain_path).and_return(true)
        allow(File).to receive(:exist?).and_return(false)
        expect(File).to receive(:exist?).with(cert_name).and_return(true)
        expect(FastlaneCore::Helper).to receive(:backticks).with(expected_set_key_partition_list_command, print: false)
        expect(FastlaneCore::Helper).to receive(:backticks).with(expected_security_import_command, print: false)
    
            FastlaneCore::CertChecker.wwdr_certificate_installed?
      end
    
          def stored_location_key_for(resource_or_scope)
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        '#{scope}_return_to'
      end
    
      def self.all
    Dir['#{root_path}/docs/scrapers/**/*.rb'].
      map { |file| File.basename(file, '.rb') }.
      map { |name| const_get(name.camelize) }.
      sort { |a, b| a.name.casecmp(b.name) }.
      reject(&:abstract)
  end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
    module Docs
  class PageDb
    attr_reader :pages
    
        def load_capybara_selenium
      require 'capybara/dsl'
      require 'selenium/webdriver'
      Capybara.register_driver :chrome do |app|
        options = Selenium::WebDriver::Chrome::Options.new(args: %w[headless disable-gpu])
        Capybara::Selenium::Driver.new(app, browser: :chrome, options: options)
      end
      Capybara.javascript_driver = :chrome
      Capybara.current_driver = :chrome
      Capybara.run_server = false
      Capybara
    end
    
          if options && options[:ignore_case]
        base = base.downcase
        dest = dest.downcase
      end
    
              node.remove_attribute('path')
          node.remove_attribute('region')
          node.remove_attribute('linenums')
          node.remove_attribute('title')
          node.remove_attribute('language')
          node.remove_attribute('hidecopy')
          node.remove_attribute('class')
        end
    
    group :debugging do
  gem 'cocoapods_debug'
    
      desc 'Updates the last know version of CocoaPods in the specs repo'
  task :post_release do
    title 'Updating last known version in Specs repo'
    specs_branch = 'master'
    Dir.chdir('../Specs') do
      puts Dir.pwd
      sh 'git checkout #{specs_branch}'
      sh 'git pull'
    
        # Checks that the podfile exists.
    #
    # @raise  If the podfile does not exists.
    #
    # @return [void]
    #
    def verify_podfile_exists!
      unless config.podfile
        raise Informative, 'No `Podfile' found in the project directory.'
      end
    end