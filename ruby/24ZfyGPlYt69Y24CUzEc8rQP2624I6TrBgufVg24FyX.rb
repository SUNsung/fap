
        
        class ActivityPub::EmojiSerializer < ActiveModel::Serializer
  include RoutingHelper
    
    describe ApplicationController, type: :controller do
  controller do
    include UserTrackingConcern
    
        on :fetch_related_entity do |entity_type, guid|
      entity = Diaspora::Federation::Mappings.model_class_for(entity_type).find_by(guid: guid)
      Diaspora::Federation::Entities.related_entity(entity) if entity
    end