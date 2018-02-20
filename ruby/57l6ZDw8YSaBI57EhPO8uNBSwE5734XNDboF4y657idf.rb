      subdir = parent.join(leaf)
    
            def matches? subject
          @subject = subject
          @subject = @subject.new if @subject.class == Class
          @allowed_types && @rejected_types &&
          allowed_types_allowed? && rejected_types_rejected?
        end
    
            def matches? subject
          @subject = subject
          @subject = @subject.new if @subject.class == Class
          lower_than_low? && higher_than_low? && lower_than_high? && higher_than_high?
        end
    
        def load_processor(name)
      if defined?(Rails.root) && Rails.root
        filename = '#{name.to_s.underscore}.rb'
        directories = %w(lib/paperclip lib/paperclip_processors)