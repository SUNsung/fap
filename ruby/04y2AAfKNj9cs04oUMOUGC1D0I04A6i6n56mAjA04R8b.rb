
        
            options[:attribution] = <<-HTML
      &copy; Joyent, Inc. and other Node contributors<br>
      Licensed under the MIT License.<br>
      Node.js is a trademark of Joyent, Inc. and is used with its permission.<br>
      We are not endorsed by or affiliated with Joyent.
    HTML
    
        options[:only_patterns] = [
      /\Abook\/first-edition\//,
      /\Areference\//,
      /\Acollections\//,
      /\Astd\// ]
    
        html_filters.push 'sinon/clean_html', 'sinon/entries'
    
        version 'Python' do
      include MultipleBaseUrls
      self.base_urls = ['https://www.tensorflow.org/api_docs/python/', 'https://www.tensorflow.org/api_guides/python/']
    end
    
            return a.casecmp(b) if a_length == 1 && b_length == 1
        return 1 if a_length == 1
        return -1 if b_length == 1
    
        def add(path, content)
      @pages[path] = content
    end
    
        # From asking people, it seems MacPorts does not have a `prefix` command, like
    # Homebrew does, so make an educated guess:
    if port_prefix = prefix_from_bin('port')
      prefixes << port_prefix
    end
    
          def run
        UI.puts report
      end
    
            def print_version
          output_pipe.puts 'version: '#{Pod::VERSION}''
        end
    
      # PATCH/PUT /books/1
  # PATCH/PUT /books/1.json
  def update
    respond_to do |format|
      if @book.update(book_params)
        format.html { redirect_to @book, notice: 'Book was successfully updated.' }
        format.json { render :show, status: :ok, location: @book }
      else
        format.html { render :edit }
        format.json { render json: @book.errors, status: :unprocessable_entity }
      end
    end
  end
    
        context 'when first child is NOT a method' do
      it 'does not require blank line at the beginning of #{type} body '\
        'but requires blank line before first def definition '\
        'and requires blank line at the end of #{type} body' do
        inspect_source(<<-RUBY.strip_indent)
          #{type} SomeObject
            include Something
    
        # Extracts the Geometry from a 'WxH,O' string
    # Where W is the width, H is the height,
    # and O is the EXIF orientation
    def self.parse(string)
      GeometryParser.new(string).make
    end
    
            protected
    
          def create_validating_before_filter(attribute, validator_class, options)
        if_clause = options.delete(:if)
        unless_clause = options.delete(:unless)
        send(:'before_#{attribute}_post_process', :if => if_clause, :unless => unless_clause) do |*args|
          validator_class.new(options.dup).validate(self)
        end
      end