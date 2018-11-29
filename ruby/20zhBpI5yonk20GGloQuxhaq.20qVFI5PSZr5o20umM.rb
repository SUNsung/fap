
        
          context 'with a user' do
    let(:user) { Fabricate(:user) }
    
    User.seed do |u|
  u.id = -1
  u.name = 'system'
  u.username = 'system'
  u.username_lower = 'system'
  u.password = SecureRandom.hex
  u.active = true
  u.admin = true
  u.moderator = true
  u.approved = true
  u.trust_level = TrustLevel[4]
end
    
        def initialize(analytics_ingester_client: AnalyticsIngesterClient.new(GA_TRACKING))
      require 'securerandom'
      @session_id = SecureRandom.uuid
      @client = analytics_ingester_client
      @threads = []
      @launch_event_sent = false
    end
    
          it 'uses the correct command to import it' do
        # We have to execute *something* using ` since otherwise we set expectations to `nil`, which is not healthy
        `ls`
    
          describe 'misc features' do
        it 'makes it non optional by default' do
          c = FastlaneCore::ConfigItem.new(key: :test,
                                 default_value: '123')
          expect(c.optional).to eq(false)
        end
    
    shelljoin_testcases = [
  {
    'it' => '(#1) on array with entry with space',
    'it_result' => {
      'windows' => 'wraps this entry in double quotes',
      'other'   => 'escapes the space in this entry'
    },
    'input' => ['a', 'b c', 'd'],
    'expect' => {
      'windows' => 'a 'b c' d',
      'other'   => 'a b\ c d'
    }
  },
  {
    'it' => '(#2) on array with entry with string wrapped in double quotes and space',
    'it_result' => {
      'windows' => 'wraps the entry with space in quote, and doubles the double quotes',
      'other'   => 'escapes the double quotes and escapes the space'
    },
    'input' => ['a', ''b' c', 'd'],
    'expect' => {
      'windows' => 'a '''b'' c' d',
      'other'   => 'a \'b\'\ c d'
    }
  },
  {
    'it' => '(#3) on array with entry with string wrapped in single quotes and space',
    'it_result' => {
      'windows' => 'no changes',
      'other'   => 'escapes the single quotes and space'
    },
    'input' => ['a', ''b' c', 'd'],
    'expect' => {
      'windows' => 'a \''b' c\' d',
      'other'   => 'a \\'b\\'\\ c d'
    }
  },
  # https://github.com/ruby/ruby/blob/ac543abe91d7325ace7254f635f34e71e1faaf2e/test/test_shellwords.rb#L67-L68
  {
    'it' => '(#4) on array with entry that is `$$`',
    'it_result' => {
      'windows' => 'the result includes the process id',
      'other'   => 'the result includes the process id'
    },
    'input' => ['ps', '-p', $$],
    'expect' => {
      'windows' => 'ps -p #{$$}',
      'other'   => 'ps -p #{$$}'
    }
  }
]
    
          it '#environment_variable_name_profile_name uses the correct env variable' do
        result = Match::Utils.environment_variable_name_profile_name(app_identifier: 'tools.fastlane.app', type: 'appstore')
        expect(result).to eq('sigh_tools.fastlane.app_appstore_profile-name')
      end
    
      # Compile a Sass or SCSS string to CSS.
  # Defaults to SCSS.
  #
  # @param contents [String] The contents of the Sass file.
  # @param options [{Symbol => Object}] An options hash;
  #   see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  # @raise [Sass::SyntaxError] if there's an error in the document
  # @raise [Encoding::UndefinedConversionError] if the source encoding
  #   cannot be converted to UTF-8
  # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
  def self.compile(contents, options = {})
    options[:syntax] ||= :scss
    Engine.new(contents, options).to_css
  end
    
        # Adds an entry to the exception's Sass backtrace.
    #
    # @param attrs [{Symbol => Object}] The information in the backtrace entry.
    #   See \{#sass\_backtrace}
    def add_backtrace(attrs)
      sass_backtrace << attrs.reject {|_k, v| v.nil?}
    end
    
        # Processes the options set by the command-line arguments. In particular,
    # sets `@options[:input]` and `@options[:output]` to appropriate IO streams.
    #
    # This is meant to be overridden by subclasses
    # so they can run their respective programs.
    def process_result
      input, output = @options[:input], @options[:output]
      args = @args.dup
      input ||=
        begin
          filename = args.shift
          @options[:filename] = filename
          open_file(filename) || $stdin
        end
      @options[:output_filename] = args.shift
      output ||= @options[:output_filename] || $stdout
      @options[:input], @options[:output] = input, output
    end
    
          opts.on('-q', '--quiet', 'Silence warnings and status messages during conversion.') do |bool|
        @options[:for_engine][:quiet] = bool
      end
    
          def pack_uri(plugin_name)
        url = '#{elastic_pack_base_uri}/#{plugin_name}/#{plugin_name}-#{LOGSTASH_VERSION}.#{PACK_EXTENSION}'
        URI.parse(url)
      end
    
        FileUtils.rm_rf(LogStash::Environment::CACHE_PATH)
    validate_cache_location
    archive_manager.extract(package_file, LogStash::Environment::CACHE_PATH)
    puts('Unpacked at #{LogStash::Environment::CACHE_PATH}')
    puts('The unpacked plugins can now be installed in local-only mode using bin/logstash-plugin install --local [plugin name]')
  end
    
      def warn_local_gems(plugins_with_path)
    puts('Update is not supported for manually defined plugins or local .gem plugin installations, skipping: #{plugins_with_path.join(', ')}')
  end
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end