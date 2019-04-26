
        
            def release
      context[:release]
    end
    
        def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
      def iteration
    return @iteration ? @iteration : 1
  end
    
        args = [ tar_cmd,
             '-C',
             staging_path,
             '-cf',
             payload_tar,
             '--owner=0',
             '--group=0',
             '--numeric-owner',
             '.' ]