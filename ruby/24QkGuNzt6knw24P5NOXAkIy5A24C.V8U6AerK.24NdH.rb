
        
          def test_javascript_tag
    self.output_buffer = 'foo'
    
            def content_tag_string(name, content, options, escape = true)
          tag_options = tag_options(options, escape) if options
          content     = ERB::Util.unwrapped_html_escape(content) if escape
          '<#{name}#{tag_options}>#{PRE_CONTENT_STRINGS[name]}#{content}</#{name}>'.html_safe
        end
    
      test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
  end
    
          def index
        self.response_body = @list.join(', ')
      end
    
          assert_equal 'entry', @controller.response.body
      assert @controller.params.has_key?(:entry)
      assert_equal 'content...', @controller.params['entry']['summary']
    end
  end
    
          def handle_exception_with_mailer_class(exception)
        if klass = mailer_class
          klass.handle_exception exception
        else
          raise exception
        end
      end
  end
end

    
        # An email was received.
    def receive(event)
      info { 'Received mail (#{event.duration.round(1)}ms)' }
      debug { event.payload[:mail] }
    end
    
          check_class_collision suffix: 'Mailer'
    
    def source_dir(*subdirs)
  test_dir('source', *subdirs)
end
    
          #
      # Require a gem or file if it's present, otherwise silently fail.
      #
      # names - a string gem name or array of gem names
      #
      def require_if_present(names)
        Array(names).each do |name|
          begin
            require name
          rescue LoadError
            Jekyll.logger.debug 'Couldn't load #{name}. Skipping.'
            yield(name, version_constraint(name)) if block_given?
            false
          end
        end
      end
    
        # Initialize a new Layout.
    #
    # site - The Site.
    # base - The String path to the source.
    # name - The String filename of the post file.
    def initialize(site, base, name)
      @site = site
      @base = base
      @name = name
    
          it 'get GIT-SVN build number' do
        result = Fastlane::FastFile.new.parse('lane :test do
            get_build_number_repository
        end').runner.execute(:test)
    
      def pod_prefix
    File.expand_path('../..', pod_bin)
  end
    
            def validate!
          super
          if @pod_name.nil? && !@wipe_all
            # Security measure, to avoid removing the pod cache too agressively by mistake
            help! 'You should either specify a pod name or use the --all flag'
          end
        end
    
            def self.options
          [[
            '--short', 'Only print the path relative to the cache root'
          ]].concat(super)
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
    
        def get_cached_gist(gist, file)
      return nil if @cache_disabled
      cache_file = get_cache_file_for gist, file
      File.read cache_file if File.exist? cache_file
    end
    
    Liquid::Template.register_tag('include_code', Jekyll::IncludeCodeTag)

    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end