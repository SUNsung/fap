
        
          # Setting the :extname option will control what extension (if any) is appended to the url for assets
  def test_javascript_include_tag
    assert_dom_equal '<script src='/foo.js'></script>',  javascript_include_tag('/foo')
    assert_dom_equal '<script src='/foo'></script>',     javascript_include_tag('/foo', extname: false)
    assert_dom_equal '<script src='/foo.bar'></script>', javascript_include_tag('/foo', extname: '.bar')
  end
    
            adapter = adapter.camelize
        adapter = 'PostgreSQL' if adapter == 'Postgresql'
        'ActionCable::SubscriptionAdapter::#{adapter}'.constantize
      end
    end
  end
end

    
    module Web
  class Topic < ActiveRecord::Base
    has_many :replies, dependent: :destroy, foreign_key: 'parent_id', class_name: 'Web::Reply'
  end
end

    
      test 'disallow negative and zero periods' do
    [ 0, 0.0, 0.seconds, -1, -1.seconds, 'foo', :foo, Object.new ].each do |invalid|
      e = assert_raise ArgumentError do
        ChatChannel.periodically :send_updates, every: invalid
      end
      assert_match(/Expected every:/, e.message)
    end
  end
    
      test '#restart shuts down worker pool' do
    assert_called(@server.worker_pool, :halt) do
      @server.restart
    end
  end
    
          def execute
        options = {}
        options[:check] = false
    
        def log_status(status)
      puts bold status
    end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
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
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
          unless file.file?
        return 'File #{file} could not be found'
      end