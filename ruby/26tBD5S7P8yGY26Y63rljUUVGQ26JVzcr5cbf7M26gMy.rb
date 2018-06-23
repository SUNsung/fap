
        
          test 'permits empty params when received not a hash' do
    sanitizer = sanitizer({ 'user' => 'string' })
    sanitized = sanitizer.sanitize(:sign_in)
    
            # To not require reconfirmation after creating with #save called in a
        # callback call skip_create_confirmation!
        def skip_reconfirmation_in_callback!
          @skip_reconfirmation_in_callback = true
        end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
        def define_getters
      define_instance_getter
      define_class_getter
    end
    
      class Railtie
    def self.insert
      Paperclip.options[:logger] = Rails.logger
    
          def validate_blacklist(record, attribute, value)
        if forbidden_types.present? && forbidden_types.any? { |type| type === value }
          mark_invalid record, attribute, forbidden_types
        end
      end