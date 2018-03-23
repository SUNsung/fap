
        
        if Encoding.default_external != Encoding::UTF_8
    
      def ruby_bin
    File.join(RbConfig::CONFIG['bindir'], RbConfig::CONFIG['ruby_install_name'])
  end
    
            private
    
          def run
        update_if_necessary!
    
        # Returns an array containing the errors on this attachment.
    def errors
      @errors
    end
    
        def names_for(klass)
      @attachments[klass].keys
    end
    
            raise LoadError, 'Could not find the '#{name}' processor in any of these paths: #{directories.join(', ')}' unless required.any?
      end
    end
    
      class Railtie < Rails::Railtie
    initializer 'paperclip.insert_into_active_record' do |app|
      ActiveSupport.on_load :active_record do
        Paperclip::Railtie.insert
      end