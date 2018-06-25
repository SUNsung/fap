
        
          included do
    scope :admins, -> { where(admin: true) }
    scope :moderators, -> { where(moderator: true) }
    scope :staff, -> { where('moderator or admin ') }
  end
    
            # Split out the targets into app and test targets
        test_targets, app_targets = project.native_targets.
                              sort_by { |t| t.name.downcase }.
                              partition(&:test_target_type?)
    
          content_type 'application/json'
      LogStash::Json.dump(data, {:pretty => pretty?})
    else
      content_type 'text/plain'
      data.to_s
    end
  end
    
        def clear
      @attachments = Hash.new { |h,k| h[k] = {} }
    end
    
        # Returns a String describing the file's content type
    def detect
      if blank_name?
        SENSIBLE_DEFAULT
      elsif empty_file?
        EMPTY_TYPE
      elsif calculated_type_matches.any?
        calculated_type_matches.first
      else
        type_from_file_contents || SENSIBLE_DEFAULT
      end.to_s
    end
    
            def has_column?
          @subject.column_names.include?('#{@attachment_name}_file_name')
        end
      end
    end
  end
end

    
            protected
    
          def check_validity!
        unless options.has_key?(:content_type) || options.has_key?(:not)
          raise ArgumentError, 'You must pass in either :content_type or :not to the validator'
        end
      end
    end