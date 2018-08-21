
        
              def make_test_case_available_to_view!
        test_case_instance = self
        _helpers.module_eval do
          unless private_method_defined?(:_test_case)
            define_method(:_test_case) { test_case_instance }
            private :_test_case
          end
        end
      end
    
    require 'thread'
    
            def test_url_host_no_db
          spec = resolve 'abstract://foo?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
        new_bulb = Bulb.find(bulb.id)
    new_bulb.name = 'foo'
    car.bulbs = [new_bulb]
    
      has_one :account, foreign_key: 'firm_id', dependent: :destroy, validate: true
  has_one :unvalidated_account, foreign_key: 'firm_id', class_name: 'Account', validate: false
  has_one :account_with_select, -> { select('id, firm_id') }, foreign_key: 'firm_id', class_name: 'Account'
  has_one :readonly_account, -> { readonly }, foreign_key: 'firm_id', class_name: 'Account'
  # added order by id as in fixtures there are two accounts for Rails Core
  # Oracle tests were failing because of that as the second fixture was selected
  has_one :account_using_primary_key, -> { order('id') }, primary_key: 'firm_id', class_name: 'Account'
  has_one :account_using_foreign_and_primary_keys, foreign_key: 'firm_name', primary_key: 'name', class_name: 'Account'
  has_one :account_with_inexistent_foreign_key, class_name: 'Account', foreign_key: 'inexistent'
  has_one :deletable_account, foreign_key: 'firm_id', class_name: 'Account', dependent: :delete
    
      test 'do not send subscription confirmation on initialize' do
    assert_nil @connection.last_transmission
  end
    
      setup do
    @connection = TestConnection.new
  end
    
        def read_messages(expected_size = 0)
      list = []
      loop do
        if @has_messages.try_acquire(1, list.size < expected_size ? WAIT_WHEN_EXPECTING_EVENT : WAIT_WHEN_NOT_EXPECTING_EVENT)
          msg = @messages.pop(true)
          raise msg if msg.is_a?(Exception)
    
      test 'unauthorized connection' do
    run_in_eventmachine do
      server = TestServer.new
      server.config.allowed_request_origins = %w( http://rubyonrails.com )
    
    require 'test_helper'
require_relative 'common'
require_relative 'channel_prefix'
    
          https://pip.readthedocs.org/en/stable/installing/#install-pip
    EOS
  when 'pil' then <<-EOS.undent
    Instead of PIL, consider `pip install pillow` or `brew install Homebrew/python/pillow`.
    EOS
  when 'macruby' then <<-EOS.undent
    MacRuby works better when you install their package:
      http://www.macruby.org/
    EOS
  when /(lib)?lzma/
    'lzma is now part of the xz formula.'
  when 'xcode'
    if MacOS.version >= :lion
      <<-EOS.undent
      Xcode can be installed from the App Store.
      EOS
    else
      <<-EOS.undent
      Xcode can be installed from https://developer.apple.com/xcode/downloads/
      EOS
    end
  when 'gtest', 'googletest', 'google-test' then <<-EOS.undent
    Installing gtest system-wide is not recommended; it should be vendored
    in your projects that use it.
    EOS
  when 'gmock', 'googlemock', 'google-mock' then <<-EOS.undent
    Installing gmock system-wide is not recommended; it should be vendored
    in your projects that use it.
    EOS
  when 'sshpass' then <<-EOS.undent
    We won't add sshpass because it makes it too easy for novice SSH users to
    ruin SSH's security.
    EOS
  when 'gsutil' then <<-EOS.undent
    Install gsutil with `pip install gsutil`
    EOS
  when 'clojure' then <<-EOS.undent
    Clojure isn't really a program but a library managed as part of a
    project and Leiningen is the user interface to that library.
    
        unless renamed_formulae.empty?
      @report[:A] -= renamed_formulae.map(&:last)
      @report[:D] -= renamed_formulae.map(&:first)
      @report[:R] = renamed_formulae
    end
    
          # Get the cache key pair for the given Sass URI.
      # The URI need not be checked for validity.
      #
      # The only strict requirement is that the returned pair of strings
      # uniquely identify the file at the given URI.
      # However, the first component generally corresponds roughly to the directory,
      # and the second to the basename, of the URI.
      #
      # Note that keys must be unique *across importers*.
      # Thus it's probably a good idea to include the importer name
      # at the beginning of the first component.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [(String, String)] The key pair which uniquely identifies
      #   the file at the given URI.
      def key(uri, options)
        Sass::Util.abstract(self)
      end
    
        def self.run
      # Apparently there's no better way than this to add Sass
      # to Merb's Rack stack.
      Merb::Config[:app] = Sass::Plugin::Rack.new(Merb::Config[:app])
    end
  end
end

    
    <script>
  // reading
  var es = new EventSource('/stream');
  es.onmessage = function(e) { $('#chat').append(e.data + '\n') };
    
        it 'denies requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
        it 'leaves TempFiles untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['file'][:filename] + '\n' + \
                                                 request.params['file'][:tempfile].read + '\n' + \
                                                 request.params['other']]]
      end
    
            attr_reader :node, :variable, :referenced, :references
        alias referenced? referenced
    
            def keyword_argument?
          %i[kwarg kwoptarg].include?(@declaration_node.type)
        end
    
              optarg_positions.each do |optarg_position|
            # there can only be one group of optional arguments
            break if optarg_position > arg_positions.max
    
    module RuboCop
  module Cop
    module Style
      # This cop check for uses of Object#freeze on immutable objects.
      #
      # @example
      #   # bad
      #   CONST = 1.freeze
      #
      #   # good
      #   CONST = 1
      class RedundantFreeze < Cop
        include FrozenStringLiteral
    
          # Checks whether the `if` is an `elsif`. Parser handles these by nesting
      # `if` nodes in the `else` branch.
      #
      # @return [Boolean] whether the node is an `elsif`
      def elsif?
        keyword == 'elsif'
      end