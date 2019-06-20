
        
            expect(failed).to eq(0)
  end
end

    
          # Create new records for users who don't have one yet
      DB.exec 'INSERT INTO directory_items(period_type, user_id, likes_received, likes_given, topics_entered, days_visited, posts_read, topic_count, post_count)
                SELECT
                    :period_type,
                    u.id,
                    0,
                    0,
                    0,
                    0,
                    0,
                    0,
                    0
                FROM users u
                LEFT JOIN directory_items di ON di.user_id = u.id AND di.period_type = :period_type
                WHERE di.id IS NULL AND u.id > 0 AND u.silenced_till IS NULL and u.active
      ', period_type: period_types[period_type]
    
        it 'rejects invalid directives and ones that are not allowed to be extended' do
      builder << {
        invalid_src: ['invalid'],
      }
    
              headers = response.headers
          # add cors if needed
          if cors_origins = env[Discourse::Cors::ORIGINS_ENV]
            Discourse::Cors.apply_headers(cors_origins, env, headers)
          end
    
          UserAuthToken.log(
        action: 'rotate',
        user_auth_token_id: id,
        user_id: user_id,
        auth_token: auth_token,
        user_agent: user_agent,
        client_ip: client_ip,
        path: info && info[:path]
      )
    
        it 'does not send previously configured sources when the current agent does not support them' do
      select_agent_type('Website Agent scrapes')
      select2('SF Weather', from: 'Sources')
      select_agent_type('Webhook Agent')
      fill_in(:agent_name, with: 'No sources')
      click_on 'Save'
      expect(page).to have_content('No sources')
      agent = Agent.find_by(name: 'No sources')
      expect(agent.sources).to eq([])
    end
    
      it 'imports a scenario which requires a service' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'spec/data_fixtures/twitter_scenario.json'))
    click_on 'Start Import'
    check('I confirm that I want to import these Agents.')
    expect { click_on 'Finish Import' }.to change(Scenario, :count).by(1)
    expect(page).to have_text('Import successful!')
  end
end

    
        it 'understands hl=8-' do
      stub(params).[](:hl) { '8-' }
      expect((1..10).select { |i| highlighted?(i) }).to eq [8, 9, 10]
    end
    
        it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
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
    
            log_action :change_email, @user
    
      def hub_topic_domain
    hub_topic_uri.host + (hub_topic_uri.port ? ':#{hub_topic_uri.port}' : '')
  end
    
      def update
    if verify_payload?
      process_salmon
      head 202
    elsif payload.present?
      render plain: signature_verification_failure_reason, status: 401
    else
      head 400
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
    
      def self.provides_callback_for(provider)
    provider_id = provider.to_s.chomp '_oauth2'
    
          refine C2.singleton_class do
        def ===(obj)
          obj.kind_of?(C1)
        end
      end
    end
    
        class Error < ::StandardError # :nodoc:
    end
    class CompileError < Error # :nodoc:
    end
    class MatchError < Error # :nodoc:
    end
    
    test_check 'marshal'
$x = [1,2,3,[4,5,'foo'],{1=>'bar'},2.5,fact(30)]
$y = Marshal.dump($x)
test_ok($x == Marshal.load($y))
    
      def vlength
    Math.sqrt(@x * @x + @y * @y + @z * @z)
  end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
        describe 'special case for start sharing notifications' do
      it 'should not provide a contacts menu for standard notifications' do
        FactoryGirl.create(:notification, :recipient => alice, :target => @post)
        get :index, params: {per_page: 5}
        expect(Nokogiri(response.body).css('.aspect_membership')).to be_empty
      end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
    
    
          def session_key
        @session_key ||= options[:session_key]
      end
    end
  end
end
