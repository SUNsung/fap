
        
        module Docs
  class Filter < ::HTML::Pipeline::Filter
    def css(*args)
      doc.css(*args)
    end
    
        def path
      @path ||= url.path
    end
    
            css('.content', 'article', '.api-header', 'section', '.instance-member').each do |node|
          node.before(node.children).remove
        end
    
            # Remove root-level <div>
        while div = at_css('h1 + div')
          div.before(div.children)
          div.remove
        end
    
            doc
      end
    end
  end
end

    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
        def backtrace_pattern
      loc = Rake.application.find_rakefile_location
      return unless loc