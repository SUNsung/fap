
        
            # change Microsoft filters to Sass calling convention
    def replace_ms_filters(file)
      log_transform
      file.gsub(
          /filter: e\(%\('progid:DXImageTransform.Microsoft.gradient\(startColorstr='%d', endColorstr='%d', GradientType=(\d)\)',argb\(([\-$\w]+)\),argb\(([\-$\w]+)\)\)\);/,
          %Q(filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='\#{ie-hex-str(\\2)}', endColorstr='\#{ie-hex-str(\\3)}', GradientType=\\1);)
      )
    end
    
        def log_status(status)
      puts bold status
    end
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
          case matched
    
      when '6.1.2'
    __NR_execve      = 7
    __NR_getpeername = 205
    __NR_accept      = 232
    __NR_listen      = 235
    __NR_bind        = 237
    __NR_socket      = 238
    __NR_connect     = 239
    __NR_close       = 272
    __NR_kfcntl      = 635
    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end

    
            attr_writer :log_levels
    
          # Throw an exception if the layout couldn't be found.
      else
        raise <<-ERR
    
          def define_deprecated_accessors_for(option, opts, &block)
        define_deprecated_writer_for(option, opts, &block)
      end
    
          origin = caller[1]
      if origin =~ /rubygems\/custom_require/
        origin = caller[3]
        if origin.nil?
          STDERR.puts 'Unknown origin'
          STDERR.puts caller.join('\n')
        end
      end
      origin = origin.gsub(/:[0-9]+:in .*/, '') if origin