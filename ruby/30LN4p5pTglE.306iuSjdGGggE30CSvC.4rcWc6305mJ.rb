
        
        def envygeeks(url)
  return url if url.end_with?(FORWARD_SLASH) || url == FORWARD_SLASH
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
          private
    
        # Require all .rb files if safe mode is off
    #
    # Returns nothing.
    def require_plugin_files
      unless site.safe
        plugins_path.each do |plugin_search_path|
          plugin_files = Utils.safe_glob(plugin_search_path, File.join('**', '*.rb'))
          Jekyll::External.require_with_graceful_fail(plugin_files)
        end
      end
    end
    
      class CachedFragment
    def initialize(json)
      @json = json
    end
    def as_json(*_args)
      @json
    end
  end
    
      def test_keys
    assert_equal([], @cls[].keys)
    
      end
    
    #
# Railties
#
    
          when :bye
        sessions.delete(s[:session])
    
          if(pkt.payload =~ self.sigs[k])
        matched = k
        matches = $1
      end
    
    
    {	if ln =~ /;(read|write)_(handle|filename)=/
		parts = ln.split(' ')
		if (parts[0] == 'mov')
			parts2 = parts[2].split('=')
			label = parts2[0]
			label.slice!(0,1)
			old = parts2[1]
			new = addrs[label]
			#puts '%32s: %s -> %x' % [label, old, new]
			replaces << [label, old, new.to_s(16)]
		end
	end
}
    
    class Source < Template
  attr_accessor :__CAL
  attr_accessor :__NR_execve
  attr_accessor :__NR_getpeername
  attr_accessor :__NR_accept
  attr_accessor :__NR_listen
  attr_accessor :__NR_bind
  attr_accessor :__NR_socket
  attr_accessor :__NR_connect
  attr_accessor :__NR_close
  attr_accessor :__NR_kfcntl
  attr_accessor :__cal
  attr_accessor :_cal
  attr_accessor :cal
  attr_accessor :ver
    
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
    
      class ImageTag < Liquid::Tag
    @img = nil
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end