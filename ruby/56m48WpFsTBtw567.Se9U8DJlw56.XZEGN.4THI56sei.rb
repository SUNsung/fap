
        
          context 'successful dry runs' do
    before do
      stub_request(:get, 'http://xkcd.com/').
        with(:headers => {'Accept-Encoding'=>'gzip,deflate', 'User-Agent'=>'Huginn - https://github.com/huginn/huginn'}).
        to_return(:status => 200, :body => File.read(Rails.root.join('spec/data_fixtures/xkcd.html')), :headers => {})
    end
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
      after(:each) do
    @rufus_scheduler.shutdown(:wait)
  end
    
      describe '#interpolate_jsonpaths' do
    let(:payload) { { :there => { :world => 'WORLD' }, :works => 'should work' } }
    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS and others
    # Supported browsers:: Firefox 23+, Safari 7+, Chrome 25+, Opera 15+
    #
    # Description:: Content Security Policy, a mechanism web applications
    #               can use to mitigate a broad class of content injection
    #               vulnerabilities, such as cross-site scripting (XSS).
    #               Content Security Policy is a declarative policy that lets
    #               the authors (or server administrators) of a web application
    #               inform the client about the sources from which the
    #               application expects to load resources.
    #
    # More info::   W3C CSP Level 1 : https://www.w3.org/TR/CSP1/ (deprecated)
    #               W3C CSP Level 2 : https://www.w3.org/TR/CSP2/ (current)
    #               W3C CSP Level 3 : https://www.w3.org/TR/CSP3/ (draft)
    #               https://developer.mozilla.org/en-US/docs/Web/Security/CSP
    #               http://caniuse.com/#search=ContentSecurityPolicy
    #               http://content-security-policy.com/
    #               https://securityheaders.io
    #               https://scotthelme.co.uk/csp-cheat-sheet/
    #               http://www.html5rocks.com/en/tutorials/security/content-security-policy/
    #
    # Sets the 'Content-Security-Policy[-Report-Only]' header.
    #
    # Options: ContentSecurityPolicy configuration is a complex topic with
    #          several levels of support that has evolved over time.
    #          See the W3C documentation and the links in the more info
    #          section for CSP usage examples and best practices. The
    #          CSP3 directives in the 'NO_ARG_DIRECTIVES' constant need to be
    #          presented in the options hash with a boolean 'true' in order
    #          to be used in a policy.
    #
    class ContentSecurityPolicy < Base
      default_options default_src: :none, script_src: ''self'',
                      img_src: ''self'', style_src: ''self'',
                      connect_src: ''self'', report_only: false
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
          def line_class(line)
        if line =~ /^@@/
          'gc'
        elsif line =~ /^\+/
          'gi'
        elsif line =~ /^\-/
          'gd'
        else
          ''
        end
      end
    
          def partial(name)
        if name == :author_template
          self.class.partial('history_authors/#{@page.wiki.user_icons}')
        else
          super
        end
      end
    
      teardown do
    FileUtils.rm_rf(@path)
  end
    
      begin
    require 'gollum-lib'
    wiki = Gollum::Wiki.new(gollum_path, wiki_options)
    if !wiki.exist? then
      raise Gollum::InvalidGitRepositoryError
    end
    if wiki_options[:plantuml_url]
      Gollum::Filter::PlantUML.configure do |config|
        puts 'Using #{wiki_options[:plantuml_url]} as PlantUML endpoint'
        config.url = wiki_options[:plantuml_url]
      end
    end
    puts
    puts 'Loaded Gollum wiki at:'
    puts '#{File.expand_path(gollum_path).inspect}'
    puts
    puts 'Example API calls:'
    puts %(    page = wiki.page('page-name'))
    puts %(    # => <Gollum::Page>)
    puts
    puts %(    page.raw_data)
    puts %(    # => '# My wiki page')
    puts
    puts %(    page.formatted_data)
    puts %(    # => '<h1>My wiki page</h1>')
    puts
    puts 'Full API documentation at:'
    puts 'https://github.com/gollum/gollum-lib'
    puts
    IRB.start_session(binding)
  rescue Gollum::InvalidGitRepositoryError, Gollum::NoSuchPathError
    puts 'Invalid Gollum wiki at #{File.expand_path(gollum_path).inspect}'
    exit 0
  end
else
  require 'gollum/app'
  Precious::App.set(:gollum_path, gollum_path)
  Precious::App.set(:wiki_options, wiki_options)
  Precious::App.settings.mustache[:templates] = wiki_options[:template_dir] if wiki_options[:template_dir]