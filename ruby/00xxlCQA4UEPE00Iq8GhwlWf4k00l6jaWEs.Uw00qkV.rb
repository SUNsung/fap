
        
          def self.invite_by_email(email, invited_by, topic = nil, group_ids = nil, custom_message = nil)
    create_invite_by_email(email, invited_by,
      topic: topic,
      group_ids: group_ids,
      custom_message: custom_message,
      send_email: true
    )
  end
    
      context '#destroy' do
    it 'should return the right response for an invalid group_id' do
      max_id = Group.maximum(:id).to_i
      delete '/admin/groups/#{max_id + 1}.json'
      expect(response.status).to eq(404)
    end
    
      describe '#status' do
    it 'works for failed jobs' do
      job.failed_at = Time.now
      expect(status(job)).to eq('<span class='label label-danger'>failed</span>')
    end
    
            it 'kills no long active workers' do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
          AgentRunner.class_variable_set(:@@agents, [DelayedJobWorker])
          mock.instance_of(HuginnScheduler).stop!
          @agent_runner.send(:run_workers)
        end
      end
    
      after(:each) do
    @rufus_scheduler.shutdown(:wait)
  end
    
      describe 'migrating a hash' do
    it 'should convert every attribute' do
      expect(LiquidMigrator.convert_hash({'a' => '$.data', 'b' => 'This is a <$.test>'})).to eq(
                                  {'a' => '$.data', 'b' => 'This is a {{test}}'}
      )
    end
    it 'should work with leading_dollarsign_is_jsonpath' do
      expect(LiquidMigrator.convert_hash({'a' => '$.data', 'b' => 'This is a <$.test>'}, leading_dollarsign_is_jsonpath: true)).to eq(
                                  {'a' => '{{data}}', 'b' => 'This is a {{test}}'}
      )
    end
    it 'should use the corresponding *_path attributes when using merge_path_attributes'do
      expect(LiquidMigrator.convert_hash({'a' => 'default', 'a_path' => '$.data'}, {leading_dollarsign_is_jsonpath: true, merge_path_attributes: true})).to eq(
                                  {'a' => '{{data}}'}
      )
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_hash({'b' => 'This is <$.complex[2]>'}) }.
        to raise_error('JSONPath '$.complex[2]' is too complex, please check your migration.')
    end
  end
    
        @opts = {
      'api_key' => '800deeaf-e285-9d62-bc90-j999c1973cc9',
      'path' => 'trackings'
    }
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
        def default_controllers(options)
      mod = options[:module] || 'devise'
      @controllers = Hash.new { |h,k| h[k] = '#{mod}/#{k}' }
      @controllers.merge!(options[:controllers]) if options[:controllers]
      @controllers.each { |k,v| @controllers[k] = v.to_s }
    end
    
          def rsync_post(machine, opts)
        if opts.key?(:chown) && !opts[:chown]
          return
        end
    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
        it 'should receive a valid address' do
      allow(provider_config).to receive(:compose).and_return(false)
      allow(platform).to receive(:windows?).and_return(false)
      allow(platform).to receive(:darwin?).and_return(false)
      allow(driver_obj).to receive(:created?).and_return(true)
      allow(driver_obj).to receive(:state).and_return(:running)
      allow(driver_obj).to receive(:execute).with(:get_network_config).and_return(result)
      allow(driver_obj).to receive(:inspect_container).and_return(network_settings)
    
      def test_font_helper_without_suffix
    assert_match %r(url\(['']?/assets/.*eot['']?\)), @css
  end
    
    def capture_logging(lvl=Logger::INFO)
  old = Sidekiq.logger
  begin
    out = StringIO.new
    logger = Logger.new(out)
    logger.level = lvl
    Sidekiq.logger = logger
    yield
    out.string
  ensure
    Sidekiq.logger = old
  end
end
    
    describe 'job scheduling' do
  describe 'middleware' do
    class SomeScheduledWorker
      include Sidekiq::Worker
      sidekiq_options :queue => :custom_queue
      def perform(x)
      end
    end
    
    describe 'Sidekiq::Testing' do
  describe 'require/load sidekiq/testing.rb' do
    before do
      require 'sidekiq/testing'
    end
    
    include Sidekiq::Util