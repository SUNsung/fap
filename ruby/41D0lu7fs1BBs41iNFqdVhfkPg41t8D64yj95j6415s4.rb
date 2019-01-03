
        
            group.remove(moderator)
    group.save
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
          def mailer_from(mapping)
        mailer_sender(mapping, :from)
      end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
        def hostfilter
      ['--hosts HOSTS', '-z',
       'Run SSH commands only on matching hosts',
       lambda do |value|
         Configuration.env.add_cmdline_filter(:host, value)
       end]
    end
    
          def ask_question
        $stdout.print question
        $stdout.flush
      end