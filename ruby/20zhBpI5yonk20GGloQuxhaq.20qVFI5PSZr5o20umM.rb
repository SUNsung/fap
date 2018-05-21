
        
          # Setting the :extname option will control what extension (if any) is appended to the url for assets
  def test_javascript_include_tag
    assert_dom_equal '<script src='/foo.js'></script>',  javascript_include_tag('/foo')
    assert_dom_equal '<script src='/foo'></script>',     javascript_include_tag('/foo', extname: false)
    assert_dom_equal '<script src='/foo.bar'></script>', javascript_include_tag('/foo', extname: '.bar')
  end
    
          INTERNAL_IVARS = [
        :@NAME,
        :@failures,
        :@assertions,
        :@__io__,
        :@_assertion_wrapped,
        :@_assertions,
        :@_result,
        :@_routes,
        :@controller,
        :@_layouts,
        :@_files,
        :@_rendered_views,
        :@method_name,
        :@output_buffer,
        :@_partials,
        :@passed,
        :@rendered,
        :@request,
        :@routes,
        :@tagged_logger,
        :@_templates,
        :@options,
        :@test_passed,
        :@view,
        :@view_context_class,
        :@view_flow,
        :@_subscribers,
        :@html_document
      ]
    
            adapter = adapter.camelize
        adapter = 'PostgreSQL' if adapter == 'Postgresql'
        'ActionCable::SubscriptionAdapter::#{adapter}'.constantize
      end
    end
  end
end

    
            def spec(spec, config = {})
          Resolver.new(config).spec(spec)
        end
    
          def trash_paths(*paths, command: nil, **_)
        result = command.run!('/usr/bin/osascript', args: ['-e', <<~'EOS', *paths])
          on run argv
            repeat with i from 1 to (count argv)
              set item i of argv to (item i of argv as POSIX file)
            end repeat
    
      it 'should not set the X-Frame-Options for other content types' do
    expect(get('/', {}, 'wants' => 'text/foo').headers['X-Frame-Options']).to be_nil
  end
    
      # rspec-mocks config goes here. You can use an alternate test double
  # library (such as bogus or mocha) by changing the `mock_with` option here.
  config.mock_with :rspec do |mocks|
    # Enable only the newer, non-monkey-patching expect syntax.
    # For more details, see:
    #   - http://teaisaweso.me/blog/2013/05/27/rspecs-new-message-expectation-syntax/
    mocks.syntax = :expect
    
      it 'should not leak changes to env' do
    klass    = described_class
    detector = Struct.new(:app) do
      def call(env)
        was = env.dup
        res = app.call(env)
        was.each do |k,v|
          next if env[k] == v
          fail 'env[#{k.inspect}] changed from #{v.inspect} to #{env[k].inspect}'
        end
        res
      end
    end
    
            def used?
          @variable.captured_by_block? || @referenced
        end
    
            def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
            attr_reader :lines, :annotations
      end
    end
  end
end

    
      it 'registers an offense' do
    inspect_source(source)