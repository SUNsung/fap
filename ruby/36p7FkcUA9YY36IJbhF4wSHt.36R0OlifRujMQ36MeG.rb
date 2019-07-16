
        
            assert_equal 'my_c1_m', @c1_m.c_function
  end
    
        assert_equal @a, loaded
    
        assert_nil encoding
    
        json = File.open('js/search_index.js.gz', 'rb') {|gzip|
      Zlib::GzipReader.new(gzip).read
    }
    
      def test_generate
    @generator.generate
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path in #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path in #{expected.inspect} but it had'
  end
end
    
        it 'marks all notifications as read' do
      request.env['HTTP_REFERER'] = 'I wish I were spelled right'
      FactoryGirl.create(:notification, recipient: alice, target: post)
      FactoryGirl.create(:notification, recipient: alice, target: post)
    
        describe 'overview' do
      it 'has a heading' do
        assert_includes output, '---- Overview ----'
      end
    
        it 'can retry a retry' do
      add_retry
      r = Sidekiq::RetrySet.new
      assert_equal 1, r.size
      r.first.retry
      assert_equal 0, r.size
      assert_equal 1, Sidekiq::Queue.new('default').size
      job = Sidekiq::Queue.new('default').first
      assert_equal 'bob', job.jid
      assert_equal 1, job['retry_count']
    end
    
            begin
          Component.new.handle_exception exception
          pass
        rescue StandardError
          flunk 'failed handling a nil backtrace'
        end
      end
    end
  end
    
        class MyStopper
      def call(worker_class, job, queue, r)
        yield if job['args'].first.odd?
      end
    end
    
          assert SomeScheduledWorker.perform_in(1.month, 'mike')
      job = ss.first
      assert job['created_at']
      refute job['enqueued_at']
    end
  end
    
      describe 'delay' do
    require 'action_mailer'
    class InlineFooMailer < ActionMailer::Base
      def bar(str)
        raise InlineError
      end
    end
    
    begin
  #RubyProf::exclude_threads = [ Monitoring ]
  #RubyProf.start
  fire_event(:startup)
  #Sidekiq.logger.error 'Simulating 1ms of latency between Sidekiq and redis'
  #Toxiproxy[:redis].downstream(:latency, latency: 1).apply do
    launcher = Sidekiq::Launcher.new(Sidekiq.options)
    launcher.run