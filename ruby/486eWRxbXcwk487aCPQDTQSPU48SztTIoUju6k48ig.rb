
        
                # This is what child classes implement.
        def render
          raise NotImplementedError, 'Subclasses must implement a render method'
        end
    
            def render(&block)
          options = @options.stringify_keys
          tag_value = options.delete('value')
          name_and_id = options.dup
    
    module ActionView #:nodoc:
  # = Action View PathSet
  #
  # This class is used to store and access paths in Action View. A number of
  # operations are defined so that you can search among the paths in this
  # set and also perform operations on other +PathSet+ objects.
  #
  # A +LookupContext+ will use a +PathSet+ to store the paths in its context.
  class PathSet #:nodoc:
    include Enumerable
    
    DATA = {'foo'=>'bar', 'alpha'=>{'beta'=>'gamma'}, 'lipsum'=>['lorem', 'ipsum', 'dolor']}
    
    
def pathutil_relative
  Pathutil.new(DOC_PATH).relative_path_from(COL_PATH).to_s
end
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
                Jekyll.logger.debug 'LiveReload:', 'Reloading #{p.url}'
            Jekyll.logger.debug '', json_message
            @websockets.each { |ws| ws.send(json_message) }
          end
        end
    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
        def run(action_named: nil, action_class_ref: nil, parameter_map: nil)
      action_return = runner.execute_action(action_named, action_class_ref, [parameter_map], custom_dir: '.')
      return action_return
    end
    
        def run!
      require_program(:version, :description)
      trap('INT') { abort(program(:int_message)) } if program(:int_message)
      trap('INT') { program(:int_block).call } if program(:int_block)
      global_option('-h', '--help', 'Display help documentation') do
        args = @args - %w(-h --help)
        command(:help).run(*args)
        return
      end
      global_option('-v', '--version', 'Display version information') do
        say(version)
        return
      end
      parse_global_options
      remove_global_options(options, @args)
    
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
    
          context 'when specify framework' do
        let(:command) { 'archive' }
    
              expect(result).to eq('swiftlint autocorrect')
        end
      end
    
        context 'external commands are failed' do
      context 'with error_callback' do
        it 'doesn't raise shell_error' do
          allow(FastlaneCore::UI).to receive(:error)
          called = false
          expect_command('exit 1', exitstatus: 1)
          Fastlane::Actions.sh('exit 1', error_callback: ->(_) { called = true })
    
        # Creates a new option
    # @param key (Symbol) the key which is used as command parameters or key in the fastlane tools
    # @param env_name (String) the name of the environment variable, which is only used if no other values were found
    # @param description (String) A description shown to the user
    # @param short_option (String) A string of length 1 which is used for the command parameters (e.g. -f)
    # @param default_value the value which is used if there was no given values and no environment values
    # @param default_value_dynamic (Boolean) Set if the default value is generated dynamically
    # @param verify_block an optional block which is called when a new value is set.
    #   Check value is valid. This could be type checks or if a folder/file exists
    #   You have to raise a specific exception if something goes wrong. Append .red after the string
    # @param is_string *DEPRECATED: Use `type` instead* (Boolean) is that parameter a string? Defaults to true. If it's true, the type string will be verified.
    # @param type (Class) the data type of this config item. Takes precedence over `is_string`. Use `:shell_string` to allow types `String`, `Hash` and `Array` that will be converted to shell-escaped strings
    # @param skip_type_validation (Boolean) is false by default. If set to true, type of the parameter will not be validated.
    # @param optional (Boolean) is false by default. If set to true, also string values will not be asked to the user
    # @param conflicting_options ([]) array of conflicting option keys(@param key). This allows to resolve conflicts intelligently
    # @param conflict_block an optional block which is called when options conflict happens
    # @param deprecated (Boolean|String) Set if the option is deprecated. A deprecated option should be optional and is made optional if the parameter isn't set, and fails otherwise
    # @param sensitive (Boolean) Set if the variable is sensitive, such as a password or API token, to prevent echoing when prompted for the parameter
    # @param display_in_shell (Boolean) Set if the variable can be used from shell
    # rubocop:disable Metrics/ParameterLists
    def initialize(key: nil,
                   env_name: nil,
                   description: nil,
                   short_option: nil,
                   default_value: nil,
                   default_value_dynamic: false,
                   verify_block: nil,
                   is_string: true,
                   type: nil,
                   skip_type_validation: false,
                   optional: nil,
                   conflicting_options: nil,
                   conflict_block: nil,
                   deprecated: nil,
                   sensitive: nil,
                   code_gen_sensitive: false,
                   code_gen_default_value: nil,
                   display_in_shell: true)
      UI.user_error!('key must be a symbol') unless key.kind_of?(Symbol)
      UI.user_error!('env_name must be a String') unless (env_name || '').kind_of?(String)
    
    class String
  # CrossplatformShellwords
  def shellescape
    CrossplatformShellwords.shellescape(self)
  end
end
    
          it 'should not be fooled by 10 local code signing identities available' do
        allow(FastlaneCore::CertChecker).to receive(:wwdr_certificate_installed?).and_return(true)
        allow(FastlaneCore::CertChecker).to receive(:list_available_identities).and_return('     10 valid identities found\n')
        expect(FastlaneCore::UI).not_to(receive(:error))
    
    shellescape_testcases = [
  # baseline
  {
    'it' => '(#1) on simple string',
    'it_result' => {
      'windows' => 'doesn't change it',
      'other'   => 'doesn't change it'
    },
    'str' => 'normal_string_without_spaces',
    'expect' => {
      'windows' => 'normal_string_without_spaces',
      'other'   => 'normal_string_without_spaces'
    }
  },
  {
    'it' => '(#2) on empty string',
    'it_result' => {
      'windows' => 'wraps it in double quotes',
      'other'   => 'wraps it in single quotes'
    },
    'str' => '',
    'expect' => {
      'windows' => '''',
      'other'   => '\'\''
    }
  },
  # spaces
  {
    'it' => '(#3) on string with spaces',
    'it_result' => {
      'windows' => 'wraps it in double quotes',
      'other'   => 'escapes spaces with <backslash>'
    },
    'str' => 'string with spaces',
    'expect' => {
      'windows' => ''string with spaces'',
      'other'   => 'string\ with\ spaces'
    }
  },
  # double quotes
  {
    'it' => '(#4) on simple string that is already wrapped in double quotes',
    'it_result' => {
      'windows' => 'doesn't touch it',
      'other'   => 'escapes the double quotes with <backslash>'
    },
    'str' => ''normal_string_without_spaces'',
    'expect' => {
      'windows' => ''normal_string_without_spaces'',
      'other'   => '\'normal_string_without_spaces\''
    }
  },
  {
    'it' => '(#5) on string with spaces that is already wrapped in double quotes',
    'it_result' => {
      'windows' => 'wraps in double quotes and duplicates existing double quotes',
      'other'   => 'escapes the double quotes and spaces with <backslash>'
    },
    'str' => ''string with spaces already wrapped in double quotes'',
    'expect' => {
      'windows' => ''''string with spaces already wrapped in double quotes'''',
      'other'   => '\'string\ with\ spaces\ already\ wrapped\ in\ double\ quotes\''
    }
  },
  {
    'it' => '(#6) on string with spaces and double quotes',
    'it_result' => {
      'windows' => 'wraps in double quotes and duplicates existing double quotes',
      'other'   => 'escapes the double quotes and spaces with <backslash>'
    },
    'str' => 'string with spaces and 'double' quotes',
    'expect' => {
      'windows' => ''string with spaces and ''double'' quotes'',
      'other'   => 'string\ with\ spaces\ and\ \'double\'\ quotes'
    }
  },
  # https://github.com/ruby/ruby/blob/ac543abe91d7325ace7254f635f34e71e1faaf2e/test/test_shellwords.rb#L64-L65
  {
    'it' => '(#7) on simple int',
    'it_result' => {
      'windows' => 'doesn't change it',
      'other'   => 'doesn't change it'
    },
    'str' => 3,
    'expect' => {
      'windows' => '3',
      'other'   => '3'
    }
  },
  # single quotes
  {
    'it' => '(#8) on simple string that is already wrapped in single quotes',
    'it_result' => {
      'windows' => 'doesn't touch it',
      'other'   => 'escapes the single quotes with <backslash>'
    },
    'str' => ''normal_string_without_spaces'',
    'expect' => {
      'windows' => ''normal_string_without_spaces'',
      'other'   => '\\'normal_string_without_spaces\\''
    }
  },
  {
    'it' => '(#9) on string with spaces that is already wrapped in single quotes',
    'it_result' => {
      'windows' => 'wraps in double quotes',
      'other'   => 'escapes the single quotes and spaces with <backslash>'
    },
    'str' => ''string with spaces already wrapped in single quotes'',
    'expect' => {
      'windows' => '\''string with spaces already wrapped in single quotes'\'',
      'other'   => '\\'string\\ with\\ spaces\\ already\\ wrapped\\ in\\ single\\ quotes\\''
    }
  },
  {
    'it' => '(#10) string with spaces and single quotes',
    'it_result' => {
      'windows' => 'wraps in double quotes and leaves single quotes',
      'other'   => 'escapes the single quotes and spaces with <backslash>'
    },
    'str' => 'string with spaces and 'single' quotes',
    'expect' => {
      'windows' => '\'string with spaces and 'single' quotes\'',
      'other'   => 'string\ with\ spaces\ and\ \\\'single\\\'\ quotes'
    }
  },
  {
    'it' => '(#11) string with spaces and <backslash>',
    'it_result' => {
      'windows' => 'wraps in double quotes and escapes the backslash with backslash',
      'other'   => 'escapes the spaces and the backslash (which in results in quite a lot of them)'
    },
    'str' => 'string with spaces and \\ in it',
    'expect' => {
      'windows' => '\'string with spaces and \\ in it\'',
      'other'   => 'string\\ with\\ spaces\\ and\\ \\\\\\ in\\ it'
    }
  },
  {
    'it' => '(#12) string with spaces and <slash>',
    'it_result' => {
      'windows' => 'wraps in double quotes',
      'other'   => 'escapes the spaces'
    },
    'str' => 'string with spaces and / in it',
    'expect' => {
      'windows' =>  '\'string with spaces and / in it\'',
      'other'   => 'string\\ with\\ spaces\\ and\\ /\\ in\\ it'
    }
  },
  {
    'it' => '(#13) string with spaces and parens',
    'it_result' => {
      'windows' => 'wraps in double quotes',
      'other'   => 'escapes the spaces and parens'
    },
    'str' => 'string with spaces and (parens) in it',
    'expect' => {
      'windows' => '\'string with spaces and (parens) in it\'',
      'other'   => 'string\\ with\\ spaces\\ and\\ \\(parens\\)\\ in\\ it'
    }
  },
  {
    'it' => '(#14) string with spaces, single quotes and parens',
    'it_result' => {
      'windows' => 'wraps in double quotes',
      'other'   => 'escapes the spaces, single quotes and parens'
    },
    'str' => 'string with spaces and 'quotes' (and parens) in it',
    'expect' => {
      'windows' => '\'string with spaces and 'quotes' (and parens) in it\'',
      'other'   => 'string\\ with\\ spaces\\ and\\ \\'quotes\\'\\ \\(and\\ parens\\)\\ in\\ it'
    }
  }
]
    
            # Download a file from the remote machine to the local machine.
        #
        # @param [String] from Path of the file on the remote machine.
        # @param [String] to Path of where to save the file locally.
        def download(from, to)
        end
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
            def initialize(argv, env)
          @argv = argv
          @env  = env
          @logger = Log4r::Logger.new('vagrant::command::#{self.class.to_s.downcase}')
        end
    
            # This returns all synced folder implementations.
        #
        # @return [Registry]
        def synced_folders
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.synced_folders)
            end
          end
        end
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is usable. This should return true or false.
        #
        # If raise_error is true, then instead of returning false, this
        # should raise an error with a helpful message about why this
        # provider cannot be used.
        #
        # @param [Boolean] raise_error If true, raise exception if not usable.
        # @return [Boolean]
        def self.usable?(raise_error=false)
          # Return true by default for backwards compat since this was
          # introduced long after providers were being written.
          true
        end
    
    def attach_attachment(name, definition = nil)
  snippet = 'has_attached_file :#{name}'
  if definition
    snippet += ', \n'
    snippet += definition
  end
  snippet += '\ndo_not_validate_attachment_file_type :#{name}\n'
  cd('.') do
    transform_file('app/models/user.rb') do |content|
      content.sub(/end\Z/, '#{snippet}\nend')
    end
  end
end
    
    # Multi-line step scoper
When /^(.*) within (.*[^:]):$/ do |step, parent, table_or_string|
  with_scope(parent) { When '#{step}:', table_or_string }
end
    
        def self.definitions_for(klass)
      instance.definitions_for(klass)
    end
    
        def blank_name?
      @filepath.nil? || @filepath.empty?
    end
    
        # Returns the filename, the same way as ':basename.:extension' would.
    def filename attachment, style_name
      [ basename(attachment, style_name), extension(attachment, style_name) ].delete_if(&:empty?).join('.'.freeze)
    end