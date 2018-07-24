
        
          def failure_message
    exception = request.respond_to?(:get_header) ? request.get_header('omniauth.error') : request.env['omniauth.error']
    error   = exception.error_reason if exception.respond_to?(:error_reason)
    error ||= exception.error        if exception.respond_to?(:error)
    error ||= (request.respond_to?(:get_header) ? request.get_header('omniauth.error.type') : request.env['omniauth.error.type']).to_s
    error.to_s.humanize if error
  end
    
        if resource.errors.empty?
      set_flash_message!(:notice, :confirmed)
      respond_with_navigational(resource){ redirect_to after_confirmation_path_for(resource_name, resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
          @sign_out_via = options[:sign_out_via] || Devise.sign_out_via
      @format = options[:format]
    
        private
    
          when :bye
        sessions.delete(s[:session])
    
    # This is a completely hackish way to do this, and could break with future
# versions of the JDK.  Need to find a better way to use sun.security.tools.KeyTool
# and .JarSigner than modifying the source.  These rely on internal APIs that may
# change.
signer = Rjb::import('javaCompile.SignJar')
#clsKeyTool = Rjb::import('sun.security.tools.KeyTool')
#clsKeyTool = Rjb::import('sun.security.tools.KeyToolMSF')
#clsJarSigner = Rjb::import('javaCompile.SignJar.JarSignerMSF')
#clsJarSigner = Rjb::import('sun.security.tools.JarSigner')
#clsJarSigner = Rjb::import('sun.security.tools.JarSignerMSF')
    
          private
    
        def tasks_without_stage_dependency
      stages + default_tasks
    end
    
          it { expect(subject).to be_truthy }
    end
    
        alias :empty? :empty_file?
    
            def description
          'have an attachment named #{@attachment_name}'
        end
    
            def type_allowed?(type)
          @subject.send('#{@attachment_name}_content_type=', type)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}_content_type'].blank?
        end
    
            def failure_message_when_negated
          'Attachment #{@attachment_name} should not be required'
        end
        alias negative_failure_message failure_message_when_negated
    
                if options.has_key?(validator_kind)
              validator_options = options.delete(validator_kind)
              validator_options = {} if validator_options == true
              conditional_options = options.slice(:if, :unless)
              Array.wrap(validator_options).each do |local_options|
                method_name = Paperclip::Validators.const_get(constant.to_s).helper_method_name
                send(method_name, attributes, local_options.merge(conditional_options))
              end
            end
          end
        end
      end