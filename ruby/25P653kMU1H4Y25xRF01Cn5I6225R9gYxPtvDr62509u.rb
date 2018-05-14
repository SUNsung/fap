
        
        require 'abstract_unit'
    
        test 'the middleware stack is exposed as 'middleware' in the controller' do
      result = @app.call(env_for('/'))
      assert_equal 'First!', result[1]['Middleware-Order']
    end
    
          add_delivery_method :file, Mail::FileDelivery,
        location: defined?(Rails.root) ? '#{Rails.root}/tmp/mails' : '#{Dir.tmpdir}/mails'
    
    class AssertSelectEmailTest < ActionMailer::TestCase
  class AssertSelectMailer < ActionMailer::Base
    def test(html)
      mail body: html, content_type: 'text/html',
        subject: 'Test e-mail', from: 'test@test.host', to: 'test <test@test.host>'
    end
  end
    
      def use_message
    mail_with_defaults do |format|
      format.html { render(inline: '<%= message.subject %>') }
    end
  end
    
    unless invalids.empty?
  puts '\n\nFailed links:'
  invalids.each do |link|
    puts '- #{link}'
  end
  puts 'Done with errors.'
  exit(1)
end
    
          class << self
        # Mark a given block of code as a 'busy' block of code, which will
        # register a SIGINT handler for the duration of the block. When a
        # SIGINT occurs, the `sig_callback` proc will be called. It is up
        # to the callback to behave properly and exit the application.
        def busy(sig_callback)
          register(sig_callback)
          return yield
        ensure
          unregister(sig_callback)
        end
    
          def [](key)
        super(convert_key(key))
      end
    
      # Creates a delayed logger wrapping `inner`.
  #
  # @param inner [Sass::Logger::Base] The wrapped logger.
  def initialize(inner)
    self.log_level = inner.log_level
    @inner = inner
    @messages = []
  end
    
        # Evaluates the interpolation.
    #
    # @param environment [Sass::Environment] The environment in which to evaluate the SassScript
    # @return [Sass::Script::Value::String]
    #   The SassScript string that is the value of the interpolation
    def _perform(environment)
      res = ''
      res << @before.perform(environment).to_s if @before
      res << ' ' if @before && @whitespace_before
    
          private
    
      def command_line(*options)
    options.each { |opt| ARGV << opt }
    subject.define_singleton_method(:exit) do |*_args|
      throw(:system_exit, :exit)
    end
    subject.run
    subject.options
  end
    
    __END__
    
          it 'should remain unchanged as ASCII-8BIT' do
        body = @app.call({ 'PATH_INFO' => '/'.encode('ASCII-8BIT') })[2][0]
        expect(body).to eq('ASCII-8BIT')
      end
    end
  end
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