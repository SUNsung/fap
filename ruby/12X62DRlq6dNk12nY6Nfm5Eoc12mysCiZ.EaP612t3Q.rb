
        
          def detect_stdlibs(compiler)
    keg = Keg.new(formula.prefix)
    CxxStdlib.check_compatibility(formula, deps, keg, compiler)
    
      def <<(o)
    @settings << o
    self
  end
    
        option_names.any? do |name|
      if option_defined? 'with-#{name}'
        include? 'with-#{name}'
      elsif option_defined? 'without-#{name}'
        !include? 'without-#{name}'
      else
        false
      end
    end
  end
    
        # Get rid of any info 'dir' files, so they don't conflict at the link stage
    info_dir_file = @f.info + 'dir'
    if info_dir_file.file? && !@f.skip_clean?(info_dir_file)
      observe_file_removal info_dir_file
    end
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
        cd HOMEBREW_PREFIX
    exec 'find', *args
  end
    
    gem 'rails-controller-testing'
    
        # The path used after confirmation.
    def after_confirmation_path_for(resource_name, resource)
      if signed_in?(resource_name)
        signed_in_root_path(resource)
      else
        new_session_path(resource_name)
      end
    end
    
      # Sets the flash message with :key, using I18n. By default you are able
  # to set up your messages using specific resource scope, and if no message is
  # found we look to the default scope. Set the 'now' options key to a true
  # value to populate the flash.now hash in lieu of the default flash hash (so
  # the flash message will be available to the current action instead of the
  # next action).
  # Example (i18n locale file):
  #
  #   en:
  #     devise:
  #       passwords:
  #         #default_scope_messages - only if resource_scope is not found
  #         user:
  #           #resource_scope_messages
  #
  # Please refer to README or en.yml locale file to check what messages are
  # available.
  def set_flash_message(key, kind, options = {})
    message = find_message(kind, options)
    if options[:now]
      flash.now[key] = message if message.present?
    else
      flash[key] = message if message.present?
    end
  end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
      # True values used to check params
  TRUE_VALUES = [true, 1, '1', 't', 'T', 'true', 'TRUE']