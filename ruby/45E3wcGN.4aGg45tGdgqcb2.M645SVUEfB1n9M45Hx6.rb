
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    module Jekyll
  binding.pry
end

    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
      # reset variable to default state on Windows
  ENV['TZ'] = nil
  dst
end

    
    module Jekyll
  module External
    class << self
      #
      # Gems that, if installed, should be loaded.
      # Usually contain subcommands.
      #
      def blessed_gems
        %w(
          jekyll-docs
          jekyll-import
        )
      end
    
          it 'does switch to plain text when xml is toggled off' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(xml: false)
          end').runner.execute(:test)
    
          it 'increments the build number of the Xcode project' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
          it 'raises an exception when use passes workspace' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            increment_version_number(xcodeproj: 'project.xcworkspace')
          end').runner.execute(:test)
        end.to raise_error('Please pass the path to the project, not the workspace')
      end
    end
  end
end

    
      def test_at3
    t2000 = get_t2000
    assert_equal(t2000, Time.at(t2000))
#    assert_raise(RangeError) do
#      Time.at(2**31-1, 1_000_000)
#      Time.at(2**63-1, 1_000_000)
#    end
#    assert_raise(RangeError) do
#      Time.at(-2**31, -1_000_000)
#      Time.at(-2**63, -1_000_000)
#    end
  end
    
      it 'ignores spaces between directives' do
    'abcdefgh'.unpack(unpack_format(' ', 2)).should == [1684234849, 1751606885]
  end
end
    
      def self.sleeping_thread
    Thread.new do
      begin
        sleep
        ScratchPad.record :woken
      rescue Object => e
        ScratchPad.record e
      end
    end
  end
    
          opts.on('-s', '--stdin', :NONE,
              'Read input from standard input instead of an input file.',
              'This is the default if no input file is specified.') do
        @options[:input] = $stdin
      end
    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end

    
            def log_level(name, options = {})
          if options[:prepend]
            level = log_levels.values.min
            level = level.nil? ? 0 : level - 1
          else
            level = log_levels.values.max
            level = level.nil? ? 0 : level + 1
          end
          log_levels.update(name => level)
          define_logger(name)
        end
    
          def installed_gem_version(gem_name)
        Gem.loaded_specs[gem_name].version
      end
    
      desc 'Revert server(s) to previous release.'
  task :reverting do
  end
    
        yield