
        
              encrypted_token = Base64.decode64(value)
      Encryptor.decrypt(AES256_GCM_OPTIONS.merge(value: encrypted_token))
    end
  end
end

    
            if deploy_key_project.valid?
          present deploy_key_project, with: Entities::DeployKeysProject
        else
          render_validation_error!(deploy_key_project)
        end
      end
      # rubocop: enable CodeReuse/ActiveRecord
    
    class SessionsController < Devise::SessionsController
  # rubocop:disable Rails/LexicallyScopedActionFilter
  before_action :authenticate_with_2fa, only: :create
  after_action :reset_authentication_token, only: :create
  before_action :reset_authentication_token, only: :destroy
  # rubocop:enable Rails/LexicallyScopedActionFilter
    
          def create
        req = Rack::Request.new(request.env)
        if req['client_assertion_type'] == 'urn:ietf:params:oauth:client-assertion-type:jwt-bearer'
          handle_jwt_bearer(req)
        end
        self.status, headers, self.response_body = Api::OpenidConnect::TokenEndpoint.new.call(request.env)
        headers.each {|name, value| response.headers[name] = value }
        nil
      end
    
      private
    
    describe Sidekiq do
  describe 'json processing' do
    it 'handles json' do
      assert_equal({'foo' => 'bar'}, Sidekiq.load_json('{\'foo\':\'bar\'}'))
      assert_equal '{\'foo\':\'bar\'}', Sidekiq.dump_json({ 'foo' => 'bar' })
    end
  end
    
          Sidekiq::Testing.inline! do
        assert Sidekiq::Testing.enabled?
        assert Sidekiq::Testing.inline?
      end
    
        it 'stubs the delay call on mailers' do
      assert_equal 0, Sidekiq::Extensions::DelayedMailer.jobs.size
      FooMailer.delay.bar('hello!')
      assert_equal 1, Sidekiq::Extensions::DelayedMailer.jobs.size
    end