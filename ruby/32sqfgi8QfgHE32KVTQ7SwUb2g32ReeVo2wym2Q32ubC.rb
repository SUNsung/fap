
        
          # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/reblog
  def reblog
    r = Status.where.not(reblog_of_id: nil).first
    NotificationMailer.reblog(r.reblog.account, Notification.find_by(activity: r))
  end
    
    require 'formula'
    
            def regexp_named_capture?
          @node.type == REGEXP_NAMED_CAPTURE_TYPE
        end
    
              reconstructed.join
        end