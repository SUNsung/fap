
        
            attr_reader :filters
    
          @terminal_width = if !tty?
        nil
      elsif ENV['COLUMNS']
        ENV['COLUMNS'].to_i
      else
        `stty size`.scan(/\d+/).last.to_i
      end
    rescue
      @terminal_width = nil
    end
  end
end

    
            css('#angular-2-glossary ~ .l-sub-section').each do |node|
          node.before(node.children).remove
        end
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
      # Configure which authentication keys should have whitespace stripped.
  # These keys will have whitespace before and after removed upon creating or
  # modifying a user and when used to authenticate or find a user. Default is :email.
  config.strip_whitespace_keys = %i(email unconfirmed_email username)
    
          def fetch_public_key(o_auth_app, jwt)
        public_key = fetch_public_key_from_json(o_auth_app.jwks, jwt)
        if public_key.empty? && o_auth_app.jwks_uri
          response = Faraday.get(o_auth_app.jwks_uri)
          public_key = fetch_public_key_from_json(response.body, jwt)
        end
        raise Rack::OAuth2::Server::Authorize::BadRequest(:unauthorized_client) if public_key.empty?
        public_key
      end
    
        membership = contact.aspect_memberships.where(aspect_id: aspect.id).first
    
    class ContactsController < ApplicationController
  before_action :authenticate_user!
    
      def raw
    @conversation = current_user.conversations.where(id: params[:conversation_id]).first
    if @conversation
      @first_unread_message_id = @conversation.first_unread_message(current_user).try(:id)
      @conversation.set_read(current_user)
      render partial: 'conversations/show', locals: {conversation: @conversation}
    else
      head :not_found
    end
  end
    
      def toggle_mobile
    session[:mobile_view] = session[:mobile_view].nil? ? true : !session[:mobile_view]
    
    class InvitationsController < ApplicationController
  before_action :authenticate_user!
  before_action :check_invitations_available!, only: :create
    
      def create
    conversation = Conversation.find(params[:conversation_id])
    
        def method_missing(method, *args)
      name = method.to_s.delete('=')
      if has_preference? name
        if method.to_s =~ /=$/
          set_preference(name, args.first)
        else
          get_preference name
        end
      else
        super
      end
    end
  end
end

    
    RSpec.configure do |config|
  # Need to check here again because this is used in i18n_spec too.
  if ENV['CHECK_TRANSLATIONS']
    config.after :suite do
      Spree.check_missing_translations
      if Spree.missing_translation_messages.any?
        puts '\nThere are missing translations within Spree:'
        puts Spree.missing_translation_messages.sort
        exit(1)
      end
    
      describe '.exchange_variant_engine' do
    it 'defaults to the same product calculator' do
      expect(Spree::ReturnItem.exchange_variant_engine).to eq Spree::ReturnItem::ExchangeVariantEligibility::SameProduct
    end
  end
    
          attr_accessor :current_api_user
    
            def update
          @image = scope.images.accessible_by(current_ability, :update).find(params[:id])
          if @image.update(image_params)
            respond_with(@image, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def update
          authorize! :update, inventory_unit.order
    
              Spree::Dependencies.cart_remove_item_service.constantize.call(order: @shipment.order,
                                                                        variant: variant,
                                                                        quantity: quantity,
                                                                        options: { shipment: @shipment })