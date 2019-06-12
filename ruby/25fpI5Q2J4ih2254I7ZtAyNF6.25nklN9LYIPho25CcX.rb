
        
              private
    
        def format_path(path)
      path.to_s.remove File.join(File.expand_path('.'), '')
    end
    
            # Remove dead links (e.g. ngRepeat)
        css('a.type-hint').each do |node|
          node.name = 'code'
          node.remove_attribute 'href'
        end
    
        def dependencies
      @dependencies ||= [Cask::CaskLoader.load('adobe-air')]
    end
    
        result && attributes_match if @expected_attrs
    result &&= commands_match if commands