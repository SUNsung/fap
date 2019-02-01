
        
              it 'handles the extension parameter correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.rb')
      end
    
            FastlaneCore::CommanderGenerator.new.generate(Cert::Options.available_options, command: c)
    
    Then(/^directories referenced in :linked_files are created in shared$/) do
  dirs = TestApp.linked_files.map { |path| TestApp.shared_path.join(path).dirname }
  dirs.each do |dir|
    run_vagrant_command(test_dir_exists(dir))
  end
end
    
            def lvalue(key)
          key.to_s.chomp('=').to_sym
        end
      end
    end
  end
end

    
          def untrusted_keys
        keys - @trusted_keys
      end
    
    desc 'Update configurations to support publishing to root or sub directory'
task :set_root_dir, :dir do |t, args|
  puts '>>> !! Please provide a directory, eg. rake config_dir[publishing/subdirectory]' unless args.dir
  if args.dir
    if args.dir == '/'
      dir = ''
    else
      dir = '/' + args.dir.sub(/(\/*)(.+)/, '\\2').sub(/\/$/, '');
    end
    rakefile = IO.read(__FILE__)
    rakefile.sub!(/public_dir(\s*)=(\s*)([''])[\w\-\/]*['']/, 'public_dir\\1=\\2\\3public#{dir}\\3')
    File.open(__FILE__, 'w') do |f|
      f.write rakefile
    end
    compass_config = IO.read('config.rb')
    compass_config.sub!(/http_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_path\\1=\\2\\3#{dir}/\\3')
    compass_config.sub!(/http_images_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_images_path\\1=\\2\\3#{dir}/images\\3')
    compass_config.sub!(/http_fonts_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_fonts_path\\1=\\2\\3#{dir}/fonts\\3')
    compass_config.sub!(/css_dir(\s*)=(\s*)([''])[\w\-\/]*['']/, 'css_dir\\1=\\2\\3public#{dir}/stylesheets\\3')
    File.open('config.rb', 'w') do |f|
      f.write compass_config
    end
    jekyll_config = IO.read('_config.yml')
    jekyll_config.sub!(/^destination:.+$/, 'destination: public#{dir}')
    jekyll_config.sub!(/^subscribe_rss:\s*\/.+$/, 'subscribe_rss: #{dir}/atom.xml')
    jekyll_config.sub!(/^root:.*$/, 'root: /#{dir.sub(/^\//, '')}')
    File.open('_config.yml', 'w') do |f|
      f.write jekyll_config
    end
    rm_rf public_dir
    mkdir_p '#{public_dir}#{dir}'
    puts '## Site's root directory is now '/#{dir.sub(/^\//, '')}' ##'
  end
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
    
          # Set the correct feed URL.
      self.data['feed_url'] = '#{category_dir}/#{name}'
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
    
          if File.symlink?(code_path)
        return 'Code directory '#{code_path}' cannot be a symlink'
      end
    
    begin
  #RubyProf::exclude_threads = [ Monitoring ]
  #RubyProf.start
  fire_event(:startup)
  #Sidekiq.logger.error 'Simulating 1ms of latency between Sidekiq and redis'
  #Toxiproxy[:redis].downstream(:latency, latency: 1).apply do
    launcher = Sidekiq::Launcher.new(Sidekiq.options)
    launcher.run
    
          def invoke(*args)
        chain = retrieve.dup
        traverse_chain = lambda do
          if chain.empty?
            yield
          else
            chain.shift.call(*args, &traverse_chain)
          end
        end
        traverse_chain.call
      end
    end
    
          # Pop out a single job and perform it
      def perform_one
        raise(EmptyQueueError, 'perform_one called with empty job queue') if jobs.empty?
        next_job = jobs.first
        Queues.delete_for(next_job['jid'], queue, self.to_s)
        process_job(next_job)
      end