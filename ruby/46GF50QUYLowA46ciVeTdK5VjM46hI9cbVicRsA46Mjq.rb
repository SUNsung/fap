
        
              xcode_outdated = false
      begin
        unless FastlaneCore::Helper.xcode_at_least?(Fastlane::MINIMUM_XCODE_RELEASE)
          xcode_outdated = true
        end
      rescue
        # We don't care about exceptions here
        # We'll land here if the user doesn't have Xcode at all for example
        # which is fine for someone who uses fastlane just for Android project
        # What we *do* care about is when someone links an old version of Xcode
      end
    
          context 'as array' do
        let(:path) { ['myfile.txt', 'yourfile.txt'] }
    
          it 'generates the correct git command with an array of paths' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: ['./fastlane/README.md', './LICENSE'], message: 'message')
        end').runner.execute(:test)
    
            it 'auto converts Array values to Strings if allowed' do
          config_item = FastlaneCore::ConfigItem.new(key: :xcargs,
                                                     description: 'xcargs',
                                                     type: :shell_string)
    
        def initialize
      @entries = []
      @index = Set.new
      @types = Hash.new { |hash, key| hash[key] = Type.new key }
    end
    
        def parse_html(html)
      warn '#{self.class.name} is re-parsing the document' unless ENV['RACK_ENV'] == 'test'
      super
    end
    
        def initialize(name = nil, path = nil, type = nil)
      self.name = name
      self.path = path
      self.type = type
    
    module Docs
  class PageDb
    attr_reader :pages
    
          def include_default_entry?
        INDEX.add?([name, type].join(';')) ? true : false # ¯\_(ツ)_/¯
      end
    
      #
  # Split the URI into the resource being requested and its query string.
  #
  def update_uri_parts
    # If it has a query string, get the parts.
    if ((self.raw_uri) and (md = self.raw_uri.match(/(.+?)\?(.*)$/)))
      self.uri_parts['QueryString'] = parse_cgi_qstring(md[2])
      self.uri_parts['Resource']    = md[1]
    # Otherwise, just assume that the URI is equal to the resource being
    # requested.
    else
      self.uri_parts['QueryString'] = {}
      self.uri_parts['Resource']    = self.raw_uri
    end
    
      #
  # Dispatches the supplied request for a given connection.
  #
  def dispatch_request(cli, request)
    # Is the client requesting keep-alive?
    if ((request['Connection']) and
       (request['Connection'].downcase == 'Keep-Alive'.downcase))
      cli.keepalive = true
    end
    
              # Encodes the type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes a Rex::Proto::Kerberos::Model::EncKdcResponse from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
              # Encodes the enc_auth_data
          #
          # @return [String]
          def encode_enc_auth_data
            enc_auth_data.encode
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcResponse from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
    World(RemoteCommandHelpers)

    
        def run
      Rake.application = self
      super
    end
    
        extend Forwardable
    attr_reader :variables
    def_delegators :variables,
                   :set, :fetch, :fetch_for, :delete, :keys, :validate
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
          # Custom destructuring method. This can be used to normalize
      # destructuring for different variations of the node.
      #
      # In this case, the `def` node destructures into:
      #
      #   `method_name, arguments, body`
      #
      # while the `defs` node destructures into:
      #
      #   `receiver, method_name, arguments, body`
      #
      # so we reverse the destructured array to get the optional receiver
      # at the end, where it can be discarded.
      #
      # @return [Array] the different parts of the `def` or `defs` node
      def node_parts
        to_a.reverse
      end
    end
  end
end

    
          # Whether the last argument of the node is a block pass,
      # i.e. `&block`.
      #
      # @return [Boolean] whether the last argument of the node is a block pass
      def block_argument?
        arguments? &&
          (last_argument.block_pass_type? || last_argument.blockarg_type?)
      end
    end
  end
end

    
    $redis = Redis.new
    
        # Creating the Redis#brpop command takes into account any
    # configured queue weights. By default Redis#brpop returns
    # data from the first queue that has pending elements. We
    # recreate the queue command each time we invoke Redis#brpop
    # to honor weights and avoid queue starvation.
    def queues_cmd
      if @strictly_ordered_queues
        @queues
      else
        queues = @queues.shuffle.uniq
        queues << TIMEOUT
        queues
      end
    end