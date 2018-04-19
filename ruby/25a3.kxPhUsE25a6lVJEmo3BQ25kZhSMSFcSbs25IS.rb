
        
            assert_dom_equal '<script>\n//<![CDATA[\nalert('hello')\n//]]>\n</script>',
      javascript_tag('alert('hello')')
    
        class << self
      # Returns singleton instance for this class in this thread. If none exists, one is created.
      def instance
        current_instances[name] ||= new
      end
    
          assert_response :unauthorized
      assert_equal 'HTTP Token: Access denied.\n', @response.body, 'Authentication didn't fail for request header #{header}'
    end
    test 'unsuccessful authentication with #{header.downcase} and long credentials' do
      @request.env[header] = encode_credentials('h4x0rh4x0rh4x0rh4x0rh4x0rh4x0rh4x0rh4x0r')
      get :show
    
      class TestMiddleware < ActiveSupport::TestCase
    def setup
      @app = MyController.action(:index)
    end
    
    class WebServiceTest < ActionDispatch::IntegrationTest
  class TestController < ActionController::Base
    def assign_parameters
      if params[:full]
        render plain: dump_params_keys
      else
        render plain: (params.keys - ['controller', 'action']).sort.join(', ')
      end
    end
    
        class MessageDelivery < ActionMailer::MessageDelivery # :nodoc:
      def initialize(mailer_class, action, params, *args)
        super(mailer_class, action, *args)
        @params = params
      end
    
    # These are the normal settings that will be set up by Railties
# TODO: Have these tests support other combinations of these values
silence_warnings do
  Encoding.default_internal = Encoding::UTF_8
  Encoding.default_external = Encoding::UTF_8
end
    
      def test_assert_select_email
    assert_raise ActiveSupport::TestCase::Assertion do
      assert_select_email {}
    end
    
            css('.toplang', '#quickview', '.top').remove
    
            css('.function').each do |node|
          name = '#{node.at_css('.descname').content}()'
          id = node.at_css('dt[id]')['id']
          entries << [name, id]
        end
    
      GEMFILE_EXTENSIONS.each do |extension|
    extension_pathname = root.join('Gemfile#{extension}')
    
    def usage
  $stderr.puts '#{$0} [site list] [output-dir]'
  exit(0)
end
    
      File.unlink(out) if (File.size(out) == 0)
    
    <script>
  // reading
  var es = new EventSource('/stream');
  es.onmessage = function(e) { $('#chat').append(e.data + '\n') };
    
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
    
        it 'copes with nested arrays' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']['bar']]]
      end
      get '/', :foo => {:bar => '<bar>'}
      expect(body).to eq('&lt;bar&gt;')
    end
    
        expect_any_instance_of(detector).to receive(:call).with(
      hash_including('foo.bar' => 42)
    ).and_call_original
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
      end
    
      # Extracts raw content DIV from template, used for page description as {{ content }}
  # contains complete sub-template code on main page level
  def raw_content(input)
    /<div class='entry-content'>(?<content>[\s\S]*?)<\/div>\s*<(footer|\/article)>/ =~ input
    return (content.nil?) ? input : content
  end
    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''