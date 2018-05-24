
        
              get :redirect_to_new_record
      assert_equal 'http://test.host/workshops', redirect_to_url
      assert_redirected_to Workshop.new(nil)
    end
  end
    
          # Returns constant of subscription adapter specified in config/cable.yml.
      # If the adapter cannot be found, this will default to the Redis adapter.
      # Also makes sure proper dependencies are required.
      def pubsub_adapter
        adapter = (cable.fetch('adapter') { 'redis' })
    
      test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
  end
    
      def call_controller(klass, action)
    klass.action(action).call(ActionController::TestRequest::DEFAULT_ENV.dup)
  end
    
      class MyController < ActionController::Metal
    use BlockMiddleware do |config|
      config.configurable_message = 'Configured by block.'
    end
    use MyMiddleware
    middleware.insert_before MyMiddleware, ExclaimerMiddleware
    
        # Helpers for creating and wrapping delivery behavior, used by DeliveryMethods.
    module ClassMethods
      # Provides a list of emails that have been delivered by Mail::TestMailer
      delegate :deliveries, :deliveries=, to: Mail::TestMailer
    
        # Returns +text+ wrapped at +len+ columns and indented +indent+ spaces.
    # By default column length +len+ equals 72 characters and indent
    # +indent+ equal two spaces.
    #
    #   my_text = 'Here is a sample text with more than 40 characters'
    #
    #   format_paragraph(my_text, 25, 4)
    #   # => '    Here is a sample text with\n    more than 40 characters'
    def format_paragraph(text, len = 72, indent = 2)
      sentences = [[]]
    
      teardown do
    I18n.locale = I18n.default_locale
  end
    
    Benchmark.ips do |x|
  x.report('no body include?') { CONTENT_NOT_CONTAINING.include?('<body') }
  x.report('no body regexp')   { CONTENT_NOT_CONTAINING =~ /<\s*body/ }
  x.compare!
end
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
    module Jekyll
  class Layout
    include Convertible
    
            Bundler.setup
        required_gems = Bundler.require(:jekyll_plugins)
        message = 'Required #{required_gems.map(&:name).join(', ')}'
        Jekyll.logger.debug('PluginManager:', message)
        ENV['JEKYLL_NO_BUNDLER_REQUIRE'] = 'true'
    
        @inner.log_level = log_level
    Sass.logger = @inner
  end
    
        # Starts the read-eval-print loop.
    def run
      environment = Environment.new
      @line = 0
      loop do
        @line += 1
        unless (text = Readline.readline('>> '))
          puts
          return
        end
    
            def matches? subject
          @subject = subject
          @subject = subject.new if subject.class == Class
          error_when_not_valid? && no_error_when_valid?
        end