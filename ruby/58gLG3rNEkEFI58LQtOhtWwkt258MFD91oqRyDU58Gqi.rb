
        
            A binary installer is available:
      https://www.haskell.org/platform/mac.html
    EOS
  when 'mysqldump-secure' then <<-EOS.undent
    The creator of mysqldump-secure tried to game our popularity metrics.
    EOS
  when 'ngrok' then <<-EOS.undent
    Upstream sunsetted 1.x in March 2016 and 2.x is not open-source.
    
      # True if a {Formula} is being built in 32-bit/x86 mode.
  # This is needed for some use-cases though we prefer to build Universal
  # when a 32-bit version is needed.
  def build_32_bit?
    include?('32-bit') && option_defined?('32-bit')
  end
    
        return if Language::Python.reads_brewed_pth_files?('python')
    
        dump_formula_report :A, 'New Formulae'
    dump_formula_report :M, 'Updated Formulae'
    dump_formula_report :R, 'Renamed Formulae'
    dump_formula_report :D, 'Deleted Formulae'
  end
    
            # Execute a command on the remote machine. The exact semantics
        # of this method are up to the implementor, but in general the
        # users of this class will expect this to be a shell.
        #
        # This method gives you no way to write data back to the remote
        # machine, so only execute commands that don't expect input.
        #
        # @param [String] command Command to execute.
        # @yield [type, data] Realtime output of the command being executed.
        # @yieldparam [String] type Type of the output. This can be
        #   `:stdout`, `:stderr`, etc. The exact types are up to the
        #   implementor.
        # @yieldparam [String] data Data for the given output.
        # @return [Integer] Exit code of the command.
        def execute(command, opts=nil)
        end
    
            # Mounts a shared folder via NFS. This assumes that the exports
        # via the host are already done.
        def mount_nfs(ip, folders)
          raise BaseError, _key: :unsupported_nfs
        end
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is usable. This should return true or false.
        #
        # If raise_error is true, then instead of returning false, this
        # should raise an error with a helpful message about why this
        # provider cannot be used.
        #
        # @param [Boolean] raise_error If true, raise exception if not usable.
        # @return [Boolean]
        def self.usable?(raise_error=false)
          # Return true by default for backwards compat since this was
          # introduced long after providers were being written.
          true
        end
    
        private
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
        # extracts rule immediately after it's parent, and adjust the selector
    # .x { textarea& { ... }}
    # to:
    # .x { ... }
    # textarea.x { ... }
    def extract_nested_rule(file, selector, new_selector = nil)
      matches = []
      # first find the rules, and remove them
      file    = replace_rules(file, '\s*#{selector}', comments: true) { |rule, pos, css|
        new_sel = new_selector || '#{get_selector(rule).gsub(/&/, selector_for_pos(css, pos.begin))}'
        matches << [rule, pos, new_sel]
        indent '// [converter] extracted #{get_selector(rule)} to #{new_sel}'.tr('\n', ' ').squeeze(' '), indent_width(rule)
      }
      raise 'extract_nested_rule: no such selector: #{selector}' if matches.empty?
      # replace rule selector with new_selector
      matches.each do |m|
        m[0].sub! /(#{COMMENT_RE}*)^(\s*).*?(\s*){/m, '\\1\\2#{m[2]}\\3{'
        log_transform selector, m[2]
      end
      replace_substrings_at file,
                            matches.map { |_, pos| close_brace_pos(file, pos.begin, 1) + 1 },
                            matches.map { |rule, _| '\n\n' + unindent(rule) }
    end
    }
    }
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
        def get_paths_by_type(dir, file_re, recursive = true)
      get_file_paths(dir, recursive).select { |path| path =~ file_re }
    end
    
    abstract_target 'Abstract Target' do
    use_modular_headers!
    
          private
    
          if payload
        raw_push([payload])
        payload['jid']
      end
    end