  def notification_setting_params
    allowed_fields = NotificationSetting::EMAIL_EVENTS.dup
    allowed_fields << :level
    params.require(:notification_setting).permit(allowed_fields)
  end
end

    
    
    {    def replace_escaping(less)
      less = less.gsub(/~'([^']+)'/, '\1').gsub(/~'([^']+)'/, '\1') # Get rid of ~'' escape
      less.gsub!(/\$\{([^}]+)\}/, '$\1') # Get rid of @{} escape
      less.gsub!(/'([^'\n]*)(\$[\w\-]+)([^'\n]*)'/, ''\1#{\2}\3'') # interpolate variable in string, e.g. url('$file-1x') => url('#{$file-1x}')
      less.gsub(/(\W)e\(%\('?([^']*)'?\)\)/, '\1\2') # Get rid of e(%('')) escape
    end
    
            def rejected_types_rejected?
          @missing_rejected_types ||= @rejected_types.select { |type| type_allowed?(type) }
          @missing_rejected_types.none?
        end
      end
    end
  end
end

    
            def failure_message
          'Attachment #{@attachment_name} must be between #{@low} and #{@high} bytes'
        end
    
    
    {
    {  # Returns hash with styles for all classes using Paperclip.
  # Unfortunately current version does not work with lambda styles:(
  #   {
  #     :User => {:avatar => [:small, :big]},
  #     :Book => {
  #       :cover => [:thumb, :croppable]},
  #       :sample => [:thumb, :big]},
  #     }
  #   }
  def self.current_attachments_styles
    Hash.new.tap do |current_styles|
      Paperclip::AttachmentRegistry.each_definition do |klass, attachment_name, attachment_attributes|
        # TODO: is it even possible to take into account Procs?
        next if attachment_attributes[:styles].kind_of?(Proc)
        attachment_attributes[:styles].try(:keys).try(:each) do |style_name|
          klass_sym = klass.to_s.to_sym
          current_styles[klass_sym] ||= Hash.new
          current_styles[klass_sym][attachment_name.to_sym] ||= Array.new
          current_styles[klass_sym][attachment_name.to_sym] << style_name.to_sym
          current_styles[klass_sym][attachment_name.to_sym].map!(&:to_s).sort!.map!(&:to_sym).uniq!
        end
      end
    end
  end
  private_class_method :current_attachments_styles
    
            attachment_names.each do |attachment_name|
          COLUMNS.keys.each do |column_name|
            remove_column(table_name, '#{attachment_name}_#{column_name}')
          end
        end
      end