
        
                klass = Class.new(self)
        klass.name = name
        klass.slug = slug
        klass.version = version
        klass.release = release
        klass.links = links
        klass.class_exec(&block)
        @versions ||= []
        @versions << klass
        klass
      end
    
        def inheritable_copy
      self.class.new @filters
    end
    
        def self.run(urls, options = {}, &block)
      urls = urls.dup
      requester = new(options)
      requester.on_response(&block) if block
      requester.on_response do # cheap hack to ensure root page is processed first
        if urls
          requester.request(urls)
          urls = nil
        end
      end
      requester.request(urls.shift)
      requester.run
      requester
    end
    
            css('.example-title + pre').each do |node|
          node['name'] = node.previous_element.content.strip
          node.previous_element.remove
        end
    
          def include_default_entry?
        INDEX.add?([name, type].join(';')) ? true : false # ¯\_(ツ)_/¯
      end