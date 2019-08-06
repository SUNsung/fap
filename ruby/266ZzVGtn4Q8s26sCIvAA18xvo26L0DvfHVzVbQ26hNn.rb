
        
            it 'returns a correct icon tag for other services' do
      icon = omniauth_provider_icon(:'37signals')
      expect(icon).to be_html_safe
      elem = Nokogiri(icon).at('i.fa.fa-lock')
      expect(elem).to be_a Nokogiri::XML::Element
    end
  end
    
              @bar3 = Agents::DotBar.new(name: 'bar3').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @bar2
            agent.save!
          },
        ]
        @foo.reload
        @bar2.reload
    
      describe '#relative_distance_of_time_in_words' do
    it 'in the past' do
      expect(relative_distance_of_time_in_words(Time.now-5.minutes)).to eq('5m ago')
    end
    
        it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
      it 'should run scheduled agents' do
    mock(Agent).run_schedule('every_1h')
    mock.instance_of(IO).puts('Queuing schedule for every_1h')
    @scheduler.send(:run_schedule, 'every_1h')
  end
    
        it 'should raise an exception when encountering complex JSONPaths' do
      @agent.options['username_path'] = '$.very.complex[*]'
      expect { LiquidMigrator.convert_all_agent_options(@agent) }.
        to raise_error('JSONPath '$.very.complex[*]' is too complex, please check your migration.')
    end
    
        stub_request(:get, /trackings/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/aftership.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    
            a_split.each_with_index { |s, i| a_split[i] = s.to_i unless i == a_length - 1 }
        b_split.each_with_index { |s, i| b_split[i] = s.to_i unless i == b_length - 1 }
    
        def as_json
      @pages
    end
    
        def parse_as_document
      document = Nokogiri::HTML.parse @content, nil, 'UTF-8'
      @title = document.at_css('title').try(:content)
      document
    end
    
        def effective_path
      @effective_path ||= effective_url.path
    end
  end
end

    
          if !cask.url.blank? && !cask.url.using
        check_url_for_https_availability(cask.url, user_agents: [cask.url.user_agent])
      end
      check_url_for_https_availability(cask.appcast) unless cask.appcast.blank?
      check_url_for_https_availability(cask.homepage, user_agents: [:browser]) unless cask.homepage.blank?
    end
    
        it 'when lapack is used instead of OpenBLAS' do
      expect_offense(<<~RUBY, '/homebrew-core/')
        class Foo < Formula
          url 'https://brew.sh/foo-1.0.tgz'
          homepage 'https://brew.sh'
          depends_on 'lapack'
          ^^^^^^^^^^^^^^^^^^^ Formulae should use OpenBLAS as the default serial linear algebra library.
        end
      RUBY
    end
    
      before_action -> { authorize_if_got_token! :read, :'read:statuses' }, only: :show
  before_action :set_poll
  before_action :refresh_poll
    
      def perform(account_id, options = {})
    @options = options.with_indifferent_access
    @account = Account.find(account_id)
    
          expect(response).to redirect_to(settings_preferences_notifications_path)
      user.reload
      expect(user.settings['notification_emails']['follow']).to be true
      expect(user.settings['interactions']['must_be_follower']).to be false
    end
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
    
          it 'does not process payload if no signature exists' do
        expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(nil)
        expect(ActivityPub::Activity).not_to receive(:factory)
    
        before do
      recipient.follow!(sender)
      ActivityPub::Activity::Undo.new(undo_json, sender).perform
    end
    
          # Takes the amount in cents to capture.
      # Can be used to capture partial amounts of a payment, and will create
      # a new pending payment record for the remaining amount to capture later.
      def capture!(amount = nil)
        return true if completed?
    
        let(:return_item) { create(:return_item, reception_status: status) }
    
            private
    
        def last?
      index == tab.panes.length - 1
    end
    
          @name = first_key.to_s.shellescape unless first_key.nil?
      @yaml = window_yaml.values.first
      @project = project
      @index = index
      @commands = build_commands(tmux_window_command_prefix, @yaml)
    end
    
      describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
          def stop_template
        asset_path 'template-stop.erb'
      end