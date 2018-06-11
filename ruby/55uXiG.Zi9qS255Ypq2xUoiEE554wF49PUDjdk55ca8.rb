
        
              html_filters.push 'bootstrap/entries_v4', 'bootstrap/clean_html_v4'
    
          options[:only_patterns] = [/\Ad3[\-\w]+\z/, /\Ad3\/blob\/master\/changes\.md\z/i]
      options[:skip_patterns] = [/3\.x-api-reference/]
    
        version '1.9' do
      self.release = '1.9.13'
      self.dir = '/Users/Thibaut/DevDocs/Docs/Django19'
      self.base_url = 'https://docs.djangoproject.com/en/1.9/'
    end
    
        version 'Sys' do
      self.base_url = 'https://api.haxe.org/sys/'
    end
    
        def ==(other)
      other.name == name && other.path == path && other.type == type
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end
