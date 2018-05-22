
        
        class U2fRegistration < ActiveRecord::Base
  belongs_to :user
    
        def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
            entries
      end
    end
  end
end

    
      # Before we load the schema, define the timestamp_id function.
  # Idiomatically, we might do this in a migration, but then it
  # wouldn't end up in schema.rb, so we'd need to figure out a way to
  # get it in before doing db:setup as well. This is simpler, and
  # ensures it's always in place.
  Rake::Task['db:schema:load'].enhance ['db:define_timestamp_id']
    
    class REST::MediaAttachmentSerializer < ActiveModel::Serializer
  include RoutingHelper
    
      def deliver_digest
    NotificationMailer.digest(user.account).deliver_now!
    user.touch(:last_emailed_at)
  end
end

    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/reblog
  def reblog
    r = Status.where.not(reblog_of_id: nil).first
    NotificationMailer.reblog(r.reblog.account, Notification.find_by(activity: r))
  end
    
        def log_status(status)
      puts bold status
    end
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)