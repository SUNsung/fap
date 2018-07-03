
        
              logger.log(sev, message)
    end
    
      def validate_evernote_options
    unless evernote_consumer_key.present? &&
      evernote_consumer_secret.present? &&
      evernote_oauth_token.present?
      errors.add(:base, 'Evernote ENV variables and a Service are required')
    end
  end
    
        respond_to do |format|
      format.html { redirect_to user_credentials_path }
      format.json { head :no_content }
    end
  end
    
        options[:attribution] = <<-HTML
      &copy; 2011&ndash;2018 Twitter, Inc.<br>
      &copy; 2011&ndash;2018 The Bootstrap Authors<br>
      Code licensed under the MIT License.<br>
      Documentation licensed under the Creative Commons Attribution License v3.0.
    HTML
    
        options[:container] = '#bd'
    
        def initial_urls
      [ 'https://hexdocs.pm/elixir/#{self.class.release}/api-reference.html',
        'https://hexdocs.pm/eex/#{self.class.release}/EEx.html',
        'https://hexdocs.pm/ex_unit/#{self.class.release}/ExUnit.html',
        'https://hexdocs.pm/iex/#{self.class.release}/IEx.html',
        'https://hexdocs.pm/logger/#{self.class.release}/Logger.html',
        'https://hexdocs.pm/mix/#{self.class.release}/Mix.html',
        'https://elixir-lang.org/getting-started/introduction.html' ]
    end
    
        version 'Neko' do
      self.base_url = 'https://api.haxe.org/neko/'
    end
    
    def usercode(f, out)
  require 'erb'
  compiler = ERB::Compiler.new('%-')
  compiler.put_cmd = compiler.insert_cmd = 'out.<<'
  lineno = f.lineno
  src, = compiler.compile(f.read)
  eval(src, binding, f.path, lineno)
end
    
      it 'uses '-e' in $0' do
    system(*ruby_exe, '-e', 'exit $0 == '-e'').should == true
  end
    
      def test_lambda_longjmp
    assert_eval_with_jit('#{<<~'begin;'}\n#{<<~'end;'}', stdout: '5', success_count: 1)
    begin;
      fib = lambda do |x|
        return x if x == 0 || x == 1
        fib.call(x-1) + fib.call(x-2)
      end
      print fib.call(5)
    end;
  end
    
      def test_chmod_m17n
    bug5671 = '[ruby-dev:44898]'
    Dir.mktmpdir('test-file-chmod-m17n-') do |tmpdir|
      file = File.join(tmpdir, '\u3042')
      File.open(file, 'w'){}
      assert_equal(File.chmod(0666, file), 1, bug5671)
    end
  end
    
        a = []
    a << a
    
      def test_asctime
    t2000 = get_t2000
    assert_equal('Sat Jan  1 00:00:00 2000', t2000.asctime)
    assert_equal(Encoding::US_ASCII, t2000.asctime.encoding)
    assert_kind_of(String, Time.at(0).asctime)
  end
    
    describe :string_unpack_32bit_le_unsigned, shared: true do
  it 'decodes an int with most significant bit set as a positive number' do
    '\x00\xaa\x00\xff'.unpack(unpack_format()).should == [4278233600]
  end
end
    
      class SubclassX
    attr_reader :key
    def initialize(*)
      @key = :value
      super
    end
  end
end

    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
    module Pod
  class Command
    class Init < Command
      self.summary = 'Generate a Podfile for the current directory'
      self.description = <<-DESC
        Creates a Podfile for the current directory if none currently exists. If
        an `XCODEPROJ` project file is specified or if there is only a single
        project file in the current directory, targets will be automatically
        generated based on targets defined in the project.
    
            self.summary = 'The repl listens to commands on standard input'
        self.description = <<-DESC
          The repl listens to commands on standard input and prints their
          result to standard output.
          It accepts all the other ipc subcommands. The repl will signal the
          end of output with the the ASCII CR+LF `\\n\\r`.
        DESC
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
        it 'accepts requests with a single session cookie' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=SESSION_TOKEN'
      expect(last_response).to be_ok
    end
    
        it 'copes with nested arrays' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']['bar']]]
      end
      get '/', :foo => {:bar => '<bar>'}
      expect(body).to eq('&lt;bar&gt;')
    end
    
      it 'should allow changing the protection mode' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => :deny
      run DummyApp
    end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end