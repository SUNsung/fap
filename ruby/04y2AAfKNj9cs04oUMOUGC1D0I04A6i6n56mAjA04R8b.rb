
        
                      if very_raw_connection && very_raw_connection.respond_to?(:flush)
                very_raw_connection.flush
              end
            end
        end
    end
  end
end

    
              define_singleton_method('#{name}=') do |attribute|
            instance.public_send('#{name}=', attribute)
          end
        end
      end
    
        test 'head :no_content (204) does not return a content-type header' do
      headers = HeadController.action(:no_content).call(Rack::MockRequest.env_for('/')).second
      assert_nil headers['Content-Type']
      assert_nil headers['Content-Length']
    end
    
          add_delivery_method :smtp, Mail::SMTP,
        address:              'localhost',
        port:                 25,
        domain:               'localhost.localdomain',
        user_name:            nil,
        password:             nil,
        authentication:       nil,
        enable_starttls_auto: true
    
            def restore_delivery_method
          ActionMailer::Base.deliveries.clear
          ActionMailer::Base.delivery_method = @old_delivery_method
        end
    
      def test_assert_select_email_multipart
    AssertMultipartSelectMailer.test(html: '<div><p>foo</p><p>bar</p></div>', text: 'foo bar').deliver_now
    assert_select_email do
      assert_select 'div:root' do
        assert_select 'p:first-child', 'foo'
        assert_select 'p:last-child', 'bar'
      end
    end
  end
end

    
      def setup
    super
    ActionMailer::LogSubscriber.attach_to :action_mailer
  end
    
    * item1 * item2
  * item3
    TEXT
    
    #
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
        Jekyll::Commands::Build.process({'source' => 'docs'})
    
          def measure_bytes
        yield.tap do |str|
          @renderer.increment_bytes(@filename, str.bytesize)
        end
      end
    
      end
    
      # Asynchronously send an email
  class TestEmail < Jobs::Base
    
    require 'hbc/container/base'
    
      // writing
  $('form').on('submit',function(e) {
    $.post('/', {msg: '<%= user %>: ' + $('#msg').val()});
    $('#msg').val(''); $('#msg').focus();
    e.preventDefault();
  });
</script>
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
      %w(GET HEAD).each do |method|
    it 'accepts #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).to be_ok
    end
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
    
          origin = caller[1]
      if origin =~ /rubygems\/custom_require/
        origin = caller[3]
        if origin.nil?
          STDERR.puts 'Unknown origin'
          STDERR.puts caller.join('\n')
        end
      end
      origin = origin.gsub(/:[0-9]+:in .*/, '') if origin