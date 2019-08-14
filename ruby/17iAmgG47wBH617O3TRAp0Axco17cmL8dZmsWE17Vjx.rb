
        
                css('pre > code').each do |node|
          node.parent['data-language'] = 'crystal'
          node.parent.content = node.parent.content
        end
    
            css('pre').each do |node|
          node['data-language'] = 'js'
          node['data-language'] = node['class'][/language-(\w+)/, 1] if node['class']
          node.content = node.content
        end
    
        def initialize(options = {})
      @request_options = options.extract!(:request_options)[:request_options].try(:dup) || {}
      options[:max_concurrency] ||= 20
      options[:pipelining] = 0
      super
    end
    
            css('> .alert + h1').each do |node|
          node.previous_element.before(node)
        end
    
        ActivityPub::DeliveryWorker.perform_async(Oj.dump(serialize_payload(follow, ActivityPub::RejectFollowSerializer)), current_account.id, follow.account.inbox_url)
  end
    
        ActivityTracker.increment('activity:interactions')
    
        return unless @account.present? && @status.distributable?
    
        context 'when the sender is relayed' do
      let!(:relay_account) { Fabricate(:account, inbox_url: 'https://relay.example.com/inbox') }
      let!(:relay) { Fabricate(:relay, inbox_url: 'https://relay.example.com/inbox') }
    
      describe 'PUT #update' do
    it 'updates notifications settings' do
      user.settings['notification_emails'] = user.settings['notification_emails'].merge('follow' => false)
      user.settings['interactions'] = user.settings['interactions'].merge('must_be_follower' => true)
    
            if Devise.check_at_sign && !resource[:email].index('@')
          resource[:email] = Rpam2.getenv(resource.find_pam_service, attributes[:email], attributes[:password], 'email', false)
          resource[:email] = '#{attributes[:email]}@#{resource.find_pam_suffix}' unless resource[:email]
        end
      end
    
      let(:json) do
    {
      '@context': 'https://www.w3.org/ns/activitystreams',
      id: 'foo',
      type: 'Move',
      actor: old_account.uri,
      object: old_account.uri,
      target: new_account.uri,
    }.with_indifferent_access
  end
    
        it 'returns nil if an article doesn't have a flare tag' do
      expect(described_class.new(article).tag_hash).to be nil
    end
    
          it 'renders to appropriate if article belongs to org' do
        article.update(organization_id: create(:organization).id)
        get article.path
        expect(response.body).to include CGI.escapeHTML(article.title)
      end
    
    require File.expand_path('../dummy/config/environment.rb', __FILE__)
    
              unless inventory_unit.respond_to?(can_event) &&
              inventory_unit.send(can_event)
            render plain: { exception: 'cannot transition to #{@event}' }.to_json,
                   status: 200
            false
          end
        end
    
          assert $called
      assert client.middleware.exists?(mware)
      refute Sidekiq.client_middleware.exists?(mware)
    end
  end
    
    describe Sidekiq::ExceptionHandler do
  describe 'with mock logger' do
    before do
      @old_logger = Sidekiq.logger
      @str_logger = StringIO.new
      Sidekiq.logger = Logger.new(@str_logger)
    end
    
      it 'throws away dead processors' do
    mgr = new_manager(options)
    init_size = mgr.workers.size
    processor = mgr.workers.first
    begin
      mgr.processor_died(processor, 'ignored')
    
        def start(name = nil, *args)
      # project-config takes precedence over a named project in the case that
      # both are provided.
      if options['project-config']
        args.unshift name if name
        name = nil
      end
    
            context 'a thor command' do
          context '(-v)' do
            let(:arg1) { '-v' }
    
        def yaml
      _hashed? ? @yaml : {}
    end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
      def is_pane
    @actual.is_a? Tmuxinator::Pane
  end
end

    
          expect(instance.render).to match %r{wemux.ls.2>\/dev\/null}
    end
  end
    
          def valid_project_config?(project_config)
        return false unless project_config
        unless exists?(path: project_config)
          raise 'Project config (#{project_config}) doesn't exist.'
        end
        true
      end
    
            expect(window.panes).to match(
          [
            a_pane.with(index: 0).and_commands('vim'),
            a_pane.with(index: 1).and_commands('ls'),
            a_pane.with(index: 2).and_commands('top')
          ]
        )
      end
    end