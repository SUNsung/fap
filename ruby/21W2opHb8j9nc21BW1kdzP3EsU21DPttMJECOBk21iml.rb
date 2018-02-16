
        
              if options[:roles].is_a?(Symbol)
        options[:roles] = [options[:roles]]
      end
    
      def destroy
    @event.destroy
    
      def destroy
    @services = current_user.services.find(params[:id])
    @services.destroy
    
    module Docs
  class PageDb
    attr_reader :pages
    
      def test_without
    @opt.parse!(%w'--without-zot')
    assert_nil(@zot)
    assert_raise(OptionParser::NeedlessArgument) {@opt.parse!(%w'--without-zot=foobar')}
  end
    
          if off
        year, mon, day, hour, min, sec =
          apply_offset(year, mon, day, hour, min, sec, off)
        t = self.utc(year, mon, day, hour, min, sec, usec)
        force_zone!(t, zone, off)
        t
      else
        self.local(year, mon, day, hour, min, sec, usec)
      end
    end
    private :make_time
    
      def subtest_xmlschema_alias(method)
    t = Time.utc(1985, 4, 12, 23, 20, 50, 520000)
    s = '1985-04-12T23:20:50.52Z'
    assert_equal(t, Time.__send__(method, s))
    assert_equal(s, t.__send__(method, 2))
    
      self.each_test do |test, i|
    define_method('test_#{i}') do ||
      Tempfile.create('iotest.dat') do |fh|
        fh.print test[1]
        fh.rewind
        assert_equal(test[2], fh.scanf(test[0]))
      end
    end
  end
end

    
    end

    
    
    {    r1, w1 = IO.pipe
    r2, w2 = IO.pipe
    t1 = Thread.new { w1 << megacontent; w1.close }
    t2 = Thread.new { r2.read; r2.close }
    IO.copy_stream(r1, w2) rescue nil
    w2.close
    r1.close
    t1.join
    t2.join
  }, 'megacontent-copy_stream', ['INT'], :timeout => 10 or break
end
    
        ##
    # Creates a Regexp to match an address.
    
      def adjusted_results name, results
    s = nil
    results.each_with_index{|e, i|
      r = e.min
      case name
      when /^vm1_/
        if @loop_wl1
          r -= @loop_wl1[i]
          r = 0 if r < 0
          s = '*'
        end
      when /^vm2_/
        if @loop_wl2
          r -= @loop_wl2[i]
          r = 0 if r < 0
          s = '*'
        end
      end
      yield r
    }
    s
  end
    
          def http_error_page_as_json(e)
        render json: {error: :invalid_request, error_description: e.message}, status: 400
      end
    
          def create
        req = Rack::Request.new(request.env)
        if req['client_assertion_type'] == 'urn:ietf:params:oauth:client-assertion-type:jwt-bearer'
          handle_jwt_bearer(req)
        end
        self.status, headers, self.response_body = Api::OpenidConnect::TokenEndpoint.new.call(request.env)
        headers.each {|name, value| response.headers[name] = value }
        nil
      end
    
      out = File.join(output, site + '.txt')
  File.unlink(out) if File.exist?(out)
    
        # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 143 and pkt.tcp_dport != 143)
    s = find_session((pkt.tcp_sport == 143) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'imap4'
    
    
    
            def_node_matcher :redundant_regex?, <<-PATTERN
          {(send $!nil? {:match :=~} (regexp (str $#literal_at_end?) (regopt)))
           (send (regexp (str $#literal_at_end?) (regopt)) {:match :=~} $_)}
        PATTERN
    
            private