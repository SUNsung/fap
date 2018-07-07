
        
              # Run ::process method in a given set of Jekyll::Command subclasses and suggest
      # re-running the associated command with --trace switch to obtain any additional
      # information or backtrace regarding the encountered Exception.
      #
      # cmd     - the Jekyll::Command to be handled
      # options - configuration overrides
      # klass   - an array of Jekyll::Command subclasses associated with the command
      #
      # Note that all exceptions are rescued..
      # rubocop: disable RescueException
      def process_with_graceful_fail(cmd, options, *klass)
        klass.each { |k| k.process(options) if k.respond_to?(:process) }
      rescue Exception => e
        raise e if cmd.trace
    
                add_build_options(c)
    
              # Complicated JavaScript to ensure that livereload.js is loaded from the
          # same origin as the page.  Mostly useful for dealing with the browser's
          # distinction between 'localhost' and 127.0.0.1
          template = <<-TEMPLATE
          <script>
            document.write(
              '<script src='http://' +
              (location.host || 'localhost').split(':')[0] +
              ':<%=@options['livereload_port'] %>/livereload.js?snipver=1<%= livereload_args %>'' +
              '></' +
              'script>');
          </script>
          TEMPLATE
          ERB.new(Jekyll::Utils.strip_heredoc(template))
        end
    
        # Construct a Hash of key-value pairs which contain a mapping between
    #   a key in the URL template and the corresponding value for this document.
    #
    # Returns the Hash of key-value pairs for replacement in the URL.
    def url_placeholders
      @url_placeholders ||= Drops::UrlDrop.new(self)
    end
    
          def_delegator  :@obj, :site_data, :data
      def_delegators :@obj, :time, :pages, :static_files, :documents, :tags, :categories
    
          # This gets the value of the block with the given key.
      def get(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$\r?\n?(.*?)\r?\n?^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        match  = regexp.match(@value)
        return nil if !match
        match[1]
      end
    
      def test_input_line_number_range
    bug12947 = '[ruby-core:78162] [Bug #12947]'
    ary = b1 = b2 = nil
    EnvUtil.suppress_warning do
      b1 = eval('proc {|i| i if 2..4}')
      b2 = eval('proc {|i| if 2..4; i; end}')
    end
    IO.pipe {|r, w|
      th = Thread.start {(1..5).each {|i| w.puts i};w.close}
      ary = r.map {|i| b1.call(i.chomp)}
      th.join
    }
    assert_equal([nil, '2', '3', '4', nil], ary, bug12947)
    IO.pipe {|r, w|
      th = Thread.start {(1..5).each {|i| w.puts i};w.close}
      ary = r.map {|i| b2.call(i.chomp)}
      th.join
    }
    assert_equal([nil, '2', '3', '4', nil], ary, bug12947)
  end
end

    
      def not_label(x) @result = x; @not_label ||= nil end
  def assert_not_label(expected, src, message = nil)
    @result = nil
    assert_nothing_raised(SyntaxError, message) {eval(src)}
    assert_equal(expected, @result, message)
  end
    
      describe 'DATA_PTR' do
    it 'returns the struct data' do
      a = @s.typed_wrap_struct(1024)
      @s.typed_get_struct_data_ptr(a).should == 1024
    end
  end
end

    
      def test_rlimit_name
    return unless rlimit_exist?
    [
      :AS, 'AS',
      :CORE, 'CORE',
      :CPU, 'CPU',
      :DATA, 'DATA',
      :FSIZE, 'FSIZE',
      :MEMLOCK, 'MEMLOCK',
      :MSGQUEUE, 'MSGQUEUE',
      :NICE, 'NICE',
      :NOFILE, 'NOFILE',
      :NPROC, 'NPROC',
      :RSS, 'RSS',
      :RTPRIO, 'RTPRIO',
      :RTTIME, 'RTTIME',
      :SBSIZE, 'SBSIZE',
      :SIGPENDING, 'SIGPENDING',
      :STACK, 'STACK',
    ].each {|name|
      if Process.const_defined? 'RLIMIT_#{name}'
        assert_nothing_raised { Process.getrlimit(name) }
      else
        assert_raise(ArgumentError) { Process.getrlimit(name) }
      end
    }
    assert_raise(ArgumentError) { Process.getrlimit(:FOO) }
    assert_raise(ArgumentError) { Process.getrlimit('FOO') }
    assert_raise_with_message(ArgumentError, /\u{30eb 30d3 30fc}/) { Process.getrlimit('\u{30eb 30d3 30fc}') }
  end
    
        assert_equal 'You must add #{EXPIRED_CERT.issuer} to your local trusted store',
                 message
  end
    
      # Run Ruby script with --jit-wait (Synchronous JIT compilation).
  # Returns [stdout, stderr]
  def eval_with_jit(env = nil, script, **opts)
    stdout, stderr, status = super
    assert_equal(true, status.success?, 'Failed to run script with JIT:\n#{code_block(script)}\nstdout:\n#{code_block(stdout)}\nstderr:\n#{code_block(stderr)}')
    [stdout, stderr]
  end
    
        h = base.dup
    assert_equal(h2, h.delete_if {|k,v| v.instance_of?(String) })
    assert_equal(h2, h)
    
        assert_equal(0, Time.at(1e-10).nsec)
    assert_equal(0, Time.at(4e-10).nsec)
    assert_equal(0, Time.at(6e-10).nsec)
    assert_equal(1, Time.at(14e-10).nsec)
    assert_equal(1, Time.at(16e-10).nsec)
    if negative_time_t?
      assert_equal(999999999, Time.at(-1e-10).nsec)
      assert_equal(999999999, Time.at(-4e-10).nsec)
      assert_equal(999999999, Time.at(-6e-10).nsec)
      assert_equal(999999998, Time.at(-14e-10).nsec)
      assert_equal(999999998, Time.at(-16e-10).nsec)
    end
    
        node_cache[:regexp_operator][start_index] = r0
    
          # Only print require() calls that did actual work.
      # require() returns true on load, false if already loaded.
      if result
        source = caller[0]
        #p source.include?('/lib/polyglot.rb:63:in `require'') => source
        if source.include?('/lib/polyglot.rb:63:in `require'')
          source = caller[1]
        end