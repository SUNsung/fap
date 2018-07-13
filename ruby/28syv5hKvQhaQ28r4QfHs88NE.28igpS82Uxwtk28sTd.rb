
        
            it 'returns Rational(1) when self is Rational(-1) and the exponent is positive and even' do
      (Rational(-1) ** bignum_value(0)).should eql(Rational(1))
      (Rational(-1) ** bignum_value(2)).should eql(Rational(1))
    end
    
        it 'evaluates the second conditions lazily with exclusive-end range' do
      collector = proc { |i| ScratchPad << i }
      eval '10.times { |i| i if (i == 4)..collector[i] }'
      ScratchPad.recorded.should == [4]
    end
    
      def test_shared_eval
    bug7671 = '[ruby-core:51296]'
    vs = (1..9).to_a
    eval('vs.select {|n| if n==2..n==16 then 1 end}')
    v = eval('vs.select {|n| if n==3..n==6 then 1 end}')
    assert_equal([*3..6], v, bug7671)
  end
    
    load_extension('typed_data')
    
      def test_document
    @cmd.handle_options %w[--document]
    
      def test_fetch_unmodified
    uri = URI.parse '#{@gem_repo}/specs.#{Gem.marshal_version}'
    t = Time.utc(2013, 1, 2, 3, 4, 5)
    conn, response = util_stub_net_http(:body => '', :code => 304) do |c|
      @request = make_request(uri, Net::HTTP::Get, t, nil)
      [c, @request.fetch]
    end
    
    def report_apps
  running = Set.new
  @app_names.zip(@bundle_ids, @unix_ids).each do |app_name, bundle_id, _unix_id|
    next if excluded_bundle_id bundle_id
    next if excluded_app_name app_name
    bundle_id.gsub!(%r{^(missing value)$}, '<\1>')
    running.add '#{bundle_id}\t#{app_name}'
  end
    
      at_exit { Application.run! if $!.nil? && Application.run? }
end
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end
    
        it 'Reads referrer from Host header when Referer header is missing' do
      env = {'HTTP_HOST' => 'foo.com'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
          it 'should remain unchanged as ASCII-8BIT' do
        body = @app.call({ 'PATH_INFO' => '/'.encode('ASCII-8BIT') })[2][0]
        expect(body).to eq('ASCII-8BIT')
      end
    end
  end
end

    
          def create_worker_file
        template 'worker.rb.erb', File.join('app/workers', class_path, '#{file_name}_worker.rb')
      end
    
          def insert_before(oldklass, newklass, *args)
        i = entries.index { |entry| entry.klass == newklass }
        new_entry = i.nil? ? Entry.new(newklass, *args) : entries.delete_at(i)
        i = entries.index { |entry| entry.klass == oldklass } || 0
        entries.insert(i, new_entry)
      end
    
        # The only way to get npm to respect the 'prefix' setting appears to
    # be to set the --global flag.
    #install_args << '--global'
    install_args += npm_flags
    
        # Publish the package.
    repo_path = build_path('#{name}_repo')
    safesystem('pkgrepo', 'create', repo_path)
    safesystem('pkgrepo', 'set', '-s', repo_path, 'publisher/prefix=#{attributes[:p5p_publisher]}')
    safesystem('pkgsend', '-s', repo_path,
      'publish', '-d', '#{staging_path}', '#{build_path}/#{name}.p5m')
    safesystem('pkgrecv', '-s', repo_path, '-a',
      '-d', build_path('#{name}.p5p'), name)
    
        # Licenses could include more than one.
    # Speaking of just taking the first entry of the field:
    # A crude thing to do, but I suppose it's better than nothing.
    # -- Daniel Haskin, 3/24/2015
    self.license = control['license'][0] || self.license
    
      def install_script
    path = build_path('installer.sh')
    File.open(path, 'w') do |file|
      file.write template('sh.erb').result(binding)
    end
    path
  end
    
        it 'should be the name only if a prefix was not given' do
      subject.name = 'name'
      subject.attributes[:osxpkg_identifier_prefix] = nil
      insist { subject.identifier } == subject.name
    end
  end
    
        def delete(name, **opts)
      options = opts.merge(value: 'deleted', expires: Time.at(0))
      self.[]=(name, options)
    end
  end
end

    
    module Grape
  module DSL
    # Blocks can be executed before or after every API call, using `before`, `after`,
    # `before_validation` and `after_validation`.
    #
    # Before and after callbacks execute in the following order:
    #
    # 1. `before`
    # 2. `before_validation`
    # 3. _validations_
    # 4. `after_validation`
    # 5. _the API call_
    # 6. `after`
    #
    # Steps 4, 5 and 6 only happen if validation succeeds.
    module Callbacks
      extend ActiveSupport::Concern
    
              else
            app.call(env)
          end
        end
      end
    end
  end
end

    
    module Grape
  module Middleware
    module Versioner
      # This middleware sets various version related rack environment variables
      # based on the HTTP Accept header with the pattern:
      # application/vnd.:vendor-:version+:format
      #
      # Example: For request header
      #    Accept: application/vnd.mycompany.a-cool-resource-v1+json
      #
      # The following rack env variables are set:
      #
      #    env['api.type']    => 'application'
      #    env['api.subtype'] => 'vnd.mycompany.a-cool-resource-v1+json'
      #    env['api.vendor]   => 'mycompany.a-cool-resource'
      #    env['api.version]  => 'v1'
      #    env['api.format]   => 'json'
      #
      # If version does not match this route, then a 406 is raised with
      # X-Cascade header to alert Grape::Router to attempt the next matched
      # route.
      class Header < Base
        VENDOR_VERSION_HEADER_REGEX =
          /\Avnd\.([a-z0-9.\-_!#\$&\^]+?)(?:-([a-z0-9*.]+))?(?:\+([a-z0-9*\-.]+))?\z/
    
        it 'should not find disabled buttons when false' do
      expect do
        @session.find_button('Disabled button', disabled: false)
      end.to raise_error(Capybara::ElementNotFound)
    end
    
        it 'should be true after one of the given partial values is unselected' do
      @session.unselect('Briefs', from: 'Underwear')
      expect(@session).to have_no_select('Underwear', with_selected: %w[Boxerbriefs Briefs])
    end
    
    Capybara::SpecHelper.spec '#has_no_table?' do
  before do
    @session.visit('/tables')
  end
    
      it 'should be false if the page has the given title' do
    expect(@session).not_to have_no_title('with_js')
  end
    
        it 'won't change threadsafe once a session is created' do
      Capybara.threadsafe = true
      Capybara.threadsafe = false
      Capybara::Session.new(:rack_test, TestApp)
      expect { Capybara.threadsafe = true }.to raise_error(/Threadsafe setting cannot be changed once a session is created/)
    end
  end
end
