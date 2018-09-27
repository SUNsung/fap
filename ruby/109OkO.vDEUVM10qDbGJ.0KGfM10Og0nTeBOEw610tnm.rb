
        
          def self.all_versions
    all.flat_map(&:versions)
  end
    
          def store_page(store, id)
        store.open(path) do
          if page = new.build_page(id) and store_page?(page)
            store.write page[:store_path], page[:output]
            true
          else
            false
          end
        end
      end
    
        def initialize(filters = nil)
      @filters = filters ? filters.dup : []
    end
    
        def document?
      @content =~ DOCUMENT_RGX
    end
    
        def handle_response(response)
      on_response.each do |callback|
        result = callback.call(response)
        result.each { |url| request(url) } if result.is_a? Array
      end
    end
  end
end

    
            css('label', 'h2 > em', 'h3 > em').each do |node|
          node.name = 'code'
        end
    
            css('.filetree').each do |node|
          node.content = node.css('.file').map(&:inner_html).join('\n')
          node.name = 'pre'
          node.remove_attribute('class')
        end
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
            # Remove dead links (e.g. ngRepeat)
        css('a.type-hint').each do |node|
          node.name = 'code'
          node.remove_attribute 'href'
        end