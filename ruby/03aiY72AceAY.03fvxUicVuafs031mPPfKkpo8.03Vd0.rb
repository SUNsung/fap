
        
        Then(/^directories in :linked_dirs are created in shared$/) do
  TestApp.linked_dirs.each do |dir|
    run_vagrant_command(test_dir_exists(TestApp.shared_path.join(dir)))
  end
end
    
    Given(/^a custom task that will simulate a failure$/) do
  safely_remove_file(TestApp.shared_path.join('failed'))
  TestApp.copy_task_to_test_app('spec/support/tasks/fail.rake')
end
    
        (stdout + stderr).each_line { |line| puts '[vagrant] #{line}' }
    
            opts.on_tail('-h', '--help', '-H', 'Display this help message.') do
          puts opts
          exit
        end
    
          def netssh_options
        @netssh_options ||= super.merge(fetch(:ssh_options) || {})
      end
    
            if callable.is_a?(Question)
          ValidatedQuestion.new(validation_callback)
        else
          validation_callback
        end
      end
    
      def self.io_adapters=(new_registry)
    @io_adapters = new_registry
  end