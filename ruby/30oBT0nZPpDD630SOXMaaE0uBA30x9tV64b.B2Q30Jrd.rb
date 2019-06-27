
        
        Given(/^a custom task to generate a file$/) do
  TestApp.copy_task_to_test_app('spec/support/tasks/database.rake')
end
    
      def safely_remove_file(_path)
    run_vagrant_command('rm #{test_file}')
  rescue
    VagrantHelpers::VagrantSSHCommandError
  end
end
    
          super
    end
    
          def resolve
        return if scm_name.nil?
        set(:scm, :git) if using_default_scm?
    
    %i(git_strategy hg_strategy svn_strategy).each do |strategy|
  validate(strategy) do |key, _value|
    warn(
      '[Deprecation Warning] #{key} is deprecated and will be removed in '\
      'Capistrano 3.7.0.\n'\
      'https://github.com/capistrano/capistrano/blob/master/UPGRADING-3.7.md'
    )
  end
end
    
            # Dynamically defines our stores checkout steps to ensure we check authorization on each step.
        Order.checkout_steps.keys.each do |step|
          define_method step do
            find_order
            authorize! :update, @order, params[:token]
          end
        end
    
              def remove_store_credit
            spree_authorize! :update, spree_current_order, order_token