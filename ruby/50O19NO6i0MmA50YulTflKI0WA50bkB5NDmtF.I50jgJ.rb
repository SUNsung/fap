
        
                # Executes a command and returns true if the command succeeded,
        # and false otherwise. By default, this executes as a normal user,
        # and it is up to the communicator implementation if they expose an
        # option for running tests as an administrator.
        #
        # @see #execute
        def test(command, opts=nil)
        end
      end
    end
  end
end

    
            # Helper method that will set a value if a value is given, or otherwise
        # return the already set value.
        #
        # @param [Symbol] key Key for the data
        # @param [Object] value Value to store.
        # @return [Object] Stored value.
        def self.get_or_set(key, value=UNSET_VALUE)
          # If no value is to be set, then return the value we have already set
          return data[key] if value.eql?(UNSET_VALUE)
    
        # @import 'file.less' to '#{target_path}file;'
    def replace_file_imports(less, target_path = '')
      less.gsub %r([@\$]import ['|']([\w\-/]+).less['|'];),
                %Q(@import '#{target_path}\\1';)
    end
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false