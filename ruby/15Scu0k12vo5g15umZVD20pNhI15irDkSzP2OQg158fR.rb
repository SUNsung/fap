
        
            sidekiq_options queue: 'critical'
    
      module ClassMethods
    def load_types_in(module_name, my_name = module_name.singularize)
      const_set(:MODULE_NAME, module_name)
      const_set(:BASE_CLASS_NAME, my_name)
      const_set(:TYPES, Dir[Rails.root.join('app', 'models', module_name.underscore, '*.rb')].map { |path| module_name + '::' + File.basename(path, '.rb').camelize })
    end
    
          if options[:type] == :array && (options[:values].blank? || !options[:values].is_a?(Array))
        raise ArgumentError.new('When using :array as :type you need to provide the :values as an Array')
      end
    
      def table_sort
    raise('You must call set_table_sort in any action using table_sort.') unless @table_sort_info.present?
    @table_sort_info[:order]
  end
    
        respond_to do |format|
      format.html { render layout: !request.xhr? }
      format.json { render json: @jobs }
    end
  end
    
    invalids = []
Parallel.each(links, in_threads: 4) do |link|
  href = link.attribute('href').to_s
  begin
    case check_link(URI.join(BASE_URI, href))
    when (200...300)
      putc('.')
    when (300..302)
      putc('w')
    end
  rescue => e
    putc('F')
    invalids << '#{href} (reason: #{e.message})'
  end
end
    
      it 'ignores underscores in between the digits' do
    '1_2_3asdf'.to_i.should == 123
  end
    
      it 'translates chars not in from_string when it starts with a ^' do
    'hello'.tr_s('^aeiou', '*').should == '*e*o'
    '123456789'.tr_s('^345', 'abc').should == 'c345c'
    'abcdefghijk'.tr_s('^d-g', '9131').should == '1defg1'
    
      it 'translates chars not in from_string when it starts with a ^' do
    'hello'.tr('^aeiou', '*').should == '*e**o'
    '123456789'.tr('^345', 'abc').should == 'cc345cccc'
    'abcdefghijk'.tr('^d-g', '9131').should == '111defg1111'
    
            origin.should_not equal(dynamic)
        (-origin).should equal(-dynamic)
      end
    
        def process_directory
      @options[:input] = @args.shift
      unless @options[:input]
        raise 'Error: directory required when using --recursive.'
      end
    
          opts.on('--cache-location PATH',
              'The path to save parsed Sass files. Defaults to .sass-cache.') do |loc|
        @options[:for_engine][:cache_location] = loc
      end
    
            def define_logger(name, options = {})
          class_eval <<-RUBY, __FILE__, __LINE__ + 1
            def #{name}(message)
              #{options.fetch(:to, :log)}(#{name.inspect}, message)
            end
          RUBY
        end
      end
    end
  end
end

    
        # Returns the Sass/SCSS code for the media query list.
    #
    # @param options [{Symbol => Object}] An options hash (see {Sass::CSS#initialize}).
    # @return [String]
    def to_src(options)
      queries.map {|q| q.to_src(options)}.join(', ')
    end