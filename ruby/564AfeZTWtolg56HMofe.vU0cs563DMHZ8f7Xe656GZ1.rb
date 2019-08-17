
        
          describe 'POST #mute with notifications set to false' do
    let(:scopes) { 'write:mutes' }
    let(:other_account) { Fabricate(:user, email: 'bob@example.com', account: Fabricate(:account, username: 'bob')).account }
    
            it 'not calls errors.add' do
          expect(errors).not_to have_received(:add).with(:base, any_args)
        end
      end
    end
  end
end

    
        it 'renders subject localized for the default locale if the locale of the receiver is unavailable' do
      receiver.update!(locale: nil)
      expect(mail.subject).to eq I18n.t(*args, kwrest.merge(locale: I18n.default_locale))
    end
  end
    
      private
    
      before { allow(controller).to receive(:doorkeeper_token) { token } }
    
    end

    
          it 'decrements pos' do
        @gz.ungetc 'ŷ'
        @gz.pos.should == 3
      end
    end
    
            source_range = node.source_range
        begin_pos = source_range.begin_pos
        end_pos = source_range.end_pos
    
          it { expect(send_node.arguments.size).to eq(2) }
    end
    
          # This is used for duck typing with `pair` nodes which also appear as
      # `hash` elements.
      #
      # @return [false]
      def hash_rocket?
        false
      end
    
            update_totals
        persist_totals
        restart_checkout_flow
        self
      end
    end
    
          unless order.payments.present?
        card_to_reuse = original_order.valid_credit_cards.first
        card_to_reuse = original_order.user.credit_cards.default.first if !card_to_reuse && original_order.user
        Spree::Payment.create!(order: order,
                               payment_method_id: card_to_reuse.try(:payment_method_id),
                               source: card_to_reuse,
                               amount: order.total)
      end
    
            def find_product
          super(params[:product_id])
        end
    
      describe 'client' do
    it 'pushes messages to redis' do
      q = Sidekiq::Queue.new('foo')
      pre = q.size
      jid = Sidekiq::Client.push('queue' => 'foo', 'class' => MyWorker, 'args' => [1, 2])
      assert jid
      assert_equal 24, jid.size
      assert_equal pre + 1, q.size
    end
    
          q.clear
      assert SetWorker.perform_async(1)
      assert_equal 0, q.size
    
        def request
      self
    end
    
          assert_equal init_size, mgr.workers.size
      refute mgr.workers.include?(processor)
    ensure
      mgr.workers.each {|p| p.terminate(true) }
    end
  end
    
      it 'executes middleware in the proper order' do
    msg = Sidekiq.dump_json({ 'class' => CustomWorker.to_s, 'args' => [$recorder] })
    
        it 'schedules jobs' do
      ss = Sidekiq::ScheduledSet.new
      ss.clear
    
      describe 'redis info' do
    it 'calls the INFO command which returns at least redis_version' do
      output = Sidekiq.redis_info
      assert_includes output.keys, 'redis_version'
    end
  end
end

    
        assert_equal 0, ThirdWorker.jobs.size
    
      # A new FPM::Command
  def initialize(*args)
    super(*args)
    @conflicts = []
    @replaces = []
    @provides = []
    @dependencies = []
    @config_files = []
    @directories = []
  end # def initialize
    
      # General public API
  public(:type, :initialize, :convert, :input, :output, :to_s, :cleanup, :files,
         :version, :script, :provides=)
    
    class FPM::Package::FreeBSD < FPM::Package
  SCRIPT_MAP = {
    :before_install     => 'pre-install',
    :after_install      => 'post-install',
    :before_remove      => 'pre-deinstall',
    :after_remove       => 'post-deinstall',
  } unless defined?(SCRIPT_MAP)
    
      public(:input, :output, :identifier, :to_s)
    
        # Add necessary metadata to the generated manifest.
    metadata_template = template('p5p_metadata.erb').result(binding)
    File.write(build_path('#{name}.mog'), metadata_template)