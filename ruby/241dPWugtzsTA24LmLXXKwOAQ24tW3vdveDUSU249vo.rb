
        
        
end
end
end

    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Principal into an String
          #
          # @return [String] encoded principal
          def encode
            encoded = ''
            encoded << encode_name_type
            encoded << [components.length].pack('N')
            encoded << encode_realm
            encoded << encode_components
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
    module Rex
  module Proto
    module Kerberos
      module Model
        class EncKdcResponse < Element
          # @!attribute key
          #   @return [Rex::Proto::Kerberos::Model::EncryptionKey] The session key
          attr_accessor :key
          # @!attribute last_req
          #   @return [Array<Rex::Proto::Kerberos::Model::LastRequest>] This field is returned by the KDC and specifies the time(s)
          #   of the last request by a principal
          attr_accessor :last_req
          # @!attribute nonce
          #   @return [Integer] random number
          attr_accessor :nonce
          # @!attribute key_expiration
          #   @return [Time] The key-expiration field is part of the response from the
          #   KDC and specifies the time that the client's secret key is due to expire
          attr_accessor :key_expiration
          # @!attribute flags
          #   @return [Integer] This field indicates which of various options were used or
          #   requested when the ticket was issued
          attr_accessor :flags
          # @!attribute auth_time
          #   @return [Time] the time of initial authentication for the named principal
          attr_accessor :auth_time
          # @!attribute start_time
          #   @return [Time] Specifies the time after which the ticket is valid
          attr_accessor :start_time
          # @!attribute end_time
          #   @return [Time] This field contains the time after which the ticket will
          #   not be honored (its expiration time)
          attr_accessor :end_time
          # @!attribute renew_till
          #   @return [Time] This field is only present in tickets that have the
          #   RENEWABLE flag set in the flags field.  It indicates the maximum
          #   endtime that may be included in a renewal
          attr_accessor :renew_till
          # @!attribute srealm
          #   @return [String] The realm part of the server's principal identifier
          attr_accessor :srealm
          # @!attribute sname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the server's identity
          attr_accessor :sname