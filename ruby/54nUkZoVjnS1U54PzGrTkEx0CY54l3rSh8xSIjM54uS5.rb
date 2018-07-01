
        
            log = StringIO.new
    @dry_run_started_at = Time.zone.now
    @dry_run_logger = Logger.new(log).tap { |logger|
      logger.formatter = proc { |severity, datetime, progname, message|
        elapsed_time = '%02d:%02d:%02d' % 2.times.inject([datetime - @dry_run_started_at]) { |(x, *xs)|
          [*x.divmod(60), *xs]
        }
    }
    }
    
      def destroy
    @event.destroy
    
        private
    
    # Copyright (C) 2008 Rapid7, Inc.
    
      fd.close
    
          when nil
        # No matches, no saved state
      else
        sessions[s[:session]].merge!({k => matches})
      end # end case matched
    
    
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
    
    keytoolOpts 	= ['-genkey', '-alias', 'signFiles', '-keystore', 'msfkeystore',
		   '-storepass', 'msfstorepass', '-dname', 'cn=#{certCN}',
		   '-keypass', 'msfkeypass']
    
    		self.block[-1][-1] << '''
		self.block[-1][-1] = block[-1][-1].ljust(SIZE1)
		self.block[-1][-1] << '/*  '
    
          respond_with do |format|
        format.html do
          gon.preloads[:pods] = pods_json
          gon.unchecked_count = Pod.unchecked.count
          gon.version_failed_count = Pod.version_failed.count
          gon.error_count = Pod.check_failed.count