      it 'it increments all targets minor version major' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(bump_type: 'major')
        end').runner.execute(:test)
    
    unless invalids.empty?
  puts '\n\nFailed links:'
  invalids.each do |link|
    puts '- #{link}'
  end
  puts 'Done with errors.'
  exit(1)
end
    
        options[:attribution] = <<-HTML
      &copy; 2011&ndash;2018 Twitter, Inc.<br>
      &copy; 2011&ndash;2018 The Bootstrap Authors<br>
      Code licensed under the MIT License.<br>
      Documentation licensed under the Creative Commons Attribution License v3.0.
    HTML
    
        options[:attribution] = <<-HTML
      &copy; 2010 The Rust Project Developers<br>
      Licensed under the Apache License, Version 2.0 or the MIT license, at your option.
    HTML
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
              fd.write(res)
        end
      end
      break
    rescue ::Timeout::Error
      $stderr.puts '#{prefix}#{site} timed out'
    rescue ::Interrupt
      raise $!
    rescue ::Exception => e
      $stderr.puts '#{prefix}#{site} #{e.class} #{e}'
    end
  end
    
      def parse(pkt)
    # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 21 and pkt.tcp_dport != 21)
    s = find_session((pkt.tcp_sport == 21) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'ftp'
    
        # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 143 and pkt.tcp_dport != 143)
    s = find_session((pkt.tcp_sport == 143) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'imap4'
    
    	if ln =~ /\(jmp\)/
		parts = ln.split(' ')
		if (parts[0][0,1] == 'j' and parts[2][0,2] == ';j' and parts[4] == '(jmp)')
			old = parts[1]
			func = parts[3]
			new = addrs[func]
			#puts '%32s: %s -> %x' % [func, old, new]
			replaces << [func, old, new.to_s(16)]
		end
	end
    
    	def block_begin(line)
		# Get the block name from label
		temp = line.scan(/\w+/)
		block_name = temp[1].delete('<>:')
    
          private
    
          # Prints a title in blue with surrounding newlines.
      def title(text)
        # Use $stdout directly to bypass the indentation that our `puts` does.
        $stdout.puts(color.colorize('\n#{text}\n', :blue))
      end
    
          private
    
      desc 'Reverted'
  task :reverted do
  end
    
        orig_stdout = $stdout
    orig_stderr = $stderr
    captured_stdout = StringIO.new
    captured_stderr = StringIO.new
    $stdout = captured_stdout
    $stderr = captured_stderr