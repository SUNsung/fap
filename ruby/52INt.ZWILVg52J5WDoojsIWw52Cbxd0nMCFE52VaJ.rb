
        
                      matches_path?(path, pipeline) &&
                matches_pattern?(pattern, pipeline)
            end
          end
    
                with_options if: :hash? do
              validates :config, allowed_keys: ALLOWED_KEYS
    
    module Rex
  module Proto
    module Kerberos
      module CredentialCache
        # This class provides a representation of credential times stored in the Kerberos Credential Cache.
        class Time < Element
          # @!attribute auth_time
          #   @return [Integer]
          attr_accessor :auth_time
          # @!attribute start_time
          #   @return [Integer]
          attr_accessor :start_time
          # @!attribute end_time
          #   @return [Integer]
          attr_accessor :end_time
          # @!attribute renew_till
          #   @return [Integer]
          attr_accessor :renew_till
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos AuthorizationData data
        # definition.
        class AuthorizationData < Element
          # @!attribute elements
          #   @return [Hash{Symbol => <Integer, String>}] The type of the authorization data
          #   @option [Integer] :type
          #   @option [String] :data
          attr_accessor :elements
    
              # Decodes the msg_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_asn1_msg_type(input)
            input.value[0].value.to_i
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcRequestBody from an String
          #
          # @param input [String] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
    post '/' do
  connections.each { |out| out << 'data: #{params[:msg]}\n\n' }
  204 # response without entity body
end
    
            begin
          token = decode_token(token)
        rescue ArgumentError # encoded_masked_token is invalid Base64
          return false
        end
    
          def default_options
        DEFAULT_OPTIONS
      end
    
              react_and_close(env, body) or [status, headers, body]
        else
          [status, headers, body]
        end
      end
    
      subject { described_class.new(lambda {}) }