
        
            def order_top_with_notification_levels(score)
      -'COALESCE(topic_users.notification_level, 1) DESC, COALESCE(category_users.notification_level, 1) DESC, COALESCE(top_topics.#{score}, 0) DESC, topics.bumped_at DESC'
    end
    
        since =
      case period_type
      when :daily then 1.day.ago
      when :weekly then 1.week.ago
      when :monthly then 1.month.ago
      when :quarterly then 3.months.ago
      when :yearly then 1.year.ago
      else 1000.years.ago
      end
    
    describe ContentSecurityPolicy::Builder do
  let(:builder) { described_class.new }
    
    # omniauth loves spending lots cycles in its magic middleware stack
# this middleware bypasses omniauth middleware and only hits it when needed
class Middleware::OmniauthBypassMiddleware
    
    module HighlightJs
  HIGHLIGHTJS_DIR ||= '#{Rails.root}/vendor/assets/javascripts/highlightjs/'
    
      describe 'script-src' do
    it 'always has self, logster, sidekiq, and assets' do
      script_srcs = parse(policy)['script-src']
      expect(script_srcs).to include(*%w[
        'unsafe-eval'
        'report-sample'
        http://test.localhost/logs/
        http://test.localhost/sidekiq/
        http://test.localhost/mini-profiler-resources/
        http://test.localhost/assets/
        http://test.localhost/brotli_asset/
        http://test.localhost/extra-locales/
        http://test.localhost/highlight-js/
        http://test.localhost/javascripts/
        http://test.localhost/plugins/
        http://test.localhost/theme-javascripts/
        http://test.localhost/svg-sprite/
      ])
    end
    
        def initialize(analytics_ingester_client: AnalyticsIngesterClient.new(GA_TRACKING))
      require 'securerandom'
      @session_id = SecureRandom.uuid
      @client = analytics_ingester_client
      @threads = []
      @launch_event_sent = false
    end
    
          it 'adds no-build flag to command if no_build is set to true' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              no_build: true
            )
          end').runner.execute(:test)
    
        # An empty argument will be skipped, so return empty quotes.
    # https://github.com/ruby/ruby/blob/a6413848153e6c37f6b0fea64e3e871460732e34/lib/shellwords.rb#L142-L143
    return ''''.dup if str.empty?
    
        context 'with keywords' do
      let(:options) do
        {
          name: { 'en-US' => 'Fastlane Demo' },
          description: { 'en-US' => 'Demo description' },
          keywords: { 'en-US' => 'Some, key, words' }
        }
      end
    
    describe Admin::UsersController do
  it 'requires to be signed in as an admin' do
    login_as(users(:bob))
    visit admin_users_path
    expect(page).to have_text('Admin access required to view that page.')
  end
    
        it 'shows the dry run pop up with previous events and allows use previously received event' do
      emitter.events << Event.new(payload: {url: 'http://xkcd.com/'})
      agent.sources << emitter
      agent.options.merge!('url' => '', 'url_from_event' => '{{url}}')
      agent.save!
    
      it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
          expect(exporter.as_json[:links]).to eq([{ :source => guid_order(agent_list, :jane_weather_agent), :receiver => guid_order(agent_list, :jane_rain_notifier_agent) }])
    end
    
      describe '#schedule_scheduler_agents' do
    it 'registers active SchedulerAgents' do
      @scheduler.schedule_scheduler_agents
    
      describe 'migrating a hash' do
    it 'should convert every attribute' do
      expect(LiquidMigrator.convert_hash({'a' => '$.data', 'b' => 'This is a <$.test>'})).to eq(
                                  {'a' => '$.data', 'b' => 'This is a {{test}}'}
      )
    end
    it 'should work with leading_dollarsign_is_jsonpath' do
      expect(LiquidMigrator.convert_hash({'a' => '$.data', 'b' => 'This is a <$.test>'}, leading_dollarsign_is_jsonpath: true)).to eq(
                                  {'a' => '{{data}}', 'b' => 'This is a {{test}}'}
      )
    end
    it 'should use the corresponding *_path attributes when using merge_path_attributes'do
      expect(LiquidMigrator.convert_hash({'a' => 'default', 'a_path' => '$.data'}, {leading_dollarsign_is_jsonpath: true, merge_path_attributes: true})).to eq(
                                  {'a' => '{{data}}'}
      )
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_hash({'b' => 'This is <$.complex[2]>'}) }.
        to raise_error('JSONPath '$.complex[2]' is too complex, please check your migration.')
    end
  end
    
        it 'cleans up old logs when there are more than log_length' do
      stub(AgentLog).log_length { 4 }
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 1')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 2')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 3')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 4')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 4')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 1')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 5')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 5')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 2')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 6')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 6')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 3')
    end
    
        it 'should raise error when invalid response arrives' do
      stub(HTTParty).post { {'blah' => 'blah'} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Invalid response from Boxcar:/)
    end
    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
        unless env['devise.skip_trackable']
      warden.session(scope)['last_request_at'] = Time.now.utc.to_i
    end
  end
end

    
        # Create magic predicates for verifying what module is activated by this map.
    # Example:
    #
    #   def confirmable?
    #     self.modules.include?(:confirmable)
    #   end
    #
    def self.add_module(m)
      class_eval <<-METHOD, __FILE__, __LINE__ + 1
        def #{m}?
          self.modules.include?(:#{m})
        end
      METHOD
    end
    
        self.each_key { |k|
      if (k.downcase == key.downcase)
        self.store(k, value)
        stored = true
      end
    }
    
        when IAX_TYPE_DTMF_END
      self.dprint('DTMF END: #{pkt[11,1]}')
    
    module Rex
module Proto
module IPMI
  require 'rex/proto/ipmi/channel_auth_reply'
  require 'rex/proto/ipmi/open_session_reply'
  require 'rex/proto/ipmi/rakp2'
    
      def self.create_ipmi_getchannel_probe
    [   # Get Channel Authentication Capabilities
      0x06, 0x00, 0xff, 0x07, # RMCP Header
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x20, 0x18,
      0xc8, 0x81, 0x00, 0x38, 0x8e, 0x04, 0xb5
    ].pack('C*')
  end
    
                components.each do |c|
              encoded << [c.length].pack('N')
              encoded << c
            end
    
              # Decrypts the cipher with etype encryption schema
          #
          # @param key [String] the key to decrypt
          # @param msg_type [Integer] the message type
          # @return [String] the decrypted `cipher`
          # @raise [RuntimeError] if decryption doesn't succeed
          # @raise [NotImplementedError] if encryption isn't supported
          def decrypt(key, msg_type)
            if cipher.nil? || cipher.empty?
              return ''
            end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos KDC-REQ (request) data
        # definition
        class KdcRequest < Element
          # @!attribute pvno
          #   @return [Integer] The protocol version number
          attr_accessor :pvno
          # @!attribute msg_type
          #   @return [Integer] The type of a protocol message
          attr_accessor :msg_type
          # @!attribute pa_data
          #   @return [Array<Rex::Proto::Kerberos::Model::PreAuthData>] Authentication information which may
          #   be needed before credentials can be issued or decrypted
          attr_accessor :pa_data
          # @!attribute req_body
          #   @return [Rex::Proto::Kerberos::Model:::KdcRequestBody] The request body
          attr_accessor :req_body
    
              # @!attribute type
          #   @return [Integer] The padata type
          attr_accessor :type
          # @!attribute value
          #   @return [String] The padata value
          attr_accessor :value
    
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
    
    Liquid::Template.register_tag('include_code', Jekyll::IncludeCodeTag)

    
    require 'pathname'
require './plugins/octopress_filters'
    
        # npm installs dependencies in the module itself, so if you do
    # 'npm install express' it installs dependencies (like 'connect')
    # to: node_modules/express/node_modules/connect/...
    #
    # To that end, I don't think we necessarily need to include
    # any automatic dependency information since every 'npm install'
    # is fully self-contained. That's why you don't see any bother, yet,
    # to include the package's dependencies in here.
    #
    # It's possible someone will want to decouple that in the future,
    # but I will wait for that feature request.
  end
    
      option '--publisher', 'PUBLISHER', 
    'Set the publisher name for the repository',
    :default => 'FPM'
    
        # Generate the package 'Prototype' file
    File.open('#{build_path}/Prototype', 'w') do |prototype|
      prototype.puts('i pkginfo')
      prototype.puts('i preinstall') if self.scripts['pre-install']
      prototype.puts('i postinstall') if self.scripts['post-install']
    
        realpath = Pathname.new(input_path).realpath.to_s
    ::Dir.chdir(build_path) do
      safesystem('unzip', realpath)
    end
    
      match do
    result = is_pane
    
          def stop_template
        asset_path 'template-stop.erb'
      end
    
        def windows?
      windows.any?
    end