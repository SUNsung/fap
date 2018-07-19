
        
        class REST::MediaAttachmentSerializer < ActiveModel::Serializer
  include RoutingHelper
    
      sidekiq_options queue: 'mailers'
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/reblog
  def reblog
    r = Status.where.not(reblog_of_id: nil).first
    NotificationMailer.reblog(r.reblog.account, Notification.find_by(activity: r))
  end
    
      # body
  xml.tag!('body') do
    xml.tag!('outline', text: TITLE, title: TITLE) do
      blogs.each do |blog|
        xml.tag!('outline', type: 'rss', text: blog.name, title: blog.name,
          xmlUrl: blog.rss_url, htmlUrl: blog.web_url)
      end
    end
  end
end
    
    require 'formula'
    
          tmp = ''
      less.scan(/^(\s*&)(-[\w\[\]]+\s*\{.+})$/) do |ampersand, css|
        tmp << '.badge#{css}\n'
      end
    
        def log_file_info(s)
      puts '    #{magenta s}'
    end
    
          def escape_hash(hash)
        hash = hash.dup
        hash.each { |k,v| hash[k] = escape(v) }
        hash
      end
    
        it 'should be able to deal with PATH_INFO = nil (fcgi?)' do
      app = Rack::Protection::PathTraversal.new(proc { 42 })
      expect(app.call({})).to eq(42)
    end
  end