
        
            desc 'Get the text for a specific license' do
      detail 'This feature was introduced in GitLab 8.7.'
      success ::API::Entities::License
    end
    params do
      requires :name, type: String, desc: 'The name of the template'
    end
    get 'templates/licenses/:name', requirements: { name: /[\w\.-]+/ } do
      template = TemplateFinder.build(:licenses, nil, name: params[:name]).execute
    
          def initialize(query, filter_opts = {}, &block)
        @raw_query = query.dup
        @filters = []
        @filter_options = { default_parser: :downcase.to_proc }.merge(filter_opts)
    
            it { expect(presenter.can_approve?).to eq(false) }
      end
    end
    
            delegate :count, :size, :real_size, to: :diff_files
    
      # Time interval you can reset your password with a reset password key.
  # Don't put a too small interval or your users won't have the time to
  # change their passwords.
  config.reset_password_within = 2.days
    
        membership = contact.aspect_memberships.where(aspect_id: aspect.id).first
    
            it 'creates sessions' do
          get '/'
          refute_nil   last_request.env['rack.session']
          refute_empty last_request.env['rack.session'].options
          assert_equal :all, last_request.env['rack.session'].options[:domain]
        end
      end
    
      describe 'bulk' do
    after do
      Sidekiq::Queue.new.clear
    end
    it 'can push a large set of jobs at once' do
      jids = Sidekiq::Client.push_bulk('class' => QueuedWorker, 'args' => (1..1_000).to_a.map { |x| Array(x) })
      assert_equal 1_000, jids.size
    end
    it 'can push a large set of jobs at once using a String class' do
      jids = Sidekiq::Client.push_bulk('class' => 'QueuedWorker', 'args' => (1..1_000).to_a.map { |x| Array(x) })
      assert_equal 1_000, jids.size
    end
    it 'returns the jids for the jobs' do
      Sidekiq::Client.push_bulk('class' => 'QueuedWorker', 'args' => (1..2).to_a.map { |x| Array(x) }).each do |jid|
        assert_match(/[0-9a-f]{12}/, jid)
      end
    end
    it 'handles no jobs' do
      result = Sidekiq::Client.push_bulk('class' => 'QueuedWorker', 'args' => [])
      assert_equal 0, result.size
    end
  end
    
        def initialize(params={})
      @thehash = default.merge(params)
    end
    
      def options
    { :concurrency => 3, :queues => ['default'] }
  end
    
        it 'reconnects if connection is flagged as readonly' do
      counts = []
      Sidekiq.redis do |c|
        counts << c.info['total_connections_received'].to_i
        raise Redis::CommandError, 'READONLY You can't write against a replica.' if counts.size == 1
      end
      assert_equal 2, counts.size
      assert_equal counts[0] + 1, counts[1]
    end
  end
    
      class SpecificJidWorker
    include Sidekiq::Worker
    sidekiq_class_attribute :count
    self.count = 0
    def perform(worker_jid)
      return unless worker_jid == self.jid
      self.class.count += 1
    end
  end
    
      def perform(start)
    now = Time.now.to_f
    puts 'Latency: #{now - start} sec'
  end
end