
        
        SUITE.each do |key, text|
  Benchmark.ips do |x|
    x.report('regex-check   - #{key}') { check_with_regex(text) }
    x.report('builtin-check - #{key}') { check_with_builtin(text) }
    x.compare!
  end
end
# ------------------------------------------------------------------------
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    DOC_PATH = File.join(File.expand_path(__dir__), '_puppies', 'rover.md')
COL_PATH = File.join(File.expand_path(__dir__), '_puppies')
    
                  EM.start_server(
                opts['host'],
                opts['livereload_port'],
                HttpAwareConnection,
                opts
              ) do |ws|
                handle_websockets_event(ws)
              end
    
        def url
      @url ||= URL.parse request.base_url
    end
    
          max_length = if tag = str.slice!(/ \[.+\]\z/)
        terminal_width - tag.length
      else
        terminal_width
      end
    
          private
    
              # Lock this machine
          lock_file = lock_machine(uuid)
          if !lock_file
            raise Errors::MachineLocked,
              name: entry.name,
              provider: entry.provider
          end
    
            def initialize(argv, env)
          @argv = argv
          @env  = env
          @logger = Log4r::Logger.new('vagrant::command::#{self.class.to_s.downcase}')
        end
    
            # This returns all the action hooks.
        #
        # @return [Array]
        def action_hooks(hook_name)
          result = []
    
    def pboard
  return # skip print
  print 'No. #$no\n'
  (0...COL).each{|i|
    print '|'
    (0...ROW-NP).each{|j|
      x = $b[i*ROW+j]
      if x < 0
        print '..|'
      else
        printf '%2d|',x+1
      end
    }
    print '\n'
  }
  print '\n'
end
    
        prefixes
  end
    
      # Use a different cache store in production.
  # config.cache_store = :mem_cache_store
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true