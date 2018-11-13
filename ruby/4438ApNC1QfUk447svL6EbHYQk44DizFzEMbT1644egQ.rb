
        
                # rubocop:disable Metrics/MethodLength
        def dispatch(data)
          parser = Http::Parser.new
          parser << data
    
        def arg_is_present?(args, deprecated_argument, message)
      deprecation_message(message) if args.include?(deprecated_argument)
    end
    
          show_github_issues(e.message) if e.show_github_issues
      display_user_error!(e, e.message)
    end
    
          it 'analytics session: launch' do
        expect(SecureRandom).to receive(:uuid).and_return(session_id)
    
          it 'adds docset_bundle_name param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_bundle_name: 'Bundle name'
          )
        end').runner.execute(:test)
    
          it 'handles the extensions parameter with a single element correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.m')
      end
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add *.h *.m', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: #{path}, shell_escape: false)
          end').runner.execute(:test)
        end
      end
    
            # this command is also sent on macOS Sierra and we need to allow it or else the test will fail
        allowed_command = 'security set-key-partition-list -S apple-tool:,apple: -k #{''.shellescape} #{Dir.home}/Library/Keychains/login.keychain-db &> /dev/null'
    
      path = 'assets/stylesheets'
  css_path = args.with_defaults(css_path: 'tmp')[:css_path]
  puts Term::ANSIColor.bold 'Compiling SCSS in #{path}'
  Dir.mkdir(css_path) unless File.directory?(css_path)
  %w(_bootstrap bootstrap/_theme).each do |file|
    save_path = '#{css_path}/#{file.sub(/(^|\/)?_+/, '\1').sub('/', '-')}.css'
    puts Term::ANSIColor.cyan('  #{save_path}') + '...'
    engine    = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    css       = engine.render
    File.open(save_path, 'w') { |f| f.write css }
  end
end
    
      # Disable Rails's static asset server (Apache or nginx will already do this).
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
          out =
        Sass::Util.silence_sass_warnings do
          if @options[:from] == :css
            require 'sass/css'
            Sass::CSS.new(read(input), @options[:for_tree]).render(@options[:to])
          else
            if input_path
              Sass::Engine.for_file(input_path, @options[:for_engine])
            else
              Sass::Engine.new(read(input), @options[:for_engine])
            end.to_tree.send('to_#{@options[:to]}', @options[:for_tree])
          end
        end
    
    run SinatraStaticServer

    
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
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
        execute 'ensure-sidekiq-is-setup-with-monit' do 
      command %Q{ 
        monit reload 
      } 
    end
    
    class SinatraWorker
  include Sidekiq::Worker
    
          Sidekiq.redis do |conn|
        conn.pipelined do
          jobs_to_requeue.each do |queue, jobs|
            conn.rpush('queue:#{queue}', jobs)
          end
        end
      end
      Sidekiq.logger.info('Pushed #{inprogress.size} jobs back to Redis')
    rescue => ex
      Sidekiq.logger.warn('Failed to requeue #{inprogress.size} jobs: #{ex.message}')
    end
    
        def identity
      @@identity ||= '#{hostname}:#{$$}:#{process_nonce}'
    end