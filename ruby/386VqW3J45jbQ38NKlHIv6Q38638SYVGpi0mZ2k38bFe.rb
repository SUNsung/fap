
        
        def build_configs(overrides, base_hash = Jekyll::Configuration::DEFAULTS)
  Jekyll::Utils.deep_merge_hashes(base_hash, overrides)
end
    
      Jekyll::External.require_if_present(Jekyll::External.blessed_gems) do |g, ver_constraint|
    cmd = g.split('-').last
    p.command(cmd.to_sym) do |c|
      c.syntax cmd
      c.action do
        Jekyll.logger.abort_with 'You must install the '#{g}' gem' \
          ' version #{ver_constraint} to use the 'jekyll #{cmd}' command.'
      end
    end
  end
    
            while true
          begin
            if Platform.windows?
              # Windows doesn't support non-blocking reads on
              # file descriptors or pipes so we have to get
              # a bit more creative.
    
                o.on('--all', 'Remove all available versions of the box') do |a|
              options[:all] = a
            end
          end
    
          it 'returns self raised to the argument as a Float if the exponent's denominator is not 1' do
        (Rational(3, 4) ** Rational(4, 3)).should be_close(0.681420222312052, TOLERANCE)
        (Rational(3, 4) ** Rational(-4, 3)).should be_close(1.46752322173095, TOLERANCE)
        (Rational(3, 4) ** Rational(4, -3)).should be_close(1.46752322173095, TOLERANCE)
      end
    
        o = Object.new
    assert_warn('') do
      o.instance_eval('def foo(var: bar {|var| var}) var end')
    end
    
      it 'throws an exception for a wrong type' do
    a = @s.typed_wrap_struct(1024)
    lambda { @s.typed_get_struct_other(a) }.should raise_error(TypeError)
  end
    
      def test_status_kill
    return unless Process.respond_to?(:kill)
    return unless Signal.list.include?('KILL')
    
      it 'returns a Time with a UTC offset of the specified number of Rational seconds' do
    t = Time.gm(2007, 1, 9, 12, 0, 0)
    t.localtime(Rational(7201, 2))
    t.should == Time.new(2007, 1, 9, 13, 0, Rational(1, 2), Rational(7201, 2))
    t.utc_offset.should eql(Rational(7201, 2))
  end
    
      def test_freeze
    orig = set = Set[1,2,3]
    assert_equal false, set.frozen?
    set << 4
    assert_same orig, set.freeze
    assert_equal true, set.frozen?
    assert_raise(FrozenError) {
      set << 5
    }
    assert_equal 4, set.size
  end
    
        if GitHub.api_credentials_type == :none
      puts <<~EOS
        You can create a new personal access token:
         #{GitHub::ALL_SCOPES_URL}
        and then set the new HOMEBREW_GITHUB_API_TOKEN as the authentication method.
    
        used_formulae_missing = false
    used_formulae = begin
      ARGV.formulae
    rescue FormulaUnavailableError => e
      opoo e
      used_formulae_missing = true
      # If the formula doesn't exist: fake the needed formula object name.
      ARGV.named.map { |name| OpenStruct.new name: name, full_name: name }
    end
    
      def process_bootstrap
    log_status 'Convert Bootstrap LESS to Sass'
    puts ' repo   : #@repo_url'
    puts ' branch : #@branch_sha #@repo_url/tree/#@branch'
    puts ' save to: #{@save_to.to_json}'
    puts ' twbs cache: #{@cache_path}'
    puts '-' * 60
    
      # Force all access to the app over SSL, use Strict-Transport-Security, and use secure cookies.
  # config.force_ssl = true
    
            tests.each do |test|
          target_module << '\n  target '#{test.name.gsub(/'/, '\\\\\'')}' do\n'
          target_module << '    inherit! :search_paths\n'
          target_module << template_contents(config.default_test_podfile_path, '    ', 'Pods for testing')
          target_module << '\n  end\n'
        end
    
            # Runs the template configuration utilities.
        #
        # @return [void]
        #
        def configure_template
          UI.section('Configuring #{@name} template.') do
            Dir.chdir(@name) do
              if File.exist?('configure')
                system({ 'COCOAPODS_VERSION' => Pod::VERSION }, './configure', @name, *@additional_args)
              else
                UI.warn 'Template does not have a configure file.'
              end
            end
          end
        end
    
          def self.options
        [
          ['--update', 'Run `pod repo update` before listing'],
          ['--stats',  'Show additional stats (like GitHub watchers and forks)'],
        ].concat(super)
      end
    
    @@ login
<form action='/'>
  <label for='user'>User Name:</label>
  <input name='user' value='' />
  <input type='submit' value='GO!' />
</form>
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
        it 'redirects requests with sneaky encoded session cookies' do
      get '/path', {}, 'HTTP_COOKIE' => 'rack.%73ession=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/path')
    end
  end
    
        { # yes, this is ugly, feel free to change that
      '/..' => '/', '/a/../b' => '/b', '/a/../b/' => '/b/', '/a/.' => '/a/',
      '/%2e.' => '/', '/a/%2E%2e/b' => '/b', '/a%2f%2E%2e%2Fb/' => '/b/',
      '//' => '/', '/%2fetc%2Fpasswd' => '/etc/passwd'
    }.each do |a, b|
      it('replaces #{a.inspect} with #{b.inspect}') { expect(get(a).body).to eq(b) }
    end
    
      it 'accepts a session without changes to tracked parameters' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session
    get '/', {}, 'rack.session' => session
    expect(session[:foo]).to eq(:bar)
  end
    
      it 'should not leak changes to env' do
    klass    = described_class
    detector = Struct.new(:app) do
      def call(env)
        was = env.dup
        res = app.call(env)
        was.each do |k,v|
          next if env[k] == v
          fail 'env[#{k.inspect}] changed from #{v.inspect} to #{env[k].inspect}'
        end
        res
      end
    end
    
        respond_to do |format|
      if @book.save
        format.html { redirect_to @book, notice: 'Book was successfully created.' }
        format.json { render :show, status: :created, location: @book }
      else
        format.html { render :new }
        format.json { render json: @book.errors, status: :unprocessable_entity }
      end
    end
  end
    
            def on_array(node)
          process(node, '%i', '%I', '%w', '%W')
        end
    
              self.class.new(lines, offense_annotations)
        end
    
                    end
              end
            RUBY
          end
        end
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates