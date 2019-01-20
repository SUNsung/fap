
        
            def limit_reached_for(user_id, date)
      GivenDailyLike.find_for(user_id, date).pluck(:limit_reached)[0] || false
    end
    
            staff.topic_id = post.topic.id
        unless staff.save
          puts staff.errors.full_messages
          puts 'Failed to set the Staff category description topic!'
        end
    
        def verify_supported_os(name, class_ref)
      if class_ref.respond_to?(:is_supported?)
        # This value is filled in based on the executed platform block. Might be nil when lane is in root of Fastfile
        platform = Actions.lane_context[Actions::SharedValues::PLATFORM_NAME]
        if platform
          unless class_ref.is_supported?(platform)
            UI.important('Action '#{name}' isn't known to support operating system '#{platform}'.')
          end
        end
      end
    end
    
          it 'handles the exclude_dirs parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
          it 'passes an environment Hash' do
        expect_command({ 'PATH' => '/usr/local/bin' }, 'git', 'commit')
        Fastlane::Actions.sh({ 'PATH' => '/usr/local/bin' }, 'git', 'commit')
      end
    
    class String
  # CrossplatformShellwords
  def shellescape
    CrossplatformShellwords.shellescape(self)
  end
end
    
          describe 'config conflicts' do
        it 'raises an error if a key was used twice' do
          expect do
            FastlaneCore::Configuration.create([FastlaneCore::ConfigItem.new(
              key: :cert_name,
         env_name: 'asdf'
            ),
                                                FastlaneCore::ConfigItem.new(
                                                  key: :cert_name,
                                             env_name: 'asdf'
                                                )], {})
          end.to raise_error('Multiple entries for configuration key 'cert_name' found!')
        end
    
    # To avoid 'PR & Runs' for which tests don't pass, we want to make spec errors more visible
# The code below will run on Circle, parses the results in JSON and posts them to the PR as comment
containing_dir = ENV['CIRCLE_TEST_REPORTS'] || '.' # for local testing
file_path = File.join(containing_dir, 'rspec', 'fastlane-junit-results.xml')
    
            c.action do |args, options|
          Cert.config = FastlaneCore::Configuration.create(Cert::Options.available_options, options.__hash__)
          Cert::Runner.new.revoke_expired_certs!
        end
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

    
        it 'should work with nested arrays' do
      @agent.options['array'] = ['one', '$.two']
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options).to eq({'auth_token' => 'token', 'color' => 'yellow', 'array' => ['one', '{{two}}'], 'notify' => false, 'room_name' => 'test', 'username' => '{{username}}', 'message' => '{{message}}'})
    end
    
        it 'optionally supports treating values that start with '$' as raw JSONPath' do
      expect(Utils.interpolate_jsonpaths('$.there.world', payload)).to eq('$.there.world')
      expect(Utils.interpolate_jsonpaths('$.there.world', payload, :leading_dollarsign_is_jsonpath => true)).to eq('WORLD')
    end
  end
    
      describe '#working?' do
    it 'should not be working until the first event was received' do
      expect(@checker).not_to be_working
      @checker.last_receive_at = Time.now
      expect(@checker).to be_working
    end
  end
    
          def primary
        self if fetch(:primary)
      end
    
        worker_count.times do |count|
      template '/data/#{app}/shared/config/sidekiq_#{count}.yml' do
        owner node[:owner_name]
        group node[:owner_name]
        mode 0644
        source 'sidekiq.yml.erb'
        variables({
          :require => '/data/#{app}/current'
        })
      end
    end
    
        def raw_push(payloads)
      @redis_pool.with do |conn|
        conn.multi do
          atomic_push(conn, payloads)
        end
      end
      true
    end
    
        module PsychAutoload
      def resolve_class(klass_name)
        return nil if !klass_name || klass_name.empty?
        # constantize
        names = klass_name.split('::')
        names.shift if names.empty? || names.first.empty?
    
    module Sidekiq
  module Extensions
    ##
    # Adds 'delay', 'delay_for' and `delay_until` methods to ActionMailer to offload arbitrary email
    # delivery to Sidekiq.  Example:
    #
    #    UserMailer.delay.send_welcome_email(new_user)
    #    UserMailer.delay_for(5.days).send_welcome_email(new_user)
    #    UserMailer.delay_until(5.days.from_now).send_welcome_email(new_user)
    class DelayedMailer
      include Sidekiq::Worker
    
          # Clear all queued jobs across all workers
      def clear_all
        Queues.clear_all
      end
    
            middlewares.unshift [[::Rack::Session::Cookie, options], nil]
      end
    end
    
          erb(content, options)
    end