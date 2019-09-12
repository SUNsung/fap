
        
            # Localised app details values
    LOCALISED_APP_VALUES = [:name, :subtitle, :privacy_url, :apple_tv_privacy_policy]
    
          attr_accessor :asset_token
    
              count = version.screenshots['English'].count
          version.upload_screenshot!(screenshot_path, 4, 'English', 'iphone4', true)
          expect(version.screenshots['English'].count).to eq(count + 1)
        end
    
          def self.author
        'pvinis'
      end
    
    describe Match::CommandsGenerator do
  let(:available_options) { Match::Options.available_options }
    
          def self.example_code
        [
          'sync_code_signing(type: 'appstore', app_identifier: 'tools.fastlane.app')',
          'sync_code_signing(type: 'development', readonly: true)',
          'sync_code_signing(app_identifier: ['tools.fastlane.app', 'tools.fastlane.sleepy'])',
          'match   # alias for 'sync_code_signing''
        ]
      end
    
          def on_module(node)
        name, body = *node
        return unless name.source == 'SharedValues'
        return if body.nil?
    
                resulting_path = File.join('.', language, file_name)
            @data_by_language[language][output_name] << resulting_path
            @data_by_screen[screen_name][output_name][language] = resulting_path
            break # to not include iPhone 6 and 6 Plus (name is contained in the other name)
          end
        end
      end
    
          def self.available_options
        [
          # Authorization
          FastlaneCore::ConfigItem.new(
            key: :json_key,
            env_name: 'SUPPLY_JSON_KEY',
            short_option: '-j',
            conflicting_options: [:json_key_data],
            optional: true, # optional until it is possible specify either json_key OR json_key_data are required
            description: 'The path to a file containing service account JSON, used to authenticate with Google',
            code_gen_sensitive: true,
            default_value: CredentialsManager::AppfileConfig.try_fetch_value(:json_key_file),
            default_value_dynamic: true,
            verify_block: proc do |value|
              UI.user_error!('Could not find service account json file at path '#{File.expand_path(value)}'') unless File.exist?(File.expand_path(value))
              UI.user_error!(''#{value}' doesn't seem to be a JSON file') unless FastlaneCore::Helper.json_file?(File.expand_path(value))
            end
          ),
          FastlaneCore::ConfigItem.new(
            key: :json_key_data,
            env_name: 'SUPPLY_JSON_KEY_DATA',
            short_option: '-c',
            conflicting_options: [:json_key],
            optional: true,
            description: 'The raw service account JSON data used to authenticate with Google',
            code_gen_sensitive: true,
            default_value: CredentialsManager::AppfileConfig.try_fetch_value(:json_key_data_raw),
            default_value_dynamic: true,
            verify_block: proc do |value|
              begin
                JSON.parse(value)
              rescue JSON::ParserError
                UI.user_error!('Could not parse service account json: JSON::ParseError')
              end
            end
          ),
          FastlaneCore::ConfigItem.new(key: :developer_account_id,
            short_option: '-k',
            env_name: 'SUPPLY_DEVELOPER_ACCOUNT_ID',
            description: 'The ID of your Google Play Console account. Can be obtained from the URL when you log in (`https://play.google.com/apps/publish/?account=...` or when you 'Obtain private app publishing rights' (https://developers.google.com/android/work/play/custom-app-api/get-started#retrieve_the_developer_account_id)',
            code_gen_sensitive: true,
            default_value: CredentialsManager::AppfileConfig.try_fetch_value(:developer_account_id),
            default_value_dynamic: true),
          # APK
          FastlaneCore::ConfigItem.new(
            key: :apk,
            env_name: 'SUPPLY_APK',
            description: 'Path to the APK file to upload',
            short_option: '-b',
            code_gen_sensitive: true,
            default_value: Dir['*.apk'].last || Dir[File.join('app', 'build', 'outputs', 'apk', 'app-release.apk')].last,
            default_value_dynamic: true,
            verify_block: proc do |value|
              UI.user_error!('No value found for 'apk'') if value.to_s.length == 0
              UI.user_error!('Could not find apk file at path '#{value}'') unless File.exist?(value)
              UI.user_error!('apk file is not an apk') unless value.end_with?('.apk')
            end
          ),
          # Title
          FastlaneCore::ConfigItem.new(key: :app_title,
            env_name: 'SUPPLY_APP_TITLE',
            short_option: '-q',
            description: 'App Title'),
          # Language
          FastlaneCore::ConfigItem.new(key: :language,
            short_option: '-m',
            env_name: 'SUPPLY_LANGUAGE',
            description: 'Default app language (e.g. 'en_US')',
            default_value: 'en_US',
            verify_block: proc do |language|
              unless Supply::Languages::ALL_LANGUAGES.include?(language)
                UI.user_error!('Please enter one of the available languages: #{Supply::Languages::ALL_LANGUAGES}')
              end
            end),
          # Google Play API
          FastlaneCore::ConfigItem.new(key: :root_url,
            env_name: 'SUPPLY_ROOT_URL',
            description: 'Root URL for the Google Play API. The provided URL will be used for API calls in place of https://www.googleapis.com/',
            optional: true,
            verify_block: proc do |value|
              UI.user_error!('Could not parse URL '#{value}'') unless value =~ URI.regexp
            end),
          FastlaneCore::ConfigItem.new(key: :timeout,
            env_name: 'SUPPLY_TIMEOUT',
            optional: true,
            description: 'Timeout for read, open, and send (in seconds)',
            type: Integer,
            default_value: 300)
        ]
      end
    
          def close_body(body)
        body.close if body.respond_to?(:close)
      end
    end
  end
end

    
        it 'redirects requests with sneaky encoded session cookies' do
      get '/path', {}, 'HTTP_COOKIE' => 'rack.%73ession=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/path')
    end
  end
    
        it 'leaves TempFiles untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['file'][:filename] + '\n' + \
                                                 request.params['file'][:tempfile].read + '\n' + \
                                                 request.params['other']]]
      end
    
    ROOT = File.expand_path(File.join(File.dirname(__FILE__), '..', '..', '..'))
$LOAD_PATH.unshift File.join(ROOT, 'logstash-core/lib')
    
      describe '#old_identifier' do
    let(:source) do
      'alias foo bar'
    end
    
        context 'within a module definition node' do
      let(:src) { 'module M; def method; end; 1; end' }
    
          def contained_by_multiline_collection_that_could_be_broken_up?(node)
        node.each_ancestor.find do |ancestor|
          if ancestor.hash_type? || ancestor.array_type?
            if breakable_collection?(ancestor, ancestor.children)
              return children_could_be_broken_up?(ancestor.children)
            end
          end
    
        it 'registers an offense if no method is defined' do
      src = <<~RUBY
        A.instance_eval do
          #{modifier}
        end
      RUBY
      inspect_source(src)
      expect(cop.offenses.size).to eq(1)
    end
    
            true
      end
    RUBY
  end
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
          assert_equal 0, q.size
      assert_equal 1, ss.size
    
        after do
      Sidekiq.logger = @old_logger
    end
    
          Time.stub(:now, enqueued_time) do
        @poller.enqueue
    
          assert SomeScheduledWorker.perform_in(1.month, 'mike')
      assert_equal 2, ss.size
    
      describe 'redis info' do
    it 'calls the INFO command which returns at least redis_version' do
      output = Sidekiq.redis_info
      assert_includes output.keys, 'redis_version'
    end
  end
end

    
      describe 'delay' do
    require 'action_mailer'
    class InlineFooMailer < ActionMailer::Base
      def bar(str)
        raise InlineError
      end
    end
    
        def tmux_pre_command
      _send_target(tab.pre.shellescape) if tab.pre
    end
    
          '#{project.tmux} send-keys -t #{tmux_window_target} #{project.pre_window.shellescape} C-m'
    end
    
      factory :project_with_deprecations, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/sample.deprecations.yml') }
    end
    
      subject { instance }
    
            Dir.mktmpdir do |dir|
          config_parent = '#{dir}/non_existant_parent/s'
          allow(XDG).to receive(:[]).with('CONFIG').and_return config_parent
          expect(described_class.directory).
            to eq '#{config_parent}/tmuxinator'
          expect(File.directory?('#{config_parent}/tmuxinator')).to be true
        end
      end
    end
  end