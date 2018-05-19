
        
          def can_read?(resource)
    ability_name = resource.class.name.downcase
    ability_name = 'read_#{ability_name}'.to_sym
    
      def self.authenticate(user, app_id, json_response, challenges)
    response = U2F::SignResponse.load_from_json(json_response)
    registration = user.u2f_registrations.find_by_key_handle(response.key_handle)
    u2f = U2F::U2F.new(app_id)
    
      def external?
    true
  end