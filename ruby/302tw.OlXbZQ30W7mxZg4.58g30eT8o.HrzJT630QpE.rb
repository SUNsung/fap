
        
        module ModuleTest
  class ModuleRedirectController < ::RedirectController
    def module_redirect
      redirect_to controller: '/redirect', action: 'hello_world'
    end
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
    
          private
    
          broadcasting = 'test_queue'
      message = { body: 'test message' }
      server.broadcast(broadcasting, message)
    
      def short_type
    @short_type ||= type.split('::').pop
  end
    
      MAIN_KEYS = %w[title message text main value]
    
        version '5' do
      self.release = '5.4.0'
      self.base_url = 'https://github.com/d3/'
      self.root_path = 'd3/blob/master/API.md'
    
        SPLIT_INTS = /(?<=\d)\.(?=[\s\d])/.freeze
    
        it 'returns nil when the post has no facebook_id' do
      expect(@service.post_opts(@post)).to be_nil
    end
  end
    
          def handle_start_point_response(endpoint)
        _status, header, response = endpoint.call(request.env)
        if response.redirect?
          redirect_to header['Location']
        else
          save_params_and_render_consent_form(endpoint)
        end
      end
    
    post '/' do
  connections.each { |out| out << 'data: #{params[:msg]}\n\n' }
  204 # response without entity body
end
    
      it 'should allow changing the protection mode' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => :deny
      run DummyApp
    end
    
            def argument_positions(arguments)
          optarg_positions = []
          arg_positions = []
    
            # @param lines [Array<String>]
        # @param annotations [Array<(Integer, String)>]
        #   each entry is the annotated line number and the annotation text
        #
        # @note annotations are sorted so that reconstructing the annotation
        #   text via {#to_s} is deterministic
        def initialize(lines, annotations)
          @lines       = lines.freeze
          @annotations = annotations.sort.freeze
        end
    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end