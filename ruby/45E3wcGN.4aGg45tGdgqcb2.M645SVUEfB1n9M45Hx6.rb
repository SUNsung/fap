
        
            Sprockets::Helpers.configure do |config|
      config.digest = true
      config.asset_host = 'cdn.devdocs.io'
      config.manifest = Sprockets::Manifest.new(sprockets, assets_manifest_path)
    end
  end
    
        def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
          def process_response(response)
        original_scheme = self.base_url.scheme
        original_host = self.base_url.host
        original_path = self.base_url.path
    
            css('header').each do |node|
          node.before(node.children).remove
        end
    
      #
  # Processes data coming in from a client.
  #
  def on_client_data(cli)
    begin
      data = cli.read(65535)
    
      #
  # Payload types were identified from xCAT-server source code (IPMI.pm)
  #
  PAYLOAD_IPMI = 0
  PAYLOAD_SOL  = 1
  PAYLOAD_RMCPPLUSOPEN_REQ = 0x10
  PAYLOAD_RMCPPLUSOPEN_REP = 0x11
  PAYLOAD_RAKP1 = 0x12
  PAYLOAD_RAKP2 = 0x13
  PAYLOAD_RAKP3 = 0x14
  PAYLOAD_RAKP4 = 0x15
    
    
  # open rmcpplus_request with cipherzero
  def self.create_ipmi_session_open_cipher_zero_request(console_session_id)
    head = [
      0x06, 0x00, 0xff, 0x07,   # RMCP Header
      0x06,                     # RMCP+ Authentication Type
      PAYLOAD_RMCPPLUSOPEN_REQ, # Payload Type
      0x00, 0x00, 0x00, 0x00,   # Session ID
      0x00, 0x00, 0x00, 0x00    # Sequence Number
    ].pack('C*')
    
            # Receives a kerberos response through the connection
        #
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] the kerberos
        #   response message
        # @raise [RuntimeError] if the connection isn't established, the transport protocol is unknown, not supported
        #   or the response can't be parsed
        # @raise [NotImplementedError] if the transport protocol isn't supported
        def recv_response
          if connection.nil?
            raise ::RuntimeError, 'Kerberos Client: connection not established'
          end
    
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
    
              # Rex::Proto::Kerberos::Model::Checksum decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'Checksum decoding not supported'
          end
    
              def self.decode(input)
            elem = self.new
            elem.decode(input)
          end
    
              # Rex::Proto::Kerberos::Model::EncKdcResponse encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'EncKdcResponse encoding not supported'
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptedData from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
              # Decodes a Rex::Proto::Kerberos::Model::KrbError from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)