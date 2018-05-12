
        
          def test_redirect_to_with_block_and_accepted_options
    with_routing do |set|
      set.draw do
        ActiveSupport::Deprecation.silence do
          get ':controller/:action'
        end
      end
    
        # Reset all attributes. Should be called before and after actions, when used as a per-request singleton.
    def reset
      run_callbacks :reset do
        self.attributes = {}
      end
    end
    
      test 'token_and_options returns nil with no value after the equal sign' do
    actual = ActionController::HttpAuthentication::Token.token_and_options(malformed_request).first
    assert_nil actual
  end
    
      class MyController < ActionController::Metal
    use BlockMiddleware do |config|
      config.configurable_message = 'Configured by block.'
    end
    use MyMiddleware
    middleware.insert_before MyMiddleware, ExclaimerMiddleware
    
    class CustomDeliveryMethodsTest < ActiveSupport::TestCase
  setup do
    @old_delivery_method = ActionMailer::Base.delivery_method
    ActionMailer::Base.add_delivery_method :custom, MyCustomDelivery
  end
    
        puts 'Downloading emojos from source... (#{source})'
    
          it 'sets a regeneration marker while regenerating' do
        allow(RegenerationWorker).to receive(:perform_async)
        get :show
    
      def scope
    root_url
  end
    
          opts.on('-C', '--no-cache', 'Don't cache to sassc files.') do
        @options[:for_engine][:read_cache] = false
      end
    
            def validate!
          super
          if @pod_name.nil? && !@wipe_all
            # Security measure, to avoid removing the pod cache too agressively by mistake
            help! 'You should either specify a pod name or use the --all flag'
          end
        end
    
            # !@group Private helpers
    
      %w(GET HEAD POST PUT DELETE).each do |method|
    it 'accepts #{method} requests when allow_if is true' do
      mock_app do
        use Rack::Protection::HttpOrigin, :allow_if => lambda{|env| env.has_key?('HTTP_ORIGIN') }
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://any.domain.com')).to be_ok
    end
  end
    
      it 'accepts requests with a changing Version header'do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_VERSION' => '1.0'
    get '/', {}, 'rack.session' => session, 'HTTP_VERSION' => '1.1'
    expect(session[:foo]).to eq(:bar)
  end
end

    
      # These two settings work together to allow you to limit a spec run
  # to individual examples or groups you care about by tagging them with
  # `:focus` metadata. When nothing is tagged with `:focus`, all examples
  # get run.
  config.filter_run :focus
  config.run_all_when_everything_filtered = true