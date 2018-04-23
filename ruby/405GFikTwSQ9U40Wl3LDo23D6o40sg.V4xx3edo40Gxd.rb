
        
          def self.register(user, app_id, params, challenges)
    u2f = U2F::U2F.new(app_id)
    registration = self.new