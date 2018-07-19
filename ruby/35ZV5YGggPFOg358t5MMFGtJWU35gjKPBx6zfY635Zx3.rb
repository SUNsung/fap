
        
          def deliver_digest
    NotificationMailer.digest(user.account).deliver_now!
    user.touch(:last_emailed_at)
  end
end

    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/follow
  def follow
    f = Follow.last
    NotificationMailer.follow(f.target_account, Notification.find_by(activity: f))
  end