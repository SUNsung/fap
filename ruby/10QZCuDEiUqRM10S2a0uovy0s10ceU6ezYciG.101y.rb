
        
                              until @when_connected.empty?
                        @when_connected.shift.call
                      end
                    end
    
            def test_url_invalid_adapter
          error = assert_raises(LoadError) do
            spec 'ridiculous://foo?encoding=utf8'
          end
    
        response = ActionDispatch::TestResponse.create(200, { 'Content-Type' => 'application/json' }, '{ 'foo': 'fighters' }')
    assert_equal({ 'foo' => 'fighters' }, response.parsed_body)
  end
    
          assert_equal 'Hello world', string
    end
    
        def call(env)
      result = @app.call(env)
      result[1]['Configurable-Message'] = configurable_message
      result
    end
  end
    
            def application_mailer_file_name
          @_application_mailer_file_name ||= if mountable_engine?
            'app/mailers/#{namespaced_path}/application_mailer.rb'
          else
            'app/mailers/application_mailer.rb'
          end
        end
    end
  end
end

    
      def test_filter_bang
    h1 = {}
    ENV.each_pair {|k, v| h1[k] = v }
    ENV['test'] = 'foo'
    ENV.filter! {|k, v| IGNORE_CASE ? k.upcase != 'TEST' : k != 'test' }
    h2 = {}
    ENV.each_pair {|k, v| h2[k] = v }
    assert_equal(h1, h2)
    
      it 'decodes UTF-8 max codepoints' do
    [ ['\xf0\x90\x80\x80', [0x10000]],
      ['\xf3\xbf\xbf\xbf', [0xfffff]],
      ['\xf4\x80\x80\x80', [0x100000]],
      ['\xf4\x8f\xbf\xbf', [0x10ffff]]
    ].should be_computed_by(:unpack, 'U')
  end
    
      def self.wakeup_dying_sleeping_thread(kill_method_name=:kill)
    t = ThreadSpecs.dying_thread_ensures(kill_method_name) { yield }
    Thread.pass while t.status and t.status != 'sleep'
    t.wakeup
    t.join
  end