
        
        module ActionCable
  module Server
    # An instance of this configuration object is available via ActionCable.server.config, which allows you to tweak Action Cable configuration
    # in a Rails config initializer.
    class Configuration
      attr_accessor :logger, :log_tags
      attr_accessor :connection_class, :worker_pool_size
      attr_accessor :disable_request_forgery_protection, :allowed_request_origins, :allow_same_origin_as_host
      attr_accessor :cable, :url, :mount_path
    
      test 'overriding has_many_attached methods works' do
    # attach blobs before messing with getter, which breaks `#attach`
    @user.highlights.attach create_blob(filename: 'funky.jpg'), create_blob(filename: 'wonky.jpg')
    
          def initialize(name, temporary = false, options = nil, as = nil, comment: nil)
        @columns_hash = {}
        @indexes = []
        @foreign_keys = []
        @primary_keys = nil
        @temporary = temporary
        @options = options
        @as = as
        @name = name
        @comment = comment
      end
    
        assert_match(/dang it.\nExpected increment/, error.message)
  end
    
        app_file 'config/routes.rb', <<-RUBY
      Rails.application.routes.draw do
        resources :customers, only: :index
      end
    RUBY
    
      test 'on subscribe callbacks' do
    @channel.subscribe_to_channel
    assert @channel.subscribed
  end
    
    class ActionCable::Channel::BroadcastingTest < ActionCable::TestCase
  class ChatChannel < ActionCable::Channel::Base
  end
    
        def send_message(message)
      @ws.send(JSON.generate(message))
    end
    
      test 'rack response' do
    run_in_eventmachine do
      connection = open_connection
      response = connection.process
    
        def connect
      @connected = true
    end
    
        # Produce a sanitized label name
    # Label names may not contain anything but alphanumeric characters,
    #   underscores, and hyphens.
    #
    # label - the possibly-unsafe label
    #
    # Returns a sanitized version of the label.
    def sanitize_label(label)
      label.gsub(%r![^a-z0-9_\-\.]!i, '')
    end
    
        def check_auto(config)
      if config.key?('auto') || config.key?('watch')
        Jekyll::Deprecator.deprecation_message 'Auto-regeneration can no longer' \
                            ' be set from your configuration file(s). Use the' \
                            ' --[no-]watch/-w command-line option instead.'
        config.delete('auto')
        config.delete('watch')
      end
    end
    
          # Rubocop does not allow reader methods to have names starting with `get_`
      # To ensure compatibility, this check has been disabled on this method
      #
      # rubocop:disable Naming/AccessorMethodName
      def get_processor
        case @config['markdown'].downcase
        when 'kramdown' then KramdownParser.new(@config)
        else
          custom_processor
        end
      end
      # rubocop:enable Naming/AccessorMethodName
    
          def initialize(config)
        Jekyll::External.require_with_graceful_fail 'kramdown' unless defined?(Kramdown)
        @config = config['kramdown'].dup || {}
        @config[:input] = :SmartyPants
      end
    
        # Returns whether `string` is a valid IP address or IP address range.
    #
    # @return [true] if valid IP address or IP address range.
    # @return [false] otherwise.
    def valid_ip_or_range?(string)
      range = Rex::Socket::RangeWalker.new(string)
      range && range.ranges && range.ranges.any?
    end
    
          if(inp.attributes[ikey] =~ /^http/i)
        inp[ikey] = ''
        next
      end
    
      def register_sigs
    self.sigs = {
      :banner		=> /^(220\s*[^\r\n]+)/i,
      :user		=> /^USER\s+([^\s]+)/i,
      :pass		=> /^PASS\s+([^\s]+)/i,
      :login_pass => /^(230\s*[^\n]+)/i,
      :login_fail => /^(5\d\d\s*[^\n]+)/i,
      :bye      => /^221/
    }
  end
    
          # There is only one pattern per run to test
      matched = nil
      matches = nil
    
    	def block_end
		# Insert the block size
		self.block[-1][0] = block[-1][0].ljust(SIZE1)
		self.block[-1][0] << '/*  '
		self.block[-1][0] << '#{block_size} bytes'
		self.block[-1][0] = block[-1][0].ljust(SIZE2)
		self.block[-1][0] << '  */'
    
        @inner.log_level = log_level
    Sass.logger = @inner
  end
    
        # @see Node#deep_copy
    def deep_copy
      node = dup
      node.instance_variable_set('@before', @before.deep_copy) if @before
      node.instance_variable_set('@mid', @mid.deep_copy)
      node.instance_variable_set('@after', @after.deep_copy) if @after
      node
    end
    
            # Checks if a template URL is given else returns the TEMPLATE_REPO URL
        #
        # @return String
        #
        def template_repo_url
          @template_url || TEMPLATE_REPO
        end
      end
    end
  end
end

    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
      it 'denies requests with a changing Accept-Language header' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'b'
    expect(session).to be_empty
  end