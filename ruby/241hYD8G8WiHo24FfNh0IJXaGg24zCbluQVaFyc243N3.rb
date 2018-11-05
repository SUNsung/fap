
        
              # Sort tags based on their version number
      return git_tags
             .select { |tag| FastlaneCore::TagVersion.correct?(tag) }
             .sort_by { |tag| FastlaneCore::TagVersion.new(tag) }
    end
    
        def suggest_ruby_reinstall(e)
      ui = FastlaneCore::UI
      ui.error('-----------------------------------------------------------------------')
      ui.error(e.to_s)
      ui.error('')
      ui.error('SSL errors can be caused by various components on your local machine.')
      if Gem::Version.new(RUBY_VERSION) < Gem::Version.new('2.1')
        ui.error('Apple has recently changed their servers to require TLS 1.2, which may')
        ui.error('not be available to your system installed Ruby (#{RUBY_VERSION})')
      end
      ui.error('')
      ui.error('The best solution is to use the self-contained fastlane version.')
      ui.error('Which ships with a bundled OpenSSL,ruby and all gems - so you don't depend on system libraries')
      ui.error(' - Use Homebrew')
      ui.error('    - update brew with `brew update`')
      ui.error('    - install fastlane using:')
      ui.error('      - `brew cask install fastlane`')
      ui.error(' - Use One-Click-Installer:')
      ui.error('    - download fastlane at https://download.fastlane.tools')
      ui.error('    - extract the archive and double click the `install`')
      ui.error('-----------------------------------------------------------')
      ui.error('for more details on ways to install fastlane please refer the documentation:')
      ui.error('-----------------------------------------------------------')
      ui.error('        🚀       https://docs.fastlane.tools          🚀   ')
      ui.error('-----------------------------------------------------------')
      ui.error('')
      ui.error('You can also install a new version of Ruby')
      ui.error('')
      ui.error('- Make sure OpenSSL is installed with Homebrew: `brew update && brew upgrade openssl`')
      ui.error('- If you use system Ruby:')
      ui.error('  - Run `brew update && brew install ruby`')
      ui.error('- If you use rbenv with ruby-build:')
      ui.error('  - Run `brew update && brew upgrade ruby-build && rbenv install 2.3.1`')
      ui.error('  - Run `rbenv global 2.3.1` to make it the new global default Ruby version')
      ui.error('- If you use rvm:')
      ui.error('  - First run `rvm osx-ssl-certs update all`')
      ui.error('  - Then run `rvm reinstall ruby-2.3.1 --with-openssl-dir=/usr/local`')
      ui.error('')
      ui.error('If that doesn't fix your issue, please google for the following error message:')
      ui.error('  '#{e}'')
      ui.error('-----------------------------------------------------------------------')
    end
    
            [
          'This will automatically tag your build with the following format: `<grouping>/<lane>/<prefix><build_number>`, where:'.markdown_preserve_newlines,
          list,
          'For example, for build 1234 in the 'appstore' lane, it will tag the commit with `builds/appstore/1234`.'
        ].join('\n')
      end
    
            inner_command = 'git describe --tags `git rev-list --tags=#{tag_match_pattern.shellescape} --max-count=1`'
        pseudocommand = 'git log --pretty=\'%B\' #{inner_command.shellescape}...HEAD'
        expect(result).to eq(pseudocommand)
      end
    
          it 'works with unlock and name and password' do
        result = Fastlane::FastFile.new.parse('lane :test do
          create_keychain ({
            name: 'test.keychain',
            password: 'testpassword',
            unlock: true,
          })
        end').runner.execute(:test)
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path.shellescape}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: '#{path}')
          end').runner.execute(:test)
        end
      end
    
              value = config_item.auto_convert_value(nil)
    
        os = 'windows'
    shelljoin_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        array = testcase['input']
        expect_correct_implementation_to_be_called(array, :shelljoin, os)
        joined = array.shelljoin
        expect(joined).to eq(testcase['expect'][os])
      end
    end
  end
    
      # POST /resource/confirmation
  def create
    self.resource = resource_class.send_confirmation_instructions(resource_params)
    yield resource if block_given?
    
      config.logger = Logger.new($stdout)
  Rails.logger  = config.logger
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
    # Include LoggerSilence from ActiveSupport. This is needed to silent assets
# requests with `config.assets.quiet`, because the default silence method of
# the logging gem is no-op. See: https://github.com/TwP/logging/issues/11
Logging::Logger.send :alias_method, :local_level, :level
Logging::Logger.send :alias_method, :local_level=, :level=
Logging::Logger.send :include, LoggerSilence

    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
    RSpec::Matchers.define :have_path do |expected|
  match do |actual|
    await_condition { actual.current_path == expected }
  end
    
      def navigate_to(page_name)
    path = path_to(page_name)
    if path.is_a?(Hash)
      visit(path[:path])
      await_elem = path[:special_elem]
      find(await_elem.delete(:selector), await_elem)
    else
      visit(path)
    end
  end
    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
    end
  end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
        it 'supports a limit per_page parameter' do
      2.times { FactoryGirl.create(:notification, :recipient => alice, :target => @post) }
      get :index, params: {per_page: 2}
      expect(assigns[:notifications].count).to eq(2)
    end