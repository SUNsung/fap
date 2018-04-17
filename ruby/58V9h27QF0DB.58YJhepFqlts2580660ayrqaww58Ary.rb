
        
              # Returns constant of subscription adapter specified in config/cable.yml.
      # If the adapter cannot be found, this will default to the Redis adapter.
      # Also makes sure proper dependencies are required.
      def pubsub_adapter
        adapter = (cable.fetch('adapter') { 'redis' })
    
            def test_url_memory_db_for_sqlite3
          spec = resolve 'sqlite3::memory:'
          assert_equal(':memory:', spec['database'])
        end
    
      test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
  end
    
        # Access the message attachments list.
    def attachments
      mailer.attachments
    end
    
            def enqueue_delivery(delivery_method, options = {})
          if processed?
            super
          else
            args = @mailer_class.name, @action.to_s, delivery_method.to_s, @params, *@args
            ActionMailer::Parameterized::DeliveryJob.set(options).perform_later(*args)
          end
        end
    end
    
      class AssertMultipartSelectMailer < ActionMailer::Base
    def test(options)
      mail subject: 'Test e-mail', from: 'test@test.host', to: 'test <test@test.host>' do |format|
        format.text { render plain: options[:text] }
        format.html { render plain: options[:html] }
      end
    end
  end
    
      test 'delivery method can be customized per instance' do
    stub_any_instance(Mail::SMTP, instance: Mail::SMTP.new({})) do |instance|
      assert_called(instance, :deliver!) do
        email = DeliveryMailer.welcome.deliver_now
        assert_instance_of Mail::SMTP, email.delivery_method
        email = DeliveryMailer.welcome(delivery_method: :test).deliver_now
        assert_instance_of Mail::TestMailer, email.delivery_method
      end
    end
  end
    
          while size = q1.pop
        assert_equal size, File.size(f.path)
        assert_equal size, f.size
        q2.push true
      end
      th.join
    end
  end
    
      def test_2038
    if no_leap_seconds?
      assert_equal(0x80000000, Time.utc(2038, 1, 19, 3, 14, 8).tv_sec)
    end
    [
      [2038, 1, 19, 3, 14, 7],
      [2038, 1, 19, 3, 14, 8],
      [2038, 1, 19, 3, 14, 9],
      [2039, 1, 1, 0, 0, 0],
    ].each {|year, mon, day, hour, min, sec|
      t = Time.utc(year, mon, day, hour, min, sec)
      assert_equal(year, t.year)
      assert_equal(mon, t.mon)
      assert_equal(day, t.day)
      assert_equal(hour, t.hour)
      assert_equal(min, t.min)
      assert_equal(sec, t.sec)
    }
  end
    
      class Apple < Struct; end
    
      def self.status_of_completed_thread
    t = completed_thread
    t.join
    Status.new t
  end