
        
        describe 'The if expression' do
  ruby_version_is '2.4' do
    describe 'accepts multiple assignments in conditional expression' do
      before(:each) { ScratchPad.record([]) }
      after(:each)  { ScratchPad.clear }
    
        FileUtils.mkdir_p gemspec_dir
    
        @server_uri = base_server_uri + '/yaml'
    @server_z_uri = base_server_uri + '/yaml.Z'
    
      def test_get_proxy_from_env_fallback
    ENV['http_proxy'] = @proxy_uri
    request = make_request @uri, nil, nil, nil
    proxy = request.proxy_uri
    
      def test_ASET # '[]='
    t = Time.now
    h = @cls.new
    h[1]     = 'one'
    h[2]     = 'two'
    h[3]     = 'three'
    h[self]  = 'self'
    h[t]     = 'time'
    h[nil]   = 'nil'
    h['nil'] = nil
    assert_equal('one',   h[1])
    assert_equal('two',   h[2])
    assert_equal('three', h[3])
    assert_equal('self',  h[self])
    assert_equal('time',  h[t])
    assert_equal('nil',   h[nil])
    assert_equal(nil,     h['nil'])
    assert_equal(nil,     h['koala'])
    
        # https://bugs.ruby-lang.org/issues/12091
    assert_nothing_raised {
      assert_equal [1,2,3,4], set.to_a
    }
  end
    
      it 'ignores NULL bytes between directives' do
    array = '@9\x99\x9a?\xb333'.unpack(unpack_format('\000', 2))
    array.should == [2.9000000953674316, 1.399999976158142]
  end
    
      def contents; end
    
      def create_gist(files, description)
    url = 'https://api.github.com/gists'
    data = { 'public' => true, 'files' => files, 'description' => description }
    scopes = GitHub::CREATE_GIST_SCOPES
    GitHub.open_api(url, data: data, scopes: scopes)['html_url']
  end
    
    class DependencyCollector
  module Compat
    # Define the languages that we can handle as external dependencies.
    LANGUAGE_MODULES = Set[
      :lua, :lua51, :perl, :python, :python3, :ruby
    ].freeze
    
    class SubversionRequirement < Requirement
  fatal true
  satisfy do
    odisabled('SubversionRequirement', ''depends_on \'subversion\''')
  end
end
    
      def display_s
    name
  end
    
      it 'should not set the X-Frame-Options for other content types' do
    expect(get('/', {}, 'wants' => 'text/foo').headers['X-Frame-Options']).to be_nil
  end
    
      %w(POST PUT DELETE).each do |method|
    it 'denies #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).not_to be_ok
    end
    
      it 'accepts a session without changes to tracked parameters' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session
    get '/', {}, 'rack.session' => session
    expect(session[:foo]).to eq(:bar)
  end