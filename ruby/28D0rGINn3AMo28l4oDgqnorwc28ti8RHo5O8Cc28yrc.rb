
        
            Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
        def class_ref_for_action(named: nil)
      class_ref = Actions.action_class_ref(named)
      unless class_ref
        if Fastlane::Actions.formerly_bundled_actions.include?(action)
          # This was a formerly bundled action which is now a plugin.
          UI.verbose(caller.join('\n'))
          UI.user_error!('The action '#{action}' is no longer bundled with fastlane. You can install it using `fastlane add_plugin #{action}`')
        else
          Fastlane::ActionsList.print_suggestions(action)
          UI.user_error!('Action '#{action}' not available, run `fastlane actions` to get a full list')
        end
      end
    
        def show_message
      UI.message('Sending anonymous analytics information')
      UI.message('Learn more at https://docs.fastlane.tools/#metrics')
      UI.message('No personal or sensitive data is sent.')
      UI.message('You can disable this by adding `opt_out_usage` at the top of your Fastfile')
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
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
          })
        end').runner.execute(:test)
    
            expect(result).to eq('carthage bootstrap --configuration Release')
      end
    
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
    
        cmd = HOMEBREW_INTERNAL_COMMAND_ALIASES.fetch(ARGV.first, ARGV.first)
    
      it 'accepts a Float' do
    sleep(0.1).should be_close(0, 2)
  end
    
      it 'can throw an object' do
    lambda {
      obj = Object.new
      catch obj do
        throw obj
      end
    }.should_not raise_error(NameError)
  end
end
    
        # @return [String] the ruby version string bundler uses to craft its gem path
    def gem_ruby_version
      RbConfig::CONFIG['ruby_version']
    end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end