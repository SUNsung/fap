
        
              included do
        setup :setup_with_controller
        ActiveSupport.run_load_hooks(:action_view_test_case, self)
      end
    
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
    
      def popen_run(cmd, opts, child_io, parent_io) # :nodoc:
    if last = Hash.try_convert(cmd.last)
      opts = opts.merge(last)
      cmd.pop
    end
    pid = spawn(*cmd, opts)
    wait_thr = Process.detach(pid)
    child_io.each(&:close)
    result = [*parent_io, wait_thr]
    if defined? yield
      begin
        return yield(*result)
      ensure
        parent_io.each(&:close)
        wait_thr.join
      end
    end
    result
  end
  module_function :popen_run
  class << self
    private :popen_run
  end
    
      def test_popen2
    with_pipe {|r, w|
      with_reopen(STDERR, w) {|old|
        w.close
        Open3.popen2(RUBY, '-e', 's=STDIN.read; STDOUT.print s+'o'; STDERR.print s+'e'') {|i,o,t|
          assert_kind_of(Thread, t)
          i.print 'z'
          i.close
          STDERR.reopen(old)
          assert_equal('zo', o.read)
          assert_equal('ze', r.read)
        }
      }
    }
  end
    
    # Testing 'c'
      [ '%3c', 'abc', [ 'abc' ] ],
      [ '%3c', 'a\nb', [ 'a\nb' ] ],
      [ '%3c', 'a\nbcd', [ 'a\nb' ] ],
      [ '%c\n\n', 'x\n\n', [ 'x' ] ],
      [ '%c', '\n', [ '\n' ] ],
      [ '%c', 'x\n', [ 'x' ] ],
      [ '%2c', ' 123', [' 1'] ],
      [ ' %c', ' x', ['x'] ],
      [ '%c', ' x', [' '] ],
      [ '%c', '123', ['1'] ],
      [ '%2c', '123', ['12'] ],
      [ '%5c', 'a\nb\n\n', [ 'a\nb\n\n' ] ],
      [ '%6c', 'a\nb\n\nx', [ 'a\nb\n\nx' ] ],
      [ '%5c', 'ab\ncd', [ 'ab\ncd' ] ],
    
      def test_session_timeout
    sess = OpenSSL::SSL::Session.new(DUMMY_SESSION_NO_EXT)
    assert_raise(TypeError) do
      sess.timeout = Time.now
    end
    sess.timeout = 1
    assert_equal(1, sess.timeout.to_i)
    sess.timeout = 1.2345
    assert_equal(1, sess.timeout.to_i)
    sess.timeout = 2**31 - 1
    assert_equal(2**31 - 1, sess.timeout.to_i)
  end
    
        ##
    # Matches +addr+ against this entry.
    
              fd.write(res)
        end
      end
      break
    rescue ::Timeout::Error
      $stderr.puts '#{prefix}#{site} timed out'
    rescue ::Interrupt
      raise $!
    rescue ::Exception => e
      $stderr.puts '#{prefix}#{site} #{e.class} #{e}'
    end
  end
    
          when :login_pass
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
            self.description = <<-DESC
          Creates a scaffold for the development of a new Pod named `NAME`
          according to the CocoaPods best practices.
          If a `TEMPLATE_URL`, pointing to a git repo containing a compatible
          template, is specified, it will be used in place of the default one.
        DESC
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
            def destroy
          authorize! :destroy, stock_location
          stock_location.destroy
          respond_with(stock_location, status: 204)
        end