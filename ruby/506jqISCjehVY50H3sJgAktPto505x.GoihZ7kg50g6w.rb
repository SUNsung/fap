
        
                  # Success, exit status 0
          0
        end
      end
    end
  end
end

    
            # Parse the options
        argv = parse_options(opts)
        return if !argv
        if argv.length < 2
          raise Vagrant::Errors::CLIInvalidUsage,
            help: opts.help.chomp
        end
    
        def test_no_retry_option
      spawn_runner '--no-retry'
      buf = Timeout.timeout(TIMEOUT) {@test_out.read}
      refute_match(/^Retrying\.+$/,buf)
      assert_match(/^ +\d+\) Failure:\nTestD#test_fail_at_worker/,buf)
    end
    
      # SecureRandom.hex generates a random hexadecimal string.
  #
  # The argument _n_ specifies the length, in bytes, of the random number to be generated.
  # The length of the resulting hexadecimal string is twice of _n_.
  #
  # If _n_ is not specified or is nil, 16 is assumed.
  # It may be larger in the future.
  #
  # The result may contain 0-9 and a-f.
  #
  #   require 'securerandom'
  #
  #   SecureRandom.hex #=> 'eb693ec8252cd630102fd0d0fb7c3485'
  #   SecureRandom.hex #=> '91dc3bfb4de5b11d029d376634589b61'
  #
  # If a secure random number generator is not available,
  # +NotImplementedError+ is raised.
  def hex(n=nil)
    random_bytes(n).unpack('H*')[0]
  end
    
      def test_pty_check_default
    st1 = st2 = pid = nil
    `echo` # preset $?
    PTY.spawn('cat') do |r,w,id|
      pid = id
      st1 = PTY.check(pid)
      w.close
      r.close
      begin
        sleep(0.1)
      end until st2 = PTY.check(pid)
    end
  rescue RuntimeError
    skip $!
  else
    assert_nil(st1)
    assert_equal(pid, st2.pid)
  end
    
      # TODO: This should probably be replaced with a 'should behave like' that uses
  # the many scoping/binding specs from kernel/eval_spec, since most of those
  # behaviors are the same for instance_eval. See also module_eval/class_eval.
    
          it 'does not allow any other additional option' do
        lambda { 'aiS'.swapcase(:turkic, :ascii) }.should raise_error(ArgumentError)
      end
    end
    
        describe 'modifies self in place for full Unicode case mapping adapted for Turkic languages' do
      it 'upcases ASCII characters according to Turkic semantics' do
        a = 'i'
        a.upcase!(:turkic)
        a.should == 'İ'
      end
    
        res = Net::HTTPClientError.new('1.0', '4xx', 'test response')
    ruby_version_is ''...'2.6' do
      res.error_type.should == Net::HTTPServerException
    end
    ruby_version_is '2.6' do
      res.error_type.should == Net::HTTPClientException
    end
    
        it 'denies requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
      %w(GET HEAD POST PUT DELETE).each do |method|
    it 'accepts #{method} requests when allow_if is true' do
      mock_app do
        use Rack::Protection::HttpOrigin, :allow_if => lambda{|env| env.has_key?('HTTP_ORIGIN') }
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://any.domain.com')).to be_ok
    end
  end
    
        expect(get('/', {}, 'wants' => 'application/xhtml').headers['X-XSS-Protection']).to eq('1; mode=foo')
  end
    
      # Run specs in random order to surface order dependencies. If you find an
  # order dependency and want to debug it, you can fix the order by providing
  # the seed, which is printed after each run.
  #     --seed 1234
  config.order = :random