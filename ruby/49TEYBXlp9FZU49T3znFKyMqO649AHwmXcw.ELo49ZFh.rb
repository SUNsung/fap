
        
          # Setting the :extname option will control what extension (if any) is appended to the url for assets
  def test_javascript_include_tag
    assert_dom_equal '<script src='/foo.js'></script>',  javascript_include_tag('/foo')
    assert_dom_equal '<script src='/foo'></script>',     javascript_include_tag('/foo', extname: false)
    assert_dom_equal '<script src='/foo.bar'></script>', javascript_include_tag('/foo', extname: '.bar')
  end
    
              # Bubbled up from the adapter require. Prefix the exception message
          # with some guidance about how to address it and reraise.
          else
            raise e.class, 'Error loading the '#{adapter}' Action Cable pubsub adapter. Missing a gem it depends on? #{e.message}', e.backtrace
          end
        end
    
    require 'isolation/abstract_unit'
require 'rack/test'
require 'minitest/mock'
    
      test 'disallow block and arg together' do
    e = assert_raise ArgumentError do
      ChatChannel.periodically(:send_updates, every: 1) { ping }
    end
    assert_match(/not both/, e.message)
  end
    
      test 'does not execute action if subscription is rejected' do
    subscriptions = Minitest::Mock.new
    subscriptions.expect(:remove_subscription, SecretChannel, [SecretChannel])
    
        def send_async(method, *args)
      send method, *args
    end
  end
    
      test 'processing invalid message' do
    run_in_eventmachine do
      open_connection
    
      test 'unsubscribe command' do
    run_in_eventmachine do
      setup_connection
      subscribe_to_chat_channel
    
    require 'action_cable/subscription_adapter/redis'
    
      if final_pid = Process.fork
    # middle process
    open(pidfile, 'w') { |f| f.puts final_pid }
    exit
  end
    
        # Check if a reset_password_token is provided in the request
    def assert_reset_token_passed
      if params[:reset_password_token].blank?
        set_flash_message(:alert, :no_token)
        redirect_to new_session_path(resource_name)
      end
    end
    
      # GET /resource/unlock/new
  def new
    self.resource = resource_class.new
  end
    
        def default_used_route(options)
      singularizer = lambda { |s| s.to_s.singularize.to_sym }
    
        options[:skip] = %w(book/first-edition/README.html)
    options[:skip_patterns] = [/(?<!\.html)\z/]
    
    module Docs
  class Tensorflow < UrlScraper
    self.name = 'TensorFlow'
    self.type = 'tensorflow'
    self.release = '1.8'
    self.root_path = 'index.html'
    self.links = {
      home: 'https://www.tensorflow.org/',
      code: 'https://github.com/tensorflow/tensorflow'
    }
    
    module Docs
  class URL < URI::Generic
    PARSER = URI::Parser.new
    
    
    
      it 'should not override the header if already set X-Content-Type-Options' do
    mock_app with_headers('X-Content-Type-Options' => 'sniff')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Content-Type-Options']).to eq('sniff')
  end
end

    
        mock_app do
      use Rack::Head
      use(Rack::Config) { |e| e['rack.session'] ||= {}}
      use changer
      use klass
      use detector
      run DummyApp
    end