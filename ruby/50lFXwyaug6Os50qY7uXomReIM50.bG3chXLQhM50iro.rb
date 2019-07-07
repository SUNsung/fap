
        
            def at_css(*args)
      doc.at_css(*args)
    end
    
        def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
        def effective_path
      @effective_path ||= effective_url.path
    end
  end
end

    
            css('.filetree .children').each do |node|
          node.css('.file').each do |n|
            n.content = '  #{n.content}'
          end
        end
    
            css('img[src]').each do |node|
          node['src'] = node['src'].gsub(%r{angularjs\.org/([\d\.]+)/docs/partials/(\w+)/}, 'angularjs.org/\1/docs/\2/')
        end
    
        def extract_to_dir(unpack_dir, basename:, verbose:)
      system_command! AIR_APPLICATION_INSTALLER,
                      args:    ['-silent', '-location', unpack_dir, path],
                      verbose: verbose
    end
  end
end

    
    class Api::OEmbedController < Api::BaseController
  respond_to :json