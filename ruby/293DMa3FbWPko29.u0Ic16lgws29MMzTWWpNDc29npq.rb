
        
          # Implemented by subclasses to provide default values for settings needed by
  # this plugin. Typically done using the `set_if_empty` Capistrano DSL method.
  #
  # Example:
  #
  #   def set_defaults
  #     set_if_empty :my_plugin_option, true
  #   end
  #
  def set_defaults; end
    
          it 'filters from ENV[HOSTS]' do
        hosts = dsl.roles(:db)
        all = dsl.roles(:all)
        SSHKit::Coordinator.expects(:new).with(hosts).returns(@coordinator)
        ENV['HOSTS'] = 'example5.com'
        dsl.on(all)
      end
    
            def scope
          @stock_location.stock_movements.accessible_by(current_ability, :read)
        end