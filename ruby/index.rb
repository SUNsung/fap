
        
              topic = Topic.find_by(id: topic_id)
    
    end

    
      # any user that is either a moderator or an admin
  def staff?
    admin || moderator
  end
    
    html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
        def process_response?(response)
      response.body.present?
    end