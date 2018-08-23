
        
              topic = Topic.find_by(id: topic_id)
    
      protected
    
      def icon
    object.image
  end
    
      private
    
        def show
      render plain: 'show'
    end
  end
    
    class NotificationMailerPreview < ActionMailer::Preview
  # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/mention
  def mention
    m = Mention.last
    NotificationMailer.mention(m.account, Notification.find_by(activity: m))
  end
    
        def common_options(opts)
      opts.separator ''
      opts.separator 'Common Options:'
    
        def self.run
      # Apparently there's no better way than this to add Sass
      # to Merb's Rack stack.
      Merb::Config[:app] = Sass::Plugin::Rack.new(Merb::Config[:app])
    end
  end
end

    
    When /^(?:|I )select '([^']*)' from '([^']*)'$/ do |value, field|
  select(value, :from => field)
end
    
        def possible_types
      MIME::Types.type_for(@filepath).collect(&:content_type)
    end
    
            def accepted_types_and_failures
          if @allowed_types.present?
            'Accept content types: #{@allowed_types.join(', ')}\n'.tap do |message|
              if @missing_allowed_types.present?
                message << '  #{@missing_allowed_types.join(', ')} were rejected.'
              else
                message << '  All were accepted successfully.'
              end
            end
          end
        end
        def rejected_types_and_failures
          if @rejected_types.present?
            'Reject content types: #{@rejected_types.join(', ')}\n'.tap do |message|
              if @missing_rejected_types.present?
                message << '  #{@missing_rejected_types.join(', ')} were accepted.'
              else
                message << '  All were rejected successfully.'
              end
            end
          end
        end
    
            required = directories.map do |directory|
          pathname = File.expand_path(Rails.root.join(directory, filename))
          file_exists = File.exist?(pathname)
          require pathname if file_exists
          file_exists
        end