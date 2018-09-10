
        
        describe GivenDailyLike do
    
        group.default_notification_level = 1
    group.save
    
          (1..3).map do |i|
        Notification.create!(read: false, user_id: user.id, topic_id: 2, post_number: i, data: '{}', notification_type: 1)
      end
      Notification.create!(read: true, user_id: user.id, topic_id: 2, post_number: 4, data: '{}', notification_type: 1)
    
      def self.defaults
    %w(css dom dom_events html http javascript).map(&method(:find))
  end
    
    
    def initialize
      raise NotImplementedError, '#{self.class} is an abstract class and cannot be instantiated.' if self.class.abstract
    end
    
        attr_accessor :name, :type, :path
    
              node['data-language'] = 'typescript' if node['path'].try(:ends_with?, '.ts')
          node['data-language'] = 'html' if node['path'].try(:ends_with?, '.html')
          node['data-language'] = 'css' if node['path'].try(:ends_with?, '.css')
          node['data-language'] = 'js' if node['path'].try(:ends_with?, '.js')
          node['data-language'] = 'json' if node['path'].try(:ends_with?, '.json')
          node['data-language'] = node['language'].sub(/\Ats/, 'typescript').strip if node['language']
          node['data-language'] ||= 'typescript' if node.content.start_with?('@')
    
    describe 'Kernel#sleep' do
  it 'is a private method' do
    Kernel.should have_private_instance_method(:sleep)
  end
    
      it 'creates a public method in script binding' do
    eval @code, script_binding
    Object.should have_method :boom
  end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos Checksum definition.
        class Checksum < Element
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey
          #
          # @param input [String, OpenSSL::ASN1::Sequence] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::Sequence
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode EncryptionKey, invalid input'
            end
    
              # Decodes the ctime field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_ctime(input)
            input.value[0].value
          end
    
    When /^I submit the password reset form$/ do
  submit_password_reset_form
end
    
      aspect_id = @me.aspects.length == 1 ? @me.aspects.first.id : @me.aspects.where(:name => 'Besties').first.id
  contacts.each do |contact|
    aspect_memberships << AspectMembership.new(:contact_id => contact.id, :aspect_id => aspect_id)
  end
  AspectMembership.import(aspect_memberships)
end
    
      # Reset overridden settings
  AppConfig.reset_dynamic!
end

    
      def post_path_by_content(text)
    p = Post.find_by_text(text)
    post_path(p)
  end
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
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
          @option_value = scope.accessible_by(current_ability, :destroy).find(params[:id])
          @option_value.destroy
          render plain: nil, status: 204
        end
    
            def create
          authorize! :create, ProductProperty
          @product_property = @product.product_properties.new(product_property_params)
          if @product_property.save
            respond_with(@product_property, status: 201, default_template: :show)
          else
            invalid_resource!(@product_property)
          end
        end
    
            def variants_params
          variants_key = if params[:product].key? :variants
                           :variants
                         else
                           :variants_attributes
          end
    
            def show
          authorize! :admin, ReturnAuthorization
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :read).find(params[:id])
          respond_with(@return_authorization)
        end