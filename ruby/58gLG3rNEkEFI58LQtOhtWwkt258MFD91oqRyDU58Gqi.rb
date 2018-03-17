
        
            def after(task, post_task, *args, &block)
      Rake::Task.define_task(post_task, *args, &block) if block_given?
      task = Rake::Task[task]
      task.enhance do
        post = Rake.application.lookup(post_task, task.scope)
        raise ArgumentError, 'Task #{post_task.inspect} not found' unless post
        post.invoke
      end
    end
    
        # @abstract
    #
    # Copy the contents of the cache-repository onto the release path
    #
    # @return void
    #
    def release
      raise NotImplementedError, 'Your SCM strategy module should provide a #release method'
    end
    
        def clear
      @attachments = Hash.new { |h,k| h[k] = {} }
    end