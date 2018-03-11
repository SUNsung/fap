
        
          # Setting the :extname option will control what extension (if any) is appended to the url for assets
  def test_javascript_include_tag
    assert_dom_equal '<script src='/foo.js'></script>',  javascript_include_tag('/foo')
    assert_dom_equal '<script src='/foo'></script>',     javascript_include_tag('/foo', extname: false)
    assert_dom_equal '<script src='/foo.bar'></script>', javascript_include_tag('/foo', extname: '.bar')
  end
    
          BOOLEAN_ATTRIBUTES.merge(BOOLEAN_ATTRIBUTES.map(&:to_sym))
    
              # Require the adapter itself and give useful feedback about
          #   1. Missing adapter gems and
          #   2. Adapter gems' missing dependencies.
          path_to_adapter = 'active_record/connection_adapters/#{spec[:adapter]}_adapter'
          begin
            require path_to_adapter
          rescue LoadError => e
            # We couldn't require the adapter itself. Raise an exception that
            # points out config typos and missing gems.
            if e.path == path_to_adapter
              # We can assume that a non-builtin adapter was specified, so it's
              # either misspelled or missing from Gemfile.
              raise e.class, 'Could not load the '#{spec[:adapter]}' Active Record adapter. Ensure that the adapter is spelled correctly in config/database.yml and that you've added the necessary adapter gem to your Gemfile.', e.backtrace
    
      test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
  end
    
            def current_instances
          Thread.current[:current_attributes_instances] ||= {}
        end
    
    require 'active_job'
    
    module ActionMailer
  # Implements the ActiveSupport::LogSubscriber for logging notifications when
  # email is delivered or received.
  class LogSubscriber < ActiveSupport::LogSubscriber
    # An email was delivered.
    def deliver(event)
      info do
        recipients = Array(event.payload[:to]).join(', ')
        'Sent mail to #{recipients} (#{event.duration.round(1)}ms)'
      end
    
          check_class_collision suffix: 'Mailer'
    
        AssertSelectMailer.test('<div><p>foo</p><p>bar</p></div>').deliver_now
    assert_select_email do
      assert_select 'div:root' do
        assert_select 'p:first-child', 'foo'
        assert_select 'p:last-child', 'bar'
      end
    end
  end
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
          theme.create!
      Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
        ' is ready for you in #{theme.path.to_s.cyan}!'
      Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
    end
    # rubocop:enable Metrics/AbcSize
  end
end

    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
            a_length = a_split.length
        b_length = b_split.length
    
        def add(path, content)
      @pages[path] = content
    end
    
          def inherited(subclass)
        super
        subclass.base_url = base_url
        subclass.dir = dir
      end
    end
    
        def origin
      if scheme && host
        origin = '#{scheme}://#{host}'
        origin.downcase!
        origin << ':#{port}' if port
        origin
      else
        nil
      end
    end
    
            doc
      end
    end
  end
end

    
        # change Microsoft filters to Sass calling convention
    def replace_ms_filters(file)
      log_transform
      file.gsub(
          /filter: e\(%\('progid:DXImageTransform.Microsoft.gradient\(startColorstr='%d', endColorstr='%d', GradientType=(\d)\)',argb\(([\-$\w]+)\),argb\(([\-$\w]+)\)\)\);/,
          %Q(filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='\#{ie-hex-str(\\2)}', endColorstr='\#{ie-hex-str(\\3)}', GradientType=\\1);)
      )
    end