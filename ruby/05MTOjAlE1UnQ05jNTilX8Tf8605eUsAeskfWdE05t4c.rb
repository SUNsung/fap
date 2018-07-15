
        
          def all_projects(current_user)
    projects = []
    
          def plugin_gem_names
        (Gem.loaded_specs.keys - ['capistrano']).grep(/capistrano/).sort
      end
    end
  end
end

    
        def after(task, post_task, *args, &block)
      Rake::Task.define_task(post_task, *args, &block) if block_given?
      task = Rake::Task[task]
      task.enhance do
        post = Rake.application.lookup(post_task, task.scope)
        raise ArgumentError, 'Task #{post_task.inspect} not found' unless post
        post.invoke
      end
    end
    
      desc 'Finish the rollback, clean up server(s).'
  task :finishing_rollback do
  end
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for optional arguments to methods
      # that do not come at the end of the argument list
      #
      # @example
      #   # bad
      #   def foo(a = 1, b, c)
      #   end
      #
      #   # good
      #   def baz(a, b, c = 1)
      #   end
      #
      #   def foobar(a = 1, b = 2, c = 3)
      #   end
      class OptionalArguments < Cop
        MSG = 'Optional arguments should appear at the end ' \
              'of the argument list.'.freeze
    
        context 'opening brace on same line as first element' do
      context 'last element has a trailing comma' do
        it 'autocorrects closing brace on different line from last element' do
          new_source = autocorrect_source(['#{prefix}#{open}#{a}, # a',
                                           '#{b}, # b',
                                           close,
                                           suffix])