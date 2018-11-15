
        
            @wiki.clear_cache
    page2 = @wiki.page('A')
    assert_equal page1.version.sha, page2.version.sha
  end
=end
=begin
  # redirects are now handled by class MapGollum in bin/gollum
  # they should be set in config.ru
    
    def utf8(str)
  str.respond_to?(:force_encoding) ? str.force_encoding('utf-8') : str
end
    
      if wiki_options[:plantuml_url]
    Gollum::Filter::PlantUML.configure do |config|
      puts 'Using #{wiki_options[:plantuml_url]} as PlantUML endpoint'
      config.url = wiki_options[:plantuml_url]
    end
  end