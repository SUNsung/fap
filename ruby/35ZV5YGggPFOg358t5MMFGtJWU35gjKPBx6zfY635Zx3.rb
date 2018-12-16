
        
        __END__
    
    module Sidekiq
  module Logging
    
      module Queues
    ##
    # The Queues class is only for testing the fake queue implementation.
    # There are 2 data structures involved in tandem. This is due to the
    # Rspec syntax of change(QueueWorker.jobs, :size). It keeps a reference
    # to the array. Because the array was dervied from a filter of the total
    # jobs enqueued, it appeared as though the array didn't change.
    #
    # To solve this, we'll keep 2 hashes containing the jobs. One with keys based
    # on the queue, and another with keys of the worker names, so the array for
    # QueueWorker.jobs is a straight reference to a real array.
    #
    # Queue-based hash:
    #
    # {
    #   'default'=>[
    #     {
    #       'class'=>'TestTesting::QueueWorker',
    #       'args'=>[1, 2],
    #       'retry'=>true,
    #       'queue'=>'default',
    #       'jid'=>'abc5b065c5c4b27fc1102833',
    #       'created_at'=>1447445554.419934
    #     }
    #   ]
    # }
    #
    # Worker-based hash:
    #
    # {
    #   'TestTesting::QueueWorker'=>[
    #     {
    #       'class'=>'TestTesting::QueueWorker',
    #       'args'=>[1, 2],
    #       'retry'=>true,
    #       'queue'=>'default',
    #       'jid'=>'abc5b065c5c4b27fc1102833',
    #       'created_at'=>1447445554.419934
    #     }
    #   ]
    # }
    #
    # Example:
    #
    #   require 'sidekiq/testing'
    #
    #   assert_equal 0, Sidekiq::Queues['default'].size
    #   HardWorker.perform_async(:something)
    #   assert_equal 1, Sidekiq::Queues['default'].size
    #   assert_equal :something, Sidekiq::Queues['default'].first['args'][0]
    #
    # You can also clear all workers' jobs:
    #
    #   assert_equal 0, Sidekiq::Queues['default'].size
    #   HardWorker.perform_async(:something)
    #   Sidekiq::Queues.clear_all
    #   assert_equal 0, Sidekiq::Queues['default'].size
    #
    # This can be useful to make sure jobs don't linger between tests:
    #
    #   RSpec.configure do |config|
    #     config.before(:each) do
    #       Sidekiq::Queues.clear_all
    #     end
    #   end
    #
    class << self
      def [](queue)
        jobs_by_queue[queue]
      end
    
        def match(request_method, path)
      case matcher
      when String
        {} if path == matcher
      else
        if path_match = path.match(matcher)
          Hash[path_match.names.map(&:to_sym).zip(path_match.captures)]
        end
      end
    end
  end
end
