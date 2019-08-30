
        
          test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
    def gem_file
  '#{name}-#{version}.gem'
end
    
            page_dir = settings.wiki_options[:page_file_dir].to_s
        redirect to('/#{clean_url(::File.join(encodeURIComponent(page_dir), encodeURIComponent(path), encodeURIComponent(name)))}')
      rescue Gollum::DuplicatePageError => e
        @message = 'Duplicate page: #{e.message}'
        mustache :error
      end
    end