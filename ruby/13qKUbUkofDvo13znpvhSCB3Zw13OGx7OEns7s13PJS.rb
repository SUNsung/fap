
        
              message = TestMailer.send_test(args[:to_address])
      Email::Sender.new(message, :test_message).send
    end
    
      protected
    
        res << inp.to_html
  end
  res << '</form>'
end
    
    clsJavaCompile 	= Rjb::import('javaCompile.CompileSourceInMemory')
clsCreateJar	= Rjb::import('javaCompile.CreateJarFile')
clsFile			= Rjb::import('java.io.File')
system			= Rjb::import('java.lang.System')
#clsString	= Rjb::import('java.lang.String')
    
      def initialize(filename)
    begin
      f = File.new(filename)
      @template = f.read
    rescue Errno::ENOENT
    end
  end
    
        on :save_person_after_webfinger do |person|
      # find existing person or create a new one
      person_entity = Person.find_by(diaspora_handle: person.diaspora_id) ||
        Person.new(diaspora_handle: person.diaspora_id, guid: person.guid,
                   serialized_public_key: person.exported_key, pod: Pod.find_or_create_by(url: person.url))
    
        def perform
      return User.none unless valid?
    
          def auth_user_unless_prompt_none!
        prompt = params[:prompt]
        if prompt && prompt.include?('none')
          handle_prompt_none
        elsif prompt && prompt.include?('login')
          new_params = params.except('controller', 'action').permit!.to_h.merge(prompt: prompt.remove('login'))
          reauthenticate(new_params)
        else
          authenticate_user!
        end
      end
    
          rescue_from OpenIDConnect::HttpError do |e|
        http_error_page_as_json(e)
      end
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end

    
        # Returns the larger of the two dimensions
    def larger
      [height, width].max
    end
    
            def description
          'have an attachment named #{@attachment_name}'
        end
    
              @subject.send(@attachment_name).post_processing = false
          @subject.send(@attachment_name).assign(file)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}_file_size'].blank?
        ensure
          @subject.send(@attachment_name).post_processing = true
        end
    
          def validate_before_processing(validator_class, options)
        options = options.dup
        attributes = options.delete(:attributes)
        attributes.each do |attribute|
          options[:attributes] = [attribute]
          create_validating_before_filter(attribute, validator_class, options)
        end
      end