
        
              topic = Topic.find_by(id: topic_id)
    
    end

    
      def self.expire_cache_fragment!(name)
    fragment_cache.delete(name)
  end
    
        def enable
      authorize @account.user, :enable?
      @account.user.enable!
      log_action :enable, @account.user
      redirect_to admin_account_path(@account.id)
    end
    
      def text_url
    object.local? ? medium_url(object) : nil
  end
    
        existence_maps.each do |group|
      existing_one = group.key(true)
    
      def short_name
    object.site_title
  end
    
          rescue_from JSON::JWS::VerificationFailed do |e|
        logger.info e.backtrace[0, 10].join('\n')
        handle_params_error('bad_request', e.message)
      end
    
          def find
        client = Api::OpenidConnect::OAuthApplication.find_by(client_name: params[:client_name])
        if client
          render json: {client_id: client.client_id}
        else
          render json: {error: 'Client with name #{params[:client_name]} does not exist'}
        end
      end
    
    desc 'Clean out caches: .pygments-cache, .gist-cache, .sass-cache'
task :clean do
  rm_rf [Dir.glob('.pygments-cache/**'), Dir.glob('.gist-cache/**'), Dir.glob('.sass-cache/**'), 'source/stylesheets/screen.css']
end
    
        def get_gist_from_web(gist, file)
      gist_url = get_gist_url_for(gist, file)
      data     = get_web_content(gist_url)
    
      # Summary is used on the Archive pages to return the first block of content from a post.
  def summary(input)
    if input.index(/\n\n/)
      input.split(/\n\n/)[0]
    else
      input
    end
  end