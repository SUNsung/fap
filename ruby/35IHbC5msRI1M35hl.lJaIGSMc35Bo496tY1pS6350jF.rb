
        
          def test_inspect_instance_with_non_primary_key_id_attribute
    topic = topics(:first).becomes(TitlePrimaryKeyTopic)
    assert_match(/id: 1/, topic.inspect)
  end
    
          def test_invert_remove_column
        add = @recorder.inverse_of :remove_column, [:table, :column, :type, {}]
        assert_equal [:add_column, [:table, :column, :type, {}], nil], add
      end
    
      def test_add_index
    # add_index calls data_source_exists? and index_name_exists? which can't work since execute is stubbed
    def (ActiveRecord::Base.connection).data_source_exists?(*); true; end
    def (ActiveRecord::Base.connection).index_name_exists?(*); false; end
    
          def ingress_name
        self.class.name.remove(/\AActionMailbox::Ingresses::/, /::InboundEmailsController\z/).underscore.to_sym
      end
    
        assert_equal <<~OUTPUT, run_routes_command([ '-c', 'PostController' ])
                             Prefix Verb   URI Pattern                                             Controller#Action
                           new_post GET    /post/new(.:format)                                     posts#new
                          edit_post GET    /post/edit(.:format)                                    posts#edit
                               post GET    /post(.:format)                                         posts#show
                                    PATCH  /post(.:format)                                         posts#update
                                    PUT    /post(.:format)                                         posts#update
                                    DELETE /post(.:format)                                         posts#destroy
                                    POST   /post(.:format)                                         posts#create
      rails_postmark_inbound_emails POST   /rails/action_mailbox/postmark/inbound_emails(.:format) action_mailbox/ingresses/postmark/inbound_emails#create
    OUTPUT
    
        it 'has a default when the result is empty' do
      expect(AgentsExporter.new(:name => '').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => 'Ə').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => '-').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => ',,').filename).to eq('exported-agents.json')
    end
  end
    
        it 'should work with the human task agent' do
      valid_params = {
        'expected_receive_period_in_days' => 2,
        'trigger_on' => 'event',
        'hit' =>
          {
            'assignments' => 1,
            'title' => 'Sentiment evaluation',
            'description' => 'Please rate the sentiment of this message: '<$.message>'',
            'reward' => 0.05,
            'lifetime_in_seconds' => 24 * 60 * 60,
            'questions' =>
              [
                {
                  'type' => 'selection',
                  'key' => 'sentiment',
                  'name' => 'Sentiment',
                  'required' => 'true',
                  'question' => 'Please select the best sentiment value:',
                  'selections' =>
                    [
                      { 'key' => 'happy', 'text' => 'Happy' },
                      { 'key' => 'sad', 'text' => 'Sad' },
                      { 'key' => 'neutral', 'text' => 'Neutral' }
                    ]
                },
                {
                  'type' => 'free_text',
                  'key' => 'feedback',
                  'name' => 'Have any feedback for us?',
                  'required' => 'false',
                  'question' => 'Feedback',
                  'default' => 'Type here...',
                  'min_length' => '2',
                  'max_length' => '2000'
                }
              ]
          }
      }
      @agent = Agents::HumanTaskAgent.new(:name => 'somename', :options => valid_params)
      @agent.user = users(:jane)
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options['hit']['description']).to eq('Please rate the sentiment of this message: '{{message}}'')
    end
  end
end
    
      describe '#working?' do
    it 'it is working when at least one event was emitted' do
      expect(@checker).not_to be_working
      @checker.memory[:last_event] = '2014-04-17T10:25:31.000+02:00'
      @checker.check
      expect(@checker.reload).to be_working
    end
  end
end

    
      before_action -> { authorize_if_got_token! :read, :'read:statuses' }, only: :show
  before_action :set_poll
  before_action :refresh_poll
    
      let(:json) do
    {
      '@context': 'https://www.w3.org/ns/activitystreams',
      id: 'foo',
      type: 'Announce',
      actor: 'https://example.com/actor',
      object: object_json,
      to: 'http://example.com/followers',
    }.with_indifferent_access
  end
    
      before do
    sign_in user, scope: :user
  end
    
        old_account.update!(uri: 'https://example.org/alice', domain: 'example.org', protocol: :activitypub, inbox_url: 'https://example.org/inbox')
    new_account.update!(uri: 'https://example.com/alice', domain: 'example.com', protocol: :activitypub, inbox_url: 'https://example.com/inbox', also_known_as: [old_account.uri])
    
          context '!reserved_username?' do
        let(:reserved_username) { false }
    
    require 'rails_helper'
    
          def _identicon_code(blob)
        string_to_code blob + @request.host
      end
    
          def title
        'Home'
      end
    
        def self.teardown(&block)
      define_method(:teardown, &block)
    end
  end
  (
  class << klass;
    self
  end).send(:define_method, :name) { name.gsub(/\W/, '_') }
  $contexts << klass
  klass.class_eval &block
end
    
          JoeWorker.perform_in(0.01, 0)
    
            s = Sidekiq::Stats::Queues.new
        assert_equal ({ 'foo' => 1, 'bar' => 3 }), s.lengths
        assert_equal 'bar', s.lengths.first.first
    
    class Component
  include Sidekiq::ExceptionHandler
    
      it 'uses and stringifies specified options' do
    assert_equal [], Sidekiq::Queue.all.map(&:name)
    q = Sidekiq::Queue.new('notdefault')
    assert_equal 0, q.size
    MyModel.delay(queue: :notdefault).long_class_method
    assert_equal ['notdefault'], Sidekiq::Queue.all.map(&:name)
    assert_equal 1, q.size
  end
    
      it 'throws away dead processors' do
    mgr = new_manager(options)
    init_size = mgr.workers.size
    processor = mgr.workers.first
    begin
      mgr.processor_died(processor, 'ignored')
    
      def perform(start)
    now = Time.now.to_f
    puts 'Latency: #{now - start} sec'
  end
end
    
      subject { instance }
    
          context 'and the first arg is a tmuxinator command' do
        let(:arg1) { 'list' }
    
          def default?
        exists?(name: 'default')
      end
    
      describe '#panes' do
    context 'with a three element Array' do
      let(:panes) { ['vim', 'ls', 'top'] }
    
            it 'returns the translation string' do
          expect(subject).to eq('grape.errors.messages.#{key}')
        end
      end
    end
    
              config_class.configure do
            description description
          end
    
          # Set response content-type
      def content_type(val = nil)
        if val
          header(Grape::Http::Headers::CONTENT_TYPE, val)
        else
          header[Grape::Http::Headers::CONTENT_TYPE]
        end
      end
    
          module ClassMethods
        # Specify the default format for the API's serializers.
        # May be `:json` or `:txt` (default).
        def default_format(new_format = nil)
          namespace_inheritable(:default_format, new_format.nil? ? nil : new_format.to_sym)
        end
    
          def namespace_reverse_stackable_with_hash(key)
        settings = get_or_set :namespace_reverse_stackable, key, nil
        return if settings.blank?
        result = {}
        settings.each do |setting|
          setting.each do |field, value|
            result[field] ||= value
          end
        end
        result
      end