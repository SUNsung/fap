
        
            def add(path, content)
      @pages[path] = content
    end
    
        def path
      @path ||= url.path
    end