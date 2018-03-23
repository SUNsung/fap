
        
                self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
            def print_version
          output_pipe.puts 'version: '#{Pod::VERSION}''
        end
    
            #----------------------------------------#