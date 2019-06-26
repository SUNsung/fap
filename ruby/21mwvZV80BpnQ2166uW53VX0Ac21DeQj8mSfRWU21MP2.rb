
        
              builder << nil
      builder << 123
      builder << 'string'
      builder << []
      builder << {}
    
    class ContentSecurityPolicy
  class Middleware
    def initialize(app)
      @app = app
    end
    
          script_srcs = parse(policy)['script-src']
      expect(script_srcs).to include(*%w[
        https://s3-cdn.com/assets/
        https://s3-cdn.com/brotli_asset/
        https://cdn.com/highlight-js/
        https://cdn.com/javascripts/
        https://cdn.com/plugins/
        https://cdn.com/theme-javascripts/
        http://test.localhost/extra-locales/
      ])
    end
  end
    
        api = !!(@env[API_KEY_ENV]) || !!(@env[USER_API_KEY_ENV])
    
              response.commit!
    
        if user_token.auth_token != token && user_token.prev_auth_token == token && user_token.auth_token_seen
      changed_rows = UserAuthToken
        .where('rotated_at < ?', 1.minute.ago)
        .where(id: user_token.id, prev_auth_token: token)
        .update_all(auth_token_seen: false)
    
      task :all => [:readmes, :index]
end