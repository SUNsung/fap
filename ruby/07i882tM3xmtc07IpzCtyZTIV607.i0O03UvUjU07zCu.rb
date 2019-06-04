
        
          # Under Phusion Passenger smart spawning, we need to reopen all IO streams
  # after workers have forked.
  #
  # The rolling file appender uses shared file locks to ensure that only one
  # process will roll the log file. Each process writing to the file must have
  # its own open file descriptor for `flock` to function properly. Reopening
  # the file descriptors after forking ensures that each worker has a unique
  # file descriptor.
  if defined? PhusionPassenger
    PhusionPassenger.on_event(:starting_worker_process) do |forked|
      Logging.reopen if forked
    end
  end
end
    
        it 'generates a jasmine fixture', :fixture => true do
      get :index, params: {conversation_id: @conv1.id}
      save_fixture(html_for('body'), 'conversations_unread')
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
          it_behaves_like 'on a visible post'
    end
    
    describe ResharesController, :type => :controller do
  describe '#create' do
    let(:post_request!) {
      post :create, params: {root_guid: @post_guid}, format: :json
    }
    
          dir = if File.directory?(file_or_dir)
              file_or_dir
            else
              File.dirname(file_or_dir)
            end
      @path_cache[dir] ||= ConfigLoader.configuration_file_for(dir)
      path = @path_cache[dir]
      @object_cache[path] ||= begin
                                print 'For #{dir}: ' if ConfigLoader.debug?
                                ConfigLoader.configuration_from_file(path)
                              end
    end
  end
end

    
        # Iterate over all the options and set defaults
    if self.class.respond_to?(:declared_options)
      self.class.declared_options.each do |option|
        option.attribute_name.tap do |attr|
          # clamp makes option attributes available as accessor methods
          # do --foo-bar is available as 'foo_bar'
          # make these available as package attributes.
          attr = '#{attr}?' if !respond_to?(attr)
          input.attributes[attr.to_sym] = send(attr) if respond_to?(attr)
        end
      end
    end
    
        scripts[:after_install] = template(File.join('pleaserun', 'scripts', 'after-install.sh')).result(binding)
    scripts[:before_remove] = template(File.join('pleaserun', 'scripts', 'before-remove.sh')).result(binding)
  end # def input
    
        args = [ tar_cmd,
             '-C',
             staging_path,
             '-cf',
             payload_tar,
             '--owner=0',
             '--group=0',
             '--numeric-owner',
             '.' ]