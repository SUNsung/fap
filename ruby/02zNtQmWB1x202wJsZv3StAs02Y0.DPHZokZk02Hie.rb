
        
        module Fastlane
  # Handles receiving commands from the socket server, finding the Action to be invoked,
  # invoking it, and returning any return values
  class SocketServerActionCommandExecutor < CommandExecutor
    attr_accessor :runner
    attr_accessor :actions_requiring_special_handling
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: '#{message}',
            commit: '#{commit}'
          })
        end').runner.execute(:test)
    
            expect(result).to eq('carthage bootstrap')
      end
    
            inner_command = 'git describe `git rev-list --tags --max-count=1`'
        pseudocommand = 'git log --pretty=\'%B\' #{inner_command.shellescape}...HEAD'
        expect(result).to eq(pseudocommand)
      end
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add *.h *.m', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: #{path}, shell_escape: false)
          end').runner.execute(:test)
        end
      end
    
          context 'when specify output_file options' do
        it 'adds redirect file to command' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              output_file: '#{output_file}'
            )
          end').runner.execute(:test)
    
          it 'uses the correct command to import it' do
        # We have to execute *something* using ` since otherwise we set expectations to `nil`, which is not healthy
        `ls`
    
    describe 'monkey patch of Array.shelljoin (via CrossplatformShellwords)' do
  describe 'on Windows' do
    before(:each) do
      allow(FastlaneCore::Helper).to receive(:windows?).and_return(true)
    end
    
    if File.exist?(file_path)
  junit.parse(file_path)
  junit.headers = [:name, :file]
  junit.report
else
  puts('Couldn't find any test artifacts in path #{file_path}')
end

    
        it 'understands hl=-2' do
      stub(params).[](:hl) { '-2' }
      expect((1..10).select { |i| highlighted?(i) }).to eq [1, 2]
    end
    
        describe '#agents_dot' do
      before do
        @agents = [
          @foo = Agents::DotFoo.new(name: 'foo').tap { |agent|
            agent.user = users(:bob)
            agent.save!
          },
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
        it 'can be turned off' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'false' }
      DefaultScenarioImporter.import(user)
    end
    
    describe ScenarioImport do
  let(:user) { users(:bob) }
  let(:guid) { 'somescenarioguid' }
  let(:tag_fg_color) { '#ffffff' }
  let(:tag_bg_color) { '#000000' }
  let(:icon) { 'Star' }
  let(:description) { 'This is a cool Huginn Scenario that does something useful!' }
  let(:name) { 'A useful Scenario' }
  let(:source_url) { 'http://example.com/scenarios/2/export.json' }
  let(:weather_agent_options) {
    {
      'api_key' => 'some-api-key',
      'location' => '12345'
    }
  }
  let(:trigger_agent_options) {
    {
      'expected_receive_period_in_days' => 2,
      'rules' => [{
                    'type' => 'regex',
                    'value' => 'rain|storm',
                    'path' => 'conditions',
                  }],
      'message' => 'Looks like rain!'
    }
  }
  let(:valid_parsed_weather_agent_data) do
    {
      :type => 'Agents::WeatherAgent',
      :name => 'a weather agent',
      :schedule => '5pm',
      :keep_events_for => 14.days,
      :disabled => true,
      :guid => 'a-weather-agent',
      :options => weather_agent_options
    }
  end
  let(:valid_parsed_trigger_agent_data) do
    {
      :type => 'Agents::TriggerAgent',
      :name => 'listen for weather',
      :keep_events_for => 0,
      :propagate_immediately => true,
      :disabled => false,
      :guid => 'a-trigger-agent',
      :options => trigger_agent_options
    }
  end
  let(:valid_parsed_basecamp_agent_data) do
    {
      :type => 'Agents::BasecampAgent',
      :name => 'Basecamp test',
      :schedule => 'every_2m',
      :keep_events_for => 0,
      :propagate_immediately => true,
      :disabled => false,
      :guid => 'a-basecamp-agent',
      :options => {project_id: 12345}
    }
  end
  let(:valid_parsed_data) do
    {
      schema_version: 1,
      name: name,
      description: description,
      guid: guid,
      tag_fg_color: tag_fg_color,
      tag_bg_color: tag_bg_color,
      icon: icon,
      source_url: source_url,
      exported_at: 2.days.ago.utc.iso8601,
      agents: [
        valid_parsed_weather_agent_data,
        valid_parsed_trigger_agent_data
      ],
      links: [
        { :source => 0, :receiver => 1 }
      ],
      control_links: []
    }
  end
  let(:valid_data) { valid_parsed_data.to_json }
  let(:invalid_data) { { :name => 'some scenario missing a guid' }.to_json }
    
      describe 'migrating an actual agent' do
    before do
      valid_params = {
                        'auth_token' => 'token',
                        'room_name' => 'test',
                        'room_name_path' => '',
                        'username' => 'Huginn',
                        'username_path' => '$.username',
                        'message' => 'Hello from Huginn!',
                        'message_path' => '$.message',
                        'notify' => false,
                        'notify_path' => '',
                        'color' => 'yellow',
                        'color_path' => '',
                      }
    
      describe '#value_at' do
    it 'returns the value at a JSON path' do
      expect(Utils.value_at({ :foo => { :bar => :baz }}.to_json, 'foo.bar')).to eq('baz')
      expect(Utils.value_at({ :foo => { :bar => { :bing => 2 } }}, 'foo.bar.bing')).to eq(2)
      expect(Utils.value_at({ :foo => { :bar => { :bing => 2 } }}, 'foo.bar[?(@.bing == 2)].bing')).to eq(2)
    end
    
      private
    
      # Get message for given
  def find_message(kind, options = {})
    options[:scope] ||= translation_scope
    options[:default] = Array(options[:default]).unshift(kind.to_sym)
    options[:resource_name] = resource_name
    options = devise_i18n_options(options)
    I18n.t('#{options[:resource_name]}.#{kind}', options)
  end
    
    Devise.setup do |config|
  require 'devise/orm/active_record'
  config.secret_key = 'secret_key_base'
end
    
    module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
          get :index, params: {a_id: @aspect.id, page: '1'}, format: :json
      save_fixture(response.body, 'aspects_manage_contacts_json')
    end
    
        it 'returns a 401 for a private post when logged out' do
      bob.like!(@message)
      sign_out :user
      get :index, params: {post_id: @message.id}, format: :json
      expect(response.status).to eq(401)
    end
  end
    
          it 'succeeds on mobile' do
        eve.share_with(alice.person, eve.aspects.first)
        get :index, format: :mobile
        expect(response).to be_success
      end
    end
    
              compare_with_real_token token, session
    
      it 'should not override the header if already set' do
    mock_app with_headers('Content-Security-Policy' => 'default-src: none')
    expect(get('/', {}, 'wants' => 'text/html').headers['Content-Security-Policy']).to eq('default-src: none')
  end
end
