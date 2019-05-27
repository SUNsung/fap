
        
          #
  # Initializes an HTTP packet header class that inherits from a Hash base
  # class.
  #
  def initialize
    self.dcase_hash = {}
    
    end
end
end
end

    
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
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Rex::Proto::Kerberos::Model::KrbError encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'KrbError encoding not supported'
          end
    
    end

    
      def index
    @address_endpoints = @server.address_endpoints.order(:address).to_a
  end
    
      private
    
      def get_messages(scope)
    if scope == 'held'
      options = {:where => {:held => 1}}
    else
      options = {:where => {:scope => scope, :spam => false}, :order => :timestamp, :direction => 'desc'}
    
      def organization
    if [:edit, :update, :delete, :destroy].include?(action_name.to_sym)
      @organization ||= params[:org_permalink] ? current_user.organizations_scope.find_by_permalink!(params[:org_permalink]) : nil
    end
  end
  helper_method :organization
    
      def new
    @server = organization.servers.build
  end
    
    
      smtp_endpoints = server.smtp_endpoints.order(:name).to_a
      if smtp_endpoints.present?
        s << '<optgroup label='SMTP Endpoints'>'
        for endpoint in smtp_endpoints
          value = '#{endpoint.class}##{endpoint.uuid}'
          selected = value == selected_value ? 'selected='selected'' : ''
          s << '<option value='#{value}' #{selected}>#{endpoint.description}</option>'
        end
        s << '</optgroup>'
      end