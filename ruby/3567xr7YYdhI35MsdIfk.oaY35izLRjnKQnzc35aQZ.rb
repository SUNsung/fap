
        
            should 'have the URL to the 'sanitized_path' item' do
      assert_match %r!1\s/methods/sanitized_path\.html!, @result
    end
    
    $LOAD_PATH.unshift File.expand_path('lib', __dir__)
require 'jekyll/version'
    
    FORWARD_SLASH = '/'.freeze
    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil
    
      it 'accepts post requests with masked X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => masked_token)
    expect(last_response).to be_ok
  end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
        it 'enqueues' do
      Sidekiq.redis {|c| c.flushdb }
      assert_equal Sidekiq.default_worker_options, MyWorker.get_sidekiq_options
      assert MyWorker.perform_async(1, 2)
      assert Sidekiq::Client.enqueue(MyWorker, 1, 2)
      assert Sidekiq::Client.enqueue_to(:custom_queue, MyWorker, 1, 2)
      assert_equal 1, Sidekiq::Queue.new('custom_queue').size
      assert Sidekiq::Client.enqueue_to_in(:custom_queue, 3, MyWorker, 1, 2)
      assert Sidekiq::Client.enqueue_to_in(:custom_queue, -3, MyWorker, 1, 2)
      assert_equal 2, Sidekiq::Queue.new('custom_queue').size
      assert Sidekiq::Client.enqueue_in(3, MyWorker, 1, 2)
      assert QueuedWorker.perform_async(1, 2)
      assert_equal 1, Sidekiq::Queue.new('flimflam').size
    end
  end
    
        assert_nil dead_set.find_job('000103')
    assert dead_set.find_job('000102')
    assert dead_set.find_job('000101')
  end
    
          assert_equal 0, ss.size