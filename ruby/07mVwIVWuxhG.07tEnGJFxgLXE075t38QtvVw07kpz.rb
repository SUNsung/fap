
        
            def load_imports
      if options.show_tasks && Rake::Task.task_defined?('load:defaults')
        invoke 'load:defaults'
        set(:stage, '')
        Dir[deploy_config_path].each { |f| add_import f }
      end
    
          class Properties
        def initialize
          @properties = {}
        end
    
          # Decorate Variables#set to add validation behavior.
      def set(key, value=nil, &block)
        assert_value_or_block_not_both(value, block)