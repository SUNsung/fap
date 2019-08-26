
        
            def fragment_url_string?(str)
      str[0] == '#'
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
        def document?
      @content =~ DOCUMENT_RGX
    end
    
        def root_path
      self.class.root_path
    end
    
        def format_url(url)
      url.to_s.remove %r{\Ahttps?://}
    end