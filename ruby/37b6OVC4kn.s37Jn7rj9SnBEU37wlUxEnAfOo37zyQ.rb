
        
          # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
        projects << @user.personal_projects.visible_to_user(current_user) if current_user
    projects << @user.personal_projects.public_to_user(current_user)
    
        begin
      response = U2F::RegisterResponse.load_from_json(params[:device_response])
      registration_data = u2f.register!(challenges, response)
      registration.update(certificate: registration_data.certificate,
                          key_handle: registration_data.key_handle,
                          public_key: registration_data.public_key,
                          counter: registration_data.counter,
                          user: user,
                          name: params[:name])
    rescue JSON::ParserError, NoMethodError, ArgumentError
      registration.errors.add(:base, 'Your U2F device did not send a valid JSON response.')
    rescue U2F::Error => e
      registration.errors.add(:base, e.message)
    end
    
      def validate_evernote_options
    unless evernote_consumer_key.present? &&
      evernote_consumer_secret.present? &&
      evernote_oauth_token.present?
      errors.add(:base, 'Evernote ENV variables and a Service are required')
    end
  end
    
            @normalized_styles = styles.dup
        styles.each_pair do |name, options|
          @normalized_styles[name.to_sym] = Paperclip::Style.new(name.to_sym, options.dup, self)
        end
      end
      @normalized_styles
    end
    
        # Returns the id of the instance in a split path form. e.g. returns
    # 000/001/234 for an id of 1234.
    def id_partition attachment, style_name
      case id = attachment.instance.id
      when Integer
        ('%09d'.freeze % id).scan(/\d{3}/).join('/'.freeze)
      when String
        id.scan(/.{3}/).first(3).join('/'.freeze)
      else
        nil
      end
    end
    
            def rejected_types_rejected?
          @missing_rejected_types ||= @rejected_types.select { |type| type_allowed?(type) }
          @missing_rejected_types.none?
        end
      end
    end
  end
end

    
            def matches? subject
          @subject = subject
          @subject = subject.new if subject.class == Class
          error_when_not_valid? && no_error_when_valid?
        end
    
        Hash.new.tap do |missing_styles|
      current_styles.each do |klass, attachment_definitions|
        attachment_definitions.each do |attachment_name, styles|
          registered = registered_styles[klass][attachment_name] || [] rescue []
          missed = styles - registered
          if missed.present?
            klass_sym = klass.to_s.to_sym
            missing_styles[klass_sym] ||= Hash.new
            missing_styles[klass_sym][attachment_name.to_sym] ||= Array.new
            missing_styles[klass_sym][attachment_name.to_sym].concat(missed.to_a)
            missing_styles[klass_sym][attachment_name.to_sym].map!(&:to_s).sort!.map!(&:to_sym).uniq!
          end
        end
      end
    end
  end
end

    
        def clear_processors!
      @known_processors.try(:clear)
    end