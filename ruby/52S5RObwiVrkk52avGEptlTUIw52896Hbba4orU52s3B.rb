
        
          def complete_option(method)
    if self.respond_to? 'complete_#{method}'.to_sym
      self.send('complete_#{method}'.to_sym)
    end
  end
    
        def clear
      @attachments = Hash.new { |h,k| h[k] = {} }
    end
    
        private
    
          class ValidateAttachmentPresenceMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
        end
    
            required = directories.map do |directory|
          pathname = File.expand_path(Rails.root.join(directory, filename))
          file_exists = File.exist?(pathname)
          require pathname if file_exists
          file_exists
        end
    
      class Railtie < Rails::Railtie
    initializer 'paperclip.insert_into_active_record' do |app|
      ActiveSupport.on_load :active_record do
        Paperclip::Railtie.insert
      end