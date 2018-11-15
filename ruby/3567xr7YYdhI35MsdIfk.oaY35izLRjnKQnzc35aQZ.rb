
        
          def set_account
    @account = Account.find_local!(params[:account_username])
  end
    
    module Admin
  class AccountModerationNotesController < BaseController
    before_action :set_account_moderation_note, only: [:destroy]
    
                encoded
          end
    
                checksum = OpenSSL::HMAC.digest('MD5', k1, data_encrypt)
    
              # Encodes the data
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_data(data)
            OpenSSL::ASN1::OctetString.new(data)
          end
        end
      end
    end
  end
end
    
              include Rex::Proto::Kerberos::Crypto
          include Rex::Proto::Kerberos::Model
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptedData
          #
          # @param input [String, OpenSSL::ASN1::Sequence] the input to decode from
          # @return [self]
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::Sequence
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode EncryptedData Name, invalid input'
            end
    
    end
    
          get_web_content(redirected_url)
    end
    
        def render(context)
      includes_dir = File.join(context.registers[:site].source, '_includes')
    
    end
    
      class PostFilters < Octopress::Hooks::Post
    def pre_render(post)
      OctopressFilters::pre_filter(post)
    end