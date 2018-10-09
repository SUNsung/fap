
        
                  def tag_id(index = nil)
            # a little duplication to construct less strings
            case
            when @object_name.empty?
              sanitized_method_name.dup
            when index
              '#{sanitized_object_name}_#{index}_#{sanitized_method_name}'
            else
              '#{sanitized_object_name}_#{sanitized_method_name}'
            end
          end
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class Label < Base # :nodoc:
        class LabelBuilder # :nodoc:
          attr_reader :object
    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
        # Some actions have special handling in fast_file.rb, that means we can't directly call the action
    # but we have to use the same logic that is in fast_file.rb instead.
    # That's where this switch statement comes into play
    def run_action_requiring_special_handling(command: nil, parameter_map: nil, action_return_type: nil)
      action_return = nil
      closure_argument_value = nil # only used if the action uses it
    
        def initialize(analytics_ingester_client: AnalyticsIngesterClient.new(GA_TRACKING))
      require 'securerandom'
      @session_id = SecureRandom.uuid
      @client = analytics_ingester_client
      @threads = []
      @launch_event_sent = false
    end
    
            # Stub out calls related to the execution environment
        client = double('ingester_client')
        session = FastlaneCore::AnalyticsSession.new(analytics_ingester_client: client)
        expect(client).to receive(:post_event).with({
            client_id: p_hash,
            category: 'fastlane Client Langauge - ruby',
            action: :launch,
            label: nil,
            value: nil
        })
    
            [
          'This will automatically tag your build with the following format: `<grouping>/<lane>/<prefix><build_number>`, where:'.markdown_preserve_newlines,
          list,
          'For example, for build 1234 in the 'appstore' lane, it will tag the commit with `builds/appstore/1234`.'
        ].join('\n')
      end
    
            message = '#{tag} (fastlane)'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
          it 'Does not accept a :commits_count < 1' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            changelog_from_git_commits(commits_count: -1)
          end').runner.execute(:test)
        end.to raise_error(':commits_count must be >= 1')
      end
    
            expect(result.size).to eq(3)
        expect(result[0]).to eq('security create-keychain -p testpassword ~/Library/Keychains/test.keychain')
    
          it 'handles the exclude_dirs parameter with multiple  elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['.bundle', 'Packages/'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir .bundle --exclude-dir Packages/')
      end
    end
  end
end

    
          it 'works with select regex' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              select_regex: /AppDelegate/
            )
          end').runner.execute(:test)
    
        # wrap in double quotes if contains space
    if str =~ /\s/
      # double quotes have to be doubled if will be quoted
      str.gsub!(''', '''')
      return ''' + str + '''
    else
      return str
    end
  end
  module_function :shellescape
end

    
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
    
        it 'returns a label 'No' if a given agent is not working' do
      stub(@agent).working? { false }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'No'
    end
  end
    
              expect(weather_agent.name).to eq('a weather agent')
          expect(weather_agent.schedule).to eq('5pm')
          expect(weather_agent.keep_events_for).to eq(14.days)
          expect(weather_agent.propagate_immediately).to be_falsey
          expect(weather_agent).to be_disabled
          expect(weather_agent.memory).to be_empty
          expect(weather_agent.options).to eq(weather_agent_options)
    
          it 'loads all workers' do
        workers = @agent_runner.send(:load_workers)
        expect(workers).to be_a(Hash)
        expect(workers.keys).to eq(['HuginnScheduler', 'DelayedJobWorker'])
      end
    
    describe HuginnScheduler do
  before(:each) do
    @rufus_scheduler = Rufus::Scheduler.new
    @scheduler = HuginnScheduler.new
    stub(@scheduler).setup {}
    @scheduler.setup!(@rufus_scheduler, Mutex.new)
  end
    
        it 'should ignore strings which just contain a JSONPath' do
      expect(LiquidMigrator.convert_string('$.data')).to eq('$.data')
      expect(LiquidMigrator.convert_string('$first_title')).to eq('$first_title')
      expect(LiquidMigrator.convert_string(' $.data', true)).to eq(' $.data')
      expect(LiquidMigrator.convert_string('lorem $.data', true)).to eq('lorem $.data')
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_string('$.data.test.*', true) }.
        to raise_error('JSONPath '$.data.test.*' is too complex, please check your migration.')
    end
  end
    
          expect {
        Agent.receive!
      }.not_to change { agent2.events.count }
    end
  end
end
    
        def to_a
      @filters.dup
    end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        def queue(request)
      request.on_complete(&method(:handle_response))
      super
    end
    
          private
    
              hosts
        end
    
            # This contains all the registered host capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :host_capabilities
    
            # This returns all registered pushes.
        #
        # @return [Registry]
        def pushes
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.pushes)
            end
          end
        end
    
      THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
=end
    
      test 'frontend links for editing blocked' do
    Precious::App.set(:wiki_options, { allow_editing: false })
    get '/A'
    
      test 'displays_latest_changes' do
    get('/latest_changes')
    body = last_response.body
    
      parameter 'file', 'the package file name', :attribute_name => :package_file, :required => true
    
        # remove any version constrain from the Gemfile so the plugin(s) can be updated to latest version
    # calling update without requirements will remove any previous requirements
    plugins = plugins_to_update(previous_gem_specs_map)
    # Skipping the major version validation when using a local cache as we can have situations
    # without internet connection.
    filtered_plugins = plugins.map { |plugin| gemfile.find(plugin) }
      .compact
      .reject { |plugin| REJECTED_OPTIONS.any? { |key| plugin.options.has_key?(key) } }
      .each   { |plugin| gemfile.update(plugin.name) }