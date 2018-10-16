
        
        FORWARD_SLASH = '/'.freeze
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    Then(%r!^I should (not )?see '(.*)' in '(.*)' if on Windows$!) do |negative, text, file|
  step %(the '#{file}' file should exist)
  regexp = Regexp.new(text, Regexp::MULTILINE)
  if negative.nil? || negative.empty?
    if Jekyll::Utils::Platforms.really_windows?
      expect(file_contents(file)).to match regexp
    else
      expect(file_contents(file)).not_to match regexp
    end
  end
end
    
    #
    
          it 'generates the correct git command with an array of paths' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: ['./fastlane/README.md', './LICENSE'], message: 'message')
        end').runner.execute(:test)
    
          it 'works with all parameters' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              select_regex: /.*/,
              exclude_regex: /Test.m/,
              report_type: 'pmd',
              report_path: 'report_path.xml',
              max_priority_1: 10,
              max_priority_2: 20,
              max_priority_3: 30,
              thresholds: ['LONG_LINE=200', 'LONG_METHOD=200'],
              enable_rules: ['DoubleNegative', 'DeadCode'],
              disable_rules: ['GotoStatement', 'ShortVariableName'],
              list_enabled_rules: true,
              enable_clang_static_analyzer: true,
              enable_global_analysis: true,
              allow_duplicated_violations: true
            )
          end').runner.execute(:test)
    
              expect(result).to eq('swiftlint lint')
        end
    
        describe 'shell escaping' do
      let(:keychain_name) { 'keychain with spaces.keychain' }
      let(:shell_escaped_name) { keychain_name.shellescape }
      let(:name_regex) { Regexp.new(Regexp.escape(shell_escaped_name)) }
    
            it 'raises an error for unresolved conflict between options' do
          conflicting_options = [
            FastlaneCore::ConfigItem.new(key: :foo,
                                         conflicting_options: [:bar, :oof]),
            FastlaneCore::ConfigItem.new(key: :bar),
            FastlaneCore::ConfigItem.new(key: :oof)
          ]
    
          open_dry_run_modal(formatting_agent)
      find('.dry-run-event-sample').click
      within(:css, '.modal .builder') do
        expect(page).to have_text('Line 1\nLine 2\nLine 3')
      end
      click_on('Dry Run')
      expect(page).to have_text('Line 1,Line 2,Line 3')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
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
    
      let :valid_options do
    {
      'name' => 'XKCD',
      'expected_update_period_in_days' => '2',
      'type' => 'html',
      'url' => '{{ url | default: 'http://xkcd.com/' }}',
      'mode' => 'on_change',
      'extract' => old_extract,
      'template' => old_template
    }
  end
    
              expect {
            @agent.options[:foo] = 'bar2'
            @agent.keep_events_for = 3.days
            @agent.save!
          }.to change { @event.reload.expires_at }
          expect(@event.expires_at.to_i).to be_within(60 * 61).of(1.days.from_now.to_i) # The larger time is to deal with daylight savings
        end
    
    module Vagrant
  # This class handles guest-OS specific interactions with a machine.
  # It is primarily responsible for detecting the proper guest OS
  # implementation and then delegating capabilities.
  #
  # Vagrant has many tasks which require specific guest OS knowledge.
  # These are implemented using a guest/capability system. Various plugins
  # register as 'guests' which determine the underlying OS of the system.
  # Then, 'guest capabilities' register themselves for a specific OS (one
  # or more), and these capabilities are called.
  #
  # Example capabilities might be 'mount_virtualbox_shared_folder' or
  # 'configure_networks'.
  #
  # This system allows for maximum flexibility and pluginability for doing
  # guest OS specific operations.
  class Guest
    include CapabilityHost
    
              # Add the help option, which must be on every command.
          opts.on_tail('-h', '--help', 'Print this help') do
            safe_puts(opts.help)
            return nil
          end
    
              components.providers.register(name.to_sym) do
            [block.call, options]
          end
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is installed. This should return true or false.
        #
        # If the provider is not installed and Vagrant determines it is
        # able to install this provider, then it will do so. Installation
        # is done by calling Environment.install_provider.
        #
        # If Environment.can_install_provider? returns false, then an error
        # will be shown to the user.
        def self.installed?
          # By default return true for backwards compat so all providers
          # continue to work.
          true
        end
    
      before_action :set_filters, only: :index
  before_action :set_filter, only: [:edit, :update, :destroy]
    
      private
    
            it 'treats several white spaces as one' do
          format('%     b', 10).should == ' 1010'
          format('%     B', 10).should == ' 1010'
          format('%     d', 112).should == ' 112'
          format('%     i', 112).should == ' 112'
          format('%     o', 87).should == ' 127'
          format('%     u', 112).should == ' 112'
          format('%     x', 196).should == ' c4'
          format('%     X', 196).should == ' C4'
    
      it 'accepts a Float' do
    sleep(0.1).should be_close(0, 2)
  end
    
      context 'time commands' do
    before :each do
      @tmp_file = File.new(tmp('file.kernel.test'), 'w')
    end
    
      def fill_in_new_user_form
    @username = 'ohai'
    fill_in('user_email', with: '#{@username}@example.com')
    fill_in('user_username', with: @username)
    fill_in('user_password', with: 'secret')
    fill_in('user_password_confirmation', with: 'secret')
    
    describe LikesController, type: :controller do
  before do
    @alices_aspect = alice.aspects.where(:name => 'generic').first
    @bobs_aspect = bob.aspects.where(:name => 'generic').first
    
          # @see Base#\_retrieve
      def _retrieve(key, version, sha)
        return unless File.readable?(path_to(key))
        begin
          File.open(path_to(key), 'rb') do |f|
            if f.readline('\n').strip == version && f.readline('\n').strip == sha
              return f.read
            end
          end
          File.unlink path_to(key)
        rescue Errno::ENOENT
          # Already deleted. Race condition?
        end
        nil
      rescue EOFError, TypeError, ArgumentError => e
        Sass::Util.sass_warn 'Warning. Error encountered while reading cache #{path_to(key)}: #{e}'
      end
    
          vars = vars.split(',').map do |var|
        var.strip!
        raise SyntaxError.new('Invalid variable \'#{var}\'.') unless var =~ Script::VALIDATE
        var[1..-1]
      end
    
          # create Gemfile from template iff it does not exist
      unless ::File.exists?(Environment::GEMFILE_PATH)
        FileUtils.copy(
          ::File.join(Environment::LOGSTASH_HOME, 'Gemfile.template'), Environment::GEMFILE_PATH
        )
      end
      # create Gemfile.jruby-1.9.lock from template iff a template exists it itself does not exist
      lock_template = ::File.join(ENV['LOGSTASH_HOME'], 'Gemfile.jruby-2.3.lock.release')
      if ::File.exists?(lock_template) && !::File.exists?(Environment::LOCKFILE)
        FileUtils.copy(lock_template, Environment::LOCKFILE)
      end
    
      gem.add_runtime_dependency 'logstash-core', LOGSTASH_CORE_VERSION.gsub('-', '.')
    
        context 'with a specific plugin' do
      let(:plugin_name) { 'logstash-input-stdin' }
      it 'list the plugin and display the plugin name' do
        result = logstash.run_command_in_path('bin/logstash-plugin list #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name}$/)
      end
    
          def order_id
        params[:order_id] || params[:checkout_id] || params[:order_number]
      end
    
            def update
          @image = scope.images.accessible_by(current_ability, :update).find(params[:id])
          if @image.update_attributes(image_params)
            respond_with(@image, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def new; end
    
            def scope
          @scope ||= if params[:option_type_id]
                       Spree::OptionType.find(params[:option_type_id]).option_values.accessible_by(current_ability, :read)
                     else
                       Spree::OptionValue.accessible_by(current_ability, :read).load
                     end
        end
    
            def update
          authorize! params[:action], @payment
          if !@payment.editable?
            render 'update_forbidden', status: 403
          elsif @payment.update_attributes(payment_params)
            respond_with(@payment, default_template: :show)
          else
            invalid_resource!(@payment)
          end
        end
    
            def destroy
          if @property
            authorize! :destroy, @property
            @property.destroy
            respond_with(@property, status: 204)
          else
            invalid_resource!(@property)
          end
        end