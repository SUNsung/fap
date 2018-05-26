
        
                    when :user
              # When the last command was a username login
              # We might keep track on this one in future
            when :pass
              # Perfect we get an +OK after a PASS command this means right password given :-)
    
      validate :enough_poll_answers
  validates :question, presence: true
    
      def stats
    @popular_tags = ActsAsTaggableOn::Tagging.joins(:tag).limit(50).order('count(taggings.id) DESC').group(:tag).count