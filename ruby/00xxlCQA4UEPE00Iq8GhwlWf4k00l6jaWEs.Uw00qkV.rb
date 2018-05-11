
        
          def evernote_oauth_token
    service && service.token
  end
end

    
      module ClassMethods
    def form_configurable(name, *args)
      options = args.extract_options!.reverse_merge(roles: [], type: :string)
    
        respond_to do |format|
      if !running? && @job.update_attributes!(run_at: Time.now, failed_at: nil)
        format.html { redirect_to jobs_path, notice: 'Job enqueued.' }
        format.json { render json: @job, status: :ok }
      else
        format.html { redirect_to jobs_path, alert: 'Can not enqueue a running job.' }
        format.json { render json: @job.errors, status: :unprocessable_entity }
      end
    end
  end
    
        def initialize(username, domain)
      @username = username
      @domain = domain
    end
    
      sidekiq_options queue: 'mailers'
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/favourite
  def favourite
    f = Favourite.last
    NotificationMailer.favourite(f.status.account, Notification.find_by(activity: f))
  end
    
          def stage_definitions
        stage_config_path.join('*.rb')
      end
    
        def paragraphize(input)
      '<p>#{input.lstrip.rstrip.gsub(/\n\n/, '</p><p>').gsub(/\n/, '<br/>')}</p>'
    end
  end
end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end