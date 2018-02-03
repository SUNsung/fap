
        
            sidekiq_options queue: 'critical'
    
          when :login_pass
        if(s[:user] and s[:pass])
          report_auth_info(s)
          print_status('Successful FTP Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]}')
          # Remove it form the session objects so freeup memory
          sessions.delete(s[:session])
          return
        end
    
    
    {	if ln =~ /;(read|write)_(handle|filename)=/
		parts = ln.split(' ')
		if (parts[0] == 'mov')
			parts2 = parts[2].split('=')
			label = parts2[0]
			label.slice!(0,1)
			old = parts2[1]
			new = addrs[label]
			#puts '%32s: %s -> %x' % [label, old, new]
			replaces << [label, old, new.to_s(16)]
		end
	end
}
    
    clsCreateJar._invoke('createJarArchive', 'Ljava.io.File;[Ljava.io.File;', fileOutJar, filesIn)
    
      when '5.3.10', '5.3.9', '5.3.8', '5.3.7'
    __NR_execve      = 6
    __NR_getpeername = 198
    __NR_accept      = 214
    __NR_listen      = 215
    __NR_bind        = 216
    __NR_socket      = 217
    __NR_connect     = 218
    __NR_close       = 245
    __NR_kfcntl      = 493
    
          if create && !subdir.directory?
        odebug 'Creating metadata subdirectory #{subdir}.'
        subdir.mkpath
      end
    
          def to_yaml
        @pairs.to_yaml
      end
    
      def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
          def snapshot
        agent.metric.collector.snapshot_metric
      end