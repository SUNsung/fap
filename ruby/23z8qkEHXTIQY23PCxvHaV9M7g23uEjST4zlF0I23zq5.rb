
        
        Jekyll::Deprecator.process(ARGV)
    
          def after_feature_element(feature_element)
        @timings[feature_element_timing_key(feature_element)] = Time.now - @timings[feature_element_timing_key(feature_element)]
        @io.print ' (#{@timings[feature_element_timing_key(feature_element)]}s)'
      end
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
                @config['syntax_highlighter_opts'] = begin
              strip_coderay_prefix(
                @config['syntax_highlighter_opts'] \
                  .merge(CODERAY_DEFAULTS) \
                  .merge(@config['coderay'])
              )
            end
          end
        end
      end
    end
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
    
        To install Clojure you should install Leiningen:
      brew install leiningen
    and then follow the tutorial:
      https://github.com/technomancy/leiningen/blob/stable/doc/TUTORIAL.md
    EOS
  when 'osmium' then <<-EOS.undent
    The creator of Osmium requests that it not be packaged and that people
    use the GitHub master branch instead.
    EOS
  when 'gfortran' then <<-EOS.undent
    GNU Fortran is now provided as part of GCC, and can be installed with:
      brew install gcc
    EOS
  when 'play' then <<-EOS.undent
    Play 2.3 replaces the play command with activator:
      brew install typesafe-activator
    
      def elisp_caveats
    return if f.keg_only?
    if keg && keg.elisp_installed?
      <<-EOS.undent
        Emacs Lisp files have been installed to:
          #{HOMEBREW_PREFIX}/share/emacs/site-lisp/#{f.name}
      EOS
    end
  end
    
          begin
        migrator = Migrator.new(f)
        migrator.migrate
      rescue Migrator::MigratorDifferentTapsError
      rescue Exception => e
        onoe e
      end
    end
  end
    
      DATA = :DATA
    
          action_launched('puts')
      return_value = Fastlane::Actions::PutsAction.run([value])
      action_completed('puts', status: FastlaneCore::ActionCompletionStatus::SUCCESS)
      return return_value
    end
    
        context 'action launch' do
      let(:launch_context) do
        FastlaneCore::ActionLaunchContext.new(
          action_name: action_name,
          p_hash: p_hash,
          platform: 'ios',
          fastlane_client_language: fastlane_client_language
        )
      end
    
          def self.details
        list = <<-LIST.markdown_list
          `grouping` is just to keep your tags organised under one 'folder', defaults to 'builds'
          `lane` is the name of the current fastlane lane
          `prefix` is anything you want to stick in front of the version number, e.g. 'v'
          `postfix` is anything you want to stick at the end of the version number, e.g. '-RC1'
          `build_number` is the build number, which defaults to the value emitted by the `increment_build_number` action
        LIST
    
          it 'allows you to sign the tag using the default e-mail address's key.' do
        tag = '2.0.0'
        message = 'message'
    
          it 'logs the command if verbose' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: 'foo.bar')
          end').runner.execute(:test)
        end
      end
    
          it 'works with select regex when regex is string' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              select_regex: \'\/AppDelegate\'
            )
          end').runner.execute(:test)
    
            expected = 'slather coverage
                    --travis
                    --travispro
                    --circleci
                    --jenkins
                    --buildkite
                    --teamcity
                    --coveralls
                    --simple-output
                    --gutter-json
                    --cobertura-xml
                    --llvm-cov
                    --html
                    --show
                    --build-directory foo
                    --source-directory baz
                    --output-directory 123
                    --ignore nothing
                    --verbose
                    --input-format bah
                    --scheme Foo
                    --configuration Bar
                    --workspace foo.xcworkspace
                    --binary-file you
                    --binary-basename YourApp
                    --binary-basename YourFramework
                    --source-files #{source_files.shellescape}
                    --decimals 2 foo.xcodeproj'.gsub(/\s+/, ' ')
        expect(result).to eq(expected)
      end
    
          context 'without error_callback' do
        it 'raise shell_error' do
          allow(FastlaneCore::UI).to receive(:shell_error!)
          expect_command('exit 1', exitstatus: 1)
          Fastlane::Actions.sh('exit 1')
    
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

    
              def nonzero?
            @path.exclude?('\0')
          end
    
              validations do
            validates :config, allowed_keys: ALLOWED_KEYS
            validates :policy, inclusion: { in: %w[pull-push push pull], message: 'should be pull-push, push, or pull' }, allow_blank: true
          end
    
              @bar2 = Agents::DotBar.new(name: 'bar2').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.propagate_immediately = true
            agent.disabled = true
            agent.save!
          },
    
          context '#restart_dead_workers' do
        before do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
    
    describe LiquidMigrator do
  describe 'converting JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('$.data', true)).to eq('{{data}}')
      expect(LiquidMigrator.convert_string('$.data.test', true)).to eq('{{data.test}}')
      expect(LiquidMigrator.convert_string('$first_title', true)).to eq('{{first_title}}')
    end
    
      describe '#interpolate_jsonpaths' do
    let(:payload) { { :there => { :world => 'WORLD' }, :works => 'should work' } }
    
          it 'should only schedule receiving agents that are set to propagate_immediately' do
        Event.delete_all
        sender = Agents::SomethingSource.new(:name => 'Sending Agent')
        sender.user = users(:bob)
        sender.save!
    
    module URI
  ;
  class << self
# Does the char code correspond to an alpha-numeric char.
# isAlphaNumeric('a'.ord) => true
# isAlphaNumeric(''.ord) => false
    def isAlphaNumeric(cc)
      # a - z
      if (97 <= cc && cc <= 122);
        return true
      end
      # A - Z
      if (65 <= cc && cc <= 90);
        return true
      end
      # 0 - 9
      if (48 <= cc && cc <= 57);
        return true
      end
    
          def left_diff_line_number(id, line)
        if line =~ /^@@/
          m, li                  = *line.match(/\-(\d+)/)
          @left_diff_line_number = li.to_i
          @current_line_number   = @left_diff_line_number
          ret                    = '...'
        elsif line[0] == ?-
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        elsif line[0] == ?+
          ret = ' '
        else
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        end
        ret
      end
    
        end
  end
end

    
    def cloned_testpath(path)
  repo   = File.expand_path(testpath(path))
  path   = File.dirname(repo)
  cloned = File.join(path, self.class.name)
  FileUtils.rm_rf(cloned)
  Dir.chdir(path) do
    %x{git clone #{File.basename(repo)} #{self.class.name} 2>/dev/null}
  end
  cloned
end
    
      test 'edit returns nil for non-existant page' do
    # post '/edit' fails. post '/edit/' works.
    page = 'not-real-page'
    path = '/'
    post '/edit/', :content => 'edit_msg',
         :page              => page, :path => path, :message => ''
    page_e = @wiki.paged(page, path)
    assert_equal nil, page_e
  end
    
        assert body.include?('<span class='username'>Charles Pence</span>'), '/latest_changes should include the Author Charles Pence'
    assert body.include?('a8ad3c0'), '/latest_changes should include the :latest_changes_count commit'
    assert !body.include?('60f12f4'), '/latest_changes should not include more than latest_changes_count commits'
    assert body.include?('<a href='Data-Two.csv/874f597a5659b4c3b153674ea04e406ff393975e'>Data-Two.csv</a>'), '/latest_changes include links to modified files in #{body}'
    assert body.include?('<a href='Hobbit/874f597a5659b4c3b153674ea04e406ff393975e'>Hobbit.md</a>'), '/latest_changes should include links to modified pages in #{body}'
  end
    
    def replace_header(head, header_name)
  head.sub!(/(\.#{header_name}\s*= ').*'/) { '#{$1}#{send(header_name)}''}
end