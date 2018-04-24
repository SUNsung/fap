
        
          # Strip out the value
  form.search('//input') do |inp|
    
          when :bye
        sessions.delete(s[:session])
    
      def parse(pkt)
    # We want to return immediantly if	we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 80 and pkt.tcp_dport != 80)
    s = find_session((pkt.tcp_sport == 80) ? get_session_src(pkt) : get_session_dst(pkt))
    
    
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
    
      when '6.1.3'
    __NR_execve      = 7
    __NR_getpeername = 205
    __NR_accept      = 232
    __NR_listen      = 235
    __NR_bind        = 237
    __NR_socket      = 238
    __NR_connect     = 239
    __NR_close       = 272
    __NR_kfcntl      = 644
    
    		if temp.length == 3
			temp[2].strip!
			temp[2] = temp[2].scan(/[$%()+,\-\.<>\w]+/)
    
              The detected Git newline settings will cause checkout problems:
            core.autocrlf = #{autocrlf}
    
        if ObserverPathnameExtension.total.zero?
      puts 'Nothing pruned' if ARGV.verbose?
    else
      n, d = ObserverPathnameExtension.counts
      print 'Pruned #{n} symbolic links '
      print 'and #{d} directories ' if d.positive?
      puts 'from #{HOMEBREW_PREFIX}'
    end
  end
end
