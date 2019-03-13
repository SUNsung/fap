
        
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
    
          ext = @options[:from]
      Sass::Util.glob('#{@options[:input]}/**/*.#{ext}') do |f|
        output =
          if @options[:in_place]
            f
          elsif @options[:output]
            output_name = f.gsub(/\.(c|sa|sc|le)ss$/, '.#{@options[:to]}')
            output_name[0...@options[:input].size] = @options[:output]
            output_name
          else
            f.gsub(/\.(c|sa|sc|le)ss$/, '.#{@options[:to]}')
          end
    
    # component must be String
    def URIEncodeComponent(componentString)
      Encode(componentString, :unescapePredicate);
    end
    
          attr_reader :name, :path
    
          def has_footer
        if @footer
          @footer.formatted_data.strip.empty? ? false : true
        else
          @footer = (@page.footer || false)
          !!@footer
        end
      end
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
    def utf8(str)
  str.respond_to?(:force_encoding) ? str.force_encoding('utf-8') : str
end
    
        def sanitize_empty_params(param)
      [nil, ''].include?(param) ? nil : CGI.unescape(param)
    end