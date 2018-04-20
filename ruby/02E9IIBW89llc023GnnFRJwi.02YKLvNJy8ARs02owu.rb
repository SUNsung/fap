
        
              def sanitized_opts(opts, is_safe)
        if is_safe
          Hash[[
            [:startinline, opts.fetch(:startinline, nil)],
            [:hl_lines,    opts.fetch(:hl_lines, nil)],
            [:linenos,     opts.fetch(:linenos, nil)],
            [:encoding,    opts.fetch(:encoding, 'utf-8')],
            [:cssclass,    opts.fetch(:cssclass, nil)],
          ].reject { |f| f.last.nil? }]
        else
          opts
        end
      end
    
    #
    
        def arg_is_present?(args, deprecated_argument, message)
      if args.include?(deprecated_argument)
        deprecation_message(message)
      end
    end
    
    module Jekyll
  module Filters
    module GroupingFilters
      # Group an array of items by a property
      #
      # input - the inputted Enumerable
      # property - the property
      #
      # Returns an array of Hashes, each looking something like this:
      #  {'name'  => 'larry'
      #   'items' => [...] } # all the items where `property` == 'larry'
      def group_by(input, property)
        if groupable?(input)
          groups = input.group_by { |item| item_property(item, property).to_s }
          grouped_array(groups)
        else
          input
        end
      end
    
          # we readlink because this path probably doesn't exist since caveats
      # occurs before the link step of installation
      # Yosemite security measures mildly tighter rules:
      # https://github.com/Homebrew/homebrew/issues/33815
      if !plist_path.file? || !plist_path.symlink?
        if f.plist_startup
          s << 'To have launchd start #{f.full_name} at startup:'
          s << '  sudo mkdir -p #{destination}' unless destination_path.directory?
          s << '  sudo cp -fv #{f.opt_prefix}/*.plist #{destination}'
          s << '  sudo chown root #{plist_link}'
        else
          s << 'To have launchd start #{f.full_name} at login:'
          s << '  mkdir -p #{destination}' unless destination_path.directory?
          s << '  ln -sfv #{f.opt_prefix}/*.plist #{destination}'
        end
        s << 'Then to load #{f.full_name} now:'
        if f.plist_startup
          s << '  sudo launchctl load #{plist_link}'
        else
          s << '  launchctl load #{plist_link}'
        end
      # For startup plists, we cannot tell whether it's running on launchd,
      # as it requires for `sudo launchctl list` to get real result.
      elsif f.plist_startup
        s << 'To reload #{f.full_name} after an upgrade:'
        s << '  sudo launchctl unload #{plist_link}'
        s << '  sudo cp -fv #{f.opt_prefix}/*.plist #{destination}'
        s << '  sudo chown root #{plist_link}'
        s << '  sudo launchctl load #{plist_link}'
      elsif Kernel.system '/bin/launchctl list #{plist_domain} &>/dev/null'
        s << 'To reload #{f.full_name} after an upgrade:'
        s << '  launchctl unload #{plist_link}'
        s << '  launchctl load #{plist_link}'
      else
        s << 'To load #{f.full_name}:'
        s << '  launchctl load #{plist_link}'
      end
    
      def find_internal_commands(directory)
    directory.children.reduce([]) do |cmds, f|
      cmds << f.basename.to_s.sub(/\.(?:rb|sh)$/, '') if f.file?
      cmds
    end
  end
end

    
        if ARGV.include? '--list-checks'
      puts checks.all.sort
      exit
    end
    
              def plugins
            @plugins ||= find_plugins_gem_specs.map do |spec|
              { :name => spec.name, :version => spec.version.to_s }
            end.sort_by do |spec|
              spec[:name]
            end
          end
    
        i0, s0 = index, []
    r1 = _nt_name
    s0 << r1
    if r1
      r2 = _nt__
      s0 << r2
      if r2
        if has_terminal?('{', false, index)
          r3 = instantiate_node(SyntaxNode,input, index...(index + 1))
          @index += 1
        else
          terminal_parse_failure('{')
          r3 = nil
        end
        s0 << r3
        if r3
          r4 = _nt__
          s0 << r4
          if r4
            i6, s6 = index, []
            r7 = _nt_attribute
            s6 << r7
            if r7
              s8, i8 = [], index
              loop do
                i9, s9 = index, []
                r10 = _nt_whitespace
                s9 << r10
                if r10
                  r11 = _nt__
                  s9 << r11
                  if r11
                    r12 = _nt_attribute
                    s9 << r12
                  end
                end
                if s9.last
                  r9 = instantiate_node(SyntaxNode,input, i9...index, s9)
                  r9.extend(Plugin0)
                else
                  @index = i9
                  r9 = nil
                end
                if r9
                  s8 << r9
                else
                  break
                end
              end
              r8 = instantiate_node(SyntaxNode,input, i8...index, s8)
              s6 << r8
            end
            if s6.last
              r6 = instantiate_node(SyntaxNode,input, i6...index, s6)
              r6.extend(Plugin1)
            else
              @index = i6
              r6 = nil
            end
            if r6
              r5 = r6
            else
              r5 = instantiate_node(SyntaxNode,input, index...index)
            end
            s0 << r5
            if r5
              r13 = _nt__
              s0 << r13
              if r13
                if has_terminal?('}', false, index)
                  r14 = instantiate_node(SyntaxNode,input, index...(index + 1))
                  @index += 1
                else
                  terminal_parse_failure('}')
                  r14 = nil
                end
                s0 << r14
              end
            end
          end
        end
      end
    end
    if s0.last
      r0 = instantiate_node(LogStash::Config::AST::Plugin,input, i0...index, s0)
      r0.extend(Plugin2)
    else
      @index = i0
      r0 = nil
    end