
        
                css('.postHeader', 'article', 'div:not([class])').each do |node|
          node.before(node.children).remove
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
    
        def unescapePredicate(cc)
      if (isAlphaNumeric(cc));
        return true
      end
      # !
      if (cc == 33);
        return true
      end
      # '()*
      if (39 <= cc && cc <= 42);
        return true
      end
      # -.
      if (45 <= cc && cc <= 46);
        return true
      end
      # _
      if (cc == 95);
        return true
      end
      # ~
      if (cc == 126);
        return true
      end
    
          def page_name
        @name.gsub('-', ' ')
      end
    
    # Disable the metadata feature
$METADATA = false
    
      teardown do
    FileUtils.rm_r(File.join(File.dirname(__FILE__), *%w[examples test.git]))
  end
    
      test 'creates korean page which contains korean content' do
    post '/create', :content => '한글 text', :page => 'k',
         :format             => 'markdown', :message => 'def'
    follow_redirect!
    assert last_response.ok?
    
            page_dir = settings.wiki_options[:page_file_dir].to_s
        redirect to('/#{clean_url(::File.join(encodeURIComponent(page_dir), encodeURIComponent(path), encodeURIComponent(name)))}')
      rescue Gollum::DuplicatePageError => e
        @message = 'Duplicate page: #{e.message}'
        mustache :error
      end
    end