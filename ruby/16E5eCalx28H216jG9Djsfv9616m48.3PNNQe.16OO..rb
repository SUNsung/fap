
        
        require 'abstract_unit'
    
          attr_reader :subtype, :coder
    
          wait_for_async
      assert_predicate connection.websocket, :alive?
    end
  end
    
        Or via the Cask:
      brew cask install ngrok
    EOS
  end
end

    
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
    
      def userpaths?
    @settings.include? :userpaths
  end
end
    
      def bash_completion_caveats
    if keg && keg.completion_installed?(:bash) then <<-EOS.undent
      Bash completion has been installed to:
        #{HOMEBREW_PREFIX}/etc/bash_completion.d
      EOS
    end
  end
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
          # Find commands in Homebrew/dev-cmd
      if ARGV.homebrew_developer?
        puts
        puts 'Built-in development commands'
        puts_columns internal_development_commands
      end
    
      def gcc_42
    @gcc_42 ||= MacOS.gcc_42_build_version if MacOS.has_apple_developer_tools?
  end
    
      def self.canonical_name(name)
    Formulary.canonical_name(name)
  end
    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end

    
      protected
    
        def teardown
      begin
        if @test_pid
          Timeout.timeout(2) do
            Process.waitpid(@test_pid)
          end
        end
      rescue Timeout::Error
        Process.kill(:KILL, @test_pid) if @test_pid
      ensure
        @test_out&.close
      end
    end
    
        def gen_random_openssl(n)
      @pid = 0 unless defined?(@pid)
      pid = $$
      unless @pid == pid
        now = Process.clock_gettime(Process::CLOCK_REALTIME, :nanosecond)
        OpenSSL::Random.random_add([now, @pid, pid].join(''), 0.0)
        seed = Random.urandom(16)
        if (seed)
          OpenSSL::Random.random_add(seed, 16)
        end
        @pid = pid
      end
      return OpenSSL::Random.random_bytes(n)
    end
    
      def test_open_without_block
    ret = PTY.open
  rescue RuntimeError
    skip $!
  else
    assert_kind_of(Array, ret)
    assert_equal(2, ret.length)
    assert_equal(IO, ret[0].class)
    assert_equal(File, ret[1].class)
    _, slave = ret
    assert(slave.tty?)
    assert(File.chardev?(slave.path))
  ensure
    if ret
      ret[0].close
      ret[1].close
    end
  end
    
      it 'only binds the eval to the receiver' do
    f = Object.new
    f.instance_eval do
      def foo
        1
      end
    end
    f.foo.should == 1
    lambda { Object.new.foo }.should raise_error(NoMethodError)
  end
    
        platform_is_not :windows do
      @block  = `find /dev /devices -type b 2>/dev/null`.split('\n').first
      @char   = `{ tty || find /dev /devices -type c; } 2>/dev/null`.split('\n').last
    end
    
      it 'can read in a block when call open with RDONLY mode' do
    File.open(@file, File::RDONLY) do |f|
      f.gets.should == nil
    end
  end
    
          File.pipe?(filename).should == true
    
          it 'updates string metadata' do
        downcased = '\u{212A}ING'
        downcased.downcase!
    
      ruby_version_is '2.4' do
    describe 'full Unicode case mapping' do
      it 'modifies self in place for all of Unicode with no option' do
        a = 'äÖü'
        a.swapcase!
        a.should == 'ÄöÜ'
      end
    
      describe 'rb_str_resize' do
    it 'reduces the size of the string' do
      str = @s.rb_str_resize('test', 2)
      str.size.should == 2
      @s.RSTRING_LEN(str).should == 2
      str.should == 'te'
    end
    
      def perform(user_id)
    @user = User.find(user_id)
    deliver_digest if @user.allows_digest_emails?
  end
    
            Fabricate(:status, account: alice, text: 'hello world')
        Fabricate(:status, account: bob, text: 'yes hello')
        Fabricate(:status, account: user.account, text: 'test')
    
      def background_color
    '#191b22'
  end
    
    #
# Project
#
    
          when :login_pass