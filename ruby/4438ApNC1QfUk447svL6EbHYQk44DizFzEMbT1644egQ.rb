    # The stdlib recorded in the install receipt is used during dependency
    # compatibility checks, so we only care about the stdlib that libraries
    # link against.
    keg.detect_cxx_stdlibs(:skip_executables => true)
  end
    
      def <<(o)
    @settings << o
    self
  end
    
      def fish_completion_caveats
    if keg && keg.completion_installed?(:fish) && which('fish') then <<-EOS.undent
      fish completion has been installed to:
        #{HOMEBREW_PREFIX}/share/fish/vendor_completions.d
      EOS
    end
  end
    
      def observe_file_removal(path)
    path.extend(ObserverPathnameExtension).unlink if path.exist?
  end
    
          html_filters.push 'bootstrap/entries_v4', 'bootstrap/clean_html_v4'
    
        options[:attribution] = <<-HTML
      &copy; 2010&ndash;2018 Michael Bostock<br>
      Licensed under the BSD License.
    HTML
    
        html_filters.push 'haxe/clean_html', 'haxe/entries'
    
          ([self.root_path] + self.initial_paths).each do |path|
        stub(path) do
          capybara = load_capybara_selenium
          capybara.app_host = self.base_url.origin
          capybara.visit('#{self.base_url}#{path}')
          capybara.execute_script('return document.body.innerHTML')
        end
      end
    end
    
        def empty?
      @entries.empty?
    end
    
      # Uninstalls this logger from \{Sass.logger\}. This should only be called if
  # the logger was installed using \{#install!}
  def uninstall!
    if Sass.logger != self
      throw Exception.new('Can't uninstall a logger that's not currently installed.')
    end
    
        def parse_input(environment, text)
      case text
      when Script::MATCH
        name = $1
        guarded = !!$3
        val = Script::Parser.parse($2, @line, text.size - ($3 || '').size - $2.size)
    
            def run
          UI.puts('$CACHE_ROOT: #{@cache.root}') if @short_output
          if @pod_name.nil? # Print all
            @cache.cache_descriptors_per_pod.each do |pod_name, cache_descriptors|
              print_pod_cache_infos(pod_name, cache_descriptors)
            end
          else # Print only for the requested pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            else
              print_pod_cache_infos(@pod_name, cache_descriptors)
            end
          end
        end
    
          # @param  [[Xcodeproj::PBXTarget]] targets
      #         An array which always has a target as its first item
      #         and may optionally contain related test targets
      #
      # @return [String] the text for the target module
      #
      def target_module(app, tests)
        target_module = '\ntarget '#{app.name.gsub(/'/, '\\\\\'')}' do\n'
    
            def execute_repl_command(repl_command)
          unless repl_command == '\n'
            repl_commands = repl_command.split
            subcommand = repl_commands.shift.capitalize
            arguments = repl_commands
            subcommand_class = Pod::Command::IPC.const_get(subcommand)
            subcommand_class.new(CLAide::ARGV.new(arguments)).run
            signal_end_of_output
          end
        end
      end
    end
  end
end

    
            private