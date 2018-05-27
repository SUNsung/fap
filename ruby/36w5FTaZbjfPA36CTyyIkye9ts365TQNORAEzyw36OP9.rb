    options[:attribution] = <<-HTML
      &copy; 2009&ndash;2018 Jeremy Ashkenas<br>
      Licensed under the MIT License.
    HTML
    
        options[:attribution] = <<-HTML
      &copy; 2010&ndash;2018 Christian Johansen<br>
      Licensed under the BSD License.
    HTML
    
          options[:attribution] = <<-HTML
        &copy; JS Foundation and other contributors<br>
        Licensed under the Creative Commons Attribution License 4.0.
      HTML
    
    module Docs
  class EntryIndex
    attr_reader :entries, :types
    
        alias_method :insert_before, :insert
    
      private
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/follow_request
  def follow_request
    f = Follow.last
    NotificationMailer.follow_request(f.target_account, Notification.find_by(activity: f))
  end
    
        def process_file(input, output)
      input_path, output_path = path_for(input), path_for(output)
      if input_path
        @options[:from] ||=
          case input_path
          when /\.scss$/; :scss
          when /\.sass$/; :sass
          when /\.less$/; raise 'sass-convert no longer supports LessCSS.'
          when /\.css$/; :css
          end
      elsif @options[:in_place]
        raise 'Error: the --in-place option requires a filename.'
      end
    
          mid_string_or_interp = to_string_interpolation(interp.mid)
    
            self.description = <<-DESC
          Remove the cache for a given pod, or clear the cache completely.
    
            def signal_end_of_output
          output_pipe.puts(END_OF_OUTPUT_SIGNAL)
          STDOUT.flush
        end
    
        i0 = index
    r1 = _nt_plugin
    if r1
      r0 = r1
    else
      r2 = _nt_bareword
      if r2
        r0 = r2
      else
        r3 = _nt_string
        if r3
          r0 = r3
        else
          r4 = _nt_number
          if r4
            r0 = r4
          else
            r5 = _nt_array
            if r5
              r0 = r5
            else
              r6 = _nt_hash
              if r6
                r0 = r6
              else
                @index = i0
                r0 = nil
              end
            end
          end
        end
      end
    end
    
        files.each do |file|
      download = file_fetch(file['url'], file['sha1'],target)
    
        def self.definitions_for(klass)
      instance.definitions_for(klass)
    end
    
        def define_flush_errors
      @klass.send(:validates_each, @name) do |record, attr, value|
        attachment = record.send(@name)
        attachment.send(:flush_errors)
      end
    end
    
        # You can add your own processor via the Paperclip configuration. Normally
    # Paperclip will load all processors from the
    # Rails.root/lib/paperclip_processors directory, but here you can add any
    # existing class using this mechanism.
    #
    #   Paperclip.configure do |c|
    #     c.register_processor :watermarker, WatermarkingProcessor.new
    #   end
    def register_processor(name, processor)
      @known_processors ||= {}
      @known_processors[name.to_s] = processor
    end
  end
end

    
            attachment_names.each do |attachment_name|
          COLUMNS.each_pair do |column_name, column_type|
            column_options = options.merge(options[column_name.to_sym] || {})
            add_column(table_name, '#{attachment_name}_#{column_name}', column_type, column_options)
          end
        end
      end