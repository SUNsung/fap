
        
                yield Page.new(collection, page)
    
            def sidekiq_worker_class
          ImportDiffNoteWorker
        end
    
          # project - An instance of `Project`.
      # object - The object to look up or set a database ID for.
      def initialize(project, object)
        @project = project
        @object = object
      end
    
            def labels?
          label_names && label_names.any?
        end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
        config.cache_store = :null_store
  end