
        
                  # Bubbled up from the adapter require. Prefix the exception message
          # with some guidance about how to address it and reraise.
          else
            raise e.class, 'Error loading the '#{adapter}' Action Cable pubsub adapter. Missing a gem it depends on? #{e.message}', e.backtrace
          end
        end
    
      test 'response status aliases deprecated' do
    response = ActionDispatch::TestResponse.create
    assert_deprecated { response.success? }
    assert_deprecated { response.missing? }
    assert_deprecated { response.error? }
  end
end

    
        test 'head :continue (100) does not return a content-type header' do
      headers = HeadController.action(:continue).call(Rack::MockRequest.env_for('/')).second
      assert_nil headers['Content-Type']
      assert_nil headers['Content-Length']
    end
    
        rescue_from StandardError, with: :handle_exception_with_mailer_class
    
    module ActionMailer
  class NonInferrableMailerError < ::StandardError
    def initialize(name)
      super 'Unable to determine the mailer to test from #{name}. ' \
        'You'll need to specify it using tests YourMailer in your ' \
        'test case definition'
    end
  end
    
      # Skips the current run on Rubinius using Minitest::Assertions#skip
  private def rubinius_skip(message = '')
    skip message if RUBY_ENGINE == 'rbx'
  end
  # Skips the current run on JRuby using Minitest::Assertions#skip
  private def jruby_skip(message = '')
    skip message if defined?(JRUBY_VERSION)
  end
end

    
        { # yes, this is ugly, feel free to change that
      '/..' => '/', '/a/../b' => '/b', '/a/../b/' => '/b/', '/a/.' => '/a/',
      '/%2e.' => '/', '/a/%2E%2e/b' => '/b', '/a%2f%2E%2e%2Fb/' => '/b/',
      '//' => '/', '/%2fetc%2Fpasswd' => '/etc/passwd'
    }.each do |a, b|
      it('replaces #{a.inspect} with #{b.inspect}') { expect(get(a).body).to eq(b) }
    end
    
      it 'should not override the header if already set' do
    mock_app with_headers('X-XSS-Protection' => '0')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-XSS-Protection']).to eq('0')
  end