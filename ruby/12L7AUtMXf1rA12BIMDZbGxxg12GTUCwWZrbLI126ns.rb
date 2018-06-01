
        
          # This allows generic Altivec PPC bottles to be supported in some
  # formulae, while also allowing specific bottles in others; e.g.,
  # sometimes a formula has just :tiger_altivec, other times it has
  # :tiger_g4, :tiger_g5, etc.
  def find_altivec_tag(tag)
    if tag.to_s =~ /(\w+)_(g4|g4e|g5)$/
      altivec_tag = '#{$1}_altivec'.to_sym
      altivec_tag if key?(altivec_tag)
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
    
      def external_commands
    paths.reduce([]) do |cmds, path|
      Dir['#{path}/brew-*'].each do |file|
        next unless File.executable?(file)
        cmd = File.basename(file, '.rb')[5..-1]
        cmds << cmd unless cmd.include?('.')
      end
      cmds
    end.sort
  end
    
      def std_cmake_parameters
    '-DCMAKE_INSTALL_PREFIX='#{prefix}' -DCMAKE_BUILD_TYPE=None -DCMAKE_FIND_FRAMEWORK=LAST -Wno-dev'
  end
    
          html_filters.push 'coffeescript/entries', 'coffeescript/clean_html', 'title'
    end
    
        version '5' do
      self.release = '5.4.0'
      self.base_url = 'https://github.com/d3/'
      self.root_path = 'd3/blob/master/API.md'
    
        version '1.11' do
      self.release = '1.11.9'
      self.dir = '/Users/Thibaut/DevDocs/Docs/Django111'
      self.base_url = 'https://docs.djangoproject.com/en/1.11/'
    end
    
        private
    
          if dest.end_with? '/'
        dest_dir.relative_path_from(base_dir).to_s.tap do |result|
          result << '/' if result != '.'
        end
      else
        dest_dir.parent.relative_path_from(base_dir).join(dest.split('/').last).to_s
      end
    end
    
      # Uninstalls this logger from \{Sass.logger\}. This should only be called if
  # the logger was installed using \{#install!}
  def uninstall!
    if Sass.logger != self
      throw Exception.new('Can't uninstall a logger that's not currently installed.')
    end
    
        # @param modifier [Array<String, Sass::Script::Tree::Node>] See \{#modifier}
    # @param type [Array<String, Sass::Script::Tree::Node>] See \{#type}
    # @param expressions [Array<Array<String, Sass::Script::Tree::Node>>] See \{#expressions}
    def initialize(modifier, type, expressions)
      @modifier = modifier
      @type = type
      @expressions = expressions
    end
    
      # GET /books/1/edit
  def edit
  end
    
            def comparison?(node)
          simple_comparison?(node) || nested_comparison?(node)
        end
      end
    end
  end
end

    
            if expected_annotations.plain_source == source
          raise 'Use expect_no_offenses to assert that no offenses are found'
        end