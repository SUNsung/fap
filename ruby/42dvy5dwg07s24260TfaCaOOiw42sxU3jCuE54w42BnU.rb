
        
          desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
      # Compile a file on disk to CSS.
  #
  # @raise [Sass::SyntaxError] if there's an error in the document
  # @raise [Encoding::UndefinedConversionError] if the source encoding
  #   cannot be converted to UTF-8
  # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
  #
  # @overload compile_file(filename, options = {})
  #   Return the compiled CSS rather than writing it to a file.
  #
  #   @param filename [String] The path to the Sass, SCSS, or CSS file on disk.
  #   @param options [{Symbol => Object}] An options hash;
  #     see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  #   @return [String] The compiled CSS.
  #
  # @overload compile_file(filename, css_filename, options = {})
  #   Write the compiled CSS to a file.
  #
  #   @param filename [String] The path to the Sass, SCSS, or CSS file on disk.
  #   @param options [{Symbol => Object}] An options hash;
  #     see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  #   @param css_filename [String] The location to which to write the compiled CSS.
  def self.compile_file(filename, *args)
    options = args.last.is_a?(Hash) ? args.pop : {}
    css_filename = args.shift
    result = Sass::Engine.for_file(filename, options).render
    if css_filename
      options[:css_filename] ||= css_filename
      open(css_filename, 'w') {|css_file| css_file.write(result)}
      nil
    else
      result
    end
  end
end
    
        MIXIN_INCLUDE_RE = /^(?:\+|@include)\s*(#{Sass::SCSS::RX::IDENT})(.*)$/
    def parse_mixin_include(line, root)
      name, arg_string = line.text.scan(MIXIN_INCLUDE_RE).first
      raise SyntaxError.new('Invalid mixin include \'#{line.text}\'.') if name.nil?
    
        # Returns whether this is the global environment.
    #
    # @return [Boolean]
    def global?
      @parent.nil?
    end
    
          opts.on('-T', '--to FORMAT',
        'The format to convert to. Can be scss or sass.',
        'By default, this is inferred from the output filename.',
        'If there is none, defaults to sass.') do |name|
        @options[:to] = name.downcase.to_sym
        unless [:scss, :sass].include?(@options[:to])
          raise 'Unknown format for sass-convert --to: #{name}'
        end
      end
    
          def string_to_code(string)
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
          def title
        'Home'
      end
    
        def self.setup(&block)
      define_method(:setup, &block)
    end
    
    
    
      if cfg = options[:config]
    # If the path begins with a '/' it will be considered an absolute path,
    # otherwise it will be relative to the CWD
    cfg = File.join(Dir.getwd, cfg) unless cfg.slice(0) == File::SEPARATOR
    require cfg
  end