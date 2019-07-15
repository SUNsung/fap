
        
        if dblib = with_config('dbm-type', nil)
  dblib = dblib.split(/[ ,]+/)
else
  dblib = %w(libc db db2 db1 db6 db5 db4 db3 gdbm_compat gdbm qdbm)
end
    
    create_makefile('digest/rmd160')

    
    $defs << '-DHAVE_CONFIG_H'
    
        def finish # :nodoc:
      @sha2.digest!
    end
    private :finish
    
      # Sets the last +Error+ of the current executing +Thread+ to +error+
  def self.last_error= error
    Thread.current[:__DL2_LAST_ERROR__] = error
    Thread.current[:__FIDDLE_LAST_ERROR__] = error
  end
    
        def split_arguments(arguments, sep=',')
      return [] if arguments.strip == 'void'
      arguments.scan(/([\w\*\s]+\(\*\w*\)\(.*?\)|[\w\*\s\[\]]+)(?:#{sep}\s*|$)/).collect {|m| m[0]}
    end
    
        def parse_bind_options(opts)
      h = {}
      while( opt = opts.shift() )
        case opt
        when :stdcall, :cdecl
          h[:call_type] = opt
        when :carried, :temp, :temporal, :bind
          h[:callback_type] = opt
          h[:carrier] = opts.shift()
        else
          h[opt] = true
        end
      end
      h
    end
    private :parse_bind_options
    
        def to_s() # :nodoc:
      super(@size)
    end
  end