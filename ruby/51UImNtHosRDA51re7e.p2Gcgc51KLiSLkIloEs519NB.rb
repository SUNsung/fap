
        
            def process_response?(response)
      !(response.body =~ REDIRECT_RGX || response.body =~ NOT_FOUND_RGX || response.body.blank?)
    end
  end
end

    
        version 'C++' do
      include MultipleBaseUrls
      self.base_urls = ['https://www.tensorflow.org/api_docs/cc/', 'https://www.tensorflow.org/api_guides/cc/']
    end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
      def self.socket
    require 'socket'
    name = tmp('ftype_socket.socket')
    rm_r name
    socket = UNIXServer.new name
    begin
      yield name
    ensure
      socket.close
      rm_r name
    end
  end
end

    
      it 'returns subclass instances when called on a subclass' do
    StringSpecs::MyString.new('').swapcase.should be_an_instance_of(StringSpecs::MyString)
    StringSpecs::MyString.new('hello').swapcase.should be_an_instance_of(StringSpecs::MyString)
  end
end
    
      ruby_version_is ''...'2.4' do
    it 'is locale insensitive (only replaces a-z)' do
      'äöü'.upcase.should == 'äöü'
    
    With optional '-t <bundle-id>', silently test if a given app
is running, exiting with an error code if not.
    
              # Check for Maven Central urls, prefer HTTPS redirector over specific host
          maven_pattern = %r{https?://(?:central|repo\d+)\.maven\.org/maven2/(.+)$}
          audit_urls(urls, maven_pattern) do |match, url|
            problem '#{url} should be `https://search.maven.org/remotecontent?filepath=#{match[1]}`'
          end
        end
      end