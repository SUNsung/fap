
        
                include ::EachBatch
      end
    
            def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
          # Reads a cache key.
      #
      # If the key exists and has a non-empty value its TTL is refreshed
      # automatically.
      #
      # raw_key - The cache key to read.
      # timeout - The new timeout of the key if the key is to be refreshed.
      def self.read(raw_key, timeout: TIMEOUT)
        key = cache_key_for(raw_key)
        value = Redis::Cache.with { |redis| redis.get(key) }
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
        def type=(value)
      @type = value.try :strip
    end
    
        delegate :empty?, :blank?, to: :pages
    
        def url
      @url ||= URL.parse request.base_url
    end
    
        self.initial_paths = []
    self.options = {}
    self.stubs = {}
    
          def fetch_redirections
        result = {}
        with_filters 'apply_base_url', 'container', 'normalize_urls', 'internal_urls' do
          build_pages do |page|
            next if page[:response_effective_path] == page[:response_path]
            result[page[:response_path].downcase] = page[:response_effective_path]
          end
        end
        result
      end
    
            css('.filetree').each do |node|
          node.content = node.css('.file').map(&:inner_html).join('\n')
          node.name = 'pre'
          node.remove_attribute('class')
        end