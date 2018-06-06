
        
                if entries.empty?
          css('.quickindex[id]').each do |node|
            name = node['id'].remove(/quickindex\.?/)
            next if name.empty? || name =~ /\.\d+\z/ || name =~ /\A([^\.]+)\.\1\z/
            entries << ['#{self.name}.#{name}', name]
          end
        end
    
        options[:attribution] = <<-HTML
      &copy; 2011&ndash;2018 Twitter, Inc.<br>
      &copy; 2011&ndash;2018 The Bootstrap Authors<br>
      Code licensed under the MIT License.<br>
      Documentation licensed under the Creative Commons Attribution License v3.0.
    HTML
    
        version '1.9' do
      self.release = '1.9.13'
      self.dir = '/Users/Thibaut/DevDocs/Docs/Django19'
      self.base_url = 'https://docs.djangoproject.com/en/1.9/'
    end
    
            a_length = a_split.length
        b_length = b_split.length
    
    end