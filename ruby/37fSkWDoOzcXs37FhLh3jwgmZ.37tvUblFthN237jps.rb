
        
              topic.feature_topic_users(args)
    end
    
    end

    
      # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
        groups << @user.authorized_groups.visible_to_user(current_user) if current_user
    groups << @user.authorized_groups.public_to_user(current_user)
    
        def schedule_in(*args, &blk)
      schedule(:schedule_in, args, &blk)
    end
    
              # The plugin should be registered if we're setting a real name on it
          Plugin.manager.register(self) if name != UNSET_VALUE
    
            # Registers a SIGINT handler. This typically is called from {busy}.
        # Callbacks are only registered once, so calling this multiple times
        # with the same callback has no consequence.
        def register(sig_callback)
          @@mutex.synchronize do
            registered << sig_callback
            registered.uniq!
    
          describe 'fetching servers by multiple roles' do
        it 'does not confuse the last role with options' do
          expect(dsl.roles(:app, :web).count).to eq 4
          expect(dsl.roles(:app, :web, filter: :active).count).to eq 2
        end
      end
    
        def type_from_file_contents
      type_from_mime_magic || type_from_file_command
    rescue Errno::ENOENT => e
      Paperclip.log('Error while determining content type: #{e}')
      SENSIBLE_DEFAULT
    end
    
        def path
      @file.respond_to?(:path) ? @file.path : @file
    end
    
          class ValidateAttachmentPresenceMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
        end