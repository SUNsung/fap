
        
                key.revoke!
      end
    end
  end
end

    
            command = 'security set-keychain-settings'
        command << ' -t #{params[:timeout]}' if params[:timeout]
        command << ' -l' if params[:lock_when_sleeps]
        command << ' -u' if params[:lock_after_timeout]
        command << ' #{keychain_path}'
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml')
      end
    
      def present(payload)
    if payload.is_a?(Hash)
      payload = ActiveSupport::HashWithIndifferentAccess.new(payload)
      MAIN_KEYS.each do |key|
        return { :title => payload[key].to_s, :entries => present_hash(payload, key) } if payload.has_key?(key)
      end
    
      def tumblr
    Tumblr.configure do |config|
      config.consumer_key = tumblr_consumer_key
      config.consumer_secret = tumblr_consumer_secret
      config.oauth_token = tumblr_oauth_token
      config.oauth_token_secret = tumblr_oauth_token_secret
    end
    
    Tumblr::Client.new
  end
end
    
    begin
  require 'bundler/setup'
rescue LoadError
  $stderr.puts '[*] Metasploit requires the Bundler gem to be installed'
  $stderr.puts '    $ gem install bundler'
  exit(1)
end
    
          when :banner
        # Because some ftp server send multiple banner we take only the first one and ignore the rest
        if not (s[:info])
          s[:info] = matches
          report_service(s)
        end
    
    
# replace calls, jmps, and read/write handle/filename references
replaces = []
asm.each_line { |ln|
	if ln =~ /call /
		parts = ln.split(' ')
		if (parts[0] == 'call' and parts[2] == ';call')
			old = parts[1]
			func = parts[3]
			new = addrs[func]
			#puts '%32s: %s -> %x' % [func, old, new]
			replaces << [func, old, new.to_s(16)]
		end
	end
    }
    
    signer._invoke('JarSignerMSF','[Ljava.lang.String;',jarsignerOpts)
    
    	def block_end
		# Insert the block size
		self.block[-1][0] = block[-1][0].ljust(SIZE1)
		self.block[-1][0] << '/*  '
		self.block[-1][0] << '#{block_size} bytes'
		self.block[-1][0] = block[-1][0].ljust(SIZE2)
		self.block[-1][0] << '  */'