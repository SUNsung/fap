
        
        ###
#
# HTTP request class.
#
###
class Request < Packet
    
              # Encodes the pa_data field
          #
          # @return [String]
          def encode_pa_data
            elems = []
            pa_data.each do |data|
              elems << data.encode
            end
    
        if t > 0.0 and t < isect.t then
      isect.hit = true
      isect.t = t
      isect.n = @n
      isect.pl = Vec.new(ray.org.x + t * ray.dir.x,
                        ray.org.y + t * ray.dir.y,
                        ray.org.z + t * ray.dir.z)
    end
    nil
  end
end
    
    answer_ary = answer.to_a
# puts answer_ary

    
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
    
    Liquid::Template.register_tag('config_tag', ConfigTag)
    
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