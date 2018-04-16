
        
            def index
      self.response_body = 'index'
    end
    
        def wrap_delivery_behavior!(*args) # :nodoc:
      self.class.wrap_delivery_behavior(message, *args)
    end
  end
end

    
    module Rails
  def self.root
    File.expand_path('..', __dir__)
  end
end
    
    class MyCustomDelivery
end
    
            self.description = <<-DESC
          Remove the cache for a given pod, or clear the cache completely.
    
    run SinatraStaticServer

    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
        def handle_gist_redirecting(data)
      redirected_url = data.header['Location']
      if redirected_url.nil? || redirected_url.empty?
        raise ArgumentError, 'GitHub replied with a 302 but didn't provide a location in the response headers.'
      end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
    Liquid::Template.register_tag('include_code', Jekyll::IncludeCodeTag)

    
          expect('.border-width-implied-left').to have_rule(rule)
    end
  end
    
      context 'called with argument (2)' do
    it 'outputs the second value from the default scale' do
      expect('.two-base-one').to have_rule('font-size: 1.5625em')
    end
  end
    
          expect('.prefix--webkit').to have_ruleset(rule)
    end
  end