
        
              message = TestMailer.send_test(args[:to_address])
      Email::Sender.new(message, :test_message).send
    end
    
      def revoke_moderation!
    set_permission('moderator', false)
  end
    
        assert_equal(6, e.size)
    set << 42
    assert_equal(7, e.size)
  end
    
      it 'implicitly has a count of one when no count is specified' do
    'abc'.unpack(unpack_format).should == ['a']
  end
    
      it 'does not decode any items for directives exceeding the input string size' do
    '\xc2\x80'.unpack('UUUU').should == [0x80]
  end
    
      # TODO: In the great Thread spec rewrite, abstract this
  class << self
    attr_accessor :state
  end
    
          users = User.arel_table
      people = Person.arel_table
      profiles = Profile.arel_table
      res = User.joins(person: :profile)
      res = res.where(users[:username].matches('%#{username}%')) unless username.blank?
      res = res.where(users[:email].matches('%#{email}%')) unless email.blank?
      res = res.where(people[:guid].matches('%#{guid}%')) unless guid.blank?
      res = res.where(profiles[:birthday].gt(Date.today-13.years)) if under13 == '1'
      res
    end
  end
end

    
          def request_authorization_consent_form
        add_claims_to_scopes
        endpoint = Api::OpenidConnect::AuthorizationPoint::EndpointStartPoint.new(current_user)
        handle_start_point_response(endpoint)
      end
    
          def create
        req = Rack::Request.new(request.env)
        if req['client_assertion_type'] == 'urn:ietf:params:oauth:client-assertion-type:jwt-bearer'
          handle_jwt_bearer(req)
        end
        self.status, headers, self.response_body = Api::OpenidConnect::TokenEndpoint.new.call(request.env)
        headers.each {|name, value| response.headers[name] = value }
        nil
      end