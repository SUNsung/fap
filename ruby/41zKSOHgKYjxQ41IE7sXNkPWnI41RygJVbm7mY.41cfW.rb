
        
            flags = []
    args = []
    while rc_args.size > 0 do
      arg = rc_args.shift
      opt = self.class.find_option(arg)
      if opt and not opt.flag?
        flags.push(arg)
        flags.push(rc_args.shift)
      elsif opt or arg[0] == '-'
        flags.push(arg)
      else
        args.push(arg)
      end
    end
    
      POSTINSTALL_ACTIONS = [ 'logout', 'restart', 'shutdown' ]
  OWNERSHIP_OPTIONS = ['recommended', 'preserve', 'preserve-other']
    
        # Final edit for lint check and packaging
    edit_file(manifest_fn) if attributes[:edit?]
    
          if !attributes[:python_install_data].nil?
        flags += [ '--install-data', File.join(prefix, attributes[:python_install_data]) ]
      elsif !attributes[:prefix].nil?
        # prefix given, but not python_install_data, assume PREFIX/data
        flags += [ '--install-data', File.join(prefix, 'data') ]
      end
    
          def self.has_issues_with_add_symlink?
        return !::Gem::Package::TarWriter.public_instance_methods.include?(:add_symlink)
      end
    end # module TarWriter
  end # module Issues
end # module FPM