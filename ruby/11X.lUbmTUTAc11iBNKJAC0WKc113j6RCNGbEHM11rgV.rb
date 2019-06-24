
        
            # If you've clearned the pin, use bumped_at, otherwise put it at the top
    def order_nocategory_with_pinned_sql
      -'CASE
        WHEN topics.pinned_globally
         AND (COALESCE(topics.pinned_at, '#{lowest_date}') > COALESCE(tu.cleared_pinned_at, '#{lowest_date}'))
          THEN topics.pinned_at + interval '9999 years'
          ELSE topics.bumped_at
       END DESC'
    end
    
    describe 'CommonMark' do
  it 'passes spec' do
    
        # for test and sidekiq
    def async=(val)
      @async = val
    end
    
        it 'rejects invalid directives and ones that are not allowed to be extended' do
      builder << {
        invalid_src: ['invalid'],
      }
    
        # Returns the specified or detected guest type name.
    #
    # @return [Symbol]
    def name
      capability_host_chain[0][0]
    end
    
    
    # This will hold a lock to the index so it can be read or updated.
    def with_index_lock
      lock_path = '#{@index_file}.lock'
      File.open(lock_path, 'w+') do |f|
        f.flock(File::LOCK_EX)
        yield
      end
    end
    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
            # This contains all the command plugins by name, and returns
        # the command class and options. The command class is wrapped
        # in a Proc so that it can be lazy loaded.
        #
        # @return [Registry<Symbol, Array<Proc, Hash>>]
        attr_reader :commands
    
              # Return the registry
          data[:provisioners]
        end
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is usable. This should return true or false.
        #
        # If raise_error is true, then instead of returning false, this
        # should raise an error with a helpful message about why this
        # provider cannot be used.
        #
        # @param [Boolean] raise_error If true, raise exception if not usable.
        # @return [Boolean]
        def self.usable?(raise_error=false)
          # Return true by default for backwards compat since this was
          # introduced long after providers were being written.
          true
        end
    
      ##
  # Extracts the Gem::Specification and raw metadata from the .gem file at
  # +path+.
  #--
  # TODO move to Gem::Package as #raw_spec or something
    
          after do
        @client.close
        @server.close
      end
    
        def on_cvar(tok, data)
      @lex_state = EXPR_END
      on_variables(__method__, tok, data)
    end
    
        assert_equal 'Object',    @store.classes_hash['A::B'].superclass
    assert_equal 'Object',    @store.classes_hash['A::Object'].superclass
    assert_equal 'A::Object', @store.classes_hash['A::C'].superclass.full_name
  end
    
            # give up colorizing incomplete Ripper tokens
        if length != code.bytesize
          return Reline::Unicode.escape_for_print(code)
        end
    
      def invoke_ruby(args, stdin_data = '', capture_stdout = false, capture_stderr = false,
                  encoding: nil, timeout: 10, reprieve: 1, timeout_error: Timeout::Error,
                  stdout_filter: nil, stderr_filter: nil,
                  signal: :TERM,
                  rubybin: EnvUtil.rubybin, precommand: nil,
                  **opt)
    timeout = apply_timeout_scale(timeout)
    
            def print_version
          output_pipe.puts 'version: '#{Pod::VERSION}''
        end