
        
          def self.fragment_cache
    @cache ||= DistributedCache.new('am_serializer_fragment_cache')
  end
    
    EOS
end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
    module Jekyll
    
        def poster
      'poster='#{@poster}'' if @poster
    end
    
        def initialize
      clear
    end
    
      # Get list of styles saved on previous deploy (running rake paperclip:refresh:missing_styles)
  def self.get_registered_attachments_styles
    YAML.load_file(Paperclip.registered_attachments_styles_path)
  rescue Errno::ENOENT
    nil
  end
  private_class_method :get_registered_attachments_styles