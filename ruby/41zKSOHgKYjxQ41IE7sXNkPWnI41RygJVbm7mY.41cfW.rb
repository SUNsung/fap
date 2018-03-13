
        
        Mercenary.program(:jekyll) do |p|
  p.version Jekyll::VERSION
  p.description 'Jekyll is a blog-aware, static site generator in Ruby'
  p.syntax 'jekyll <subcommand> [options]'
    
          #
      # Require a gem or gems. If it's not present, show a very nice error
      # message that explains everything and is much more helpful than the
      # normal LoadError.
      #
      # names - a string gem name or array of gem names
      #
      def require_with_graceful_fail(names)
        Array(names).each do |name|
          begin
            Jekyll.logger.debug 'Requiring:', name.to_s
            require name
          rescue LoadError => e
            Jekyll.logger.error 'Dependency Error:', <<-MSG
Yikes! It looks like you don't have #{name} or one of its dependencies installed.
In order to use Jekyll as currently configured, you'll need to install this gem.
    
          process(name)
      read_yaml(base, name)
    end
    
      class FeatureTopicUsers < Jobs::Base
    
      def update
    @notification_setting = current_user.notification_settings.find(params[:id])
    @saved = @notification_setting.update_attributes(notification_setting_params)
    
        groups << @user.authorized_groups.visible_to_user(current_user) if current_user
    groups << @user.authorized_groups.public_to_user(current_user)
    
        projects
  end
end

    
        t = Time.at(946684800).getlocal
    assert_equal(t.sec, Time.at(946684800).sec)
    assert_equal(t.min, Time.at(946684800).min)
    assert_equal(t.hour, Time.at(946684800).hour)
    assert_equal(t.mday, Time.at(946684800).mday)
    assert_equal(t.mon, Time.at(946684800).mon)
    assert_equal(t.year, Time.at(946684800).year)
    assert_equal(t.wday, Time.at(946684800).wday)
    assert_equal(t.yday, Time.at(946684800).yday)
    assert_equal(t.isdst, Time.at(946684800).isdst)
    assert_equal(t.zone, Time.at(946684800).zone)
    assert_zone_encoding(Time.at(946684800))
    assert_equal(t.gmt_offset, Time.at(946684800).gmt_offset)
    assert_equal(t.sunday?, Time.at(946684800).sunday?)
    assert_equal(t.monday?, Time.at(946684800).monday?)
    assert_equal(t.tuesday?, Time.at(946684800).tuesday?)
    assert_equal(t.wednesday?, Time.at(946684800).wednesday?)
    assert_equal(t.thursday?, Time.at(946684800).thursday?)
    assert_equal(t.friday?, Time.at(946684800).friday?)
    assert_equal(t.saturday?, Time.at(946684800).saturday?)
    assert_equal(t.to_a, Time.at(946684800).to_a)
  end
    
    success = clsJavaCompile._invoke('CompileFromMemory','[Ljava.lang.String;[Ljava.lang.String;[Ljava.lang.String;', classNames, codez, compileOpts)
    
    signer._invoke('JarSignerMSF','[Ljava.lang.String;',jarsignerOpts)
    
    	def block_begin(line)
		# Get the block name from label
		temp = line.scan(/\w+/)
		block_name = temp[1].delete('<>:')
    
      if ARGV.include? '--no-ansi'
    STDERR.puts <<-DOC
    WARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile:
    
          # @param  [[Xcodeproj::PBXTarget]] targets
      #         An array which always has a target as its first item
      #         and may optionally contain a second target as its test target
      #
      # @return [String] the text for the target module
      #
      def template_contents(path, prefix, fallback)
        if path.exist?
          path.read.chomp.lines.map { |line| '#{prefix}#{line}' }.join('\n')
        else
          '#{prefix}# #{fallback}'
        end
      end
    end
  end
end

    
          alias default_reaction deny
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
        it 'denies requests with sneaky encoded session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.%73ession=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
    
  it 'should allow changing the protection mode to a string' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => 'ALLOW-FROM foo'
      run DummyApp
    end
    
      it 'should not override the header if already set' do
    mock_app with_headers('X-XSS-Protection' => '0')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-XSS-Protection']).to eq('0')
  end