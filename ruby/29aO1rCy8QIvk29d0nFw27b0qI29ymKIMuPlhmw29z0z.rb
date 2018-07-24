
        
          def cache_fragment(name)
    ApplicationSerializer.fragment_cache[name] ||= yield
  end
end

    
    def each_schema_load_environment
  # If we're in development, also run this for the test environment.
  # This is a somewhat hacky way to do this, so here's why:
  # 1. We have to define this before we load the schema, or we won't
  #    have a timestamp_id function when we get to it in the schema.
  # 2. db:setup calls db:schema:load_if_ruby, which calls
  #    db:schema:load, which we define above as having a prerequisite
  #    of this task.
  # 3. db:schema:load ends up running
  #    ActiveRecord::Tasks::DatabaseTasks.load_schema_current, which
  #    calls a private method `each_current_configuration`, which
  #    explicitly also does the loading for the `test` environment
  #    if the current environment is `development`, so we end up
  #    needing to do the same, and we can't even use the same method
  #    to do it.
    
      def id
    ActivityPub::TagManager.instance.uri_for(object)
  end
    
    namespace :emojis do
  desc 'Generate a unicode to filename mapping'
  task :generate do
    source = 'http://www.unicode.org/Public/emoji/5.0/emoji-test.txt'
    codes  = []
    dest   = Rails.root.join('app', 'javascript', 'mastodon', 'features', 'emoji', 'emoji_map.json')
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/follow
  def follow
    f = Follow.last
    NotificationMailer.follow(f.target_account, Notification.find_by(activity: f))
  end