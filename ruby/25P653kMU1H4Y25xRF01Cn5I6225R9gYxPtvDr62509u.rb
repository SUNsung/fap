
        
            def execute(args)
      topic_id = args[:topic_id]
      raise Discourse::InvalidParameters.new(:topic_id) unless topic_id.present?
    
      def revoke_moderation!
    set_permission('moderator', false)
  end
    
      exec(*cmd)
end
    
    Note that you will likely need to have opened the app at least
once for any login items to be present.
    
        export LANG=en_US.UTF-8
    \e[0m
    DOC
  end
    
          def self.options
        [
          ['--update', 'Run `pod repo update` before listing'],
          ['--stats',  'Show additional stats (like GitHub watchers and forks)'],
        ].concat(super)
      end
    
        def possible_types
      MIME::Types.type_for(@filepath).collect(&:content_type)
    end
    
        # Extracts the Geometry from a 'WxH,O' string
    # Where W is the width, H is the height,
    # and O is the EXIF orientation
    def self.parse(string)
      GeometryParser.new(string).make
    end
    
      def self.save_current_attachments_styles!
    File.open(Paperclip.registered_attachments_styles_path, 'w') do |f|
      YAML.dump(current_attachments_styles, f)
    end
  end
    
            raise LoadError, 'Could not find the '#{name}' processor in any of these paths: #{directories.join(', ')}' unless required.any?
      end
    end