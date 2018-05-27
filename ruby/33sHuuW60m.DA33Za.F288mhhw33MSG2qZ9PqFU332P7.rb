
        
          def test_escape_javascript_with_safebuffer
    given = %('quoted' 'double-quoted' new-line:\n </closed>)
    expect = %(\\'quoted\\' \\'double-quoted\\' new-line:\\n <\\/closed>)
    assert_equal expect, escape_javascript(given)
    assert_equal expect, escape_javascript(ActiveSupport::SafeBuffer.new(given))
    assert_instance_of String, escape_javascript(given)
    assert_instance_of ActiveSupport::SafeBuffer, escape_javascript(ActiveSupport::SafeBuffer.new(given))
  end
    
              # Bubbled up from the adapter require. Prefix the exception message
          # with some guidance about how to address it and reraise.
          else
            raise e.class, 'Error loading the '#{adapter}' Action Cable pubsub adapter. Missing a gem it depends on? #{e.message}', e.backtrace
          end
        end
    
                        if callbacks = @subscribe_callbacks[chan]
                      next_callback = callbacks.shift
                      @event_loop.post(&next_callback) if next_callback
                      @subscribe_callbacks.delete(chan) if callbacks.empty?
                    end
                  end
                end
    
    class TestResponseTest < ActiveSupport::TestCase
  def assert_response_code_range(range, predicate)
    response = ActionDispatch::TestResponse.new
    (0..599).each do |status|
      response.status = status
      assert_equal range.include?(status), response.send(predicate),
                   'ActionDispatch::TestResponse.new(#{status}).#{predicate}'
    end
  end
    
        test 'middleware that is 'use'd is called as part of the Rack application' do
      result = @app.call(env_for('/'))
      assert_equal ['Hello World'], [].tap { |a| result[2].each { |x| a << x } }
      assert_equal 'Success', result[1]['Middleware-Test']
    end
    
      def test_dasherized_keys_as_json
    with_test_route_set do
      post '/?full=1',
        params: '{'first-key':{'sub-key':'...'}}',
        headers: { 'CONTENT_TYPE' => 'application/json' }
      assert_equal 'action, controller, first-key(sub-key), full', @controller.response.body
      assert_equal '...', @controller.params['first-key']['sub-key']
    end
  end
    
    require 'active_support/log_subscriber'
    
          text.split.each do |word|
        if sentences.first.present? && (sentences.last + [word]).join(' ').length > len
          sentences << [word]
        else
          sentences.last << word
        end
      end
    
            def determine_default_mailer(name)
          mailer = determine_constant_from_test_name(name) do |constant|
            Class === constant && constant < ActionMailer::Base
          end
          raise NonInferrableMailerError.new(name) if mailer.nil?
          mailer
        end
      end
    
    # Show backtraces for deprecated behavior for quicker cleanup.
ActiveSupport::Deprecation.debug = true
    
      test 'undefined delivery methods raises errors' do
    DeliveryMailer.delivery_method = nil
    error = assert_raise RuntimeError do
      DeliveryMailer.welcome.deliver_now
    end
    assert_equal 'Delivery method cannot be nil', error.message
  end
    
    The second
   paragraph.
    
          def self.authors
        ['gin0606']
      end
    
    # grab name/url pairings from README.md
contents = File.read INPUT_FILENAME
matches = contents.scan(/\* (.*) (http.*)/)
# All blogs that do not respond
unavailable = []
temp_ignores = [
  'AdRoll',
  'Buzzfeed',
  'SourceClear',
  'TaskRabbit',
  'theScore',
  'Trivago',
  'Xmartlabs',
  'WyeWorks',
  'Zoosk',
  'Rudolf Olah'
]
    
      def parse(pkt)
    
    classNames = [ 'HelloWorld1', 'HelloWorld2' ]
    
          # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
      if ''.respond_to?(:encoding)  # Ruby 1.9+ M17N
    context 'PATH_INFO's encoding' do
      before do
        @app = Rack::Protection::PathTraversal.new(proc { |e| [200, {'Content-Type' => 'text/plain'}, [e['PATH_INFO'].encoding.to_s]] })
      end
    
      # rspec-expectations config goes here. You can use an alternate
  # assertion/expectation library such as wrong or the stdlib/minitest
  # assertions if you prefer.
  config.expect_with :rspec do |expectations|
    # Enable only the newer, non-monkey-patching expect syntax.
    # For more details, see:
    #   - http://myronmars.to/n/dev-blog/2012/06/rspecs-new-expectation-syntax
    expectations.syntax = :expect
  end
    
        expect(get('/..', :foo => '<bar>')).to be_ok
  end