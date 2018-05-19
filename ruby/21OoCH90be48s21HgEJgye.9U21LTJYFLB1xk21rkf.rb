
        
            private
    
        def normalized_path
      path == '' ? '/' : path
    end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/follow
  def follow
    f = Follow.last
    NotificationMailer.follow(f.target_account, Notification.find_by(activity: f))
  end
    
      def generate_error_hash(error)
    {
      :path => request.path,
      :status => error.status_code,
      :error => error.to_hash
    }
  end
    
              private
    
    Dir.chdir APP_ROOT do
  # This script is a starting point to setup your application.
  # Add necessary setup steps to this file: