
        
        module Fastlane
  # Handles receiving commands from the socket server, finding the Action to be invoked,
  # invoking it, and returning any return values
  class SocketServerActionCommandExecutor < CommandExecutor
    attr_accessor :runner
    attr_accessor :actions_requiring_special_handling
    
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
    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :tag,
                                       env_name: 'FL_GIT_TAG_TAG',
                                       description: 'Define your own tag text. This will replace all other parameters',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :grouping,
                                       env_name: 'FL_GIT_TAG_GROUPING',
                                       description: 'Is used to keep your tags organised under one 'folder'',
                                       default_value: 'builds'),
          FastlaneCore::ConfigItem.new(key: :prefix,
                                       env_name: 'FL_GIT_TAG_PREFIX',
                                       description: 'Anything you want to put in front of the version number (e.g. 'v')',
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :postfix,
                                       env_name: 'FL_GIT_TAG_POSTFIX',
                                       description: 'Anything you want to put at the end of the version number (e.g. '-RC1')',
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :build_number,
                                       env_name: 'FL_GIT_TAG_BUILD_NUMBER',
                                       description: 'The build number. Defaults to the result of increment_build_number if you\'re using it',
                                       default_value: Actions.lane_context[Actions::SharedValues::BUILD_NUMBER],
                                       default_value_dynamic: true,
                                       is_string: false),
          FastlaneCore::ConfigItem.new(key: :message,
                                       env_name: 'FL_GIT_TAG_MESSAGE',
                                       description: 'The tag message. Defaults to the tag's name',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :commit,
                                       env_name: 'FL_GIT_TAG_COMMIT',
                                       description: 'The commit or object where the tag will be set. Defaults to the current HEAD',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :force,
                                       env_name: 'FL_GIT_TAG_FORCE',
                                       description: 'Force adding the tag',
                                       optional: true,
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :sign,
                                       env_name: 'FL_GIT_TAG_SIGN',
                                       description: 'Make a GPG-signed tag, using the default e-mail address's key',
                                       optional: true,
                                       is_string: false,
                                       default_value: false)
        ]
      end
    
          it 'handles no extension or extensions parameters' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
          def call(env)
        unless accepts? env
          instrument env
          result = react env
        end
        result or app.call(env)
      end
    
            directives.compact.sort.join('; ')
      end
    
          def bad_cookies
        @bad_cookies ||= []
      end
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
        post('/', {'csrf_param' => token}, 'rack.session' => {:csrf => token})
    expect(last_response).to be_ok
  end
    
      context 'with default reaction' do
    before(:each) do
      mock_app do
        use Rack::Protection::CookieTossing
        run DummyApp
      end
    end
    
    When /^(?:|I )press '([^']*)'$/ do |button|
  click_button(button)
end
    
        def add_paperclip_callbacks
      @klass.send(
        :define_paperclip_callbacks,
        :post_process, :'#{@name}_post_process')
    end