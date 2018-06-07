
        
        #
    
    # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
      matter = matter.join.chomp
  content = \
    if !input_hash['input'] || !input_hash['filter']
      then input_hash['content']
    else '{{ #{input_hash['input']} | ' \
        '#{input_hash['filter']} }}'
    end
    
        # Gets/Sets the extension of this layout.
    attr_accessor :ext
    
      # body
  xml.tag!('body') do
    xml.tag!('outline', text: TITLE, title: TITLE) do
      blogs.each do |blog|
        xml.tag!('outline', type: 'rss', text: blog.name, title: blog.name,
                            xmlUrl: blog.rss_url, htmlUrl: blog.web_url)
      end
    end
  end
end