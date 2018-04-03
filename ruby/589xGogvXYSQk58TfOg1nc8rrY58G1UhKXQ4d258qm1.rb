
        
        class Ray
  def initialize(org, dir)
    @org = org
    @dir = dir
  end
    
    def pboard
  print 'No. #$no\n'
  for i in 0...COL
    print '|'
    for j in 0...ROW-NP
      x = $b[i*ROW+j]
      if x < 0
        print '..|'
      else
        printf '%2d|',x+1
      end
    end
    print '\n'
  end
  print '\n'
end
    
    all_environments = [
    :development,
    :production,
    :test
]
    
      fd.close
    
        end # end of each_key
  end # end of parse
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
    
    if (ip == nil || port == nil)
  puts 'Syntax: test.rb <ip> [port]\n'
  exit
end
    
      def get_result
    @src.get_result
  end
end
    
    module Jekyll
  class GistTag < Liquid::Tag
    def initialize(tag_name, text, token)
      super
      @text           = text
      @cache_disabled = false
      @cache_folder   = File.expand_path '../.gist-cache', File.dirname(__FILE__)
      FileUtils.mkdir_p @cache_folder
    end
    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''
    
              def logstash_plugin_gem_spec?(spec)
            spec.metadata && spec.metadata['logstash_plugin'] == 'true'
          end
    
      public
  # DEPRECATED: Prefer defining encode_sync or multi_encode
  def encode(event)
    encoded = multi_encode([event])
    encoded.each {|event,data| @on_event.call(event,data) }
  end # def encode