
        
          private
    
        find_union(segments, Group).order_id_desc
  end
    
      def self.authenticate(user, app_id, json_response, challenges)
    response = U2F::SignResponse.load_from_json(json_response)
    registration = user.u2f_registrations.find_by_key_handle(response.key_handle)
    u2f = U2F::U2F.new(app_id)
    
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
    
        def render(context)
      if parts = @text.match(/([a-zA-Z\d]*) (.*)/)
        gist, file = parts[1].strip, parts[2].strip
      else
        gist, file = @text.strip, ''
      end
      if gist.empty?
        ''
      else
        script_url = script_url_for gist, file
        code       = get_cached_gist(gist, file) || get_gist_from_web(gist, file)
        html_output_for script_url, code
      end
    end
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
      def render(source)
    template = File.read(source)
    renderer = ERB.new(template)
    context  = LogStash::PluginManager::RenderContext.new(options)
    renderer.result(context.get_binding)
  end
    
      protected
  def extract_fields(filter_string)
    (filter_string.empty? ? [] : filter_string.split(',').map { |s| s.strip.to_sym })
  end
    
              private
    
        def names_for(klass)
      @attachments[klass].keys
    end
    
            def no_error_when_valid?
          @file = StringIO.new('.')
          @subject.send(@attachment_name).assign(@file)
          @subject.valid?
          expected_message = [
            @attachment_name.to_s.titleize,
            I18n.t(:blank, scope: [:errors, :messages])
          ].join(' ')
          @subject.errors.full_messages.exclude?(expected_message)
        end
      end
    end
  end
end

    
    
    {
    {  # Returns hash with styles for all classes using Paperclip.
  # Unfortunately current version does not work with lambda styles:(
  #   {
  #     :User => {:avatar => [:small, :big]},
  #     :Book => {
  #       :cover => [:thumb, :croppable]},
  #       :sample => [:thumb, :big]},
  #     }
  #   }
  def self.current_attachments_styles
    Hash.new.tap do |current_styles|
      Paperclip::AttachmentRegistry.each_definition do |klass, attachment_name, attachment_attributes|
        # TODO: is it even possible to take into account Procs?
        next if attachment_attributes[:styles].kind_of?(Proc)
        attachment_attributes[:styles].try(:keys).try(:each) do |style_name|
          klass_sym = klass.to_s.to_sym
          current_styles[klass_sym] ||= Hash.new
          current_styles[klass_sym][attachment_name.to_sym] ||= Array.new
          current_styles[klass_sym][attachment_name.to_sym] << style_name.to_sym
          current_styles[klass_sym][attachment_name.to_sym].map!(&:to_s).sort!.map!(&:to_sym).uniq!
        end
      end
    end
  end
  private_class_method :current_attachments_styles