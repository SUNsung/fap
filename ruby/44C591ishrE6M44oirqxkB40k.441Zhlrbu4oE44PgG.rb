
        
                if base_url.path == '/spec/'
          index = css('.subnav li a').to_a.index(at_css('.subnav li a[href='#{result[:path]}']')) + 1
          name.prepend '#{index}. '
        end
    
        options[:attribution] = <<-HTML
      &copy; 2011&ndash;2018 Twitter, Inc.<br>
      &copy; 2011&ndash;2018 The Bootstrap Authors<br>
      Code licensed under the MIT License.<br>
      Documentation licensed under the Creative Commons Attribution License v3.0.
    HTML
    
          html_filters.push 'd3/clean_html', 'd3/entries_v3', 'title'
    
        def parse(response)
      unless response.url == root_url || self.class.version == 'Guide'
        response.body.sub!(/<nav class='devsite-nav-responsive-sidebar.+?<\/nav>/m, '')
        response.body.gsub!(/<li class='devsite-nav-item'>.+?<\/li>/m, '')
      end
    
        def add_entry(entry)
      if @index.add?(entry.as_json.to_s)
        @entries << entry.dup
        @types[entry.type].count += 1 if entry.type
      end
    end
    
        def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
    module Homebrew
  module_function
    
              # Check pypi urls
          @pypi_pattern = %r{^https?://pypi.python.org/(.*)}
          audit_urls(urls, @pypi_pattern) do |match, url|
            problem '#{url} should be `https://files.pythonhosted.org/#{match[1]}`'
          end
        end
    
        def self.definitions_for(klass)
      instance.definitions_for(klass)
    end
    
        # True if the dimensions represent a vertical rectangle
    def vertical?
      height > width
    end
    
            def failure_message
          'Should have an attachment named #{@attachment_name}'
        end
    
          def check_validity!
        unless options.has_key?(:matches) || options.has_key?(:not)
          raise ArgumentError, 'You must pass in either :matches or :not to the validator'
        end
      end
    end