
        
            it 'shows all options for agents that can be scheduled, create and receive events' do
      select_agent_type('Website Agent scrapes')
      expect(page).not_to have_content('This type of Agent cannot create events.')
    end
    
        it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
          it 'runs until stop is called' do
        mock.instance_of(Rufus::Scheduler).join
        Thread.new { while @agent_runner.instance_variable_get(:@running) != false do sleep 0.1; @agent_runner.stop end }
        @agent_runner.run
      end
    
        it 'should revert extract and template options for an updated WebsiteAgent' do
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
      ConvertWebsiteAgentTemplateForMerge.new.down
      agent.reload
      expect(agent.options).to include('extract' => reverted_extract,
                                       'template' => reverted_template)
    end
  end
end

    
      let(:valid_params) {
    {
      name: 'Example',
      schedule: 'every_1h',
      options: {
        'action' => 'run',
      },
      user: users(:bob),
      control_targets: [target]
    }
  }
    
        @checker = Agents::CsvAgent.new(:name => 'somename', :options => @valid_params)
    @checker.user = users(:jane)
    @checker.save!
    @lfa = Agents::LocalFileAgent.new(name: 'local', options: {path: '{{}}', watch: 'false', append: 'false', mode: 'read'})
    @lfa.user = users(:jane)
    @lfa.save!
  end
    
        def check_url
      return unless cask.url
    
          # Find a bottle built for a previous version of macOS.
      def find_older_compatible_tag(tag)
        begin
          tag_version = MacOS::Version.from_symbol(tag)
        rescue ArgumentError
          return
        end
    
              find_method_with_args(body_node, :system, /^(otool|install_name_tool|lipo)/) do
            problem 'Use ruby-macho instead of calling #{@offensive_node.source}'
          end
    
        return false if args[:before] && OS::Mac.version >= args[:before]
    
            uses_from_macos('foo', after: :mojave)
      end
    
        context 'when the sender has no relevance to local activity' do
      before do
        subject.perform
      end
    
      def distribute_poll!
    return if @poll.hide_totals?
    ActivityPub::DistributePollUpdateWorker.perform_in(3.minutes, @poll.status.id)
  end
    
      def payload
    @payload ||= Oj.dump(serialize_payload(@status, ActivityPub::ActivitySerializer, signer: @account))
  end
    
    class ActivityPub::UpdateDistributionWorker
  include Sidekiq::Worker
  include Payloadable
    
        target_account = ActivityPub::FetchRemoteAccountService.new.call(target_uri)
    
            subject.call(json, forwarder)
      end
    
    RSpec.describe UnreservedUsernameValidator, type: :validator do
  describe '#validate' do
    before do
      allow(validator).to receive(:reserved_username?) { reserved_username }
      validator.validate(account)
    end
    
      let(:unordered_config_parts) { ordered_config_parts.shuffle }
  let(:settings) { LogStash::SETTINGS }
    
        desc 'Bootstrap all the VM's used for this tests'
    task :setup, :platform do |t, args|
      config   = PlatformConfig.new
      experimental = (ENV['LS_QA_EXPERIMENTAL_OS'].to_s.downcase || 'false') == 'true'
      machines = config.select_names_for(args[:platform], {'experimental' => experimental})
    
      def self.upbuff!(buffer_update_id, admin_id, body_text, status)
    buffer_update = BufferUpdate.find(buffer_update_id)
    if status == 'confirmed'
      buffer_response = send_to_buffer(body_text, buffer_update.buffer_profile_id_code)
      buffer_update.update!(buffer_response: buffer_response, status: status, approver_user_id: admin_id, body_text: body_text)
    else
      buffer_update.update!(status: status, approver_user_id: admin_id)
    end
  end
    
      it { expect(subject.tmux_window_and_pane_target).to eql 'foo:0.1' }
end

    
      describe '#directories' do
    context 'without TMUXINATOR_CONFIG environment' do
      before do
        allow(described_class).to receive(:environment?).and_return false
      end