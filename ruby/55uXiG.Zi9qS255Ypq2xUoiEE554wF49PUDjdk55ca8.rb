
        
            desc 'Run the integration spec'
    task :integration do
      unless File.exist?('spec/cocoapods-integration-specs')
        $stderr.puts red('Integration files not checked out. Run `rake bootstrap`')
        exit 1
      end
    
    ```
#{plugins_string}
```
#{markdown_podfile}
EOS
      end
    
        def display_error_message(ex)
      unless options.backtrace
        Rake.application.options.suppress_backtrace_pattern = backtrace_pattern if backtrace_pattern
        trace '(Backtrace restricted to imported tasks)'
      end