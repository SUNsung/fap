
        
            # Extract options for this collection from the site configuration.
    #
    # Returns the metadata for this collection
    def extract_metadata
      if site.config['collections'].is_a?(Hash)
        site.config['collections'][label] || {}
      else
        {}
      end
    end
    
          # Add common options to a command for building configuration
      #
      # cmd - the Jekyll::Command to add these options to
      #
      # Returns nothing
      # rubocop:disable Metrics/MethodLength
      def add_build_options(cmd)
        cmd.option 'config', '--config CONFIG_FILE[,CONFIG_FILE2,...]',
                   Array, 'Custom configuration file'
        cmd.option 'destination', '-d', '--destination DESTINATION',
                   'The current folder will be generated into DESTINATION'
        cmd.option 'source', '-s', '--source SOURCE', 'Custom source directory'
        cmd.option 'future', '--future', 'Publishes posts with a future date'
        cmd.option 'limit_posts', '--limit_posts MAX_POSTS', Integer,
                   'Limits the number of posts to parse and publish'
        cmd.option 'watch', '-w', '--[no-]watch', 'Watch for changes and rebuild'
        cmd.option 'baseurl', '-b', '--baseurl URL',
                   'Serve the website from the given base URL'
        cmd.option 'force_polling', '--force_polling', 'Force watch to use polling'
        cmd.option 'lsi', '--lsi', 'Use LSI for improved related posts'
        cmd.option 'show_drafts', '-D', '--drafts', 'Render posts in the _drafts folder'
        cmd.option 'unpublished', '--unpublished',
                   'Render posts that were marked as unpublished'
        cmd.option 'quiet', '-q', '--quiet', 'Silence output.'
        cmd.option 'verbose', '-V', '--verbose', 'Print verbose output.'
        cmd.option 'incremental', '-I', '--incremental', 'Enable incremental rebuild.'
        cmd.option 'strict_front_matter', '--strict_front_matter',
                   'Fail if errors are present in front matter'
      end
      # rubocop:enable Metrics/MethodLength
    
    module Jekyll
  class Configuration < Hash
    # Default options. Overridden by values in _config.yml.
    # Strings rather than symbols are used for compatibility with YAML.
    DEFAULTS = Configuration[{
      # Where things are
      'source'              => Dir.pwd,
      'destination'         => File.join(Dir.pwd, '_site'),
      'collections_dir'     => '',
      'plugins_dir'         => '_plugins',
      'layouts_dir'         => '_layouts',
      'data_dir'            => '_data',
      'includes_dir'        => '_includes',
      'collections'         => {},
    }
    
    module Jekyll
  module Deprecator
    extend self
    
          def i_day
        @obj.date.strftime('%-d')
      end
    
        def excluded?(entry)
      glob_include?(site.exclude, relative_to_source(entry)).tap do |excluded|
        if excluded
          Jekyll.logger.debug(
            'EntryFilter:',
            'excluded #{relative_to_source(entry)}'
          )
        end
      end
    end
    
      it 'unwraps data for a parent type' do
    a = @s.typed_wrap_struct(1024)
    @s.typed_get_struct_parent(a).should == 1024
  end
    
          with_timezone('Europe/Amsterdam') do
        time.localtime
      end
    
      it 'adds the directory at the front of $LOAD_PATH' do
    dir = tmp('rubylib/incl_front')
    ENV['RUBYLIB'] = @pre + dir
    paths = ruby_exe('puts $LOAD_PATH').lines.map(&:chomp)
    if PlatformGuard.implementation? :ruby
      # In a MRI checkout, $PWD and some extra -I entries end up as
      # the first entries in $LOAD_PATH. So just assert that it's not last.
      idx = paths.index(dir)
      idx.should < paths.size-1
    else
      paths[0].should == dir
    end
  end
    
        def stop_servers
      if @normal_server
        @normal_server.kill.join
        @normal_server = nil
      end
      if @proxy_server
        @proxy_server.kill.join
        @proxy_server = nil
      end
      if @ssl_server
        @ssl_server.stop
        @ssl_server = nil
      end
      if @ssl_server_thread
        @ssl_server_thread.kill.join
        @ssl_server_thread = nil
      end
      utils = WEBrick::Utils    # TimeoutHandler is since 1.9
      utils::TimeoutHandler.terminate if defined?(utils::TimeoutHandler.terminate)
    end
    
      it 'does not decode any items for directives exceeding the input string size' do
    '\xc2\x80'.unpack('UUUU').should == [0x80]
  end
    
        alias log puts
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
      find_files = ->(path) {
    Find.find(Pathname.new(path).relative_path_from(Pathname.new Dir.pwd).to_s).map do |path|
      path if File.file?(path)
    end.compact
  }
    
            def log_level?(level, min_level)
          log_levels[level] >= log_levels[min_level]
        end