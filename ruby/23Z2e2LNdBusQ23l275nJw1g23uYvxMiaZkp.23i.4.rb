
        
        puts 'Deduping #{links.size} links...'
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
      # GET /resource/unlock?unlock_token=abcdef
  def show
    self.resource = resource_class.unlock_access_by_token(params[:unlock_token])
    yield resource if block_given?
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
          def forget_cookie_values(resource)
        Devise::Controllers::Rememberable.cookie_values.merge!(resource.rememberable_options)
      end
    
        private
    
        def subpath_to(url, options = nil)
      url = self.class.parse(url)
      return unless origin == url.origin
    
            # Unregisters a SIGINT handler.
        def unregister(sig_callback)
          @@mutex.synchronize do
            registered.delete(sig_callback)
    
        if object.current_account
      store[:me]                      = object.current_account.id.to_s
      store[:unfollow_modal]          = object.current_account.user.setting_unfollow_modal
      store[:boost_modal]             = object.current_account.user.setting_boost_modal
      store[:delete_modal]            = object.current_account.user.setting_delete_modal
      store[:auto_play_gif]           = object.current_account.user.setting_auto_play_gif
      store[:display_sensitive_media] = object.current_account.user.setting_display_sensitive_media
      store[:reduce_motion]           = object.current_account.user.setting_reduce_motion
    end
    
      def remove_avatar?
    staff?
  end
    
      # Before we load the schema, define the timestamp_id function.
  # Idiomatically, we might do this in a migration, but then it
  # wouldn't end up in schema.rb, so we'd need to figure out a way to
  # get it in before doing db:setup as well. This is simpler, and
  # ensures it's always in place.
  Rake::Task['db:schema:load'].enhance ['db:define_timestamp_id']
    
            subject.call(json, forwarder)
      end
    end
  end
end

    
    if profile_filename = ENV['PROFILE']
  require 'ruby-prof'
  reporter =
    case (profile_extname = File.extname(profile_filename))
    when '.txt'
      RubyProf::FlatPrinterWithLineNumbers
    when '.html'
      RubyProf::GraphHtmlPrinter
    when '.callgrind'
      RubyProf::CallTreePrinter
    else
      raise 'Unknown profiler format indicated by extension: #{profile_extname}'
    end
  File.open(profile_filename, 'w') do |io|
    reporter.new(RubyProf.profile { Pod::Command.run(ARGV) }).print(io)
  end
else
  Pod::Command.run(ARGV)
end

    
          def executable_path
        <<-EOS
### Installation Source
    
        def after(task, post_task, *args, &block)
      Rake::Task.define_task(post_task, *args, &block) if block_given?
      task = Rake::Task[task]
      task.enhance do
        post = Rake.application.lookup(post_task, task.scope)
        raise ArgumentError, 'Task #{post_task.inspect} not found' unless post
        post.invoke
      end
    end