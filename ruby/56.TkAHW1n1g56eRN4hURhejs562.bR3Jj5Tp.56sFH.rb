
        
          def dry_run!(event = nil)
    @dry_run = true
    
      # Optional
  #   Override this method if you need to group multiple agents based on an API key,
  #   or server they connect to.
  #   Have a look at the TwitterStreamAgent for an example.
  def self.setup_worker; end
    
      def tumblr
    Tumblr.configure do |config|
      config.consumer_key = tumblr_consumer_key
      config.consumer_secret = tumblr_consumer_secret
      config.oauth_token = tumblr_oauth_token
      config.oauth_token_secret = tumblr_oauth_token_secret
    end
    
    Tumblr::Client.new
  end
end
    
      def destroy
    @event.destroy
    
      def update
    @user_credential = current_user.user_credentials.find(params[:id])
    
        def script_url_for(gist_id, filename)
      url = 'https://gist.github.com/#{gist_id}.js'
      url = '#{url}?file=#{filename}' unless filename.nil? or filename.empty?
      url
    end
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file
    
    Liquid::Template.register_tag('video', Jekyll::VideoTag)