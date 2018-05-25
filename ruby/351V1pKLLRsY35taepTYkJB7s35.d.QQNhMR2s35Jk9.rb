
        
          def initialize(strip, &block)
    @strip    = strip
    @resource = Resource::PatchResource.new(&block)
  end
    
        if GitHub.api_credentials_type == :none
      puts <<~EOS
        You can create a new personal access token:
         #{GitHub::ALL_SCOPES_URL}
        and then set the new HOMEBREW_GITHUB_API_TOKEN as the authentication method.
    
    class RubyRequirement < Requirement
  fatal true
  satisfy do
    odisabled('RubyRequirement', ''depends_on \'ruby\''')
  end
end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
          # Create an Atom-feed for each index.
      feed = CategoryFeed.new(self, self.source, category_dir, category)
      feed.render(self.layouts, site_payload)
      feed.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << feed
    end
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file
    
      # Returns a url without the protocol (http://)
  def shorthand_url(input)
    input.gsub /(https?:\/\/)(\S+)/ do
      $2
    end
  end