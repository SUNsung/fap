
        
        def bottle_tag
  if MacOS.version >= :lion
    MacOS.cat
  elsif MacOS.version == :snow_leopard
    Hardware::CPU.is_64_bit? ? :snow_leopard : :snow_leopard_32
  else
    # Return, e.g., :tiger_g3, :leopard_g5_64, :leopard_64 (which is Intel)
    if Hardware::CPU.type == :ppc
      tag = '#{MacOS.cat}_#{Hardware::CPU.family}'.to_sym
    else
      tag = MacOS.cat
    end
    MacOS.prefer_64_bit? ? '#{tag}_64'.to_sym : tag
  end
end
    
    module BuildEnvironmentDSL
  def env(*settings)
    @env ||= BuildEnvironment.new
    @env.merge(settings)
  end
end
    
      # Clean a top-level (bin, sbin, lib) directory, recursively, by fixing file
  # permissions and removing .la files, unless the files (or parent
  # directories) are protected by skip_clean.
  #
  # bin and sbin should not have any subdirectories; if either do that is
  # caught as an audit warning
  #
  # lib may have a large directory tree (see Erlang for instance), and
  # clean_dir applies cleaning rules to the entire tree
  def clean_dir(d)
    d.find do |path|
      path.extend(ObserverPathnameExtension)
    
      private
    
    class ReporterHub
  attr_reader :reporters
    
      def self.bottle_sha1(*)
  end
    
        html_filters.push 'django/entries', 'sphinx/clean_html', 'django/clean_html'
    text_filters.push 'django/fix_urls'
    
        REDIRECT_RGX = /http-equiv='refresh'/i
    NOT_FOUND_RGX = /<title>Not Found<\/title>/
    
      def test_truncate_wbuf
    Tempfile.create('test-truncate') {|f|
      f.print 'abc'
      f.truncate(0)
      f.print 'def'
      f.flush
      assert_equal('\0\0\0def', File.read(f.path), '[ruby-dev:24191]')
    }
  end
    
        bad = [
      5, true, false, nil,
      0.0, 1.72723e-77,
      :foo, 'dsym_#{self.object_id.to_s(16)}_#{Time.now.to_i.to_s(16)}'.to_sym,
      'str',
    ].select do |x|
      hash = {x => bug9381}
      hash[wrapper.new(x)] != bug9381
    end
    assert_empty(bad, bug9381)
  end
    
      Car = Struct.new(:make, :model, :year)
    
      def self.join_dying_thread_with_outer_ensure(kill_method_name=:kill)
    t = dying_thread_with_outer_ensure(kill_method_name) { yield }
    lambda { t.join }.should raise_error(RuntimeError, 'In dying thread')
    return t
  end
    
      it 'spawns a new Thread running the block' do
    run = false
    t = Thread.send(@method) { run = true }
    t.should be_kind_of(Thread)
    t.join
    
          EOS
      login!
    end
    
    # include would include the module in Object
# extend only extends the `main` object
extend Sinatra::Delegator
    
        it 'Reads referrer from Host header when Referer header is missing' do
      env = {'HTTP_HOST' => 'foo.com'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
        it 'redirects requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/')
    end
    
          temp_file = File.open('_escaped_params_tmp_file', 'w')
      begin
        temp_file.write('hello world')
        temp_file.close
    
    
  it 'should allow changing the protection mode to a string' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => 'ALLOW-FROM foo'
      run DummyApp
    end
    
        { # yes, this is ugly, feel free to change that
      '/..' => '/', '/a/../b' => '/b', '/a/../b/' => '/b/', '/a/.' => '/a/',
      '/%2e.' => '/', '/a/%2E%2e/b' => '/b', '/a%2f%2E%2e%2Fb/' => '/b/',
      '//' => '/', '/%2fetc%2Fpasswd' => '/etc/passwd'
    }.each do |a, b|
      it('replaces #{a.inspect} with #{b.inspect}') { expect(get(a).body).to eq(b) }
    end