
        
                def bundle_install(path)
          Jekyll.logger.info 'Running bundle install in #{path.cyan}...'
          Dir.chdir(path) do
            exe = Gem.bin_path('bundler', 'bundle')
            process, output = Jekyll::Utils::Exec.run('ruby', exe, 'install')
    
            def start(opts)
          @thread = Thread.new do
            # Use epoll if the kernel supports it
            EM.epoll
            EM.run do
              EM.error_handler { |e| log_error(e) }
    
          def output_ext(_ext)
        '.html'
      end
    
          def uninstall_login_item(*login_items, command: nil, **_)
        login_items.each do |name|
          ohai 'Removing login item #{name}'
          command.run!('/usr/bin/osascript',
                        args: ['-e', %Q(tell application 'System Events' to delete every login item whose name is '#{name}')],
                        sudo: false)
          sleep 1
        end
      end
    
          def extract
        mount do |mounts|
          begin
            raise CaskError, 'No mounts found in '#{@path}'; perhaps it is a bad DMG?' if mounts.empty?
            mounts.each(&method(:extract_mount))
          ensure
            mounts.each(&method(:eject))
          end
        end
      end