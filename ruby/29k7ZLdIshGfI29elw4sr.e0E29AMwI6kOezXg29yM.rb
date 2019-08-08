
        
            context 'when semantic version' do
      it 'returns the current version once parsed' do
        test_content = 'spec.version = '1.3.2''
        result = @version_podspec_file.parse(test_content)
        expect(result).to eq('1.3.2')
        expect(@version_podspec_file.version_value).to eq('1.3.2')
        expect(@version_podspec_file.version_match[:major]).to eq('1')
        expect(@version_podspec_file.version_match[:minor]).to eq('3')
        expect(@version_podspec_file.version_match[:patch]).to eq('2')
      end
    
        # Horizontal adding around the frames
    def horizontal_frame_padding
      padding = fetch_config['padding']
      if padding.kind_of?(String) && padding.split('x').length == 2
        padding = padding.split('x')[0]
        padding = padding.to_i unless padding.end_with?('%')
      end
      return scale_padding(padding)
    end
    
      describe :find_build do
    context 'one build' do
      let(:fake_builds) { make_fake_builds(1) }
      it 'finds the one build' do
        only_build = fake_builds.first
        expect(review_submitter.find_build(fake_builds)).to eq(only_build)
      end
    end
    
        def zip_build_products
      return unless Scan.config[:should_zip_build_products]
    
            if Helper.test?
          Actions.lane_context[SharedValues::IPA_OUTPUT_PATH] = File.join(absolute_dest_directory, 'test.ipa')
          Actions.lane_context[SharedValues::DSYM_OUTPUT_PATH] = File.join(absolute_dest_directory, 'test.app.dSYM.zip')
          return build_args
        end
    
        helpers do
      def render_response(template_type, template)
        not_found!(template_type.to_s.singularize) unless template
        present template, with: Entities::Template
      end
    end
    
      describe '#can_remove?' do
    context 'when user can destroy_group_member' do
      before do
        allow(presenter).to receive(:can?).with(user, :destroy_group_member, presenter).and_return(true)
      end
    
        context '(de)activating users' do
      it 'does not show deactivation buttons for the current user' do
        visit admin_users_path
        expect(page).to have_no_css('a[href='/admin/users/#{users(:jane).id}/deactivate']')
      end
    
        fill_in(:agent_options, with: '{
      'expected_receive_period_in_days': '2'
      'keep_event': 'false'
    }')
    expect(get_alert_text_from { click_on 'Save' }).to have_text('Sorry, there appears to be an error in your JSON input. Please fix it before continuing.')
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

    
        before do
      stub(Agents::DotFoo).valid_type?('Agents::DotFoo') { true }
      stub(Agents::DotBar).valid_type?('Agents::DotBar') { true }
    end
    
    end

    
            it 'kills no long active workers' do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
          AgentRunner.class_variable_set(:@@agents, [DelayedJobWorker])
          mock.instance_of(HuginnScheduler).stop!
          @agent_runner.send(:run_workers)
        end
      end
    
          expect(data[:agents][guid_order(agent_list, :jane_weather_agent)]).not_to have_key(:propagate_immediately) # can't receive events
      expect(data[:agents][guid_order(agent_list, :jane_rain_notifier_agent)]).not_to have_key(:schedule) # can't be scheduled
    end
    
        it 'should raise an exception when encountering complex JSONPaths' do
      @agent.options['username_path'] = '$.very.complex[*]'
      expect { LiquidMigrator.convert_all_agent_options(@agent) }.
        to raise_error('JSONPath '$.very.complex[*]' is too complex, please check your migration.')
    end
    
      it 'truncates message to a reasonable length' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), :level => 3)
    log.message = 'a' * 11_000
    log.save!
    expect(log.message.length).to eq(10_000)
  end
    
          def find_matching_tag(tag)
        # Used primarily by developers testing beta macOS releases.
        if OS::Mac.prerelease? && ARGV.skip_or_later_bottles?
          generic_find_matching_tag(tag)
        else
          generic_find_matching_tag(tag) ||
            find_older_compatible_tag(tag)
        end
      end
    
          expect(spec.deps.first.name).to eq('foo')
    end
    
    describe SoftwareSpec do
  alias_matcher :have_defined_resource, :be_resource_defined
  alias_matcher :have_defined_option, :be_option_defined
    
    module OS
  module Mac
    class Version < ::Version
      SYMBOLS = {
        catalina:    '10.15',
        mojave:      '10.14',
        high_sierra: '10.13',
        sierra:      '10.12',
        el_capitan:  '10.11',
        yosemite:    '10.10',
        mavericks:   '10.9',
      }.freeze
    
        def self.lookup_command(command_name)
      @lookup ||= Hash[commands.zip(command_classes)]
      command_name = ALIASES.fetch(command_name, command_name)
      @lookup.fetch(command_name, command_name)
    end
    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
    Sidekiq.logger.level = Logger::ERROR
    
      it 'shuts down the system' do
    mgr = new_manager(options)
    mgr.stop(::Process.clock_gettime(::Process::CLOCK_MONOTONIC))
  end
    
            assert_equal 1, @retry.size
        assert_equal 1, @scheduled.size
      end
    end
    
    class TimedWorker
  include Sidekiq::Worker
    
    ## -- Rsync Deploy config -- ##
# Be sure your public key is listed in your server's ~/.ssh/authorized_keys file
ssh_user       = 'user@domain.com'
ssh_port       = '22'
document_root  = '~/website.com/'
rsync_delete   = false
rsync_args     = ''  # Any extra arguments to pass to rsync
deploy_default = 'rsync'
    
    module Jekyll
    
    require 'pathname'
require './plugins/octopress_filters'