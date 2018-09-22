
        
            gu = GroupUser.find_by(user_id: moderator.id, group_id: group.id)
    expect(gu.notification_level).to eq(NotificationLevels.all[:regular])
  end
    
    UserEmail.seed do |ue|
  ue.id = -1
  ue.email = 'no_email'
  ue.primary = true
  ue.user_id = -1
end
    
        self.client.send_regreq_chall_response(self, chall)
    res = wait_for( IAX_SUBTYPE_REGACK, IAX_SUBTYPE_REGREJ )
    return if not res
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a principal, an asset (e.g., a
        # workstation user or a network server) on a network.
        class Element
    
              # Decodes the cname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::PrincipalName]
          def decode_cname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end
    
    SPREE_GEMS = %w(core api cmd backend frontend sample).freeze
    
            def create
          authorize! :create, Spree::OptionType
          @option_type = Spree::OptionType.new(option_type_params)
          if @option_type.save
            render :show, status: 201
          else
            invalid_resource!(@option_type)
          end
        end
    
            def destroy
          authorize! :destroy, @product_property
          @product_property.destroy
          respond_with(@product_property, status: 204)
        end
    
            def create
          authorize! :create, Property
          @property = Spree::Property.new(property_params)
          if @property.save
            respond_with(@property, status: 201, default_template: :show)
          else
            invalid_resource!(@property)
          end
        end