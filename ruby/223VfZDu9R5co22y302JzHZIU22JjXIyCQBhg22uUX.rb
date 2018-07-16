
        
          def test_javascript_tag_with_options
    assert_dom_equal '<script id=\'the_js_tag\'>\n//<![CDATA[\nalert('hello')\n//]]>\n</script>',
      javascript_tag('alert('hello')', id: 'the_js_tag')
  end
    
    module ActionCable
  module Server
    # An instance of this configuration object is available via ActionCable.server.config, which allows you to tweak Action Cable configuration
    # in a Rails config initializer.
    class Configuration
      attr_accessor :logger, :log_tags
      attr_accessor :connection_class, :worker_pool_size
      attr_accessor :disable_request_forgery_protection, :allowed_request_origins, :allow_same_origin_as_host
      attr_accessor :cable, :url, :mount_path
    
          def deserialize(value)
        if default_value?(value)
          value
        else
          coder.load(super)
        end
      end
    
      def test_serialized_boolean_value_false
    topic = Topic.new(content: false)
    assert topic.save
    topic = topic.reload
    assert_equal false, topic.content
  end
    
        def test_eager_load_values
      relation = Relation.new(FakeKlass)
      relation.eager_load! :b
      assert_predicate relation, :eager_loading?
    end
    
        def topic
    end
  end
    
        # Block arg
    periodically every: 3 do
      ping
    end
    
          env = Rack::MockRequest.env_for '/test', 'HTTP_CONNECTION' => 'upgrade', 'HTTP_UPGRADE' => 'websocket',
        'HTTP_HOST' => 'localhost', 'HTTP_ORIGIN' => 'http://rubyonrails.com'
    
      test 'connection identifier' do
    run_in_eventmachine do
      open_connection
      assert_equal 'User#lifo', @connection.connection_identifier
    end
  end
    
          assert_equal 1, events.length
      assert_equal 'broadcast.action_cable', events[0].name
      assert_equal broadcasting, events[0].payload[:broadcasting]
      assert_equal message, events[0].payload[:message]
      assert_equal ActiveSupport::JSON, events[0].payload[:coder]
    ensure
      ActiveSupport::Notifications.unsubscribe 'broadcast.action_cable'
    end
  end
end

    
    def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
        # Get rid of any info 'dir' files, so they don't conflict at the link stage
    info_dir_file = @f.info + 'dir'
    if info_dir_file.file? && !@f.skip_clean?(info_dir_file)
      observe_file_removal info_dir_file
    end
    
    module Homebrew
  module_function
    
      return unless check_content
    
              # Check pypi urls
          @pypi_pattern = %r{^https?://pypi.python.org/(.*)}
          audit_urls(urls, @pypi_pattern) do |match, url|
            problem '#{url} should be `https://files.pythonhosted.org/#{match[1]}`'
          end
        end
    
          # Get the cache key pair for the given Sass URI.
      # The URI need not be checked for validity.
      #
      # The only strict requirement is that the returned pair of strings
      # uniquely identify the file at the given URI.
      # However, the first component generally corresponds roughly to the directory,
      # and the second to the basename, of the URI.
      #
      # Note that keys must be unique *across importers*.
      # Thus it's probably a good idea to include the importer name
      # at the beginning of the first component.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [(String, String)] The key pair which uniquely identifies
      #   the file at the given URI.
      def key(uri, options)
        Sass::Util.abstract(self)
      end
    
        def parse_input(environment, text)
      case text
      when Script::MATCH
        name = $1
        guarded = !!$3
        val = Script::Parser.parse($2, @line, text.size - ($3 || '').size - $2.size)
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end