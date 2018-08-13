
        
                  theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
          mutable false
    
          private
    
          def y_day
        @obj.date.strftime('%j')
      end
    
        # --
    # Check if an entry matches a specific pattern and return true,false.
    # Returns true if path matches against any glob pattern.
    # --
    def glob_include?(enum, entry)
      entry_path = Pathutil.new(site.in_source_dir).join(entry)
      enum.any? do |exp|
        # Users who send a Regexp knows what they want to
        # exclude, so let them send a Regexp to exclude files,
        # we will not bother caring if it works or not, it's
        # on them at this point.
    
      def tumblr_consumer_secret
    ENV['TUMBLR_OAUTH_SECRET']
  end
    
    module SortableTable
  extend ActiveSupport::Concern
    
      def index
    if params[:agent_id]
      @agent = current_user.agents.find(params[:agent_id])
      @events = @agent.events.page(params[:page])
    else
      @events = current_user.events.preload(:agent).page(params[:page])
    end
    
        respond_to do |format|
      if @user_credential.update_attributes(user_credential_params)
        format.html { redirect_to user_credentials_path, notice: 'Your credential was successfully updated.' }
        format.json { head :no_content }
      else
        format.html { render action: 'edit' }
        format.json { render json: @user_credential.errors, status: :unprocessable_entity }
      end
    end
  end
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
        def default_failure_app(options)
      @failure_app = options[:failure_app] || Devise::FailureApp
      if @failure_app.is_a?(String)
        ref = Devise.ref(@failure_app)
        @failure_app = lambda { |env| ref.get.call(env) }
      end
    end
    
          expect(user.reload.current_sign_in_at).to be_within(1.0).of(prior)
    end
    
      def create_issue(repo, title, body)
    url = 'https://api.github.com/repos/#{repo}/issues'
    data = { 'title' => title, 'body' => body }
    scopes = GitHub::CREATE_ISSUE_FORK_OR_PR_SCOPES
    GitHub.open_api(url, data: data, scopes: scopes)['html_url']
  end
    
              # Don't use GitHub codeload URLs
          codeload_gh_pattern = %r{https?://codeload\.github\.com/(.+)/(.+)/(?:tar\.gz|zip)/(.+)}
          audit_urls(urls, codeload_gh_pattern) do |match, url|
            problem <<~EOS
              Use GitHub archive URLs:
                https://github.com/#{match[1]}/#{match[2]}/archive/#{match[3]}.tar.gz
              Rather than codeload:
                #{url}
            EOS
          end