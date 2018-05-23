
        
            keys.find do |key|
      if key.to_s.end_with?('_or_later')
        later_tag = key.to_s[/(\w+)_or_later$/, 1].to_sym
        MacOS::Version.from_symbol(later_tag) <= tag_version
      end
    end
  end
end

    
      def post_superenv_hacks
    # Only allow Homebrew-approved directories into the PATH, unless
    # a formula opts-in to allowing the user's path.
    if formula.env.userpaths? || reqs.any? { |rq| rq.env.userpaths? }
      ENV.userpaths!
    end
  end
    
      def describe_system_ruby
    s = ''
    case RUBY_VERSION
    when /^1\.[89]/, /^2\.0/
      s << '#{RUBY_VERSION}-p#{RUBY_PATCHLEVEL}'
    else
      s << RUBY_VERSION
    end
    
          GitHub.open 'https://api.github.com/repos/#{user}/homebrew-#{repo}/git/trees/HEAD?recursive=1' do |json|
        json['tree'].each do |object|
          next unless object['type'] == 'blob'
    
      def python(_options = {}, &block)
    opoo 'Formula#python is deprecated and will go away shortly.'
    block.call if block_given?
    PythonRequirement.new
  end
  alias_method :python2, :python
  alias_method :python3, :python
end

    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
      protected
    def after_resetting_password_path_for(resource)
      Devise.sign_in_after_reset_password ? after_sign_in_path_for(resource) : new_session_path(resource_name)
    end
    
          def mailer_from(mapping)
        mailer_sender(mapping, :from)
      end
    
          raise 'Could not find a valid mapping for #{obj.inspect}'
    end
    
      def owner=(owner)
    resource.owner   = owner
    resource.version = resource.checksum || ERB::Util.url_encode(resource.url)
  end
    
        if !pinned.empty? && !ARGV.include?('--ignore-pinned')
      ofail 'Not upgrading #{Formatter.pluralize(pinned.length, 'pinned package')}:'
      puts pinned.map { |f| '#{f.full_specified_name} #{f.pkg_version}' } * ', '
    end
    
        def yielder
      if instance_variable_defined?(:@satisfied)
        @satisfied
      elsif @options[:build_env]
        require 'extend/ENV'
        ENV.with_build_environment { yield @proc }
      else
        yield @proc
      end
    end
  end
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
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
    
      %w(GET HEAD).each do |method|
    it 'accepts #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).to be_ok
    end
  end
    
      it 'accepts a session without changes to tracked parameters' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session
    get '/', {}, 'rack.session' => session
    expect(session[:foo]).to eq(:bar)
  end
    
        expect(get('/')).to be_ok
  end
end

    
      def _nt_not_in_operator
    start_index = index
    if node_cache[:not_in_operator].has_key?(index)
      cached = node_cache[:not_in_operator][index]
      if cached
        cached = SyntaxNode.new(input, index...(index + 1)) if cached == true
        @index = cached.interval.end
      end
      return cached
    end