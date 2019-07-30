
        
          #
  # Returns the connection oriented general handler type, in this case bind.
  #
  def self.general_handler_type
    'bind'
  end
    
          # block comment awareness
      if ln =~ /^=end$/
        in_comment = false
        next
      end
      in_comment = true if ln =~ /^=begin$/
      next if in_comment
    
      def initialize(info = {})
    super(merge_info(info,
      'Name'          => 'Unix Command Shell, Reverse TCP (/dev/tcp)',
      'Description'   => %q{
        Creates an interactive shell via bash's builtin /dev/tcp.
    }
    
        # default chunk sizes (if chunked is used)
    self.chunk_min_size = 1
    self.chunk_max_size = 10
    
    # Default timings
IAX_DEFAULT_REG_REFRESH = 60
IAX_DEFAULT_TIMEOUT     = 10
    
    require 'rex/proto/ipmi/utils'
    
    
  # open rmcpplus_request with cipherzero
  def self.create_ipmi_session_open_cipher_zero_request(console_session_id)
    head = [
      0x06, 0x00, 0xff, 0x07,   # RMCP Header
      0x06,                     # RMCP+ Authentication Type
      PAYLOAD_RMCPPLUSOPEN_REQ, # Payload Type
      0x00, 0x00, 0x00, 0x00,   # Session ID
      0x00, 0x00, 0x00, 0x00    # Sequence Number
    ].pack('C*')
    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
        it { expect(alias_node.is_a?(described_class)).to be(true) }
  end
    
      describe '#body' do
    context 'with a single expression body' do
      let(:source) do
        'class << self; bar; end'
      end
    
          let(:expected_source) { <<-RUBY }
        def some_method(foo,
            _bar)
          puts foo
        end
      RUBY
    
      context 'when private_class_method is used with arguments' do
    it 'does not register an offense' do
      expect_no_offenses(<<~RUBY)
        class SomeClass
          private_class_method def self.some_method
            puts 10
          end
        end
      RUBY
    end
  end
    
      context 'when a keyword splat method argument is not used' do
    it 'accepts' do
      expect_no_offenses(<<~RUBY)
        def some_method(name: value, **rest_keywords)
        end
      RUBY
    end
  end
    
              return false unless last_children&.send_type?
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift int, shift
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
          def bar_side
        @bar_side.to_s
      end
    
        assert last_response.ok?
    
    context 'Precious::Views::LatestChanges' do
  include Rack::Test::Methods
  
  def app
    Precious::App
  end
  
  setup do
    @path = cloned_testpath('examples/lotr.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {:latest_changes_count => 10})
  end
    
      teardown do
    FileUtils.rm_rf(@path)
  end
    
    def gemspec_file
  '#{name}.gemspec'
end
    
      s.require_paths = %w[lib]
    
        def create_eligible_credit_event
      # When cancelling an order, a payment with the negative amount
      # of the payment total is created to refund the customer. That
      # payment has a source of itself (Spree::Payment) no matter the
      # type of payment getting refunded, hence the additional check
      # if the source is a store credit.
      return unless store_credit? && source.is_a?(Spree::StoreCredit)
    
          def gateway_options
        order.reload
        gateway_options_class.new(self).to_hash
      end
    
                it 'deducts the default VAT from the cost' do
              shipping_rates = subject.shipping_rates(package)
              # deduct default vat: 4.00 / 1.2 = 3.33 (rounded)
              expect(shipping_rates.first.cost).to eq(3.33)
            end
          end
    
          before_action :set_content_type
      before_action :load_user
      before_action :authorize_for_order, if: proc { order_token.present? }
      before_action :authenticate_user
      before_action :load_user_roles
    
            def new
          @payment_methods = Spree::PaymentMethod.available
          respond_with(@payment_methods)
        end
    
    require 'minitest/autorun'
    
          q = Sidekiq::Queue.new('foo')
      job = q.first
      assert_equal 'foo', job['queue']
      assert_equal 12, job['retry']
    end
    
        assert_nil dead_set.find_job('000101')
    assert dead_set.find_job('000102')
    assert dead_set.find_job('000103')
  end
end

    
      it 'does not support invalid concurrency' do
    assert_raises(ArgumentError) { new_manager(concurrency: 0) }
    assert_raises(ArgumentError) { new_manager(concurrency: -1) }
  end
    
      describe 'poller' do
    before do
      Sidekiq.redis{|c| c.flushdb}
      @error_1  = { 'class' => ScheduledWorker.name, 'args' => [0], 'queue' => 'queue_1' }
      @error_2  = { 'class' => ScheduledWorker.name, 'args' => [1], 'queue' => 'queue_2' }
      @error_3  = { 'class' => ScheduledWorker.name, 'args' => [2], 'queue' => 'queue_3' }
      @future_1 = { 'class' => ScheduledWorker.name, 'args' => [3], 'queue' => 'queue_4' }
      @future_2 = { 'class' => ScheduledWorker.name, 'args' => [4], 'queue' => 'queue_5' }
      @future_3 = { 'class' => ScheduledWorker.name, 'args' => [5], 'queue' => 'queue_6' }
    
          assert SomeScheduledWorker.perform_in(1.month, 'mike')
      job = ss.first
      assert job['created_at']
      refute job['enqueued_at']
    end
  end
    
      it 'stubs the async call when in testing mode' do
    assert InlineWorker.perform_async(true)
    
      def perform(msg='lulz you forgot a msg!')
    $redis.lpush('sinkiq-example-messages', msg)
  end
end
    
        def synchronize_after?
      synchronize == 'after'
    end
  end
end

    
            expect(described_class.directory).to eq described_class.home
      end
    end
    
    describe Tmuxinator::Doctor do
  describe '.installed?' do
    context 'tmux is installed' do
      before do
        allow(Kernel).to receive(:system) { true }
      end
    
        before do
      allow(project).to receive_messages(
        name: 'test',
        tmux: 'tmux',
        root: root,
        root?: root?,
        base_index: 1
      )
    end