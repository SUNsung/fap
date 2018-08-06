
        
            def test_module_redirect_using_options
      get :module_redirect
      assert_response :redirect
      assert_redirected_to controller: '/redirect', action: 'hello_world'
    end
  end
end

    
            def test_spec_name_with_inline_config
          spec = spec('adapter' => 'sqlite3')
          assert_equal 'primary', spec.name, 'should default to primary id'
        end
      end
    end
  end
end

    
        def set_email_address
      unless persisted? || will_save_change_to_author_email_address?
        self.author_email_address = 'test@test.com'
      end
    end
    
        assert @channel.room
    assert_predicate @channel, :subscribed?
    
          def initialize(gradle_path: nil)
        self.gradle_path = gradle_path
      end
    
      included do
    include Oauthable
    
      private
    
    ###
### methods
###
    
      OVERRIDE_FIELDS_ON_FB_UPDATE = [:contact_id, :person_id, :request_id, :invitation_id, :photo_url, :name, :username]
  MAX_CHARACTERS = 63206
    
      describe '#profile_photo_url' do
    it 'returns a large profile photo url' do
      @service.uid = 'abc123'
      @service.access_token = 'token123'
      expect(@service.profile_photo_url).to eq(
      'https://graph.facebook.com/abc123/picture?type=large&access_token=token123'
      )
    end
  end
    
        [Post, Comment, AspectMembership, User].each do |model|
      create_hash(model, :range => range)
    end
    
          def handle_prompt_none
        if params[:prompt] == 'none'
          if user_signed_in?
            handle_prompt_with_signed_in_user
          else
            handle_params_error('login_required', 'User must already be logged in when `prompt` is `none`')
          end
        else
          handle_params_error('invalid_request', 'The 'none' value cannot be used with any other prompt value')
        end
      end
    
    @@ chat
<pre id='chat'></pre>
<form>
  <input id='msg' placeholder='type message here...' />
</form>
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
          def escape_string(str)
        str = @escaper.escape_url(str)        if @url
        str = @escaper.escape_html(str)       if @html
        str = @escaper.escape_javascript(str) if @javascript
        str
      end
    end
  end
end

    
        it 'accepts #{method} requests with whitelisted Origin' do
      mock_app do
        use Rack::Protection::HttpOrigin, :origin_whitelist => ['http://www.friend.com']
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://www.friend.com')).to be_ok
    end
  end
end

    
      if ''.respond_to?(:encoding)  # Ruby 1.9+ M17N
    context 'PATH_INFO's encoding' do
      before do
        @app = Rack::Protection::PathTraversal.new(proc { |e| [200, {'Content-Type' => 'text/plain'}, [e['PATH_INFO'].encoding.to_s]] })
      end
    
      it 'denies requests with a changing Accept-Language header' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'b'
    expect(session).to be_empty
  end
    
      it 'should not override the header if already set' do
    mock_app with_headers('X-XSS-Protection' => '0')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-XSS-Protection']).to eq('0')
  end
    
    Dir[File.expand_path('../support/**/*.rb', __FILE__)].each { |f| require f }
    
    desc 'clean the whole repository by removing all the generated files'
task :clean do
  rm_f  'Gemfile.lock'
  rm_rf 'sandbox'
  rm_rf 'pkg'
    
            def argument?
          ARGUMENT_DECLARATION_TYPES.include?(@declaration_node.type)
        end
    
    module RuboCop
  module Cop
    module Lint
      # This cop checks that there are no repeated conditions
      # used in case 'when' expressions.
      #
      # @example
      #
      #   # bad
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'first'
      #     do_something_else
      #   end
      #
      # @example
      #
      #   # good
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'second'
      #     do_something_else
      #   end
      class DuplicateCaseCondition < Cop
        MSG = 'Duplicate `when` condition detected.'.freeze
    
    module RuboCop
  module Cop
    module Lint
      # In math and Python, we can use `x < y < z` style comparison to compare
      # multiple value. However, we can't use the comparison in Ruby. However,
      # the comparison is not syntax error. This cop checks the bad usage of
      # comparison operators.
      #
      # @example
      #
      #   # bad
      #
      #   x < y < z
      #   10 <= x <= 20
      #
      # @example
      #
      #   # good
      #
      #   x < y && y < z
      #   10 <= x && x <= 20
      class MultipleCompare < Cop
        MSG = 'Use the `&&` operator to compare multiple values.'.freeze
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for optional arguments to methods
      # that do not come at the end of the argument list
      #
      # @example
      #   # bad
      #   def foo(a = 1, b, c)
      #   end
      #
      #   # good
      #   def baz(a, b, c = 1)
      #   end
      #
      #   def foobar(a = 1, b = 2, c = 3)
      #   end
      class OptionalArguments < Cop
        MSG = 'Optional arguments should appear at the end ' \
              'of the argument list.'.freeze
    
        def type_from_mime_magic
      @type_from_mime_magic ||= File.open(@filepath) do |file|
        MimeMagic.by_magic(file).try(:type)
      end
    end
    
        # Returns the width and height in a format suitable to be passed to Geometry.parse
    def to_s
      s = ''
      s << width.to_i.to_s if width > 0
      s << 'x#{height.to_i}' if height > 0
      s << modifier.to_s
      s
    end
    
            def has_column?
          @subject.column_names.include?('#{@attachment_name}_file_name')
        end
      end
    end
  end
end

    
            if record.errors.include? attribute
          record.errors[attribute].each do |error|
            record.errors.add base_attribute, error
          end
        end
      end