
        
          def remote_url
    object.remote_url.presence
  end
    
      def as_json(options={})
    {
      poll_id:             id,
      post_id:             status_message.id,
      question:            question,
      poll_answers:        poll_answers,
      participation_count: participation_count
    }
  end
    
          def http_error_page_as_json(e)
        render json: {error: :invalid_request, error_description: e.message}, status: 400
      end
    
        def each_definition
      @attachments.each do |klass, attachments|
        attachments.each do |name, options|
          yield klass, name, options
        end
      end
    end
    
          class ValidateAttachmentContentTypeMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
          @allowed_types = []
          @rejected_types = []
        end
    
            def lower_than_low?
          @low.nil? || !passes_validation_with_size(@low - 1)
        end
    
    module Paperclip
  class << self
    attr_writer :registered_attachments_styles_path
    def registered_attachments_styles_path
      @registered_attachments_styles_path ||= Rails.root.join('public/system/paperclip_attachments.yml').to_s
    end
  end
    
          def remove_attachment(table_name, *attachment_names)
        raise ArgumentError, 'Please specify attachment name in your remove_attachment call in your migration.' if attachment_names.empty?
    
      def create_scaffold(source, target)
    transform_r(source, target)
  end
    
            end
      end
    end
  end
end
