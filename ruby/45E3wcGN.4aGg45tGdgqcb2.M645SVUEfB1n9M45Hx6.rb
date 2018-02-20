
        
          def self.theme_gem_dir; source_dir.join('tmp', 'jekyll', 'my-cool-theme'); end
    
        def initialize(site, base_directory = nil)
      @site = site
      @base_directory = derive_base_directory(
        @site, base_directory.to_s.dup
      )
    end
    
      def add_invites
    InvitationCode.find_by_token(params[:invite_code_id]).add_invites!
    redirect_to user_search_path
  end
    
          rescue_from Rack::OAuth2::Server::Authorize::BadRequest,
                  JSON::JWT::InvalidFormat, JSON::JWK::UnknownAlgorithm do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_request, error_description: e.message, status: 400}
      end
      rescue_from JSON::JWT::VerificationFailed do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_grant, error_description: e.message, status: 400}
      end
    end
  end
end
