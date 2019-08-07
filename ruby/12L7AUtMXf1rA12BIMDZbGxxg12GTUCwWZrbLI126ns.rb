
        
            Rex::ThreadFactory.spawn('AESEncryption', false) {
      c1 = OpenSSL::Cipher.new('aes-128-cfb8')
      c1.encrypt
      c1.key=key
      sock.put([0].pack('N'))
      sock.put(c1.iv=c1.random_iv)
      buf1 = socks[0].read(4096)
      while buf1 and buf1 != ''
        sock.put(c1.update(buf1))
        buf1 = socks[0].read(4096)
      end
      sock.close()
    }
    
        # Only try the same host/port combination once
    phash = rhost + ':' + lport.to_s
    return if self.listener_pairs[phash]
    self.listener_pairs[phash] = true
    
        # Similarly, when we seperate large payloads into chunks to avoid the
    # 998-byte problem mentioned above, we have to make sure that the first
    # character of each chunk is an alpha character.  This simple algorithm
    # will create a broken string in the case of 99 consecutive digits,
    # slashes, and plusses in the base64 encoding, but the likelihood of
    # that is low enough that I don't care.
    i = 900;
    while i < b64.length
      while (b64[i].chr =~ %r{[0-9/+]})
        i += 1
      end
      b64.insert(i,'.')
      i += 900
    end
    
    
end
end
end

    
    
  #
  # Payload types were copied from xCAT-server source code (IPMI.pm)
  #
  RMCP_ERRORS = {
    1 => 'Insufficient resources to create new session (wait for existing sessions to timeout)',
    2 => 'Invalid Session ID', #this shouldn't occur...
    3 => 'Invalid payload type',#shouldn't occur..
    4 => 'Invalid authentication algorithm', #if this happens, we need to enhance our mechanism for detecting supported auth algorithms
    5 => 'Invalid integrity algorithm', #same as above
    6 => 'No matching authentication payload',
    7 => 'No matching integrity payload',
    8 => 'Inactive Session ID', #this suggests the session was timed out while trying to negotiate, shouldn't happen
    9 => 'Invalid role',
    0xa => 'Unauthorised role or privilege level requested',
    0xb => 'Insufficient resources to create a session at the requested role',
    0xc => 'Invalid username length',
    0xd => 'Unauthorized name',
    0xe => 'Unauthorized GUID',
    0xf => 'Invalid integrity check value',
    0x10 => 'Invalid confidentiality algorithm',
    0x11 => 'No cipher suite match with proposed security algorithms',
    0x12 => 'Illegal or unrecognized parameter', #have never observed this, would most likely mean a bug in xCAT or IPMI device
  }
    
    namespace :bower do
    
      # Force all access to the app over SSL, use Strict-Transport-Security, and use secure cookies.
  # config.force_ssl = true
    
              begin
            lineno = frame.lineno-1
            lines = ::File.readlines(frame.filename)
            frame.pre_context_lineno = [lineno-CONTEXT, 0].max
            frame.pre_context = lines[frame.pre_context_lineno...lineno]
            frame.context_line = lines[lineno].chomp
            frame.post_context_lineno = [lineno+CONTEXT, lines.size].min
            frame.post_context = lines[lineno+1..frame.post_context_lineno]
          rescue
          end
    
            safe?(env) ||
          valid_token?(session, env['HTTP_X_CSRF_TOKEN']) ||
          valid_token?(session, Request.new(env).params[options[:authenticity_param]]) ||
          ( options[:allow_if] && options[:allow_if].call(env) )
      end
    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
              react_and_close(env, body) or [status, headers, body]
        else
          [status, headers, body]
        end
      end
    
      it 'accepts post form requests with masked authenticity_token field' do
    post('/', {'authenticity_token' => masked_token}, 'rack.session' => session)
    expect(last_response).to be_ok
  end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to eq('connect-src https://api.mybank.com; default-src none; font-src https://cdn.mybank.net; frame-src self; img-src https://cdn.mybank.net; media-src https://cdn.mybank.net; object-src https://cdn.mybank.net; report-uri /my_amazing_csp_report_parser; sandbox allow-scripts; script-src https://cdn.mybank.net; style-src https://cdn.mybank.net')
    expect(headers['Content-Security-Policy-Report-Only']).to be_nil
  end
    
          moo = MiniTest::Mock.new
      moo.expect(:multi, [0, 1])
      beef = ConnectionPool.new(size: 1) { moo }
    
    describe 'DeadSet' do
  def dead_set
    Sidekiq::DeadSet.new
  end
    
      it 'allows until delayed scheduling of AR class methods' do
    ss = Sidekiq::ScheduledSet.new
    assert_equal 0, ss.size
    MyModel.delay_until(1.day.from_now).long_class_method
    assert_equal 1, ss.size
  end
    
        DirectWorker.perform_one
    assert_equal 1, DirectWorker.jobs.size