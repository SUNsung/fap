
        
            def current_url
      context[:url]
    end
    
        def ==(other)
      other.name == name && other.path == path && other.type == type
    end
    
            css('code code').each do |node|
          node.before(node.children).remove
        end