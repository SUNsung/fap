
        
          # True if a {Formula} is being built with a specific option
  # (which isn't named `with-*` or `without-*`).
  # @deprecated
  def include?(name)
    @args.include?('--#{name}')
  end
    
      def app_caveats
    if keg && keg.app_installed?
      <<-EOS.undent
        .app bundles were installed.
        Run `brew linkapps #{keg.name}` to symlink these to /Applications.
      EOS
    end
  end
    
        # Get rid of any info 'dir' files, so they don't conflict at the link stage
    info_dir_file = @f.info + 'dir'
    if info_dir_file.file? && !@f.skip_clean?(info_dir_file)
      observe_file_removal info_dir_file
    end
    
      def dump_verbose_config(f = $stdout)
    f.puts 'HOMEBREW_VERSION: #{HOMEBREW_VERSION}'
    f.puts 'ORIGIN: #{origin}'
    f.puts 'HEAD: #{head}'
    f.puts 'Last commit: #{last_commit}'
    if CoreTap.instance.installed?
      f.puts 'Core tap ORIGIN: #{core_tap_origin}'
      f.puts 'Core tap HEAD: #{core_tap_head}'
      f.puts 'Core tap last commit: #{core_tap_last_commit}'
    else
      f.puts 'Core tap: N/A'
    end
    f.puts 'HOMEBREW_PREFIX: #{HOMEBREW_PREFIX}'
    f.puts 'HOMEBREW_REPOSITORY: #{HOMEBREW_REPOSITORY}'
    f.puts 'HOMEBREW_CELLAR: #{HOMEBREW_CELLAR}'
    f.puts 'HOMEBREW_BOTTLE_DOMAIN: #{BottleSpecification::DEFAULT_DOMAIN}'
    f.puts hardware
    f.puts 'OS X: #{MacOS.full_version}-#{kernel}'
    f.puts 'Xcode: #{xcode ? xcode : 'N/A'}'
    f.puts 'CLT: #{clt ? clt : 'N/A'}'
    f.puts 'GCC-4.0: build #{gcc_40}' if gcc_40
    f.puts 'GCC-4.2: build #{gcc_42}' if gcc_42
    f.puts 'LLVM-GCC: build #{llvm}'  if llvm
    f.puts 'Clang: #{clang ? '#{clang} build #{clang_build}' : 'N/A'}'
    f.puts 'MacPorts/Fink: #{macports_or_fink}' if macports_or_fink
    f.puts 'X11: #{describe_x11}'
    f.puts 'System Ruby: #{describe_system_ruby}'
    f.puts 'Perl: #{describe_perl}'
    f.puts 'Python: #{describe_python}'
    f.puts 'Ruby: #{describe_ruby}'
    f.puts 'Java: #{describe_java}'
  end
end

    
        root.children.sort.each do |pn|
      if pn.directory?
        dirs << pn
      elsif block_given? && yield(pn)
        puts pn
        other = 'other '
      else
        remaining_root_files << pn unless pn.basename.to_s == '.DS_Store'
      end
    end
    
      def shorten_revision(revision)
    Utils.popen_read('git', '-C', HOMEBREW_REPOSITORY, 'rev-parse', '--short', revision).chomp
  end
    
    class Formula
  include FormulaCompat
  extend FormulaCompat
    
          To export the needed variables, add them to your dotfiles.
       * On Bash, add them to `~/.bash_profile`.
       * On Zsh, add them to `~/.zprofile` instead.
    
          private
    
        # Fetch a var from the context
    # @param [Symbol] variable The variable to fetch
    # @param [Object] default  The default value if not found
    #
    def fetch(*args)
      context.fetch(*args)
    end
    
        return captured_stdout.string, captured_stderr.string
  ensure
    $stdout = orig_stdout
    $stderr = orig_stderr
  end
end

    
        SPREE_GEMS.each do |gem_name|
      Dir.chdir(gem_name) do
        sh 'gem build spree_#{gem_name}.gemspec'
        mv 'spree_#{gem_name}-#{version}.gem', pkgdir
      end
    end
    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end
    
            def multiple_assignment_node
          grandparent_node = node.parent ? node.parent.parent : nil
          return nil unless grandparent_node
          return nil unless grandparent_node.type == MULTIPLE_ASSIGNMENT_TYPE
          return nil unless node.parent.type == MULTIPLE_LEFT_HAND_SIDE_TYPE
          grandparent_node
        end
      end
    end
  end
end

    
                lambda do |corrector|
              new_source = receiver.source + '.end_with?(' +
                           to_string_literal(regex_str) + ')'
              corrector.replace(node.source_range, new_source)
            end
          end
        end
      end
    end
  end
end

    
            private
    
          expect('.margin-all').to have_rule(rule)
    end
  end
    
          expect('.padding-all').to have_rule(rule)
    end
  end
    
          expect('.prefix--webkit').to have_ruleset(rule)
    end
  end