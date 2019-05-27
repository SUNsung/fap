
        
                    @template_object.label(@object_name, @sanitized_attribute_name, @text, html_options, &block)
          end
        end
    
    require 'action_view/helpers/tags/collection_helpers'
    
              def default_datetime(options)
            return if options[:include_blank] || options[:prompt]
    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
      def update
    setting.data = params[:data]
    setting.save!
    
      def export_filename
    '#{controller_name}.csv'
  end
end

    
      private
    
      private
    
          def lines
        lines = []
        @diff.diff.split('\n')[2..-1].each_with_index do |line, line_index|
          lines << { :line  => line,
                     :class => line_class(line),
                     :ldln  => left_diff_line_number(0, line),
                     :rdln  => right_diff_line_number(0, line) }
        end if @diff
        lines
      end
    
          def upload_dest
        @upload_dest
      end
    
        EMOJI_PATHNAME = Pathname.new(Gemojione.images_path).freeze