  def test_javascript_cdata_section
    assert_dom_equal '\n//<![CDATA[\nalert('hello')\n//]]>\n', javascript_cdata_section('alert('hello')')
  end
end

    
          get :redirect_to_new_record
      assert_equal 'http://test.host/workshops', redirect_to_url
      assert_redirected_to Workshop.new(nil)
    end
  end
    
      class PdfController < ActionController::Base
    def test
      render inline: 'test: <%= foobar %>'
    end
  end
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
    
        # An email was received.
    def receive(event)
      info { 'Received mail (#{event.duration.round(1)}ms)' }
      debug { event.payload[:mail] }
    end
    
      def test_receive_is_notified
    fixture = File.read(File.expand_path('fixtures/raw_email', __dir__))
    TestMailer.receive(fixture)
    wait
    assert_equal(1, @logger.logged(:info).size)
    assert_match(/Received mail/, @logger.logged(:info).first)
    assert_equal(1, @logger.logged(:debug).size)
    assert_match(/Jamis/, @logger.logged(:debug).first)
  end
end

    
      def use_block_format
    @text = <<-TEXT
This is the
first     paragraph.
    
          super
      input = @options[:input]
      if File.directory?(input)
        raise 'Error: '#{input.path}' is a directory (did you mean to use --recursive?)'
      end
      output = @options[:output]
      output = input if @options[:in_place]
      process_file(input, output)
    end
    
      # Creates a delayed logger wrapping `inner`.
  #
  # @param inner [Sass::Logger::Base] The wrapped logger.
  def initialize(inner)
    self.log_level = inner.log_level
    @inner = inner
    @messages = []
  end
    
        # Returns the Sass/SCSS code for the media query list.
    #
    # @param options [{Symbol => Object}] An options hash (see {Sass::CSS#initialize}).
    # @return [String]
    def to_src(options)
      queries.map {|q| q.to_src(options)}.join(', ')
    end
    
            {
          :always_update     => false,
          :template_location => root + '/public/stylesheets/sass',
          :css_location      => root + '/public/stylesheets',
          :cache_location    => root + '/tmp/sass-cache',
          :always_check      => env != 'production',
          :quiet             => env != 'production',
          :full_exception    => env != 'production'
        }.freeze
      end
    end
  end
    
        it 'redirects requests with sneaky encoded session cookies' do
      get '/path', {}, 'HTTP_COOKIE' => 'rack.%73ession=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/path')
    end
  end
    
        expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('DENY')
  end
    
      %w(POST PUT DELETE).each do |method|
    it 'denies #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).not_to be_ok
    end
    
            MSG = 'Use only a single space inside array percent literal.'.freeze
        MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX =
          /(?:[\S&&[^\\]](?:\\ )*)( {2,})(?=\S)/
    
    module RuboCop
  module Cop
    module Performance
      # This cop identifies the use of `Regexp#match` or `String#match`, which
      # returns `#<MatchData>`/`nil`. The return value of `=~` is an integral
      # index/`nil` and is more performant.
      #
      # @example
      #   # bad
      #   do_something if str.match(/regex/)
      #   while regex.match('str')
      #     do_something
      #   end
      #
      #   # good
      #   method(str =~ /regex/)
      #   return value unless regex =~ 'str'
      class RedundantMatch < Cop
        MSG = 'Use `=~` in places where the `MatchData` returned by ' \
              '`#match` will not be used.'.freeze
    
            private
    
            def_node_matcher :multiple_compare?, <<-PATTERN
          (send (send _ {:< :> :<= :>=} $_) {:< :> :<= :>=} _)
        PATTERN
    
        module Statements
      def add_attachment(table_name, *attachment_names)
        raise ArgumentError, 'Please specify attachment name in your add_attachment call in your migration.' if attachment_names.empty?
    
          def validate_whitelist(record, attribute, value)
        if allowed_types.present? && allowed_types.none? { |type| type === value }
          mark_invalid record, attribute, allowed_types
        end
      end