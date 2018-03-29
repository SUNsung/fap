
        
          def test_escape_javascript
    assert_equal '', escape_javascript(nil)
    assert_equal %(This \\'thing\\' is really\\n netos\\'), escape_javascript(%(This 'thing' is really\n netos'))
    assert_equal %(backslash\\\\test), escape_javascript(%(backslash\\test))
    assert_equal %(dont <\\/close> tags), escape_javascript(%(dont </close> tags))
    assert_equal %(unicode &#x2028; newline), escape_javascript(%(unicode \342\200\250 newline).dup.force_encoding(Encoding::UTF_8).encode!)
    assert_equal %(unicode &#x2029; newline), escape_javascript(%(unicode \342\200\251 newline).dup.force_encoding(Encoding::UTF_8).encode!)
    
      def test_redirect_with_protocol
    get :redirect_with_protocol
    assert_response 302
    assert_equal 'https://test.host/redirect/hello_world', redirect_to_url
  end
    
              private
            def ensure_listener_running
              @thread ||= Thread.new do
                Thread.current.abort_on_exception = true
    
      test 'response status aliases deprecated' do
    response = ActionDispatch::TestResponse.create
    assert_deprecated { response.success? }
    assert_deprecated { response.missing? }
    assert_deprecated { response.error? }
  end
end

    
      class InheritedController < MyController
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
    
    module ActionMailer
  # This module handles everything related to mail delivery, from registering
  # new delivery methods to configuring the mail object to be sent.
  module DeliveryMethods
    extend ActiveSupport::Concern
    
          def []=(key, value)
        super(convert_key(key), value)
      end
    
                breakable = false
            if e.is_a?(EOFError)
              # An `EOFError` means this IO object is done!
              breakable = true
            elsif defined?(::IO::WaitReadable) && e.is_a?(::IO::WaitReadable)
              # IO::WaitReadable is only available on Ruby 1.9+
    
    def each_schema_load_environment
  # If we're in development, also run this for the test environment.
  # This is a somewhat hacky way to do this, so here's why:
  # 1. We have to define this before we load the schema, or we won't
  #    have a timestamp_id function when we get to it in the schema.
  # 2. db:setup calls db:schema:load_if_ruby, which calls
  #    db:schema:load, which we define above as having a prerequisite
  #    of this task.
  # 3. db:schema:load ends up running
  #    ActiveRecord::Tasks::DatabaseTasks.load_schema_current, which
  #    calls a private method `each_current_configuration`, which
  #    explicitly also does the loading for the `test` environment
  #    if the current environment is `development`, so we end up
  #    needing to do the same, and we can't even use the same method
  #    to do it.
    
      attributes :id, :type, :name, :updated
    
        it 'silences remote accounts from that domain' do
      expect(Account.find_remote('badguy666', 'evil.org').silenced?).to be true
    end
    
          timestamp = time.strftime('%Y%m%d%H%M%S')
      fraction = format('%.3f', time.to_f - time.to_i)[1..-1]