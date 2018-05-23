
        
          def tumblr_oauth_token
    service.token
  end
    
      included do
    helper SortableTableHelper
  end
    
      def type
    'Emoji'
  end
    
        existence_maps.each do |group|
      existing_one = group.key(true)
    
      def perform(user_id)
    @user = User.find(user_id)
    deliver_digest if @user.allows_digest_emails?
  end
    
    class ManifestSerializer < ActiveModel::Serializer
  include RoutingHelper
  include ActionView::Helpers::TextHelper
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/follow
  def follow
    f = Follow.last
    NotificationMailer.follow(f.target_account, Notification.find_by(activity: f))
  end