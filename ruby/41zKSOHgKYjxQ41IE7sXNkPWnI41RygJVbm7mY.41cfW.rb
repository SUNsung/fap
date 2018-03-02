
        
            if test_conf['database']&.present?
      ActiveRecord::Base.establish_connection(:test)
      yield
      ActiveRecord::Base.establish_connection(Rails.env.to_sym)
    end
  end
    
      def virtual_tags
    object.mentions + object.tags + object.emojis
  end
    
      describe 'PUT #update' do
    it 'updates notifications settings' do
      user.settings['notification_emails'] = user.settings['notification_emails'].merge('follow' => false)
      user.settings['interactions'] = user.settings['interactions'].merge('must_be_follower' => true)
    
          put :update, params: {
        user: {
          setting_boost_modal: '1',
          setting_delete_modal: '0',
        }
      }
    
      describe 'environment' do
    it 'adds the fuse directories to the appropriate paths' do
      expect(ENV).to receive(:append_path).with('PKG_CONFIG_PATH', any_args)
      expect(ENV).to receive(:append_path).with('HOMEBREW_LIBRARY_PATHS', any_args)
      expect(ENV).to receive(:append_path).with('HOMEBREW_INCLUDE_PATHS', any_args)
      subject.modify_build_environment
    end
  end
end
    
          attr_accessor(*VALID_KEYS)
      attr_accessor :pairs
    
          # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end
    
            def log_level?(level, min_level)
          log_levels[level] >= log_levels[min_level]
        end
    
            def initialize
          @values = []
        end
    
        # @abstract
    #
    # Update the clone on the deployment target
    #
    # @return void
    #
    def update
      raise NotImplementedError, 'Your SCM strategy module should provide a #update method'
    end
    
        yield
    
        private
    
        # Returns an extension based on the content type. e.g. 'jpeg' for
    # 'image/jpeg'. If the style has a specified format, it will override the
    # content-type detection.
    #
    # Each mime type generally has multiple extensions associated with it, so
    # if the extension from the original filename is one of these extensions,
    # that extension is used, otherwise, the first in the list is used.
    def content_type_extension attachment, style_name
      mime_type = MIME::Types[attachment.content_type]
      extensions_for_mime_type = unless mime_type.empty?
        mime_type.first.extensions
      else
        []
      end
    
    module Paperclip
  class << self
    attr_writer :registered_attachments_styles_path
    def registered_attachments_styles_path
      @registered_attachments_styles_path ||= Rails.root.join('public/system/paperclip_attachments.yml').to_s
    end
  end