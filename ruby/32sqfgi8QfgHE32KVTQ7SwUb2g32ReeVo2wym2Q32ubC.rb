
        
          def test_inspect_instance
    topic = topics(:first)
    assert_equal %(#<Topic id: 1, title: 'The First Topic', author_name: 'David', author_email_address: 'david@loudthinking.com', written_on: '#{topic.written_on.to_s(:db)}', bonus_time: '#{topic.bonus_time.to_s(:db)}', last_read: '#{topic.last_read.to_s(:db)}', content: 'Have a nice day', important: nil, approved: false, replies_count: 1, unique_replies_count: 0, parent_id: nil, parent_title: nil, type: nil, group: nil, created_at: '#{topic.created_at.to_s(:db)}', updated_at: '#{topic.updated_at.to_s(:db)}'>), topic.inspect
  end
    
        assert_kind_of BigDecimal, m1.bank_balance
    assert_equal BigDecimal('1586.43'), m1.bank_balance
    
      def test_invalid_record_exception
    assert_raise(ActiveRecord::RecordInvalid) { WrongReply.create! }
    assert_raise(ActiveRecord::RecordInvalid) { WrongReply.new.save! }
    
          def ingress_name
        self.class.name.remove(/\AActionMailbox::Ingresses::/, /::InboundEmailsController\z/).underscore.to_sym
      end
    
          def test_helpers_with_symbol
        @controller.process(:with_symbol)
        assert_equal 'I respond to bare_a: true', @controller.response_body
      end
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
      it 'schould register the schedules with the rufus scheduler and run' do
    mock(@rufus_scheduler).join
    scheduler = HuginnScheduler.new
    scheduler.setup!(@rufus_scheduler, Mutex.new)
    scheduler.run
  end
    
        it 'accepts objects as well as strings' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), events(:bob_website_agent_event).payload)
      expect(log.message).to include(''title'=>'foo'')
    end
  end
    
    class RepositoryCleanupWorker
  include ApplicationWorker
    
        def sha256(value)
      salt = Settings.attr_encrypted_db_key_base_truncated
      ::Digest::SHA256.base64digest('#{value}#{salt}')
    end
    
            it { expect(presenter.can_resend_invite?).to eq(false) }
      end
    
      it 'calls Gitlab::Diff::File#unfold_diff_lines with correct position' do
    position = instance_double(Gitlab::Diff::Position, file_path: 'README')
    readme_file = instance_double(Gitlab::Diff::File, file_path: 'README')
    other_file = instance_double(Gitlab::Diff::File, file_path: 'foo.rb')
    nil_path_file = instance_double(Gitlab::Diff::File, file_path: nil)
    
            desc 'Updates a badge of a #{source_type}.' do
          detail 'This feature was introduced in GitLab 10.6.'
          success Entities::Badge
        end
        params do
          optional :link_url, type: String, desc: 'URL of the badge link'
          optional :image_url, type: String, desc: 'URL of the badge image'
        end
        put ':id/badges/:badge_id' do
          source = find_source_if_admin(source_type)
    
              def install
            Formula.factory(name)
            ^^^^^^^^^^^^^^^^^^^^^ \'Formula.factory(name)\' is deprecated in favor of \'Formula[name]\'
          end
        end
      RUBY
    end
    
      def resource(name, klass = Resource, &block)
    if block_given?
      raise DuplicateResourceError, name if resource_defined?(name)
    
        it 'raises an error when it begins with dashes' do
      expect {
        subject.option('--foo')
      }.to raise_error(ArgumentError)
    end
    
      Checksum::TYPES.each do |type|
    define_method(type) { |val| @checksum = Checksum.new(type, val) }
  end