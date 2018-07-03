
        
          def test_escape_javascript
    assert_equal '', escape_javascript(nil)
    assert_equal %(This \\'thing\\' is really\\n netos\\'), escape_javascript(%(This 'thing' is really\n netos'))
    assert_equal %(backslash\\\\test), escape_javascript(%(backslash\\test))
    assert_equal %(dont <\\/close> tags), escape_javascript(%(dont </close> tags))
    assert_equal %(unicode &#x2028; newline), escape_javascript(%(unicode \342\200\250 newline).dup.force_encoding(Encoding::UTF_8).encode!)
    assert_equal %(unicode &#x2029; newline), escape_javascript(%(unicode \342\200\251 newline).dup.force_encoding(Encoding::UTF_8).encode!)
    
    require 'active_record/relation/predicate_builder/association_query_value'
require 'active_record/relation/predicate_builder/polymorphic_array_value'

    
    module ActiveRecord
  class RelationTest < ActiveRecord::TestCase
    fixtures :posts, :comments, :authors, :author_addresses, :ratings, :categorizations
    
      test 'notification for transmit_subscription_confirmation' do
    begin
      @channel.subscribe_to_channel
    
          def open_connection
        env = Rack::MockRequest.env_for '/test', 'HTTP_HOST' => 'localhost', 'HTTP_CONNECTION' => 'upgrade', 'HTTP_UPGRADE' => 'websocket', 'HTTP_ORIGIN' => 'http://rubyonrails.com'
    
      def concurrently(enum)
    enum.map { |*x| Concurrent::Future.execute { yield(*x) } }.map(&:value!)
  end
    
        def send_async(method, *args)
      send method, *args
    end
    
        brew cask install mactex
    EOS
  when 'pip' then <<-EOS.undent
    Homebrew provides pip via: `brew install python`. However you will then
    have two Pythons installed on your Mac, so alternatively you can install
    pip via the instructions at:
    
        ENV.activate_extensions!
    
      def clang_build
    @clang_build ||= MacOS.clang_build_version if MacOS.has_apple_developer_tools?
  end
    
        if initial_revision != current_revision
      puts 'Updated Homebrew from #{shorten_revision(initial_revision)} to #{shorten_revision(current_revision)}.'
      updated = true
    end
    
    unless dups.empty?
  puts '\nDuplicate links:'
  dups.each do |link|
    puts '- #{link}'
    puts `grep -nr '#{link}' README.md`
  end
  puts '\nDone with errors.'
  exit(1)
end
    
            # This returns all synced folder implementations.
        #
        # @return [Registry]
        def synced_folders
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.synced_folders)
            end
          end
        end
    
          alias_method :include?, :key?
      alias_method :has_key?, :key?
      alias_method :member?, :key?
    
          # This returns the keys (or ids) that are in the string.
      #
      # @return [<Array<String>]
      def keys
        regexp = /^#\s*VAGRANT-BEGIN:\s*(.+?)$\r?\n?(.*)$\r?\n?^#\s*VAGRANT-END:\s(\1)$/m
        @value.scan(regexp).map do |match|
          match[0]
        end
      end
    
      def test_open_with_block
    r = nil
    x = Object.new
    y = PTY.open {|ret|
      r = ret;
      assert_kind_of(Array, ret)
      assert_equal(2, ret.length)
      assert_equal(IO, ret[0].class)
      assert_equal(File, ret[1].class)
      _, slave = ret
      assert(slave.tty?)
      assert(File.chardev?(slave.path))
      x
    }
  rescue RuntimeError
    skip $!
  else
    assert(r[0].closed?)
    assert(r[1].closed?)
    assert_equal(y, x)
  end
    
        m = method(:meth)
    obj = Object.new
    
      it 'does copy the backtrace' do
    begin
      # Explicitly raise so a backtrace is associated with the exception.
      # It's tempting to call `set_backtrace` instead, but that complicates
      # the test because it might affect other state (e.g., instance variables)
      # on some implementations.
      raise ExceptionSpecs::InitializeException.new('my exception')
    rescue => e
      @obj = e
    end
    
      # FIXME: do not use conditionals like this around #it blocks
  unless not home = ENV['HOME']
    platform_is_not :windows do
      it 'converts a pathname to an absolute pathname, using ~ (home) as base' do
        File.expand_path('~').should == home
        File.expand_path('~', '/tmp/gumby/ddd').should == home
        File.expand_path('~/a', '/tmp/gumby/ddd').should == File.join(home, 'a')
      end
    
      platform_is_not :windows do
    it 'returns true if the file is a pipe' do
      filename = tmp('i_am_a_pipe')
      File.mkfifo(filename)
    
      it 'dumps an object that has had an ivar added and removed as though the ivar never was set' do
    obj = Object.new
    initial = Marshal.dump(obj)
    obj.instance_variable_set(:@ivar, 1)
    Marshal.dump(obj).should == '\004\bo:\vObject\006:\n@ivari\006'
    obj.send :remove_instance_variable, :@ivar
    Marshal.dump(obj).should == initial
  end
    
          it 'allows Lithuanian as an extra option' do
        'iSa'.capitalize(:turkic, :lithuanian).should == 'İsa'
      end
    
        ruby_version_is '2.5' do
      it 'returns nil if other can't be converted to a string' do
        'abc'.casecmp?(mock('abc')).should be_nil
      end
    end
  end
end

    
        it 'does not allow invalid options' do
      lambda { 'abc'.swapcase(:invalid_option) }.should raise_error(ArgumentError)
    end
  end
    
    describe 'Invoking a method' do
  describe 'with required args after the rest arguments' do
    it 'binds the required arguments first' do
      specs.fooM0RQ1(1).should == [[], 1]
      specs.fooM0RQ1(1,2).should == [[1], 2]
      specs.fooM0RQ1(1,2,3).should == [[1,2], 3]
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
      end
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
      it 'should allow changing the protection mode' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => :deny
      run DummyApp
    end
    
      before(:each) do
    mock_app do
      use Rack::Protection::HttpOrigin
      run DummyApp
    end
  end