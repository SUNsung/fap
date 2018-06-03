class REST::MediaAttachmentSerializer < ActiveModel::Serializer
  include RoutingHelper
    
            user.update(last_sign_in_at: 'Tue, 04 Jul 2017 14:45:56 UTC +00:00', current_sign_in_at: 'Wed, 05 Jul 2017 22:10:52 UTC +00:00')
    
      def background_color
    '#191b22'
  end
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/reblog
  def reblog
    r = Status.where.not(reblog_of_id: nil).first
    NotificationMailer.reblog(r.reblog.account, Notification.find_by(activity: r))
  end
    
          def stage_set?
        !!fetch(:stage, false)
      end
    
      # Implemented by subclasses to define Rake tasks. Typically a plugin will call
  # `eval_rakefile` to load Rake tasks from a separate .rake file.
  #
  # Example:
  #
  #   def define_tasks
  #     eval_rakefile File.expand_path('../tasks.rake', __FILE__)
  #   end
  #
  # For simple tasks, you can define them inline. No need for a separate file.
  #
  #   def define_tasks
  #     desc 'Do something fantastic.'
  #     task 'my_plugin:fantastic' do
  #       ...
  #     end
  #   end
  #
  def define_tasks; end
    
      deploy_rb = File.expand_path('../../templates/deploy.rb.erb', __FILE__)
  stage_rb = File.expand_path('../../templates/stage.rb.erb', __FILE__)
  capfile = File.expand_path('../../templates/Capfile', __FILE__)