
        
        @@ chat
<pre id='chat'></pre>
<form>
  <input id='msg' placeholder='type message here...' />
</form>
    
    # include would include the module in Object
# extend only extends the `main` object
extend Sinatra::Delegator
    
    desc 'generate documentation'
task :doc => 'doc:all'
    
          attr_reader :app, :options
    
      it 'should not set the Content Security Policy for other content types' do
    headers = get('/', {}, 'wants' => 'text/foo').headers
    expect(headers['Content-Security-Policy']).to be_nil
    expect(headers['Content-Security-Policy-Report-Only']).to be_nil
  end
    
        it 'denies requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
    module Grape
  module DSL
    module Helpers
      extend ActiveSupport::Concern
      include Grape::DSL::Configuration
    
        def initialize_cancan_ability
      klass = resource.namespace.cancan_ability_class
      klass = klass.constantize if klass.is_a? String
      klass.new user
    end
    
        def self.config
      {
        path: ActiveAdmin.application.default_namespace || '/',
        controllers: ActiveAdmin::Devise.controllers,
        path_names: { sign_in: 'login', sign_out: 'logout' },
        sign_out_via: [*::Devise.sign_out_via, ActiveAdmin.application.logout_link_method].uniq
      }
    end