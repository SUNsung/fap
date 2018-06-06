
        
          def test_javascript_tag_with_options
    assert_dom_equal '<script id=\'the_js_tag\'>\n//<![CDATA[\nalert('hello')\n//]]>\n</script>',
      javascript_tag('alert('hello')', id: 'the_js_tag')
  end
    
      def url_redirect_with_status
    redirect_to('http://www.example.com', status: :moved_permanently)
  end
    
              # Bubbled up from the adapter require. Prefix the exception message
          # with some guidance about how to address it and reraise.
          else
            raise e.class, 'Error loading the '#{adapter}' Action Cable pubsub adapter. Missing a gem it depends on? #{e.message}', e.backtrace
          end
        end
    
              assert_match 'Could not load the 'ridiculous' Active Record adapter. Ensure that the adapter is spelled correctly in config/database.yml and that you've added the necessary adapter gem to your Gemfile.', error.message
        end
    
      test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
  end
    
      class BareTest < ActiveSupport::TestCase
    test 'response body is a Rack-compatible response' do
      status, headers, body = BareController.action(:index).call(Rack::MockRequest.env_for('/'))
      assert_equal 200, status
      string = ''.dup
    
      def test_register_and_use_json_simple
    with_test_route_set do
      with_params_parsers Mime[:json] => Proc.new { |data| ActiveSupport::JSON.decode(data)['request'].with_indifferent_access } do
        post '/',
          params: '{'request':{'summary':'content...','title':'JSON'}}',
          headers: { 'CONTENT_TYPE' => 'application/json' }
    
      teardown do
    I18n.locale = I18n.default_locale
  end
    
      def caveats
    caveats = []
    begin
      build, f.build = f.build, Tab.for_formula(f)
      s = f.caveats.to_s
      caveats << s.chomp + '\n' if s.length > 0
    ensure
      f.build = build
    end
    caveats << keg_only_text
    caveats << bash_completion_caveats
    caveats << zsh_completion_caveats
    caveats << fish_completion_caveats
    caveats << plist_caveats
    caveats << python_caveats
    caveats << app_caveats
    caveats << elisp_caveats
    caveats.compact.join('\n')
  end
    
        # Get rid of any info 'dir' files, so they don't conflict at the link stage
    info_dir_file = @f.info + 'dir'
    if info_dir_file.file? && !@f.skip_clean?(info_dir_file)
      observe_file_removal info_dir_file
    end
    
      def describe_ruby
    ruby = which 'ruby'
    return 'N/A' if ruby.nil?
    ruby_binary = Utils.popen_read ruby, '-rrbconfig', '-e', \
      'include RbConfig;print'#{CONFIG['bindir']}/#{CONFIG['ruby_install_name']}#{CONFIG['EXEEXT']}''
    ruby_binary = Pathname.new(ruby_binary).realpath
    if ruby == ruby_binary
      ruby
    else
      '#{ruby} => #{ruby_binary}'
    end
  end
    
          options[:root_title] = 'D3.js'
      options[:only_patterns] = [/\.md\z/]
    end
  end
end

    
        options[:skip] = %w(
      contents.html
      genindex.html
      py-modindex.html
      glossary.html
      search.html
      intro/whatsnext.html)
    
        options[:container] = ->(filter) {
      filter.current_url.path.start_with?('/getting-started') ? '#main' : '#content'
    }
    options[:title] = false
    options[:root_title] = 'Elixir'
    
        version 'HashLink' do
      self.base_url = 'https://api.haxe.org/hl/'
    end
    
        BOOKS = %w(apache apc apcu array bc bzip2 calendar csprng classobj ctype curl
      datetime dba dir dom ds eio errorfunc ev event exec exif fileinfo filesystem filter
      ftp funchand gearman geoip gettext gmagick gmp hash ibase iconv iisfunc image
      imagick imap info inotify intl json judy ldap libevent libxml lua mail mailparse
      math mbstring mcrypt memcached misc mysqli network oauth openssl
      outcontrol password pcntl pcre pdo pgsql phar posix proctitle pthreads quickhash regex runkit
      reflection sca session sem session-pgsql shmop simplexml soap sockets solr sphinx spl
      spl-types sqlite3 sqlsrv ssh2 stats stream strings sync taint tidy tokenizer uodbc url
      v8js var varnish weakref xml xmlreader xmlrpc xmlwriter xsl yaf yar yaml zip zlib)
    
          options[:title] = false
      options[:root_title] = 'webpack'
    
        def empty?
      @entries.empty?
    end
    
    
end

    
          def request_authorization_consent_form
        add_claims_to_scopes
        endpoint = Api::OpenidConnect::AuthorizationPoint::EndpointStartPoint.new(current_user)
        handle_start_point_response(endpoint)
      end
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
        it 'leaves TempFiles untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['file'][:filename] + '\n' + \
                                                 request.params['file'][:tempfile].read + '\n' + \
                                                 request.params['other']]]
      end
    
        expect(get('/')).to be_ok
  end
end

    
    desc 'Creates a sandbox application for simulating the Spree code in a deployed Rails app'
task :sandbox do
  Bundler.with_clean_env do
    exec('lib/sandbox.sh')
  end
end

    
            def create
          authorize! :create, StockLocation
          @stock_location = StockLocation.new(stock_location_params)
          if @stock_location.save
            respond_with(@stock_location, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_location)
          end
        end