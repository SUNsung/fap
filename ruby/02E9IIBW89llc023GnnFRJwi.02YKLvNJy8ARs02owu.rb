
        
            it 'returns a label 'Missing Gems' if a given agent has dependencies missing' do
      stub(@agent).dependencies_missing? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Missing Gems'
    end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
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
    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
          @scheduler.schedule_scheduler_agents
    
        it 'cleans up old logs when there are more than log_length' do
      stub(AgentLog).log_length { 4 }
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 1')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 2')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 3')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 4')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 4')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 1')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 5')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 5')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 2')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 6')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 6')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 3')
    end
    
    module Admin
  class ChangeEmailsController < BaseController
    before_action :set_account
    before_action :require_local_account!
    
          flash[:notice] = I18n.t('admin.accounts.resend_confirmation.success')
      redirect_to admin_accounts_path
    end
    
        def index
      authorize :custom_emoji, :index?
      @custom_emojis = filtered_custom_emojis.eager_load(:local_counterpart).page(params[:page])
    end
    
          @report_note = current_account.report_notes.new(resource_params)
      @report = @report_note.report
    
      def hub_lease_seconds
    params['hub.lease_seconds']
  end
    
      def process_salmon
    SalmonWorker.perform_async(@account.id, payload.force_encoding('UTF-8'))
  end
end

    
      def show
    if subscription.valid?(params['hub.topic'])
      @account.update(subscription_expires_at: future_expires)
      render plain: encoded_challenge, status: 200
    else
      head 404
    end
  end
    
      private
    
    describe 'Kernel#system' do
  it 'is a private method' do
    Kernel.should have_private_instance_method(:system)
  end
    
      it 'does not raise an error on a tainted, frozen object' do
    o = Object.new.taint.freeze
    o.taint.should equal(o)
  end
    
    describe 'main#define_method' do
  before :each do
    @code = 'define_method(:boom) { :bam }'
  end
    
        def register_lotus
      Lotus::Assets.sources << assets_path
    end
    
    class Converter
  extend Forwardable
  include Network
  include LessConversion
  include JsConversion
  include FontsConversion
    
        def initialize(*args)
      @s = StringScanner.new(*args)
    end
    
    
    {    def replace_escaping(less)
      less = less.gsub(/~'([^']+)'/, '\1').gsub(/~'([^']+)'/, '\1') # Get rid of ~'' escape
      less.gsub!(/\$\{([^}]+)\}/, '$\1') # Get rid of @{} escape
      less.gsub!(/'([^'\n]*)(\$[\w\-]+)([^'\n]*)'/, ''\1#{\2}\3'') # interpolate variable in string, e.g. url('$file-1x') => url('#{$file-1x}')
      less.gsub(/(\W)e\(%\('?([^']*)'?\)\)/, '\1\2') # Get rid of e(%('')) escape
    end
    
      # Show full error reports and disable caching.
  config.consider_all_requests_local       = true
  config.action_controller.perform_caching = false
    
    # brew tap shopify/shopify
# brew install toxiproxy
# gem install toxiproxy
#require 'toxiproxy'
# simulate a non-localhost network for realer-world conditions.
# adding 1ms of network latency has an ENORMOUS impact on benchmarks
#Toxiproxy.populate([{
    #'name': 'redis',
    #'listen': '127.0.0.1:6380',
    #'upstream': '127.0.0.1:6379'
#}])
    
        worker_count.times do |count|
      template '/data/#{app}/shared/config/sidekiq_#{count}.yml' do
        owner node[:owner_name]
        group node[:owner_name]
        mode 0644
        source 'sidekiq.yml.erb'
        variables({
          :require => '/data/#{app}/current'
        })
      end
    end
    
    module Sidekiq
  module Extensions
    ##
    # Adds 'delay', 'delay_for' and `delay_until` methods to ActionMailer to offload arbitrary email
    # delivery to Sidekiq.  Example:
    #
    #    UserMailer.delay.send_welcome_email(new_user)
    #    UserMailer.delay_for(5.days).send_welcome_email(new_user)
    #    UserMailer.delay_until(5.days.from_now).send_welcome_email(new_user)
    class DelayedMailer
      include Sidekiq::Worker
    
            begin
          b = File.stat(fp.path)
          next if orig_st.ino == b.ino && orig_st.dev == b.dev
        rescue Errno::ENOENT
        end
    
          def make_new
        @klass.new(*@args)
      end
    end
  end
end

    
          s = sessions
      return unless s