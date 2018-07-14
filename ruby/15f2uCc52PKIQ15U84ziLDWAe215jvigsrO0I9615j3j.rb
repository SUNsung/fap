  def test_redirect_to_params
    error = assert_raise(ActionController::UnfilteredParameters) do
      get :redirect_to_params
    end
    assert_equal 'unable to convert unpermitted parameters to hash', error.message
  end
    
          # Returns constant of subscription adapter specified in config/cable.yml.
      # If the adapter cannot be found, this will default to the Redis adapter.
      # Also makes sure proper dependencies are required.
      def pubsub_adapter
        adapter = (cable.fetch('adapter') { 'redis' })
    
    class VerySpecialClient < SpecialClient
end
    
        def receive
      @last_action = [ :receive ]
    end
    
      setup do
    @connection = TestConnection.new
  end
    
        assert subscriptions.verify
  end
    
      test 'rack response' do
    run_in_eventmachine do
      connection = open_connection
      response = connection.process
    
        public :process_internal_message
    
          message = TestMailer.send_test(args[:to_address])
      Email::Sender.new(message, :test_message).send
    end
    
          DEFAULT_PERMITTED_ATTRIBUTES.each_pair do |action, keys|
        permit(action, keys: keys)
      end
    end
    
      test 'error message is configurable by resource name' do
    store_translations :en, devise: { failure: { admin: { invalid: 'Invalid credentials' } } } do
      sign_in_as_admin do
        fill_in 'password', with: 'abcdef'
      end
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
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
    
      def test_env
    result = Open3.popen3({'A' => 'B', 'C' => 'D'}, RUBY, '-e' 'p ENV['A']') do |i, out, err, thr|
      output = out.read
      assert_equal('\'B\'\n', output)
    end
  end
    
      describe 'when passed Float' do
    it 'returns self converted to Float and raised to the passed argument' do
      (Rational(3, 1) ** 3.0).should eql(27.0)
      (Rational(3, 1) ** 1.5).should be_close(5.19615242270663, TOLERANCE)
      (Rational(3, 1) ** -1.5).should be_close(0.192450089729875, TOLERANCE)
    end
    
      def test_hidden_key
    bug6899 = '[ruby-core:47253]'
    foo = 'foor'
    bar = 'bar'
    assert_nothing_raised(NotImplementedError, bug6899) do
      2000.times {eval %[(foo..bar) ? 1 : 2]}
    end
    foo = bar
  end
    
        header = Gem::Package::TarHeader.new :name => name, :mode => mode,
                                         :size => size, :prefix => prefix,
                                         :mtime => ENV['SOURCE_DATE_EPOCH'] ? Time.at(ENV['SOURCE_DATE_EPOCH'].to_i).utc : Time.now
    
        e = assert_raises OptionParser::InvalidOption do
      @cmd.handle_options %w[--vendor]
    end
    
      def test_verify_certificate_message_SELF_SIGNED_CERT_IN_CHAIN
    error_number = OpenSSL::X509::V_ERR_SELF_SIGNED_CERT_IN_CHAIN
    
                def keep_if
              block_given? or return enum_for(__method__) { size }
              n = @hash.size
              super
              @keys = nil if @hash.size != n
              self
            end
    
            def operator_assignment_node
          return nil unless node.parent
          return nil unless OPERATOR_ASSIGNMENT_TYPES.include?(node.parent.type)
          return nil unless node.sibling_index.zero?
          node.parent
        end
    
            def on_send(node)
          return unless match_call?(node) &&
                        (!node.value_used? || only_truthiness_matters?(node)) &&
                        !(node.parent && node.parent.block_type?)
    
              reconstructed.join
        end
    
          context 'without empty line' do
        let(:source) do
          <<-RUBY.strip_indent
            #{type} SomeObject
            end
          RUBY
        end