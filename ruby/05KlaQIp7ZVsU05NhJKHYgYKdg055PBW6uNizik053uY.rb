def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
        version 'HashLink' do
      self.base_url = 'https://api.haxe.org/hl/'
    end
    
        html_filters.push 'rust/entries', 'rust/clean_html'
    
        def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end