
        
            def initialize
      clear
    end
    
        def calculated_type_matches
      possible_types.select do |content_type|
        content_type == type_from_file_contents
      end
    end
    
        # Swaps the height and width if necessary
    def auto_orient
      if EXIF_ROTATED_ORIENTATION_VALUES.include?(@orientation)
        @height, @width = @width, @height
        @orientation -= 4
      end
    end
    
        # Returns an integer timestamp that is time zone-neutral, so that paths
    # remain valid even if a server's time zone changes.
    def updated_at attachment, style_name
      attachment.updated_at
    end
    
            def failure_message_when_negated
          'Should not have an attachment named #{@attachment_name}'
        end
        alias negative_failure_message failure_message_when_negated
    
            protected
    
    
    {  # Returns hash with styles missing from recent run of rake paperclip:refresh:missing_styles
  #   {
  #     :User => {:avatar => [:big]},
  #     :Book => {
  #       :cover => [:croppable]},
  #     }
  #   }
  def self.missing_attachments_styles
    current_styles = current_attachments_styles
    registered_styles = get_registered_attachments_styles