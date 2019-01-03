
        
            def unescapePredicate(cc)
      if (isAlphaNumeric(cc));
        return true
      end
      # !
      if (cc == 33);
        return true
      end
      # '()*
      if (39 <= cc && cc <= 42);
        return true
      end
      # -.
      if (45 <= cc && cc <= 46);
        return true
      end
      # _
      if (cc == 95);
        return true
      end
      # ~
      if (cc == 126);
        return true
      end
    
          def upload_dest
        @upload_dest
      end
    
          # Extracts title from page if present.
      #
      def page_header_from_content(content)
        doc   = build_document(content)
        title = find_header_node(doc).inner_text.strip
        title = nil if title.empty?
        title
      end
    
    context 'Precious::Views::Editing' do
  include Rack::Test::Methods
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    Precious::App.set(:gollum_path, @path)
    FileUtils.cp_r File.join(examples, 'revert.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
    require 'optparse'
require 'rubygems'
require 'gollum'
require 'cgi'
    
        # Ensure path begins with a single leading slash
    def clean_path(path)
      if path
        (path[0] != '/' ? path.insert(0, '/') : path).gsub(/\/{2,}/, '/')
      end
    end
    
      s.require_paths = %w[lib]
    
    
    
    end
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end