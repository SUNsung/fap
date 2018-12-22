
        
              if @actions_requiring_special_handling.include?(action_name)
        command_return = run_action_requiring_special_handling(
          command: command,
          parameter_map: parameter_map,
          action_return_type: action_class_ref.return_type
        )
        return command_return
      end
    
        def handle_tls_error!(e)
      # Apple has upgraded its App Store Connect servers to require TLS 1.2, but
      # system Ruby 2.0 does not support it. We want to suggest that users upgrade
      # their Ruby version
      suggest_ruby_reinstall(e)
      display_user_error!(e, e.to_s)
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
    
          it 'generates the correct git command with shell-escaped-paths' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: ['./fastlane/README.md', './LICENSE', './fastlane/spec/fixtures/git_commit/A FILE WITH SPACE'], message: 'message')
        end').runner.execute(:test)
    
          if new_email != @user.email
        @user.update!(
          unconfirmed_email: new_email,
          # Regenerate the confirmation token:
          confirmation_token: nil
        )
    
        def resource_params
      params.require(:email_domain_block).permit(:domain)
    end
  end
end

    
      def verified_domain
    return signed_request_account.domain if signed_request_account
  end
    
      def subscription_params
    params.require(:subscription).permit(:endpoint, keys: [:auth, :p256dh])
  end
    
      private
    
        def servers
      @servers ||= Servers.new
    end
    
            @response = (gets || '').chomp
      end
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
    module Capistrano
  class Configuration
    # Holds the variables assigned at Capistrano runtime via `set` and retrieved
    # with `fetch`. Does internal bookkeeping to help identify user mistakes
    # like spelling errors or unused variables that may lead to unexpected
    # behavior.
    class Variables
      CAPISTRANO_LOCATION = File.expand_path('../..', __FILE__).freeze
      IGNORED_LOCATIONS = [
        '#{CAPISTRANO_LOCATION}/configuration/variables.rb:',
        '#{CAPISTRANO_LOCATION}/configuration.rb:',
        '#{CAPISTRANO_LOCATION}/dsl/env.rb:',
        '/dsl.rb:',
        '/forwardable.rb:'
      ].freeze
      private_constant :CAPISTRANO_LOCATION, :IGNORED_LOCATIONS
    
    module LogStash module PluginManager module PackFetchStrategy
  class Repository
    DEFAULT_PACK_URL = 'https://artifacts.elastic.co/downloads/logstash-plugins'
    PACK_EXTENSION = 'zip'
    
        private
    def uncompress(source)
      temporary_directory = Stud::Temporary.pathname
      LogStash::Util::Zip.extract(source, temporary_directory, LOGSTASH_PATTERN_RE)
      temporary_directory
    rescue Zip::Error => e
      # OK Zip's handling of file is bit weird, if the file exist but is not a valid zip, it will raise
      # a `Zip::Error` exception with a file not found message...
      raise InvalidPackError, 'Cannot uncompress the zip: #{source}'
    end
    
        platforms.types.each do |type|
      desc 'Run acceptance test in #{type} machines'
      task type do
        ENV['LS_TEST_PLATFORM']=type
        exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/*_spec.rb']]))
      end
    end
    
          it 'detects closing brace on different line from last element' do
        src = construct(false, true)
        inspect_source(src)
    
        context 'and a comment after the last element' do
      let(:b_comment) { ' # comment b' }
    
          # Returns an array of all the when branches in the `case` statement.
      #
      # @return [Array<WhenNode>] an array of `when` nodes
      def when_branches
        node_parts[1...-1]
      end
    
          # Checks whether the `for` node has a `do` keyword.
      #
      # @return [Boolean] whether the `for` node has a `do` keyword
      def do?
        loc.begin && loc.begin.is?('do')
      end
    
          # Checks whether the `if` is an `elsif`. Parser handles these by nesting
      # `if` nodes in the `else` branch.
      #
      # @return [Boolean] whether the node is an `elsif`
      def elsif?
        keyword == 'elsif'
      end
    
    desc 'Test the paperclip plugin under all supported Rails versions.'
task :all do |t|
  if ENV['BUNDLE_GEMFILE']
    exec('rake spec && cucumber')
  else
    exec('rm -f gemfiles/*.lock')
    Rake::Task['appraisal:gemfiles'].execute
    Rake::Task['appraisal:install'].execute
    exec('rake appraisal')
  end
end
    
    Given /^I update my user view to include the attachment$/ do
  steps %{
    Given I overwrite 'app/views/users/show.html.erb' with:
      '''
      <p>Name: <%= @user.name %></p>
      <p>Attachment: <%= image_tag @user.attachment.url %></p>
      '''
  }
end