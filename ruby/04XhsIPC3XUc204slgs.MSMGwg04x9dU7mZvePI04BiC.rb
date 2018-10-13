
        
            def process_response(response)
      data = {}
      html, title = parse(response)
      context = pipeline_context(response)
      context[:html_title] = title
      pipeline.call(html, context, data)
      data
    end
    
        def relative_path_to(url)
      url = self.class.parse(url)
      return unless origin == url.origin
    
            css('.file').each do |node|
          node.content = node.content.strip
        end
    
            css('h1:not(:first-child)').each do |node|
          node.name = 'h2'
        end unless at_css('h2')
    
            # Remove root-level <div>
        while div = at_css('h1 + div')
          div.before(div.children)
          div.remove
        end
    
      puts '* [Sinatra](#sinatra)'
  title = Regexp.new('(?<=\* )(.*)') # so Ruby 1.8 doesn't complain
  File.binread(a.readme).scan(/^##.*/) do |line|
    puts line.gsub(/#(?=#)/, '    ').gsub('#', '*').gsub(title) { '[#{$1}](##{link($1)})' }
  end
end