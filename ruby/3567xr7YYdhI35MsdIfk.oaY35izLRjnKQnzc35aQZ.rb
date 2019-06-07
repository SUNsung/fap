
        
          # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
          def remember_key(resource, scope)
        resource.rememberable_options.fetch(:key, 'remember_#{scope}_token')
      end
    end
  end
end

    
          def extract_path_from_location(location)
        uri = parse_uri(location)
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
          selected_modules = modules.map(&:to_sym).uniq.sort_by do |s|
        Devise::ALL.index(s) || -1  # follow Devise::ALL order
      end
    
          module ClassMethods
        # Create the cookie key using the record id and remember_token
        def serialize_into_cookie(record)
          [record.to_key, record.rememberable_value, Time.now.utc.to_f.to_s]
        end
    
        def resource_params
      params.require(:user).permit(
        :unconfirmed_email
      )
    end
  end
end

    
      private
    
      def self.provides_callback_for(provider)
    provider_id = provider.to_s.chomp '_oauth2'
    
    end
    
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
    
              # Decodes a Rex::Proto::Kerberos::Model::EncKdcResponse
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            input.value[0].value.each do |val|
              case val.tag
              when 0
                self.key = decode_key(val)
              when 1
                self.last_req = decode_last_req(val)
              when 2
                self.nonce = decode_nonce(val)
              when 3
                self.key_expiration = decode_key_expiration(val)
              when 4
                self.flags = decode_flags(val)
              when 5
                self.auth_time = decode_auth_time(val)
              when 6
                self.start_time = decode_start_time(val)
              when 7
                self.end_time = decode_end_time(val)
              when 8
                self.renew_till = decode_renew_till(val)
              when 9
                self.srealm = decode_srealm(val)
              when 10
                self.sname = decode_sname(val)
              else
                raise ::RuntimeError, 'Failed to decode ENC-KDC-RESPONSE SEQUENCE'
              end
            end
          end
    
              # Decodes the kvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_kvno(input)
            input.value[0].value.to_i
          end