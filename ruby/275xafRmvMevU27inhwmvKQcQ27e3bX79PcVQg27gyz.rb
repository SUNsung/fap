
        
            def valid_type?(type)
      const_get(:TYPES).include?(type)
    end
    
        def form_configurable_attributes
      form_configurable_fields.keys
    end
  end
end

    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
        def post_render(post)
      OctopressFilters::post_filter(post)
    end
  end
end
    
    module Jekyll
    
            private
    
          # Only print require() calls that did actual work.
      # require() returns true on load, false if already loaded.
      if result
        source = caller[0]
        #p source.include?('/lib/polyglot.rb:63:in `require'') => source
        if source.include?('/lib/polyglot.rb:63:in `require'')
          source = caller[1]
        end
    
      def download(url, output)
    uri = URI(url)
    digest = Digest::SHA1.new
    tmp = '#{output}.tmp'
    Net::HTTP.start(uri.host, uri.port, :use_ssl => (uri.scheme == 'https')) do |http|
      request = Net::HTTP::Get.new(uri.path)
      http.request(request) do |response|
        fail 'HTTP fetch failed for #{url}. #{response}' if [200, 301].include?(response.code)
        size = (response['content-length'].to_i || -1).to_f
        count = 0
        File.open(tmp, 'w') do |fd|
          response.read_body do |chunk|
            fd.write(chunk)
            digest << chunk
            if size > 0 && $stdout.tty?
              count += chunk.bytesize
              $stdout.write(sprintf('\r%0.2f%%', count/size * 100))
            end
          end
        end
        $stdout.write('\r      \r') if $stdout.tty?
      end
    end