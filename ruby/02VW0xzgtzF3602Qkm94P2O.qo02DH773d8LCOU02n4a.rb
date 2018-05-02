
        
        BASE_URI = ENV['BASE_URI'] || 'https://github.com/jondot/awesome-react-native'
    
    module AccountFinderConcern
  extend ActiveSupport::Concern
    
      def id
    ActivityPub::TagManager.instance.uri_for(object)
  end
    
        puts 'Downloading emojos from source... (#{source})'
    
          def fetch_public_key(o_auth_app, jwt)
        public_key = fetch_public_key_from_json(o_auth_app.jwks, jwt)
        if public_key.empty? && o_auth_app.jwks_uri
          response = Faraday.get(o_auth_app.jwks_uri)
          public_key = fetch_public_key_from_json(response.body, jwt)
        end
        raise Rack::OAuth2::Server::Authorize::BadRequest(:unauthorized_client) if public_key.empty?
        public_key
      end
    
          expect('.all-text-inputs').to have_ruleset(ruleset)
    end
  end