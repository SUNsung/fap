
        
          def destroy
    @event.destroy
    
      def prefixes
    prefixes = ['/bin', '/usr/bin', '/usr/libexec', xcode_app_path]
    prefixes << `brew --prefix`.strip unless `which brew`.strip.empty?
    
            private