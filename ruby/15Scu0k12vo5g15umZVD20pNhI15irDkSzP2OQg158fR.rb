
        
          def as_json(options={})
    {
      poll_id:             id,
      post_id:             status_message.id,
      question:            question,
      poll_answers:        poll_answers,
      participation_count: participation_count
    }
  end
    
          def request_authorization_consent_form
        add_claims_to_scopes
        endpoint = Api::OpenidConnect::AuthorizationPoint::EndpointStartPoint.new(current_user)
        handle_start_point_response(endpoint)
      end
    
    module Api
  module OpenidConnect
    class ClientsController < ApplicationController
      skip_before_action :verify_authenticity_token