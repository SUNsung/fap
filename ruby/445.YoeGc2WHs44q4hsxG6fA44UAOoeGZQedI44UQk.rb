
        
                  reload_file = File.join(Serve.singleton_class::LIVERELOAD_DIR, 'livereload.js')
    
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
    
          def self.example_code
        [
          'add_git_tag # simple tag with default values',
          'add_git_tag(
            grouping: 'fastlane-builds',
            prefix: 'v',
            postfix: '-RC1',
            build_number: 123
          )',
          '# Alternatively, you can specify your own tag. Note that if you do specify a tag, all other arguments are ignored.
          add_git_tag(
            tag: 'my_custom_tag'
          )'
        ]
      end
    
          it 'adds publish_docset param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            publish_docset: true
          )
        end').runner.execute(:test)
    
          it 'generates the correct git command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: './fastlane/README.md', message: 'message')
        end').runner.execute(:test)
    
          context 'with valid path to compile_commands.json' do
        context 'with no path to oclint' do
          let(:result) do
            Fastlane::FastFile.new.parse('lane :test do
              oclint( compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json' )
            end').runner.execute(:test)
          end
          let(:command) { 'cd #{File.expand_path('.').shellescape} && oclint -report-type=html -o=oclint_report.html' }
    
          context 'when specify mode explicitly' do
        it 'uses lint mode as default' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint
          end').runner.execute(:test)
    
          it 'passes an environment Hash' do
        expect_command({ 'PATH' => '/usr/local/bin' }, 'git', 'commit')
        Fastlane::Actions.sh({ 'PATH' => '/usr/local/bin' }, 'git', 'commit')
      end
    
            it 'sets the data type correctly if `is_string` is set but the type is specified' do
          config_item = FastlaneCore::ConfigItem.new(key: :foo,
                                                     description: 'foo',
                                                     is_string: true,
                                                     type: Array)
    
            context 'the exponent is greater than or equal to the precision (6 by default)' do
          it 'converts a floating point number using exponential form' do
            format('%#{f}', 1234567).should == '1.23457#{exp}+06'
            format('%#{f}', 1234567890123).should == '1.23457#{exp}+12'
            format('%#{f}', -1234567).should == '-1.23457#{exp}+06'
          end
        end
    
      it 'accepts a Fixnum' do
    sleep(0).should be_close(0, 2)
  end
    
      it 'no raises a RuntimeError on symbols' do
    v = :sym
    lambda { v.taint }.should_not raise_error(RuntimeError)
    v.tainted?.should == false
  end