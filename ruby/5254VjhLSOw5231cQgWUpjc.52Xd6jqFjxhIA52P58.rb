
        
              before :each do
        Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER] = build_number
      end
    
            expect(result).to eq('carthage build --no-skip-current')
      end
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path.shellescape}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: '#{path}')
          end').runner.execute(:test)
        end
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
    
    # Windows implementation
module WindowsShellwords
  def shellescape(str)
    str = str.to_s
    
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
    
              # Handle the case that argv was empty or didn't contain any subcommand
          main_args = argv.dup if main_args.nil?
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                result.instance_variable_set(key, obj.instance_variable_get(key))
              end
            end
          end
    
            # This registers a plugin. This should _NEVER_ be called by the public
        # and should only be called from within Vagrant. Vagrant will
        # automatically register V1 plugins when a name is set on the
        # plugin.
        def register(plugin)
          if !@registered.include?(plugin)
            @logger.info('Registered plugin: #{plugin.name}')
            @registered << plugin
          end
        end
    
            # Registers additional provisioners to be available.
        #
        # @param [String] name Name of the provisioner.
        def self.provisioner(name=UNSET_VALUE, &block)
          data[:provisioners] ||= Registry.new
    
            # Helper method that will set a value if a value is given, or otherwise
        # return the already set value.
        #
        # @param [Symbol] key Key for the data
        # @param [Object] value Value to store.
        # @return [Object] Stored value.
        def self.get_or_set(key, value=UNSET_VALUE)
          # If no value is to be set, then return the value we have already set
          return data[key] if value.eql?(UNSET_VALUE)
    
        # Merge one registry with another and return a completely new
    # registry. Note that the result cache is completely busted, so
    # any gets on the new registry will result in a cache miss.
    def merge(other)
      self.class.new.tap do |result|
        result.merge!(self)
        result.merge!(other)
      end
    end
    
    $stderr.puts <<DEPRECATION
WARNING: Ruby Sass's Git repository is moving, and the old repository will be
deled on 26 March 2019! Please update your Git URLs to point to the new
repository at https://github.com/sass/ruby-sass.
    
        class << self
      # Returns an error report for an exception in CSS format.
      #
      # @param e [Exception]
      # @param line_offset [Integer] The number of the first line of the Sass template.
      # @return [String] The error report
      # @raise [Exception] `e`, if the
      #   {file:SASS_REFERENCE.md#full_exception-option `:full_exception`} option
      #   is set to false.
      def exception_to_css(e, line_offset = 1)
        header = header_string(e, line_offset)
    
        # Prints a status message about performing the given action,
    # colored using the given color (via terminal escapes) if possible.
    #
    # @param name [#to_s] A short name for the action being performed.
    #   Shouldn't be longer than 11 characters.
    # @param color [Symbol] The name of the color to use for this action.
    #   Can be `:red`, `:green`, or `:yellow`.
    def puts_action(name, color, arg)
      return if @options[:for_engine][:quiet]
      printf color(color, '%11s %s\n'), name, arg
      STDOUT.flush
    end
    
          if !@options[:update] && !@options[:watch] &&
          @args.first && colon_path?(@args.first)
        if @args.size == 1
          @args = split_colon_path(@args.first)
        else
          @fake_update = true
          @options[:update] = true
        end
      end
      load_compass if @options[:compass]
      return interactive if @options[:interactive]
      return watch_or_update if @options[:watch] || @options[:update]
      super
    
      def xcode_app_path
    File.expand_path('../..', developer_prefix)
  end
    
          attr_reader :page, :content
    
        # don't use h1 or it will be promoted to replace file name
    # which doesn't generate a normal header link
    @wiki.write_page(page, :markdown, '## ' + text,
                     { :name => 'user1', :email => 'user1' });
    
      test 'transliteration' do
    # we transliterate only when adapter is grit
    return if defined?(Gollum::GIT_ADAPTER) && Gollum::GIT_ADAPTER != 'grit'
    
          ws  = WorkSpace.new(binding)
      irb = Irb.new(ws)