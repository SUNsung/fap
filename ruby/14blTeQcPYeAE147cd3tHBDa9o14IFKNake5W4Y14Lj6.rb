
        
          def xcode_app_path
    File.expand_path('../..', developer_prefix)
  end
    
    abstract_target 'Abstract Target' do
    use_modular_headers!
    
          def self.options
        options = []
        options.concat(super.reject { |option, _| option == '--silent' })
      end
    
      <form method='post' action='/msg'>
    <input type='text' name='msg'>
    <input type='submit' value='Add Message'>
  </form>
    
      def migration_name
    'add_attachment_#{attachment_names.join('_')}_to_#{name.underscore.pluralize}'
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
    
        def path
      @file.respond_to?(:path) ? @file.path : @file
    end