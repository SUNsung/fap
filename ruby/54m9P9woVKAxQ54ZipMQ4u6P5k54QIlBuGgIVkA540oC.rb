
        
        Then(/^the current directory will be a symlink to the release$/) do
  run_vagrant_command(exists?('e', TestApp.current_path))
end
    
        def dry_run
      ['--dry-run', '-n',
       'Do a dry run without executing actions',
       lambda do |_value|
         Configuration.env.set(:sshkit_backend, SSHKit::Backend::Printer)
       end]
    end
    
          def gets
        return unless $stdin.tty?
    
    MESSAGE
      end
    
    set_if_empty :pty, false