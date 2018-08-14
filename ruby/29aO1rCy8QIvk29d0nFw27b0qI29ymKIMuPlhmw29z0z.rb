
        
          private
    
          topic = Topic.find_by(id: topic_id)
    
    class ApplicationSerializer < ActiveModel::Serializer
  embed :ids, include: true
    
            # Unregisters a SIGINT handler.
        def unregister(sig_callback)
          @@mutex.synchronize do
            registered.delete(sig_callback)
    
            while true
          begin
            if Platform.windows?
              # Windows doesn't support non-blocking reads on
              # file descriptors or pipes so we have to get
              # a bit more creative.
    
        formulae = ARGV.include?('--installed') ? Formula.installed : Formula
    recursive = ARGV.flag? '--recursive'
    only_installed_arg = ARGV.include?('--installed') &&
                         !ARGV.include?('--include-build') &&
                         !ARGV.include?('--include-test') &&
                         !ARGV.include?('--include-optional') &&
                         !ARGV.include?('--skip-recommended')