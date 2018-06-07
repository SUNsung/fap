
        
          </body>
</html>
HTML
    
    module Jekyll
  module Commands
    class New < Command
      class << self
        def init_with_program(prog)
          prog.command(:new) do |c|
            c.syntax 'new PATH'
            c.description 'Creates a new Jekyll site scaffold in PATH'
    
          def third_party_processors
        self.class.constants - \
          %w(KramdownParser PRIORITIES).map(
            &:to_sym
          )
      end
    
    describe Deliver::HtmlGenerator do
  let(:generator) { Deliver::HtmlGenerator.new }
    
      def present(payload)
    if payload.is_a?(Hash)
      payload = ActiveSupport::HashWithIndifferentAccess.new(payload)
      MAIN_KEYS.each do |key|
        return { :title => payload[key].to_s, :entries => present_hash(payload, key) } if payload.has_key?(key)
      end
    
      included do
    include Oauthable
    
      def test_at3
    t2000 = get_t2000
    assert_equal(t2000, Time.at(t2000))
#    assert_raise(RangeError) do
#      Time.at(2**31-1, 1_000_000)
#      Time.at(2**63-1, 1_000_000)
#    end
#    assert_raise(RangeError) do
#      Time.at(-2**31, -1_000_000)
#      Time.at(-2**63, -1_000_000)
#    end
  end
    
      # This case occurred in JRuby where native threads are used to provide
  # the same behavior as MRI green threads. Key to this issue was the fact
  # that the thread which called #exit in its block was also being explicitly
  # sent #join from outside the thread. The 100.times provides a certain
  # probability that the deadlock will occur. It was sufficient to reliably
  # reproduce the deadlock in JRuby.
  it 'does not deadlock when called from within the thread while being joined from without' do
    100.times do
      t = Thread.new { Thread.stop; Thread.current.send(@method) }
      Thread.pass while t.status and t.status != 'sleep'
      t.wakeup.should == t
      t.join.should == t
    end
  end
end

    
      it 'handles a value of 60 for seconds by carrying values forward in zone 'UTC'' do
    with_timezone 'UTC' do
      time = Time.send(@method, 1972, 6, 30, 23, 59, 60)