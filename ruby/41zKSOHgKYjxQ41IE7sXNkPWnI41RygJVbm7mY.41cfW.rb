
        
          test 'should be active when confirmation sent at is not overpast' do
    swap Devise, allow_unconfirmed_access_for: 5.days do
      Devise.allow_unconfirmed_access_for = 5.days
      user = create_user
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
          def expire_data_after_sign_out!
        Devise.mappings.each { |_,m| instance_variable_set('@current_#{m.name}', nil) }
        super
      end
    end
  end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
        include Rails.application.routes.url_helpers
    include Rails.application.routes.mounted_helpers
    
          it 'processes payload with sender if no signature exists' do
        expect_any_instance_of(ActivityPub::LinkedDataSignature).not_to receive(:verify_account!)
        expect(ActivityPub::Activity).to receive(:factory).with(instance_of(Hash), forwarder, instance_of(Hash))
    
      def collection_presenter
    ActivityPub::CollectionPresenter.new(
      id: tag_url(@tag),
      type: :ordered,
      size: @tag.statuses.count,
      items: @statuses.map { |s| ActivityPub::TagManager.instance.uri_for(s) }
    )
  end