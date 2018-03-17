    def types_as_json
      @types.values.sort! { |a, b| sort_fn(a.name, b.name) }.map(&:as_json)
    end
    
            css('.class').each do |node|
          class_name = node.at_css('dt > .descname').content
          class_id = node.at_css('dt[id]')['id']
          entries << [class_name, class_id]