
        
            if version.present?
      doc = doc.versions.find { |klass| klass.version == version || klass.version_slug == version }
      raise DocNotFound.new(%(could not find version '#{version}' for doc '#{name}'), name) unless doc
    elsif version != false
      doc = doc.versions.first
    end
    
        def initialize(filters = nil)
      @filters = filters ? filters.dup : []
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
            def with_internal_urls
          @internal_urls = new.fetch_internal_urls
          yield
        ensure
          @internal_urls = nil
        end
      end
    
            css('img[src]').each do |node|
          node['src'] = node['src'].gsub(%r{angularjs\.org/([\d\.]+)/docs/partials/(\w+)/}, 'angularjs.org/\1/docs/\2/')
        end
    
        # /%3faaa=bbbbb
    # which could possibly decode to '/?aaa=bbbbb', which if the IDS normalizes first, then splits the URI on ?, then it can be bypassed
    if self.junk_param_start
      str.sub!(/\//, '/%3f' + Rex::Text.rand_text_alpha(rand(5) + 1) + '=' + Rex::Text.rand_text_alpha(rand(10) + 1) + '/../')
    end
    
    
end
end
end

    
      def self.verify_rakp_hmac_sha1(salt, hash, password)
    OpenSSL::HMAC.digest('sha1', password, salt) == hash
  end
    
            # Sends a kerberos request, and reads the response through the connection
        #
        # @param req [Rex::Proto::Kerberos::Model::KdcRequest] the request to send
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] The kerberos message
        # @raise [RuntimeError] if the transport protocol is unknown or the response can't be parsed.
        # @raise [NotImplementedError] if the transport protocol isn't supported
        def send_recv(req)
          send_request(req)
          res = recv_response
    
              # Encodes the realm field
          #
          # @return [String]
          def encode_realm
            encoded = ''
            encoded << [realm.length].pack('N')
            encoded << realm
    
              # Encodes the auth_time field
          #
          # @return [String]
          def encode_auth_time
            [auth_time].pack('N')
          end
    
              # Encodes the type
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type(type)
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
    class Rack::Builder
  include Sinatra::Delegator
end

    
          private
    
          it 'detects closing brace on same line as last multiline element' do
        src = construct(false, a, make_multi(multi), false)
        inspect_source(src)
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end
    
          # Checks whether the `if` node has an `else` clause.
      #
      # @note This returns `true` for nodes containing an `elsif` clause.
      #       This is legacy behavior, and many cops rely on it.
      #
      # @return [Boolean] whether the node has an `else` clause
      def else?
        loc.respond_to?(:else) && loc.else
      end