      # Keep a list of subclasses of Jekyll::Command every time it's inherited
      # Called automatically.
      #
      # base - the subclass
      #
      # Returns nothing
      def inherited(base)
        subclasses << base
        super(base)
      end
    
              Jekyll::Hooks.register(:site, :post_render) do |site|
            regenerator = Jekyll::Regenerator.new(site)
            @changed_pages = site.pages.select do |p|
              regenerator.regenerate?(p)
            end
          end
    
            private
    
            def self.skip_processing?(request, response, options)
          new(request, response, options).skip_processing?
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
    
          options[:only_patterns] = [/\Agetting-started\//, /\Alayout\//, /\Acontent\//, /\Acomponents\//, /\Autilities\//, /\Amigration\//]
    end
    
          options[:container] = '.container'
    end
  end
end

    
        version '1.4' do
      self.release = '1.4.5'
      self.base_urls = [
        'https://hexdocs.pm/elixir/#{release}/',
        'https://hexdocs.pm/eex/#{release}/',
        'https://hexdocs.pm/ex_unit/#{release}/',
        'https://hexdocs.pm/iex/#{release}/',
        'https://hexdocs.pm/logger/#{release}/',
        'https://hexdocs.pm/mix/#{release}/',
        'https://elixir-lang.org/getting-started/'
      ]
    end
    
        def sort_fn(a, b)
      if (a.getbyte(0) >= 49 && a.getbyte(0) <= 57) || (b.getbyte(0) >= 49 && b.getbyte(0) <= 57)
        a_split = a.split(SPLIT_INTS)
        b_split = b.split(SPLIT_INTS)
    
        def add(path, content)
      @pages[path] = content
    end
    
        def subpath_to(url, options = nil)
      url = self.class.parse(url)
      return unless origin == url.origin
    
    output = File.new(OUTPUT_FILENAME, 'wb')
output.write(xml.target!)
output.close
    
        it 'contains the OpenID issuer' do
      wf = DiasporaFederation.callbacks.trigger(:fetch_person_for_webfinger, alice.diaspora_handle)
      links = wf.additional_data[:links]
      openid_issuer = links.find {|l| l[:rel] == OpenIDConnect::Discovery::Provider::Issuer::REL_VALUE }
      expect(openid_issuer).not_to be_nil
      expect(openid_issuer[:href]).to eq(Rails.application.routes.url_helpers.root_url)
    end