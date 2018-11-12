
        
            def empty?
      @entries.empty?
    end
    
        def add(path, content)
      @pages[path] = content
    end
    
        def initialize(content)
      @content = content
      @html = document? ? parse_as_document : parse_as_fragment
    end
    
        def relative_path_from(url)
      self.class.parse(url).relative_path_to(self)
    end
  end
end

    
      gem.required_ruby_version = '>= 2.0'
  gem.add_dependency 'airbrussh', '>= 1.0.0'
  gem.add_dependency 'i18n'
  gem.add_dependency 'rake', '>= 10.0.0'
  gem.add_dependency 'sshkit', '>= 1.9.0'
    
    Given(/^the configuration is in a custom location$/) do
  TestApp.move_configuration_to_custom_location('app')
end
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
            # Skip validation behavior if no validators are registered for this key
        return super unless validators.key?(key)