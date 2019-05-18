
        
            File.readlines(Rails.root + 'spec/fixtures/md/spec.txt').each do |line|
      if line == '```````````````````````````````` example\n'
        state = :example
        next
      end
    
      def current_db
    RailsMultisite::ConnectionManagement.current_db
  end
    
      def report
    @report ||= JSON.parse(request.body.read)['csp-report'].slice(
      'blocked-uri',
      'disposition',
      'document-uri',
      'effective-directive',
      'original-policy',
      'referrer',
      'script-sample',
      'status-code',
      'violated-directive',
      'line-number',
      'source-file'
    )
  end
    
        # if you need to test this and are having ssl issues see:
    #  http://stackoverflow.com/questions/6756460/openssl-error-using-omniauth-specified-ssl-path-but-didnt-work
    # OpenSSL::SSL::VERIFY_PEER = OpenSSL::SSL::VERIFY_NONE if Rails.env.development?
    @omniauth = OmniAuth::Builder.new(app) do
      Discourse.authenticators.each do |authenticator|
        authenticator.register_middleware(self)
      end
    end
    
        # JOIN of topics table based on manipulating draft_key seems imperfect
    builder = DB.build <<~SQL
      SELECT
        d.*, t.title, t.id topic_id, t.archetype,
        t.category_id, t.closed topic_closed, t.archived topic_archived,
        pu.username, pu.name, pu.id user_id, pu.uploaded_avatar_id, pu.username_lower,
        du.username draft_username, NULL as raw, NULL as cooked, NULL as post_number
      FROM drafts d
      LEFT JOIN LATERAL json_extract_path_text (d.data::json, 'postId') postId ON TRUE
      LEFT JOIN posts p ON postId :: BIGINT = p.id
      LEFT JOIN topics t ON
        CASE
            WHEN d.draft_key LIKE '%' || '#{EXISTING_TOPIC}' || '%'
              THEN CAST(replace(d.draft_key, '#{EXISTING_TOPIC}', '') AS INT)
            ELSE 0
        END = t.id
      JOIN users pu on pu.id = COALESCE(p.user_id, t.user_id, d.user_id)
      JOIN users du on du.id = #{user_id}
      /*where*/
      /*order_by*/
      /*offset*/
      /*limit*/
    SQL
    
      def build(theme_ids)
    builder = Builder.new
    
          script_srcs = parse(policy)['script-src']
      expect(script_srcs).to include('https://www.google-analytics.com/analytics.js')
      expect(script_srcs).to include('https://www.googletagmanager.com/gtm.js')
    end
    
        it 'does not send previously configured receivers when the current agent does not support them' do
      select_agent_type('Website Agent scrapes')
      sleep 0.5
      select2('ZKCD', from: 'Receivers')
      select_agent_type('Email Agent')
      fill_in(:agent_name, with: 'No receivers')
      click_on 'Save'
      expect(page).to have_content('No receivers')
      agent = Agent.find_by(name: 'No receivers')
      expect(agent.receivers).to eq([])
    end
  end
end

    
        it 'in the future' do
      expect(relative_distance_of_time_in_words(Time.now+5.minutes)).to eq('in 5m')
    end
  end
end

    
      describe '#filename' do
    it 'strips special characters' do
      expect(AgentsExporter.new(:name => 'ƏfooƐƕƺbar').filename).to eq('foo-bar.json')
    end
    
      def up_down(change)
    change.up do
      Mention.update_all(mentions_container_type: 'Post')
      change_column :mentions, :mentions_container_type, :string, null: false
      Notification.where(type: 'Notifications::Mentioned').update_all(type: 'Notifications::MentionedInPost')
    end
    
    RSpec::Matchers.define :have_value do |expected|
  match do |actual|
    await_condition { actual.value && actual.value.include?(expected) }
  end
    
    module Workers
  class PublishToHub < Base
    def perform(*_args)
      # don't publish to pubsubhubbub in cucumber
    end
  end
    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
    describe StatusMessagesController, :type => :controller do
  describe '#bookmarklet' do
    before do
      sign_in bob, scope: :user
    end
    
          it 'federates' do
        allow_any_instance_of(Participation::Generator).to receive(:create!)
        expect(Diaspora::Federation::Dispatcher).to receive(:defer_dispatch)
        post_request!
      end
    
      if ENV['RAILS_LOG_TO_STDOUT'].present?
    logger           = ActiveSupport::Logger.new(STDOUT)
    logger.formatter = config.log_formatter
    config.logger    = ActiveSupport::TaggedLogging.new(logger)
  end
    
      # Tell Action Mailer not to deliver emails to the real world.
  # The :test delivery method accumulates sent emails in the
  # ActionMailer::Base.deliveries array.
  config.action_mailer.delivery_method = :test