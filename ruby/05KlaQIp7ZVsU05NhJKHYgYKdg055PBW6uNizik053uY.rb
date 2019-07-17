
        
          respond_to :json
    
    RSpec.describe Api::V1::PollsController, type: :controller do
  render_views
    
        if target_account.blocking?(@account) || target_account.domain_blocking?(@account.domain) || target_account.moved?
      reject_follow_request!(target_account)
      return
    end
    
      def some_local_account
    @some_local_account ||= Account.representative
  end
end

    
        if @poll.account.local?
      distribute_poll!
    else
      deliver_votes!
      queue_final_poll_check!
    end
  end
    
    class ActivityPub::DistributePollUpdateWorker
  include Sidekiq::Worker
  include Payloadable
    
            expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(actor)
        expect(ActivityPub::Activity).to receive(:factory).with(instance_of(Hash), actor, instance_of(Hash))
    
          it 'does not create a block from sender to recipient' do
        expect(sender.blocking?(recipient)).to be false
      end
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
      context 'with no user signed in' do
    describe '#public' do
      it 'succeeds' do
        get :public
        expect(response).to be_success
      end
    
            false
      end
    
          context 'with a node which meets only 1 requirement of []' do
        let(:ruby) { '1' }
    
                do_something
    
      it 'does not register offense when guard clause is after single line ' \
     'heredoc' do
    expect_no_offenses(<<~RUBY)
      def foo
        raise ArgumentError, <<-MSG unless path
          Must be called with mount point
        MSG
    
            css_classes << 'selected' if selected
    
            it 'does not increase the count on hand' do
          expect { subject }.not_to change { stock_item.reload.count_on_hand }
        end
      end
    
            def scope
          @scope ||= if params[:option_type_id]
                       Spree::OptionType.find(params[:option_type_id]).option_values.accessible_by(current_ability, :show)
                     else
                       Spree::OptionValue.accessible_by(current_ability, :show).load
                     end
        end
    
        it 'allows local middleware modification' do
      $called = false
      mware = Class.new { def call(worker_klass,msg,q,r); $called = true; msg;end }
      client = Sidekiq::Client.new
      client.middleware do |chain|
        chain.add mware
      end
      client.push('class' => 'Blah', 'args' => [1,2,3])
    
        it 'can be memoized' do
      q = Sidekiq::Queue.new('bar')
      assert_equal 0, q.size
      set = SetWorker.set(queue: :bar, foo: 'qaaz')
      set.perform_async(1)
      set.perform_async(1)
      set.perform_async(1)
      set.perform_async(1)
      assert_equal 4, q.size
      assert_equal 4, q.map{|j| j['jid'] }.uniq.size
      set.perform_in(10, 1)
    end
    
      def test_available_locales
    obj = Helpers.new
    expected = %w(
      ar cs da de el en es fa fr he hi it ja
      ko nb nl pl pt pt-br ru sv ta uk ur
      zh-cn zh-tw
    )
    assert_equal expected, obj.available_locales.sort
  end
    
    describe 'DeadSet' do
  def dead_set
    Sidekiq::DeadSet.new
  end
    
      it 'allows delayed scheduling of AM mails' do
    ss = Sidekiq::ScheduledSet.new
    assert_equal 0, ss.size
    UserMailer.delay_for(5.days).greetings(1, 2)
    assert_equal 1, ss.size
  end
    
      def options
    { :concurrency => 3, :queues => ['default'] }
  end
    
          q = Sidekiq::Queue.new('custom_queue')
      qs = q.size
      assert SomeScheduledWorker.perform_in(-300, 'mike')
      assert_equal 3, ss.size
      assert_equal qs+1, q.size
    
          refute Sidekiq::Testing.enabled?
      refute Sidekiq::Testing.fake?
    end
    
    
  config.vm.define 'centos6' do |centos6|
    centos6.vm.box = 'puppetlabs/centos-6.6-64-puppet'
  end
    
          # Verify the types requested are valid
      types = FPM::Package.types.keys.sort
      @command.input_type.tap do |val|
        next if val.nil?
        mandatory(FPM::Package.types.include?(val),
                  'Invalid input package -s flag) type #{val.inspect}. ' \
                  'Expected one of: #{types.join(', ')}')
      end
    
      private
  def input(package)
    # Notes:
    # * npm respects PREFIX
    settings = {
      'cache' => build_path('npm_cache'),
      'loglevel' => 'warn',
      'global' => 'true'
    }