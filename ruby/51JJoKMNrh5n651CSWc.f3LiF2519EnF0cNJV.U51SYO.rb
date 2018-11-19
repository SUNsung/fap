
        
                it 'does nothing for zero argument' do
          format('%#b', 0).should == '0'
          format('%#B', 0).should == '0'
    
      it 'raises an ArgumentError when passed a negative duration' do
    lambda { sleep(-0.1) }.should raise_error(ArgumentError)
    lambda { sleep(-1) }.should raise_error(ArgumentError)
  end
    
      it 'no raises error on fixnum values' do
    [1].each do |v|
      lambda { v.taint }.should_not raise_error(RuntimeError)
      v.tainted?.should == false
    end
  end
end

    
            -> { w.f4('', 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: \n$|)
        -> { w.f4(nil, 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: \n$|)
      end
    
      # Compile a Sass or SCSS string to CSS.
  # Defaults to SCSS.
  #
  # @param contents [String] The contents of the Sass file.
  # @param options [{Symbol => Object}] An options hash;
  #   see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  # @raise [Sass::SyntaxError] if there's an error in the document
  # @raise [Encoding::UndefinedConversionError] if the source encoding
  #   cannot be converted to UTF-8
  # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
  def self.compile(contents, options = {})
    options[:syntax] ||= :scss
    Engine.new(contents, options).to_css
  end
    
        # Modify the top Sass backtrace entries
    # (that is, the most deeply nested ones)
    # to have the given attributes.
    #
    # Specifically, this goes through the backtrace entries
    # from most deeply nested to least,
    # setting the given attributes for each entry.
    # If an entry already has one of the given attributes set,
    # the pre-existing attribute takes precedence
    # and is not used for less deeply-nested entries
    # (even if they don't have that attribute set).
    #
    # @param attrs [{Symbol => Object}] The information to add to the backtrace entry.
    #   See \{#sass\_backtrace}
    def modify_backtrace(attrs)
      attrs = attrs.reject {|_k, v| v.nil?}
      # Move backwards through the backtrace
      (0...sass_backtrace.size).to_a.reverse_each do |i|
        entry = sass_backtrace[i]
        sass_backtrace[i] = attrs.merge(entry)
        attrs.reject! {|k, _v| entry.include?(k)}
        break if attrs.empty?
      end
    end
    
        def paragraphize(input)
      '<p>#{input.lstrip.rstrip.gsub(/\n\n/, '</p><p>').gsub(/\n/, '<br/>')}</p>'
    end
  end
end
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
      def framework_major_version
    framework_version.split('.').first.to_i
  end
end
World(RailsCommandHelpers)

    
    begin
  # Use mime/types/columnar if available, for reduced memory usage
  require 'mime/types/columnar'
rescue LoadError
  require 'mime/types'
end
    
        # Returns the Rails.env constant.
    def rails_env attachment, style_name
      Rails.env
    end