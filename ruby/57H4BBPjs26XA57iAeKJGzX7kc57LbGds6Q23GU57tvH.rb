
        
          def up_down(change)
    change.up do
      Mention.update_all(mentions_container_type: 'Post')
      change_column :mentions, :mentions_container_type, :string, null: false
      Notification.where(type: 'Notifications::Mentioned').update_all(type: 'Notifications::MentionedInPost')
    end
    
    def await_condition &condition
  start_time = Time.zone.now
  until condition.call
    return false if (Time.zone.now - start_time) > Capybara.default_max_wait_time
    sleep 0.05
  end
  true
end

    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
    end
  end
    
          it 'doesn't reduce number of available invites' do
        AppConfig.settings.enable_registrations = false
    
          # Create an Atom-feed for each index.
      feed = CategoryFeed.new(self, self.source, category_dir, category)
      feed.render(self.layouts, site_payload)
      feed.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << feed
    end
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
        def post_render(post)
      OctopressFilters::post_filter(post)
    end
  end
end