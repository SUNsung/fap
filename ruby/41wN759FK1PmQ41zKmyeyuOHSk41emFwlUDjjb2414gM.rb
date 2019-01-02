
        
            env.each do |key, value|
      ENV[key] = value
    end
    tasks.each do |task|
      print_header('Running task: #{task}, env: #{env}')
      Rake::Task[task].execute
    end
  end
end
    
              if scanner.eos?
            node = Tree::CssImportNode.new(str, [], supports_condition)
          else
            media_parser = Sass::SCSS::Parser.new(scanner,
              @options[:filename], @options[:importer],
              @line, str.source_range.end_pos.offset)
            media = media_parser.parse_media_query_list
            end_pos = Sass::Source::Position.new(@line, media_parser.offset + 1)
            node = Tree::CssImportNode.new(str, media.to_a, supports_condition)
          end
        end
    
        # @return [String] A description of the executable
    def to_s
      @opts.to_s
    end
    
      gem.required_ruby_version = '>= 2.0'
  gem.add_dependency 'airbrussh', '>= 1.0.0'
  gem.add_dependency 'i18n'
  gem.add_dependency 'rake', '>= 10.0.0'
  gem.add_dependency 'sshkit', '>= 1.9.0'
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
          def add_property(key, value)
        if respond_to?('#{key}=')
          send('#{key}=', value)
        else
          set(key, value)
        end
      end
    
          def add_host(host, properties={})
        new_host = Server[host]
        new_host.port = properties[:port] if properties.key?(:port)
        # This matching logic must stay in sync with `Server#matches?`.
        key = ServerKey.new(new_host.hostname, new_host.port)
        existing = servers_by_key[key]
        if existing
          existing.user = new_host.user if new_host.user
          existing.with(properties)
        else
          servers_by_key[key] = new_host.with(properties)
        end
      end
    
          def remember_location(key)
        location = caller.find do |line|
          IGNORED_LOCATIONS.none? { |i| line.include?(i) }
        end
        (locations[key] ||= []) << location
      end
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end