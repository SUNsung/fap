def test_dir(*subdirs)
  File.join(TEST_DIR, *subdirs)
end
    
    STDOUT.sync = true
    
          new_theme_name = args.join('_')
      theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
      if theme.path.exist?
        Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.'
      end
    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
          def parse(content)
        measure_time do
          @template = Liquid::Template.parse(content, :line_numbers => true)
        end
    
        end
  end
end

    
          # This gets the value of the block with the given key.
      def get(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$\r?\n?(.*?)\r?\n?^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        match  = regexp.match(@value)
        return nil if !match
        match[1]
      end
    
                o.on('--provider PROVIDER', String,
                 'The specific provider type for the box to remove') do |p|
              options[:provider] = p
            end
    
            type = argv.shift.to_sym
        name = argv.shift.to_sym
    
          def collect_rows(records)
        records.map do |rec|
          Row.new.tap { |row| yield(rec, row) }
        end
      end
    
    desc 'preview the site in a web browser'
task :preview do
  raise '### You haven't set anything up yet. First run `rake install` to set up an Octopress theme.' unless File.directory?(source_dir)
  puts 'Starting to watch source with Jekyll and Compass. Starting Rack on port #{server_port}'
  system 'compass compile --css-dir #{source_dir}/stylesheets' unless File.exist?('#{source_dir}/stylesheets/screen.css')
  jekyllPid = Process.spawn({'OCTOPRESS_ENV'=>'preview'}, 'jekyll build --watch')
  compassPid = Process.spawn('compass watch')
  rackupPid = Process.spawn('rackup --port #{server_port}')
    
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