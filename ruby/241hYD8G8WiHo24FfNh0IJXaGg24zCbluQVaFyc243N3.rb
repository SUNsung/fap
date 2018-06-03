
        
            version 'HashLink' do
      self.base_url = 'https://api.haxe.org/hl/'
    end
    
        options[:skip] = %w(book/first-edition/README.html)
    options[:skip_patterns] = [/(?<!\.html)\z/]
    
        version 'Guide' do
      self.base_url = 'https://www.tensorflow.org/'
      self.root_path = 'get_started/get_started'
      self.initial_paths = %w(
        programmers_guide/reading_data
        tutorials/mandelbrot
        performance/performance_guide
        deploy/hadoop
        extend/architecture)
    
          if options && options[:ignore_case]
        base = base.downcase
        dest = dest.downcase
      end
    
    module Jekyll
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end