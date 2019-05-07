
        
            def resource_params
      params.require(:user).permit(
        :unconfirmed_email
      )
    end
  end
end

    
    module Admin
  class ReportNotesController < BaseController
    before_action :set_report_note, only: [:destroy]
    
      def account_feed_path?
    hub_topic_params[:controller] == 'accounts' && hub_topic_params[:action] == 'show' && hub_topic_params[:format] == 'atom'
  end
end

    
      def show
    if subscription.valid?(params['hub.topic'])
      @account.update(subscription_expires_at: future_expires)
      render plain: encoded_challenge, status: 200
    else
      head 404
    end
  end
    
      def set_session_activity
    return unless session_needs_update?
    current_session.touch
  end
    
    module UserTrackingConcern
  extend ActiveSupport::Concern
    
      # add junk self referring directories (aka  /././././)
  attr_accessor :junk_self_referring_directories
    
      #
  # Dispatches the supplied request for a given connection.
  #
  def dispatch_request(cli, request)
    # Is the client requesting keep-alive?
    if ((request['Connection']) and
       (request['Connection'].downcase == 'Keep-Alive'.downcase))
      cli.keepalive = true
    end
    
    IAX_IE_CALLED_NUMBER  = 1
IAX_IE_CALLING_NUMBER = 2
IAX_IE_AUTH_METHODS   = 3
IAX_IE_CALLING_NAME   = 4
IAX_IE_USERNAME       = 6
IAX_IE_DESIRED_CODEC  = 9
IAX_IE_ORIGINAL_DID   = 10
IAX_IE_ACTUAL_CODECS  = 8
IAX_IE_PROTO_VERSION  = 11
IAX_IE_REG_REFRESH    = 19
IAX_IE_CHALLENGE_DATA = 15
IAX_IE_CHALLENGE_RESP = 16
IAX_IE_APPARENT_ADDR  = 18
IAX_IE_REGREJ_CAUSE   = 22
IAX_IE_HANGUP_CAUSE   = 42
    
    module Rex
  module Proto
    module Kerberos
      # This class is a representation of a kerberos client.
      class Client
        # @!attribute host
        #   @return [String] The kerberos server host
        attr_accessor :host
        # @!attribute port
        #   @return [Integer] The kerberos server port
        attr_accessor :port
        # @!attribute timeout
        #   @return [Integer] The connect / read timeout
        attr_accessor :timeout
        # @todo Support UDP
        # @!attribute protocol
        #   @return [String] The transport protocol used (tcp/udp)
        attr_accessor :protocol
        # @!attribute connection
        #   @return [IO] The connection established through Rex sockets
        attr_accessor :connection
        # @!attribute context
        #   @return [Hash] The Msf context where the connection belongs to
        attr_accessor :context
    
                decode_asn1(asn1)
          end
    
        private
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
        %w[iOS macOS].each do |platform|
        abstract_target '#{platform} Pods' do
            project '#{platform} Modules.xcodeproj'
    
    module Jekyll
    
          super
    end
    
      # Checks for excerpts (helpful for template conditionals)
  def has_excerpt(input)
    input =~ /<!--\s*more\s*-->/i ? true : false
  end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end