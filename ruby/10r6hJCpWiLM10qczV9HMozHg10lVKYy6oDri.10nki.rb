
        
            group = Group.create!(name: 'bob')
    group.add(moderator)
    group.save
    
    Group.user_trust_level_change!(-1, TrustLevel[4])
    
            lounge.topic_id = post.topic.id
        unless lounge.save
          puts lounge.errors.full_messages
          puts 'Failed to set the lounge description topic!'
        end
    
        Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
            a_split <=> b_split
      else
        a.casecmp(b)
      end
    end
  end
end

    
        def assert_index(index)
      i = index.is_a?(Integer) ? index : @filters.index(filter_const(index))
      raise 'No such filter to insert: #{index}' unless i
      i
    end
  end
end

    
        def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
        def add(path, content)
      @pages[path] = content
    end
    
            css('h1:not(:first-child)').each do |node|
          node.name = 'h2'
        end unless at_css('h2')
    
      def collection_presenter
    ActivityPub::CollectionPresenter.new(
      id: account_collection_url(@account, params[:id]),
      type: :ordered,
      size: @size,
      items: @statuses
    )
  end
end

    
      def page_params
    { page: true, max_id: params[:max_id], min_id: params[:min_id] }.compact
  end
end

    
            if params[:create_and_unresolve]
          @report.unresolve!
          log_action :reopen, @report
        end
    
    class Api::OEmbedController < Api::BaseController
  respond_to :json
    
        render json: @web_subscription, serializer: REST::WebPushSubscriptionSerializer
  end
    
          spec['version'] = Bootstrap::VERSION
    
        def get_tree(sha, recursive = true)
      get_json('https://api.github.com/repos/#@repo/git/trees/#{sha}#{'?recursive=1' if recursive}')
    end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true