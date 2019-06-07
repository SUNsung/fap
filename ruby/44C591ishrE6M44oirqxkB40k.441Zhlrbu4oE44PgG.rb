
        
        # == Schema Information
#
# Table name: directory_items
#
#  id             :integer          not null, primary key
#  period_type    :integer          not null
#  user_id        :integer          not null
#  likes_received :integer          not null
#  likes_given    :integer          not null
#  topics_entered :integer          not null
#  topic_count    :integer          not null
#  post_count     :integer          not null
#  created_at     :datetime
#  updated_at     :datetime
#  days_visited   :integer          default(0), not null
#  posts_read     :integer          default(0), not null
#
# Indexes
#
#  index_directory_items_on_days_visited             (days_visited)
#  index_directory_items_on_likes_given              (likes_given)
#  index_directory_items_on_likes_received           (likes_received)
#  index_directory_items_on_period_type_and_user_id  (period_type,user_id) UNIQUE
#  index_directory_items_on_post_count               (post_count)
#  index_directory_items_on_posts_read               (posts_read)
#  index_directory_items_on_topic_count              (topic_count)
#  index_directory_items_on_topics_entered           (topics_entered)
#

    
        def build
      policy = ActionDispatch::ContentSecurityPolicy.new
    
        private
    
          keyword = params.require(:keyword)
      data = SvgSprite.search(keyword)
    
      # topic_reply_count is a count of posts in other users' topics
  def update_topic_reply_count
    self.topic_reply_count = Topic
      .joins('INNER JOIN posts ON topics.id = posts.topic_id AND topics.user_id <> posts.user_id')
      .where('posts.deleted_at IS NULL AND posts.user_id = ?', self.user_id)
      .distinct
      .count
  end
    
      gem.add_development_dependency 'danger'
  gem.add_development_dependency 'mocha'
  gem.add_development_dependency 'rspec'
  gem.add_development_dependency 'rubocop', '0.48.1'
end

    
        def version
      ['--version', '-V',
       'Display the program version.',
       lambda do |_value|
         puts 'Capistrano Version: #{Capistrano::VERSION} (Rake Version: #{Rake::VERSION})'
         exit
       end]
    end
    
          private
    
          attr_reader :locations, :values, :fetched_keys