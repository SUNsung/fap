
        
            def register(klass, attachment_name, attachment_options)
      @attachments ||= {}
      @attachments[klass] ||= {}
      @attachments[klass][attachment_name] = attachment_options
    end
    
            def allowed_types_allowed?
          @missing_allowed_types ||= @allowed_types.reject { |type| type_allowed?(type) }
          @missing_allowed_types.none?
        end
    
            def error_when_not_valid?
          @subject.send(@attachment_name).assign(nil)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}'].present?
        end