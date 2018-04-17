
        
          # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
    class U2fRegistration < ActiveRecord::Base
  belongs_to :user
    
            expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(actor)
        expect(ActivityPub::Activity).to receive(:factory).with(instance_of(Hash), actor, instance_of(Hash))
    
      def id
    ActivityPub::TagManager.instance.uri_for(object)
  end
    
          def delete_authorization_session_variables
        session.delete(:client_id)
        session.delete(:response_type)
        session.delete(:redirect_uri)
        session.delete(:scopes)
        session.delete(:state)
        session.delete(:nonce)
      end