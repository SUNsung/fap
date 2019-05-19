        def sidekiq_worker_class
          ImportLfsObjectWorker
        end
    
          # Returns the identifier to use for cache keys.
      #
      # For issues and pull requests this will be 'Issue' or 'MergeRequest'
      # respectively. For diff notes this will return 'MergeRequest', for
      # regular notes it will either return 'Issue' or 'MergeRequest' depending
      # on what type of object the note belongs to.
      def cache_key_type
        if object.respond_to?(:issuable_type)
          object.issuable_type
        elsif object.respond_to?(:noteable_type)
          object.noteable_type
        else
          raise(
            TypeError,
            'Instances of #{object.class} are not supported'
          )
        end
      end
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
          if @email_domain_block.save
        log_action :create, @email_domain_block
        redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.created_msg')
      else
        render :new
      end
    end
    
      def update
    if subscription.verify(body, request.headers['HTTP_X_HUB_SIGNATURE'])
      ProcessingWorker.perform_async(@account.id, body.force_encoding('UTF-8'))
    end
    
    # component must be String
    def URIEncodeComponent(componentString)
      Encode(componentString, :unescapePredicate);
    end
    
          def title
        'Latest Changes (Globally)'
      end
    
      test 'frontend links for editing blocked' do
    Precious::App.set(:wiki_options, { allow_editing: false })
    get '/A'
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
      s.add_dependency 'gollum-lib', '~> 4.2', '>= 4.2.10'
  s.add_dependency 'kramdown', '~> 1.9.0'
  s.add_dependency 'sinatra', '~> 1.4', '>= 1.4.4'
  s.add_dependency 'mustache', ['>= 0.99.5', '< 1.0.0']
  s.add_dependency 'useragent', '~> 0.16.2'
  s.add_dependency 'gemojione', '~> 3.2'
    
      # puts '\n== Copying sample files =='
  # unless File.exist?('config/database.yml')
  #   cp 'config/database.yml.sample', 'config/database.yml'
  # end
    
      # Enable serving of images, stylesheets, and JavaScripts from an asset server.
  # config.action_controller.asset_host = 'http://assets.example.com'