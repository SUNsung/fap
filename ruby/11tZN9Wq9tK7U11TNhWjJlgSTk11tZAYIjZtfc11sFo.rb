
        
            def register_rails_engine
      require 'bootstrap-sass/engine'
    end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
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
    
          spec['version'] = Bootstrap::VERSION
    
    begin
  require 'bundler/setup'
rescue LoadError
  $stderr.puts '[*] Metasploit requires the Bundler gem to be installed'
  $stderr.puts '    $ gem install bundler'
  exit(1)
end
    
      let(:help_output) do
    out, _err = capture_io do
      flags '--help', '-h'
    end
    out
  end
    
          expect('.border-color-all').to have_rule(rule)
    end
  end
    
          expect('.border-width-alternate').to have_rule(rule)
    end
  end
    
          expect('.padding-implied-left').to have_rule(rule)
    end
  end
    
      context 'called with null values' do
    it 'writes rules for others' do
      ruleset = 'position: static; ' +
                'top: 11px; ' +
                'left: 13px;'
      bad_rule = 'position-bottom: null; position-right: null;'
    
    describe 'size' do
  before(:all) do
    ParserSupport.parse_file('library/size')
  end
    
          expect('.all-text-inputs-active').to have_ruleset(ruleset)
    end
  end