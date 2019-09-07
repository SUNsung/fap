
        
            if current_adapter?(:PostgreSQLAdapter)
      def test_migrate_enable_and_disable_extension
        migration1 = InvertibleMigration.new
        migration2 = DisableExtension1.new
        migration3 = DisableExtension2.new
    
          def test_invert_remove_reference
        add = @recorder.inverse_of :remove_reference, [:table, :taggable, { polymorphic: true }]
        assert_equal [:add_reference, [:table, :taggable, { polymorphic: true }], nil], add
      end
    
      def test_add_index
    # add_index calls data_source_exists? and index_name_exists? which can't work since execute is stubbed
    def (ActiveRecord::Base.connection).data_source_exists?(*); true; end
    def (ActiveRecord::Base.connection).index_name_exists?(*); false; end
    
            assert_equal <<~MESSAGE, run_rake_routes
                                         Prefix Verb   URI Pattern                                                                              Controller#Action
                                           cart GET    /cart(.:format)                                                                          cart#show
                  rails_mandrill_inbound_emails POST   /rails/action_mailbox/mandrill/inbound_emails(.:format)                                  action_mailbox/ingresses/mandrill/inbound_emails#create
                  rails_postmark_inbound_emails POST   /rails/action_mailbox/postmark/inbound_emails(.:format)                                  action_mailbox/ingresses/postmark/inbound_emails#create
                     rails_relay_inbound_emails POST   /rails/action_mailbox/relay/inbound_emails(.:format)                                     action_mailbox/ingresses/relay/inbound_emails#create
                  rails_sendgrid_inbound_emails POST   /rails/action_mailbox/sendgrid/inbound_emails(.:format)                                  action_mailbox/ingresses/sendgrid/inbound_emails#create
                   rails_mailgun_inbound_emails POST   /rails/action_mailbox/mailgun/inbound_emails/mime(.:format)                              action_mailbox/ingresses/mailgun/inbound_emails#create
                 rails_conductor_inbound_emails GET    /rails/conductor/action_mailbox/inbound_emails(.:format)                                 rails/conductor/action_mailbox/inbound_emails#index
                                                POST   /rails/conductor/action_mailbox/inbound_emails(.:format)                                 rails/conductor/action_mailbox/inbound_emails#create
              new_rails_conductor_inbound_email GET    /rails/conductor/action_mailbox/inbound_emails/new(.:format)                             rails/conductor/action_mailbox/inbound_emails#new
             edit_rails_conductor_inbound_email GET    /rails/conductor/action_mailbox/inbound_emails/:id/edit(.:format)                        rails/conductor/action_mailbox/inbound_emails#edit
                  rails_conductor_inbound_email GET    /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#show
                                                PATCH  /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#update
                                                PUT    /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#update
                                                DELETE /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#destroy
          rails_conductor_inbound_email_reroute POST   /rails/conductor/action_mailbox/:inbound_email_id/reroute(.:format)                      rails/conductor/action_mailbox/reroutes#create
                             rails_service_blob GET    /rails/active_storage/blobs/:signed_id/*filename(.:format)                               active_storage/blobs#show
                      rails_blob_representation GET    /rails/active_storage/representations/:signed_blob_id/:variation_key/*filename(.:format) active_storage/representations#show
                             rails_disk_service GET    /rails/active_storage/disk/:encoded_key/*filename(.:format)                              active_storage/disk#show
                      update_rails_disk_service PUT    /rails/active_storage/disk/:encoded_token(.:format)                                      active_storage/disk#update
                           rails_direct_uploads POST   /rails/active_storage/direct_uploads(.:format)                                           active_storage/direct_uploads#create
        MESSAGE
      end
    
            def self.[](type)
          if type.is_a?(self)
            type
          else
            new(type)
          end
        end
    
        def plugins_with_type(type)
      @registry.values.select { |specification| specification.type.to_sym == type.to_sym }.collect(&:klass)
    end
    
        private
    def uncompress(source)
      temporary_directory = Stud::Temporary.pathname
      LogStash::Util::Zip.extract(source, temporary_directory, LOGSTASH_PATTERN_RE)
      temporary_directory
    rescue Zip::Error => e
      # OK Zip's handling of file is bit weird, if the file exist but is not a valid zip, it will raise
      # a `Zip::Error` exception with a file not found message...
      raise InvalidPackError, 'Cannot uncompress the zip: #{source}'
    end
    
      subject { described_class.new(source, pipeline_id, unordered_config_parts, settings) }
    
        class SetWorker
      include Sidekiq::Worker
      sidekiq_options :queue => :foo, 'retry' => 12
    end
    
        obj = Helpers.new('HTTP_ACCEPT_LANGUAGE' => 'en-US,sv-SE;q=0.8,sv;q=0.6,en;q=0.4')
    assert_equal 'en', obj.locale
    
          it 'can reset individual stats' do
        Sidekiq::Stats.new.reset('failed')
        s = Sidekiq::Stats.new
        assert_equal 0, s.failed
        assert_equal 5, s.processed
      end
    
      it 'throws away dead processors' do
    mgr = new_manager(options)
    init_size = mgr.workers.size
    processor = mgr.workers.first
    begin
      mgr.processor_died(processor, 'ignored')
    
    class TimedWorker
  include Sidekiq::Worker