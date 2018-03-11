      if options[:type] == :array
        options[:roles] << :completable
        class_eval <<-EOF
          def complete_#{name}
            #{options[:values]}.map { |v| {text: v, id: v} }
          end
        EOF
      end
    
      def table_sort
    raise('You must call set_table_sort in any action using table_sort.') unless @table_sort_info.present?
    @table_sort_info[:order]
  end
    
        respond_to do |format|
      format.html
      format.json { render json: @services }
    end
  end
    
    Struct.new('Blog', :name, :web_url, :rss_url)
blogs = []
    
          opts.on('-F', '--from FORMAT',
        'The format to convert from. Can be css, scss, sass.',
        'By default, this is inferred from the input filename.',
        'If there is none, defaults to css.') do |name|
        @options[:from] = name.downcase.to_sym
        raise 'sass-convert no longer supports LessCSS.' if @options[:from] == :less
        unless [:css, :scss, :sass].include?(@options[:from])
          raise 'Unknown format for sass-convert --from: #{name}'
        end
      end
    
            {
          :always_update     => false,
          :template_location => root + '/public/stylesheets/sass',
          :css_location      => root + '/public/stylesheets',
          :cache_location    => root + '/tmp/sass-cache',
          :always_check      => env != 'production',
          :quiet             => env != 'production',
          :full_exception    => env != 'production'
        }.freeze
      end
    end
  end