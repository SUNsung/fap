        it 'returns true' do
          result = Fastlane::FastFile.new.parse('lane :test do
            git_tag_exists(tag: '1.2.0')
          end').runner.execute(:test)
    
      # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
      end
end

    
      def teardown
    rbconfig0 = @rbconfig
    mkconfig0 = @mkconfig
    RbConfig.module_eval {
      remove_const(:CONFIG)
      const_set(:CONFIG, rbconfig0)
      remove_const(:MAKEFILE_CONFIG)
      const_set(:MAKEFILE_CONFIG, mkconfig0)
    }
    MakeMakefile.class_eval {
      remove_const(:CONFIG)
      const_set(:CONFIG, mkconfig0)
    }
    Logging.quiet = @quiet
    Logging.log_close
    FileUtils.rm_f('mkmf.log')
    Dir.chdir(@curdir)
    FileUtils.rm_rf(@tmpdir)
  end
    
      class DummyOutput < String
    alias write concat
  end
  def assert_no_error(*args)
    $stderr, stderr = DummyOutput.new, $stderr
    assert_nothing_raised(*args) {return yield}
  ensure
    stderr, $stderr = $stderr, stderr
    $!.backtrace.delete_if {|e| /\A#{Regexp.quote(__FILE__)}:#{__LINE__-2}/o =~ e} if $!
    assert_empty(stderr)
  end
  alias no_error assert_no_error
    
        # Takes a string +s+ with some HTML in it, and escapes '&', ''', '<' and '>', by
    # replacing them with the appropriate entities.
    #
    # This method is also aliased to h, for convenience.
    #
    # Examples:
    #
    #   require 'rss/utils'
    #
    #   RSS::Utils.html_escape('Dungeons & Dragons')
    #   # => 'Dungeons &amp; Dragons'
    #   RSS::Utils.h('>_>')
    #   # => '&gt;_&gt;'
    def html_escape(s)
      s.to_s.gsub(/&/, '&amp;').gsub(/\'/, '&quot;').gsub(/>/, '&gt;').gsub(/</, '&lt;')
    end
    alias h html_escape
    
            _assert_itunes_duration_not_available_value('5', &rss20_maker)
        _assert_itunes_duration_not_available_value('09:07:14:05', &rss20_maker)
        _assert_itunes_duration_not_available_value('10:5', &rss20_maker)
        _assert_itunes_duration_not_available_value('10:03:5', &rss20_maker)
        _assert_itunes_duration_not_available_value('10:3:05', &rss20_maker)
    
        connections = nil
    saved_session = nil
    server_proc = Proc.new do |ctx, ssl|
      stats = ctx.session_cache_stats
    
    __END__
    
          temp_file = File.open('_escaped_params_tmp_file', 'w')
      begin
        temp_file.write('hello world')
        temp_file.close
    
          it 'should remain unchanged as ASCII-8BIT' do
        body = @app.call({ 'PATH_INFO' => '/'.encode('ASCII-8BIT') })[2][0]
        expect(body).to eq('ASCII-8BIT')
      end
    end
  end
end

    
      it 'passes errors through if :reaction => :report is used' do
    mock_app do
      use Rack::Protection, :reaction => :report
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, [e['protection.failed'].to_s]] }
    end
    
      it 'denies requests with a changing User-Agent header' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_USER_AGENT' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_USER_AGENT' => 'b'
    expect(session).to be_empty
  end
    
      it 'should allow changing the protection mode' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::XSSHeader, :xss_mode => :foo
      run DummyApp
    end