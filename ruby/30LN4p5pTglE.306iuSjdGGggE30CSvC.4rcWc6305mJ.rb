
        
          included do
    self.validate :validate_email_options
  end
    
      def remote_url
    object.remote_url.presence
  end
    
      describe 'GET #show' do
    let!(:tag)     { Fabricate(:tag, name: 'test') }
    let!(:local)   { Fabricate(:status, tags: [tag], text: 'local #test') }
    let!(:remote)  { Fabricate(:status, tags: [tag], text: 'remote #test', account: Fabricate(:account, domain: 'remote')) }
    let!(:late)    { Fabricate(:status, tags: [tag], text: 'late #test') }
    
      # Strip out the value
  form.search('//input') do |inp|
    
    puts '* System info:'
    
    		self.block[-1] << ';'
		self.block[-1] << ''
	end
    
      def weekly_user_stats
    @created_users_by_week = Hash.new{ |h,k| h[k] = [] }
    @created_users = User.where('username IS NOT NULL and created_at IS NOT NULL')
    @created_users.find_each do |u|
      week = u.created_at.beginning_of_week.strftime('%Y-%m-%d')
      @created_users_by_week[week] << u.username
    end
    
          def handle_prompt_with_signed_in_user
        client_id = params[:client_id]
        if client_id
          auth = Api::OpenidConnect::Authorization.find_by_client_id_user_and_scopes(client_id,
                                                                                     current_user, params[:scope])
          if auth
            process_authorization_consent('true')
          else
            handle_params_error('interaction_required', 'User must already be authorized when `prompt` is `none`')
          end
        else
          handle_params_error('bad_request', 'Client ID is missing from request')
        end
      end
    
          def fetch_public_key_from_json(string, jwt)
        json = JSON.parse(string)
        keys = json['keys']
        public_key = get_key_from_kid(keys, jwt.header['kid'])
        public_key
      end
    
        # The trailing expressions in the query.
    #
    # When parsed as Sass code, each expression contains strings and SassScript
    # nodes. When parsed as CSS, each one contains a single string.
    #
    # @return [Array<Array<String, Sass::Script::Tree::Node>>]
    attr_accessor :expressions
    
          def report(env)
        warn env, 'attack reported by #{self.class}'
        env[options[:report_key]] = true
      end
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
    
  it 'should allow changing the nosniff-mode off' do
    mock_app do
      use Rack::Protection::XSSHeader, :nosniff => false
      run DummyApp
    end