
        
                      s[:proto]='pop3'
              s[:extra]='Failed Login. Banner: #{s[:banner]}'
              report_auth_info(s)
              print_status('Invalid POP3 Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]} (#{s[:banner].strip})')
              s[:pass]=''
          end
        when nil
          # No matches, no saved state
        else
          s[:last]=matched
          sessions[s[:session]].merge!({k => matches})
      end # end case matched
    end # end of each_key
  end # end of parse
end
    
    sock = TCPSocket.new(ip, port)
    
    clsJavaCompile 	= Rjb::import('javaCompile.CompileSourceInMemory')
clsCreateJar	= Rjb::import('javaCompile.CreateJarFile')
clsFile			= Rjb::import('java.io.File')
system			= Rjb::import('java.lang.System')
#clsString	= Rjb::import('java.lang.String')
    
        _cal[ver].each_pair do |key, value|
      cal[ver][key] = Array.new
      cal[ver][key] << String.new
      cal[ver][key][-1] << '#ifdef AIX%s' % ver.delete('.')
      cal[ver][key][-1] << '\n'
      cal[ver][key][-1] << '''.rjust(5)
      value.each_byte do |c|
        cal[ver][key][-1] << '\x%02x' % c
      end
      cal[ver][key][-1] << '''.ljust(7)
      cal[ver][key][-1] << '/*  cal     r2,-%d(r29)' %
          (65536 - value.unpack('nn')[1])
      cal[ver][key][-1] << '*/'.rjust(15)
      cal[ver][key][-1] << '\n'
      cal[ver][key][-1] << '#endif'
      cal[ver][key][-1] << '\n'
    end
    
    	attr_accessor :file, :block, :block_size