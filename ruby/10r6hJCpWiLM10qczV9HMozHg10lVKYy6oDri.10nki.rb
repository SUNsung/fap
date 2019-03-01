
        
          def parse(*paths)
    paths.flatten
         .compact
         .flat_map { |p| Pathname.new(p).to_path.split(File::PATH_SEPARATOR) }
         .uniq
  end
end

    
            line_num = e.sass_line + 1 - line_offset
        min = [line_num - 6, 0].max
        section = e.sass_template.rstrip.split('\n')[min...line_num + 5]
        return e.sass_backtrace_str if section.nil? || section.empty?
    
          # Get the cache key pair for the given Sass URI.
      # The URI need not be checked for validity.
      #
      # The only strict requirement is that the returned pair of strings
      # uniquely identify the file at the given URI.
      # However, the first component generally corresponds roughly to the directory,
      # and the second to the basename, of the URI.
      #
      # Note that keys must be unique *across importers*.
      # Thus it's probably a good idea to include the importer name
      # at the beginning of the first component.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [(String, String)] The key pair which uniquely identifies
      #   the file at the given URI.
      def key(uri, options)
        Sass::Util.abstract(self)
      end
    
                platform = target.platform_name
            case platform
            when :osx
              execute_command 'xcodebuild -workspace '#{workspace_path}' -scheme '#{scheme_name}' clean build'
            when :ios
              test_flag = (scheme_name.start_with? 'Test') ? 'test' : ''
    
                case platform
            when 'iOS' then self.platform :ios, '10.0'
            when 'macOS' then self.platform :macos, '10.10'
            end