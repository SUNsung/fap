
        
              keg_only_deps.each do |dep|
        ENV.prepend_path 'PATH', dep.opt_bin.to_s
        ENV.prepend_path 'PKG_CONFIG_PATH', '#{dep.opt_lib}/pkgconfig'
        ENV.prepend_path 'PKG_CONFIG_PATH', '#{dep.opt_share}/pkgconfig'
        ENV.prepend_path 'ACLOCAL_PATH', '#{dep.opt_share}/aclocal'
        ENV.prepend_path 'CMAKE_PREFIX_PATH', dep.opt_prefix.to_s
        ENV.prepend 'LDFLAGS', '-L#{dep.opt_lib}' if dep.opt_lib.directory?
        ENV.prepend 'CPPFLAGS', '-I#{dep.opt_include}' if dep.opt_include.directory?
      end
    end
    
      def clang
    @clang ||= MacOS.clang_version if MacOS.has_apple_developer_tools?
  end
    
        attr_reader :filters
    
        def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
          def initial_urls
        super + self.class.base_urls[1..-1].deep_dup
      end
    
        def initialize(*args)
      if args.empty?
        super(*Array.new(9))
      elsif args.length == 1 && args.first.is_a?(Hash)
        args.first.assert_valid_keys URI::Generic::COMPONENT
        super(*args.first.values_at(*URI::Generic::COMPONENT))
      else
        super
      end
    end
    
        # Converts the CSS template into Sass or SCSS code.
    #
    # @param fmt [Symbol] `:sass` or `:scss`, designating the format to return.
    # @return [String] The resulting Sass or SCSS code
    # @raise [Sass::SyntaxError] if there's an error parsing the CSS template
    def render(fmt = :sass)
      check_encoding!
      build_tree.send('to_#{fmt}', @options).strip + '\n'
    rescue Sass::SyntaxError => err
      err.modify_backtrace(:filename => @options[:filename] || '(css)')
      raise err
    end
    
    Backtrace:\n#{e.backtrace.join('\n').gsub('*/', '*\\/')}
*/
body:before {
  white-space: pre;
  font-family: monospace;
  content: '#{header.gsub(''', '\'').gsub('\n', '\\A ')}'; }
END
      end
    
          # Almost any real Unix terminal will support color,
      # so we just filter for Windows terms (which don't set TERM)
      # and not-real terminals, which aren't ttys.
      return str if ENV['TERM'].nil? || ENV['TERM'].empty? || !STDOUT.tty?
      '\e[#{COLORS[color]}m#{str}\e[0m'
    end
    
          # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end
    
      # TODO: raise SAFE level (0) to 4 if possible.
  def generate
    ERB.new(PROFILE_ERB_TEMPLATE, 0, '>').result(binding)
  end
end