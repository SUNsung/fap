
        
          def evernote_client
    EvernoteOAuth::Client.new(
      token:           evernote_oauth_token,
      consumer_key:    evernote_consumer_key,
      consumer_secret: evernote_consumer_secret,
      sandbox:         use_sandbox?
    )
  end
    
        def schedule(method, args, &blk)
      @scheduler.send(method, *args, tag: id, &blk)
    end
    
      def show
    respond_to do |format|
      format.html
      format.json { render json: @event }
    end
  end
    
      def new
    @user_credential = current_user.user_credentials.build
    
          options[:skip_patterns] = [/\A(?:cpp|cs|flash|java|js|neko|php|python|lua|hl|sys)/i]
    end
    
        options[:only_patterns] = [
      /\Abook\/first-edition\//,
      /\Areference\//,
      /\Acollections\//,
      /\Astd\// ]
    
        delegate :empty?, :blank?, to: :pages
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
            p environment.var(name)
      else
        p Script::Parser.parse(text, @line, 0).perform(environment)
      end
    rescue Sass::SyntaxError => e
      puts 'SyntaxError: #{e.message}'
      if @options[:trace]
        e.backtrace.each do |line|
          puts '\tfrom #{line}'
        end
      end
    end
  end
end
