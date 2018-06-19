
        
                def gemfile_contents
          <<~RUBY
            source 'https://rubygems.org'
            # Hello! This is where you manage which Jekyll version is used to run.
            # When you want to use a different version, change it below, save the
            # file and run `bundle install`. Run Jekyll with `bundle exec`, like so:
            #
            #     bundle exec jekyll serve
            #
            # This will help ensure the proper Jekyll version is running.
            # Happy Jekylling!
            gem 'jekyll', '~> #{Jekyll::VERSION}'
            # This is the default theme for new Jekyll sites. You may change this to anything you like.
            gem 'minima', '~> 2.0'
            # If you want to use GitHub Pages, remove the 'gem 'jekyll'' above and
            # uncomment the line below. To upgrade, run `bundle update github-pages`.
            # gem 'github-pages', group: :jekyll_plugins
            # If you have any plugins, put them here!
            group :jekyll_plugins do
              gem 'jekyll-feed', '~> 0.6'
            end
            # Windows does not include zoneinfo files, so bundle the tzinfo-data gem
            gem 'tzinfo-data', platforms: [:mingw, :mswin, :x64_mingw, :jruby]
            # Performance-booster for watching directories on Windows
            gem 'wdm', '~> 0.1.0' if Gem.win_platform?
    
            def validate_options(opts)
          if opts['livereload']
            if opts['detach']
              Jekyll.logger.warn 'Warning:', '--detach and --livereload are mutually exclusive.' \
                                 ' Choosing --livereload'
              opts['detach'] = false
            end
            if opts['ssl_cert'] || opts['ssl_key']
              # This is not technically true.  LiveReload works fine over SSL, but
              # EventMachine's SSL support in Windows requires building the gem's
              # native extensions against OpenSSL and that proved to be a process
              # so tedious that expecting users to do it is a non-starter.
              Jekyll.logger.abort_with 'Error:', 'LiveReload does not support SSL'
            end
            unless opts['watch']
              # Using livereload logically implies you want to watch the files
              opts['watch'] = true
            end
          elsif %w(livereload_min_delay
                   livereload_max_delay
                   livereload_ignore
                   livereload_port).any? { |o| opts[o] }
            Jekyll.logger.abort_with '--livereload-min-delay, '\
               '--livereload-max-delay, --livereload-ignore, and '\
               '--livereload-port require the --livereload option.'
          end
        end
    
          def initialize(config)
        Jekyll::External.require_with_graceful_fail 'kramdown' unless defined?(Kramdown)
        @config = config['kramdown'].dup || {}
        @config[:input] = :SmartyPants
      end
    
    # Convertible provides methods for converting a pagelike item
# from a certain type of markup into actual content
#
# Requires
#   self.site -> Jekyll::Site
#   self.content
#   self.content=
#   self.data=
#   self.ext=
#   self.output=
#   self.name
#   self.path
#   self.type -> :page, :post or :draft
    
        YAML_FRONT_MATTER_REGEXP = %r!\A(---\s*\n.*?\n?)^((---|\.\.\.)\s*$\n?)!m
    DATELESS_FILENAME_MATCHER = %r!^(?:.+/)*(.*)(\.[^.]+)$!
    DATE_FILENAME_MATCHER = %r!^(?:.+/)*(\d{2,4}-\d{1,2}-\d{1,2})-(.*)(\.[^.]+)$!
    
          # Generate a Hash for use in generating JSON.
      # This is useful if fields need to be cleared before the JSON can generate.
      #
      # Returns a Hash ready for JSON generation.
      def hash_for_json(*)
        to_h
      end
    
            commands << Fastlane::Actions.sh(command, log: false)
    
          it 'does set the exclude directories' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(exclude_dir: 'test1,test2,build')
          end').runner.execute(:test)
    
            expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::VERSION_NUMBER]).to match(/cd .* && agvtool new-marketing-version 2.0.0/)
      end
    
      it 'should not override the header if already set' do
    mock_app with_headers('X-Frame-Options' => 'allow')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('allow')
  end
end

    
      before(:each) do
    mock_app do
      use Rack::Protection::HttpOrigin
      run DummyApp
    end
  end
    
      it 'should set the X-XSS-Protection for XHTML' do
    expect(get('/', {}, 'wants' => 'application/xhtml+xml').headers['X-XSS-Protection']).to eq('1; mode=block')
  end