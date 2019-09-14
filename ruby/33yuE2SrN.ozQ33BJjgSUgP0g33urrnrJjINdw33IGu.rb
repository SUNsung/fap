
        
            GLOBAL_TEMPLATE_TYPES.each do |template_type, properties|
      gitlab_version = properties[:gitlab_version]
    
          desc 'Add new deploy key to a project' do
        success Entities::DeployKeysProject
      end
      params do
        requires :key, type: String, desc: 'The new deploy key'
        requires :title, type: String, desc: 'The name of the deploy key'
        optional :can_push, type: Boolean, desc: 'Can deploy key push to the project's repository'
      end
      # rubocop: disable CodeReuse/ActiveRecord
      post ':id/deploy_keys' do
        params[:key].strip!
    
            def with_redirections
          @redirections = new.fetch_redirections
          yield
        ensure
          @redirections = nil
        end
      end
    
        def format_url(url)
      url.to_s.remove %r{\Ahttps?://}
    end
    
            css('td h3', '.l-sub-section > h3', '.alert h3', '.row-margin > h3').each do |node|
          node.name = 'h4'
        end