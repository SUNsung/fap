    #
    # @param ips [String] IP range(s)
    # @return [true] if actions on ips are allowed.
    # @return [false] if actions are not allowed on ips.
    def allow_actions_on?(ips)
      return true unless limit_to_network
      return true unless boundary
      return true if boundary.empty?
      boundaries = Shellwords.split(boundary)
      return true if boundaries.empty? # It's okay if there is no boundary range after all
      given_range = Rex::Socket::RangeWalker.new(ips)
      return false unless given_range # Can't do things to nonexistant IPs
      allowed = false
      boundaries.each do |boundary_range|
        ok_range = Rex::Socket::RangeWalker.new(boundary)
        allowed  = true if ok_range.include_range? given_range
      end
      return allowed
    end
    
    # Silence warnings about this defaulting to true
I18n.enforce_available_locales = true

    
            # Remove it form the session objects so freeup
        sessions.delete(s[:session])
    
    # This is a completely hackish way to do this, and could break with future
# versions of the JDK.  Need to find a better way to use sun.security.tools.KeyTool
# and .JarSigner than modifying the source.  These rely on internal APIs that may
# change.
signer = Rjb::import('javaCompile.SignJar')
#clsKeyTool = Rjb::import('sun.security.tools.KeyTool')
#clsKeyTool = Rjb::import('sun.security.tools.KeyToolMSF')
#clsJarSigner = Rjb::import('javaCompile.SignJar.JarSignerMSF')
#clsJarSigner = Rjb::import('sun.security.tools.JarSigner')
#clsJarSigner = Rjb::import('sun.security.tools.JarSignerMSF')
    
      @src.__NR_execve      = __NR_execve
  @src.__NR_getpeername = __NR_getpeername
  @src.__NR_accept      = __NR_accept
  @src.__NR_listen      = __NR_listen
  @src.__NR_bind        = __NR_bind
  @src.__NR_socket      = __NR_socket
  @src.__NR_connect     = __NR_connect
  @src.__NR_close       = __NR_close
  @src.__NR_kfcntl      = __NR_kfcntl