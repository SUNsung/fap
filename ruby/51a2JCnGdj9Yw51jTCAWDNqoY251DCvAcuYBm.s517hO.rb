
        
                def helper_method(*methods)
          # Almost a duplicate from ActionController::Helpers
          methods.flatten.each do |method|
            _helpers.module_eval <<-end_eval, __FILE__, __LINE__ + 1
              def #{method}(*args, &block)                    # def current_user(*args, &block)
                _test_case.send(%(#{method}), *args, &block)  #   _test_case.send(%(current_user), *args, &block)
              end                                             # end
            end_eval
          end
        end
    
                @subscribe_callbacks = Hash.new { |h, k| h[k] = [] }
            @subscription_lock = Mutex.new
    
            def test_url_sub_key_for_sqlite3
          spec = resolve :production, 'production' => { 'url' => 'sqlite3:foo?encoding=utf8' }
          assert_equal({
            'adapter'  => 'sqlite3',
            'database' => 'foo',
            'encoding' => 'utf8',
            'name'     => 'production' }, spec)
        end
    
              def uri_parser
            @uri_parser ||= URI::Parser.new
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
    
          def reset_all # :nodoc:
        current_instances.each_value(&:reset)
      end
    
        class CallbacksWithArgs < ControllerWithCallbacks
      set_callback :process_action, :before, :first
    
          # Make list points stand on their own line
      formatted.gsub!(/[ ]*([*]+) ([^*]*)/) { '  #{$1} #{$2.strip}\n' }
      formatted.gsub!(/[ ]*([#]+) ([^#]*)/) { '  #{$1} #{$2.strip}\n' }
    
    def build_configs(overrides, base_hash = Jekyll::Configuration::DEFAULTS)
  Jekyll::Utils.deep_merge_hashes(base_hash, overrides)
end
    
    Mercenary.program(:jekyll) do |p|
  p.version Jekyll::VERSION
  p.description 'Jekyll is a blog-aware, static site generator in Ruby'
  p.syntax 'jekyll <subcommand> [options]'
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
        def special?(entry)
      SPECIAL_LEADING_CHARACTERS.include?(entry[0..0]) ||
        SPECIAL_LEADING_CHARACTERS.include?(File.basename(entry)[0..0])
    end
    
            # A callback method used to deliver confirmation
        # instructions on creation. This can be overridden
        # in models to map to a nice sign up e-mail.
        def send_on_create_confirmation_instructions
          send_confirmation_instructions
        end
    
      test 'should add error to new user email if no email was found' do
    confirmation_user = User.send_confirmation_instructions(email: 'invalid@example.com')
    assert confirmation_user.errors[:email]
    assert_equal 'not found', confirmation_user.errors[:email].join
  end
    
    class Devise::OmniauthCallbacksController < DeviseController
  prepend_before_action { request.env['devise.skip_timeout'] = true }
    
    gem 'rails-controller-testing'
    
      # GET /resource/password/edit?reset_password_token=abcdef
  def edit
    self.resource = resource_class.new
    set_minimum_password_length
    resource.reset_password_token = params[:reset_password_token]
  end
    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
    # puts '\nDone.'

    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
          def self.default_options(options)
        define_method(:default_options) { super().merge(options) }
      end
    
          expected_header = <<-END.chomp
rack.%2573ession=; domain=example.org; path=/; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.%2573ession=; domain=example.org; path=/some; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.%2573ession=; domain=example.org; path=/some/path; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/some; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/some/path; expires=Thu, 01 Jan 1970 00:00:00 -0000
END
      expect(last_response.headers['Set-Cookie']).to eq(expected_header)
    end
  end
    
      %w(GET HEAD POST PUT DELETE).each do |method|
    it 'accepts #{method} requests when allow_if is true' do
      mock_app do
        use Rack::Protection::HttpOrigin, :allow_if => lambda{|env| env.has_key?('HTTP_ORIGIN') }
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://any.domain.com')).to be_ok
    end
  end
    
      it 'should set the X-XSS-Protection for XHTML' do
    expect(get('/', {}, 'wants' => 'application/xhtml+xml').headers['X-XSS-Protection']).to eq('1; mode=block')
  end
    
      def human?
    params.has_key?('human') && (params['human'].nil? || as_boolean(params['human']) == true)
  end
end

    
      module Condition1
    def expression
      elements[0]
    end