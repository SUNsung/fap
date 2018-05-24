
        
          attributes :name, :short_name, :description,
             :icons, :theme_color, :background_color,
             :display, :start_url, :scope,
             :share_target
    
    class NotificationMailerPreview < ActionMailer::Preview
  # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/mention
  def mention
    m = Mention.last
    NotificationMailer.mention(m.account, Notification.find_by(activity: m))
  end