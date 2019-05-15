
        
            def extract_to_dir(unpack_dir, basename:, verbose:)
      system_command! AIR_APPLICATION_INSTALLER,
                      args:    ['-silent', '-location', unpack_dir, path],
                      verbose: verbose
    end
  end
end

    
        def pos
      byte_to_str_pos @s.pos
    end
    
        def for(file_or_dir)
      return @options_config if @options_config
    
                1.upto(3) do |i|
              next if !arguments[i] || arguments[i].hash_type?