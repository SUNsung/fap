
        
          #
  # The raw command string associated with the header which will vary between
  # requests and responses.
  #
  attr_accessor :junk_headers
  attr_accessor :cmd_string
  attr_accessor :fold
    
        json
  end
    
      def decode_audio_frame(buff)
    case self.codec
    
    
  # open rmcpplus_request with cipherzero
  def self.create_ipmi_session_open_cipher_zero_request(console_session_id)
    head = [
      0x06, 0x00, 0xff, 0x07,   # RMCP Header
      0x06,                     # RMCP+ Authentication Type
      PAYLOAD_RMCPPLUSOPEN_REQ, # Payload Type
      0x00, 0x00, 0x00, 0x00,   # Session ID
      0x00, 0x00, 0x00, 0x00    # Sequence Number
    ].pack('C*')
    
              private
    
    module Rex
  module Proto
    module Kerberos
      module Crypto
        module Rc4Hmac
          # Decrypts the cipher using RC4-HMAC schema
          #
          # @param cipher [String] the data to decrypt
          # @param key [String] the key to decrypt
          # @param msg_type [Integer] the message type
          # @return [String] the decrypted cipher
          # @raise [RuntimeError] if decryption doesn't succeed
          def decrypt_rc4_hmac(cipher, key, msg_type)
            unless cipher && cipher.length > 16
              raise ::RuntimeError, 'RC4-HMAC decryption failed'
            end
    
                seq_values.each do |val|
              case val.tag
              when 0
                self.etype = decode_etype(val)
              when 1
                self.kvno = decode_kvno(val)
              when 2
                self.cipher = decode_cipher(val)
              else
                raise ::RuntimeError, 'Failed to decode EncryptedData SEQUENCE'
              end
            end
          end
    
                self
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::LastReque from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
    When /^(?:|I )press '([^']*)'$/ do |button|
  click_button(button)
end
    
      def self.source_root
    @source_root ||= File.expand_path('../templates', __FILE__)
  end
    
        module ClassMethods
      def attachment_definitions
        Paperclip::AttachmentRegistry.definitions_for(self)
      end
    end
  end
end
