
        
        Given(/^a custom task to run in the event of a failure$/) do
  safely_remove_file(TestApp.shared_path.join('failed'))
  TestApp.copy_task_to_test_app('spec/support/tasks/failed.rake')
end
    
          def add_host(host, properties={})
        new_host = Server[host]
        new_host.port = properties[:port] if properties.key?(:port)
        # This matching logic must stay in sync with `Server#matches?`.
        key = ServerKey.new(new_host.hostname, new_host.port)
        existing = servers_by_key[key]
        if existing
          existing.user = new_host.user if new_host.user
          existing.with(properties)
        else
          servers_by_key[key] = new_host.with(properties)
        end
      end