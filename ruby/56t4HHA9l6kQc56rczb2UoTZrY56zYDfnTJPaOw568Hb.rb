
        
            def container
      @container ||= site.config['collections_dir']
    end
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
            def connect(websocket, handshake)
          @connections_count += 1
          if @connections_count == 1
            message = 'Browser connected'
            message += ' over SSL/TLS' if handshake.secure?
            Jekyll.logger.info 'LiveReload:', message
          end
          websocket.send(
            JSON.dump(
              :command    => 'hello',
              :protocols  => ['http://livereload.com/protocols/official-7'],
              :serverName => 'jekyll'
            )
          )
    
          # Private: Determine whether a class name is an allowed custom
      #   markdown class name.
      #
      # parser_name - the name of the parser class
      #
      # Returns true if the parser name contains only alphanumeric
      # characters and is defined within Jekyll::Converters::Markdown
      def custom_class_allowed?(parser_name)
        parser_name !~ %r![^A-Za-z0-9_]! && self.class.constants.include?(
          parser_name.to_sym
        )
      end
    end
  end
end

    
          #
      # Require a gem or file if it's present, otherwise silently fail.
      #
      # names - a string gem name or array of gem names
      #
      def require_if_present(names)
        Array(names).each do |name|
          begin
            require name
          rescue LoadError
            Jekyll.logger.debug 'Couldn't load #{name}. Skipping.'
            yield(name, version_constraint(name)) if block_given?
            false
          end
        end
      end
    
    See CONTRIBUTING.md for more information.
    
    def load_apps
  out, err, status = Open3.capture3('/usr/bin/osascript', '-e', 'tell application 'System Events' to get (name, bundle identifier, unix id) of every process')
  if status.exitstatus > 0
    puts err
    exit status.exitstatus
  end
  out = out.split(', ')
  one_third   = out.length / 3
  @app_names  = out.shift(one_third)
  @bundle_ids = out.shift(one_third)
  @unix_ids   = out.shift(one_third)
end
    
    desc 'Dumps output to a CSS file for testing'
task :debug do
  require 'sass'
  path = Bootstrap.stylesheets_path
  %w(bootstrap).each do |file|
    engine = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    File.open('./#{file}.css', 'w') { |f| f.write(engine.render) }
  end
end
    
              if @address.update_attributes(address_params)
            respond_with(@address, default_template: :show)
          else
            invalid_resource!(@address)
          end
        end
    
            def assign(node)
          @assignments << Assignment.new(node, self)
        end
    
    module RuboCop
  module Cop
    module Performance
      # This cop identifies the use of `Regexp#match` or `String#match`, which
      # returns `#<MatchData>`/`nil`. The return value of `=~` is an integral
      # index/`nil` and is more performant.
      #
      # @example
      #   # bad
      #   do_something if str.match(/regex/)
      #   while regex.match('str')
      #     do_something
      #   end
      #
      #   # good
      #   method(str =~ /regex/)
      #   return value unless regex =~ 'str'
      class RedundantMatch < Cop
        MSG = 'Use `=~` in places where the `MatchData` returned by ' \
              '`#match` will not be used.'.freeze
    
          # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `def` node body is a void context
      def void_context?
        method?(:initialize) || assignment_method?
      end
    
        if as == :json
      if api_error?(data)
        data = generate_error_hash(data)
      else
        selected_fields = extract_fields(filter.to_s.strip)
        data.select! { |k,v| selected_fields.include?(k) } unless selected_fields.empty?
        unless options.include?(:exclude_default_metadata)
          data = data.to_hash
          if data.values.size == 0 && selected_fields.size > 0
            raise LogStash::Api::NotFoundError
          end
          data = default_metadata.merge(data)
        end
      end