
        
            SCHEME_RGX = /\A[^:\/?#]+:/
    
        DOCUMENT_RGX = /\A(?:\s|(?:<!--.*?-->))*<(?:\!doctype|html)/i
    
            css('.nav-index-section').each do |node|
          node.content = node.content
        end
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC