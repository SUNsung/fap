
        
                      Time.utc(
                default[:year], default[:month], default[:day],
                default[:hour], default[:min], default[:sec]
              )
            end
          end
      end
    end
  end
end

    
            def formatted_code_for(source_code, line_counter, indent, output)
          start_value = (output == :html) ? {} : []
          source_code.inject(start_value) do |result, line|
            line_counter += 1
            if output == :html
              result.update(line_counter.to_s => '%#{indent}s %s\n' % ['', line])
            else
              result << '%#{indent}s: %s' % [line_counter, line]
            end
          end
        end
    end
  end
    
          def initialize(string)
        @string = string.to_s
        @type = Types[:text]
      end
    
      ruby_version_is '2.5' do
    describe ':uplevel keyword argument' do
      before :each do
        $VERBOSE = true
      end
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
          # @see Base#\_store
      def _store(key, version, sha, contents)
        compiled_filename = path_to(key)
        FileUtils.mkdir_p(File.dirname(compiled_filename))
        Sass::Util.atomic_create_and_write_file(compiled_filename) do |f|
          f.puts(version)
          f.puts(sha)
          f.write(contents)
        end
      rescue Errno::EACCES
        # pass
      end
    
          if !@options[:update] && !@options[:watch] &&
          @args.first && colon_path?(@args.first)
        if @args.size == 1
          @args = split_colon_path(@args.first)
        else
          @fake_update = true
          @options[:update] = true
        end
      end
      load_compass if @options[:compass]
      return interactive if @options[:interactive]
      return watch_or_update if @options[:watch] || @options[:update]
      super
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
          def initialize(variables)
        super(variables)
        @validators = {}
      end