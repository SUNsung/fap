
        
                  # Generate default options for collection helpers, such as :checked and
          # :disabled.
          def default_html_options_for_collection(item, value)
            html_options = @html_options.dup
    
              add_default_name_and_id_for_value(tag_value, name_and_id)
          options.delete('index')
          options.delete('namespace')
          options['for'] = name_and_id['id'] unless options.key?('for')
    
        initializer 'action_view.form_with_generates_ids' do |app|
      ActiveSupport.on_load(:action_view) do
        form_with_generates_ids = app.config.action_view.delete(:form_with_generates_ids)
        unless form_with_generates_ids.nil?
          ActionView::Helpers::FormHelper.form_with_generates_ids = form_with_generates_ids
        end
      end
    end
    
        def initialize(lookup_context)
      @lookup_context = lookup_context
    end
    
        odie 'Unknown command: #{cmd}' unless path
    puts path
  end
end

    
          new_name = name
      new_path = path
      new_remote = default_remote
    
      # The global load paths for Sass files. This is meant for plugins and
  # libraries to register the paths to their Sass stylesheets to that they may
  # be `@imported`. This load path is used by every instance of {Sass::Engine}.
  # They are lower-precedence than any load paths passed in via the
  # {file:SASS_REFERENCE.md#load_paths-option `:load_paths` option}.
  #
  # If the `SASS_PATH` environment variable is set,
  # the initial value of `load_paths` will be initialized based on that.
  # The variable should be a colon-separated list of path names
  # (semicolon-separated on Windows).
  #
  # Note that files on the global load path are never compiled to CSS
  # themselves, even if they aren't partials. They exist only to be imported.
  #
  # @example
  #   Sass.load_paths << File.dirname(__FILE__ + '/sass')
  # @return [Array<String, Pathname, Sass::Importers::Base>]
  def self.load_paths
    @load_paths ||= if ENV['SASS_PATH']
                      ENV['SASS_PATH'].split(Sass::Util.windows? ? ';' : ':')
                    else
                      []
                    end
  end
    
          # Returns the path to a file for the given key.
      #
      # @param key [String]
      # @return [String] The path to the cache file.
      def path_to(key)
        key = key.gsub(/[<>:\\|?*%]/) {|c| '%%%03d' % c.ord}
        File.join(cache_location, key)
      end
    end
  end
end

    
              def set_local_#{name}(name, value)
            @#{name}s ||= {}
            @#{name}s[name.tr('_', '-')] = value
          end
    
          opts.on('--precision NUMBER_OF_DIGITS', Integer,
              'How many digits of precision to use when outputting decimal numbers.',
              'Defaults to #{Sass::Script::Value::Number.precision}.') do |precision|
        Sass::Script::Value::Number.precision = precision
      end
    
      gem.add_development_dependency 'danger'
  gem.add_development_dependency 'mocha'
  gem.add_development_dependency 'rspec'
  gem.add_development_dependency 'rubocop', '0.48.1'
end

    
            filter = Object.new
        def filter.filter(servers)
          block.call(servers)
        end
      elsif !filter.respond_to? :filter
        raise TypeError, 'Provided custom filter <#{filter.inspect}> does ' \
                         'not have a public 'filter' method'
      end
      @custom_filters ||= []
      @custom_filters << filter
    end
    
          def roles_for(names)
        options = extract_options(names)
        s = Filter.new(:role, names).filter(servers_by_key.values)
        s.select { |server| server.select?(options) }
      end
    
      get(/.+/) do
    send_sinatra_file(request.path) {404}
  end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
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
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)
