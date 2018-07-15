
        
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
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
          default_options :escape => :html,
        :escaper => defined?(EscapeUtils) ? EscapeUtils : self
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
      context 'with redirect reaction' do
    before(:each) do
      mock_app do
        use Rack::Protection::CookieTossing, :reaction => :redirect
        run DummyApp
      end
    end
    
      it 'allows passing on values in env' do
    klass    = described_class
    changer  = Struct.new(:app) do
      def call(env)
        env['foo.bar'] = 42
        app.call(env)
      end
    end
    detector = Struct.new(:app) do
      def call(env)
        app.call(env)
      end
    end
    
            end
      end
    end
  end
end

    
        def require(path)
      start = Time.now
      result = require_debug(path)
      duration = Time.now - start