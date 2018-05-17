
        
            def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
          topic = Topic.find_by(id: topic_id)
    
      def revoke_moderation!
    set_permission('moderator', false)
  end
    
        it 'adds the correct Set-Cookie header' do
      get '/some/path', {}, 'HTTP_COOKIE' => 'rack.%73ession=EVIL_SESSION_TOKEN; rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
    
      %w(GET HEAD POST PUT DELETE).each do |method|
    it 'accepts #{method} requests when allow_if is true' do
      mock_app do
        use Rack::Protection::HttpOrigin, :allow_if => lambda{|env| env.has_key?('HTTP_ORIGIN') }
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://any.domain.com')).to be_ok
    end
  end
    
      it 'accepts a session without changes to tracked parameters' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session
    get '/', {}, 'rack.session' => session
    expect(session[:foo]).to eq(:bar)
  end
    
      it 'allows passing on values in env' do
    klass    = described_class
    changer  = Struct.new(:app) do
      def call(env)
        env['foo.bar'] = 42
        app.call(env)
      end
    end
    detector = Struct.new(:app) do
      def call(env)
        app.call(env)
      end
    end
    
      def _nt_plugin
    start_index = index
    if node_cache[:plugin].has_key?(index)
      cached = node_cache[:plugin][index]
      if cached
        cached = SyntaxNode.new(input, index...(index + 1)) if cached == true
        @index = cached.interval.end
      end
      return cached
    end
    
          def define_deprecated_accessors_for(option, opts, &block)
        define_deprecated_writer_for(option, opts, &block)
      end
    
    # These drivers are only used for testing driver switching.
# They don't actually need to process javascript so use RackTest
    
    Before do
  Capybara.use_default_driver
end
    
    module Capybara
  class Selector
    module Filters
      class Base
        def initialize(name, block, **options)
          @name = name
          @block = block
          @options = options
          @options[:valid_values] = [true, false] if options[:boolean]
        end
    
      it 'should not accept the alert if the text doesnt match' do
    expect do
      @session.accept_alert 'Incorrect Text' do
        @session.click_link('Open alert')
      end
    end.to raise_error(Capybara::ModalNotFound)
  end
    
      it 'should return the message presented' do
    message = @session.accept_prompt with: 'the response' do
      @session.click_link('Open prompt')
    end
    expect(message).to eq('Prompt opened')
  end
end
