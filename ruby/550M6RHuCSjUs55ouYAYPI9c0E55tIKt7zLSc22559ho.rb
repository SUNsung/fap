
        
              # Topic may be hard deleted due to spam, no point complaining
      # we would have to look at the topics table id sequence to find cases
      # where this was called with an invalid id, no point really
      return unless topic.present?
    
      def include_url?
    url.present?
  end
    
        def self.each_definition(&block)
      instance.each_definition(&block)
    end
    
        def calculated_type_matches
      possible_types.select do |content_type|
        content_type == type_from_file_contents
      end
    end
    
              @subject.send(@attachment_name).post_processing = false
          @subject.send(@attachment_name).assign(file)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}_file_size'].blank?
        ensure
          @subject.send(@attachment_name).post_processing = true
        end
    
    module Paperclip
  class << self
    attr_writer :registered_attachments_styles_path
    def registered_attachments_styles_path
      @registered_attachments_styles_path ||= Rails.root.join('public/system/paperclip_attachments.yml').to_s
    end
  end
    
        def processor(name) #:nodoc:
      @known_processors ||= {}
      if @known_processors[name.to_s]
        @known_processors[name.to_s]
      else
        name = name.to_s.camelize
        load_processor(name) unless Paperclip.const_defined?(name)
        processor = Paperclip.const_get(name)
        @known_processors[name.to_s] = processor
      end
    end