
        
              # This method returns an HTML safe string similar to what <tt>Array#join</tt>
      # would return. The array is flattened, and all items, including
      # the supplied separator, are HTML escaped unless they are HTML
      # safe, and the returned string is marked as HTML safe.
      #
      #   safe_join([raw('<p>foo</p>'), '<p>bar</p>'], '<br />')
      #   # => '<p>foo</p>&lt;br /&gt;&lt;p&gt;bar&lt;/p&gt;'
      #
      #   safe_join([raw('<p>foo</p>'), raw('<p>bar</p>')], raw('<br />'))
      #   # => '<p>foo</p><br /><p>bar</p>'
      #
      def safe_join(array, sep = $,)
        sep = ERB::Util.unwrapped_html_escape(sep)
    
              def render_collection_for(builder_class, &block)
            options = @options.stringify_keys
            rendered_collection = render_collection do |item, value, text, default_html_options|
              builder = instantiate_builder(builder_class, item, value, text, default_html_options)
    
            def initialize(object_name, method_name, template_object, content_or_options = nil, options = nil)
          options ||= {}
    
        %w(<< concat push insert unshift).each do |method|
      class_eval <<-METHOD, __FILE__, __LINE__ + 1
        def #{method}(*args)
          paths.#{method}(*typecast(args))
        end
      METHOD
    end
    
        # Render but returns a valid Rack body. If fibers are defined, we return
    # a streaming body that renders the template piece by piece.
    #
    # Note that partials are not supported to be rendered with streaming,
    # so in such cases, we just wrap them in an array.
    def render_body(context, options)
      if options.key?(:partial)
        [render_partial(context, options)]
      else
        StreamingTemplateRenderer.new(@lookup_context).render(context, options)
      end
    end
    
        def ==(other)
      other.name == name && other.path == path && other.type == type
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
        def pipeline_context(response)
      options.merge url: response.url
    end
    
            css('.toplang', '#quickview', '.top').remove
    
    # skip over blogs that aren't found
unavailable = []
fast_forwards = [
  'Baidu Research',
  'Booking.com',
  'Fynd',
  'Graphcool',
  'LinkedIn',
  'Medallia',
  'OmniTI',
  'Paperless Post',
  'Pluralsight',
  'Prolific Interactive',
  'Quora',
  'Robert Elder Software',
  'Simple',
  'SlideShare',
  'SourceClear',
  'Viget',
  'Zalando',
  'Zapier',
  'Zynga',
  'Dave Beazley',
  'Edan Kwan',
  'Grzegorz Gajos',
  'Joe Armstrong',
  'Kai Hendry',
  'LiveOverflow'
]
    
      private
    
      parameter '[PLUGIN] ...', 'Plugin name(s) to upgrade to latest version', :attribute_name => :plugins_arg
  option '--[no-]verify', :flag, 'verify plugin validity before installation', :default => true
  option '--local', :flag, 'force local-only plugin update. see bin/logstash-plugin package|unpack', :default => false