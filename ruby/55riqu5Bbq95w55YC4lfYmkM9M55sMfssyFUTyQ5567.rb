
        
            # Extract options for this collection from the site configuration.
    #
    # Returns the metadata for this collection
    def extract_metadata
      if site.config['collections'].is_a?(Hash)
        site.config['collections'][label] || {}
      else
        {}
      end
    end
    
              options = configuration_from_options(options)
          site = Jekyll::Site.new(options)
    
            def preserve_source_location?(path, options)
          !options['force'] && !Dir['#{path}/**/*'].empty?
        end
    
    module Jekyll
  module Converters
    class Markdown < Converter
      highlighter_prefix '\n'
      highlighter_suffix '\n'
      safe true
    
          Jekyll.logger.debug 'Post-Render Hooks:', relative_path
      Jekyll::Hooks.trigger hook_owner, :post_render, self
    ensure
      @_renderer = nil # this will allow the modifications above to disappear
    end
    
          # `{{ site.related_posts }}` is how posts can get posts related to
      # them, either through LSI if it's enabled, or through the most
      # recent posts.
      # We should remove this in 4.0 and switch to `{{ post.related_posts }}`.
      def related_posts
        return nil unless @current_document.is_a?(Jekyll::Document)
        @current_document.related_posts
      end
      attr_writer :current_document
    
        def types
      const_get(:TYPES).map(&:constantize)
    end
    
      module ClassMethods
    def setup_worker
      active.map do |agent|
        next unless agent.start_worker?
        self::Worker.new(id: agent.worker_id, agent: agent)
      end.compact
    end
  end
    
      def tumblr_oauth_token_secret
    service.secret
  end
    
          attr_accessor(*VALID_KEYS)
      attr_accessor :pairs
    
      def initialize(tags = [])
    @cask ||= self.class.cask
    @download ||= self.class.download
    tags.each do |tag|
      next unless tag.is_a? Hash
      @cask ||= tag[:cask]
      @download ||= tag[:download]
    end
    @tags = tags
    @tags << :build if self.class.build
    @name ||= infer_name
  end
    
      it 'should not override the header if already set' do
    mock_app with_headers('X-Frame-Options' => 'allow')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('allow')
  end
end

    
      it 'should allow changing the protection mode' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::XSSHeader, :xss_mode => :foo
      run DummyApp
    end
    
      it 'should not interfere with normal head requests' do
    expect(head('/')).to be_ok
  end