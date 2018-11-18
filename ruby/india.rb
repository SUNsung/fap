
        
            def subpath
      @subpath ||= subpath_to(current_url)
    end
    
        DOCUMENT_RGX = /\A(?:\s|(?:<!--.*?-->))*<(?:\!doctype|html)/i
    
        def path
      @path ||= url.path
    end
    
          def call(*)
        if @minute != Time.now.min
          @minute = Time.now.min
          @counter = 0
        end