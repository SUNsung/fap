
        
          def framework_version
    @framework_version ||= `rails -v`[/^Rails (.+)$/, 1]
  end
    
        def blank_name?
      @filepath.nil? || @filepath.empty?
    end
    
        EXIF_ROTATED_ORIENTATION_VALUES = [5, 6, 7, 8]
    
        def raise_if_blank_file
      if path.blank?
        raise Errors::NotIdentifiedByImageMagickError.new('Cannot find the geometry of a file with a blank name')
      end
    end
    
        # Returns the style, or the default style if nil is supplied.
    def style attachment, style_name
      style_name || attachment.default_style
    end
  end
end
