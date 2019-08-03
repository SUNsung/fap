
        
        LogStash::Bundler.setup!
    
          Dir.glob(::File.join(temp_path, '*.gem')).each do |gem_file|
        filename = ::File.basename(gem_file)
    
      describe '#system?' do
    context 'when the pipeline is a system pipeline' do
      let(:settings) { mock_settings({ 'pipeline.system' => true })}
    
          assert_nil client.push('class' => MyWorker, 'args' => [0])
      assert_match(/[0-9a-f]{12}/, client.push('class' => MyWorker, 'args' => [1]))
      client.push_bulk('class' => MyWorker, 'args' => [[0], [1]]).each do |jid|
        assert_match(/[0-9a-f]{12}/, jid)
      end
    end
  end
    
        it 'handles symbols and strings' do
      q = Sidekiq::Queue.new('bar')
      assert_equal 0, q.size
      assert SetWorker.set('queue' => 'bar', :retry => 11).perform_async(1)
      job = q.first
      assert_equal 'bar', job['queue']
      assert_equal 11, job['retry']
    
    describe Sidekiq::ExceptionHandler do
  describe 'with mock logger' do
    before do
      @old_logger = Sidekiq.logger
      @str_logger = StringIO.new
      Sidekiq.logger = Logger.new(@str_logger)
    end