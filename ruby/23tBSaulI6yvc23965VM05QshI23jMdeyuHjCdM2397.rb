
        
              ENV['RAILS_ENV'] = 'development'
      assert_match 'development', run_test_command('test/unit/env_test.rb')
    end
    
      def test_default_locale_template_is_used_when_locale_is_missing
    I18n.locale = :dk
    get :hello_world
    assert_equal 'Hello World', @response.body
  end
    
    require 'rails_helper'
    
      def diff
    require_dependency 'discourse_diff'
    
        context 'When staff actions are extended' do
      let(:plugin_extended_action) { :confirmed_ham }
      before { UserHistory.stubs(:staff_actions).returns([plugin_extended_action]) }
      after { UserHistory.unstub(:staff_actions) }
    
          subject.rsync_single(machine, ssh_info, opts)
    end
    
        after do
      FileUtils.rm_rf(scratch)
    end
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
            # @return [Pathname] data directory to store composition
        attr_reader :data_directory
        # @return [Vagrant::Machine]
        attr_reader :machine
    
        it 'identifies unprivileged containers' do
      allow(subject).to receive(:inspect_container)
        .and_return({'HostConfig' => {'Privileged' => false}})
      expect(subject).to_not be_privileged(cid)
    end
  end
    
      describe 'execute' do
    context 'updating specific box' do
      let(:argv) { ['--box', 'foo'] }
    
      def mark_as_processing!
    redis.setex('move_in_progress:#{@account.id}', PROCESSING_COOLDOWN, true)
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
    
          it 'not calls errors.add' do
        expect(errors).not_to have_received(:add).with(attribute, any_args)
      end
    end
  end
end

    
        let(:follow)  { double(account: account, errors: errors) }
    let(:errors)  { double(add: nil) }
    let(:account) { double(nil?: _nil, local?: local, following_count: 0, followers_count: 0) }
    let(:_nil)    { true }
    let(:local)   { false }
    
    class Scheduler::EmailScheduler
  include Sidekiq::Worker
    
          private
    
            reaction
      end
    
      describe '.token' do
    it 'returns a unique masked version of the authenticity token' do
      expect(Rack::Protection::AuthenticityToken.token(session)).not_to eq(masked_token)
    end
    
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
    
            s = Sidekiq::Stats.new
        assert_equal 4, s.enqueued
      end
    end
    
      it 'allows delay of any ole class method' do
    q = Sidekiq::Queue.new
    assert_equal 0, q.size
    SomeClass.delay.doit(Date.today)
    assert_equal 1, q.size
  end
    
      def options
    { :concurrency => 3, :queues => ['default'] }
  end
    
    
  # Jekyll hook - the generate method is called by jekyll, and generates all of the category pages.
  class GenerateCategories < Generator
    safe true
    priority :low
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
    end
Liquid::Template.register_filter OctopressLiquidFilters
    
          unless file.file?
        return 'File #{file} could not be found'
      end