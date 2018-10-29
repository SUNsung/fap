
        
                    @template_object.label(@object_name, @sanitized_attribute_name, @text, html_options, &block)
          end
        end
    
    module ActionView #:nodoc:
  # = Action View PathSet
  #
  # This class is used to store and access paths in Action View. A number of
  # operations are defined so that you can search among the paths in this
  # set and also perform operations on other +PathSet+ objects.
  #
  # A +LookupContext+ will use a +PathSet+ to store the paths in its context.
  class PathSet #:nodoc:
    include Enumerable
    
        def assets_path
      @assets_path ||= File.join gem_path, 'assets'
    end
    
        def log_transform(*args, from: caller[1][/`.*'/][1..-2].sub(/^block in /, ''))
      puts '    #{cyan from}#{cyan ': #{args * ', '}' unless args.empty?}'
    end
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
          REDUNDANT_DIRECTORY = /#{Regexp.escape(File::SEPARATOR)}\.#{Regexp.escape(File::SEPARATOR)}/
      # Given a base directory and an `@import`ed name,
      # finds an existent file that matches the name.
      #
      # @param dir [String] The directory relative to which to search.
      # @param name [String] The filename to search for.
      # @return [(String, Symbol)] A filename-syntax pair.
      def find_real_file(dir, name, options)
        # On windows 'dir' or 'name' can be in native File::ALT_SEPARATOR form.
        dir = dir.gsub(File::ALT_SEPARATOR, File::SEPARATOR) unless File::ALT_SEPARATOR.nil?
        name = name.gsub(File::ALT_SEPARATOR, File::SEPARATOR) unless File::ALT_SEPARATOR.nil?