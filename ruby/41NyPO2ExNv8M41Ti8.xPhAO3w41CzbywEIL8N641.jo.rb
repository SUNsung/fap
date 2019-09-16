
        
              it 'creates a new user' do
        visit new_admin_user_path
        fill_in 'Email', with: 'test@test.com'
        fill_in 'Username', with: 'usertest'
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: '12345678'
        click_on 'Create User'
        expect(page).to have_text('User 'usertest' was successfully created.')
        expect(page).to have_text('test@test.com')
      end
    
      it 'asks to accept conflicts when the scenario was modified' do
    DefaultScenarioImporter.seed(user)
    agent = user.agents.where(name: 'Rain Notifier').first
    agent.options['expected_receive_period_in_days'] = 9001
    agent.save!
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This Scenario already exists in your system.')
    expect(page).to have_text('9001')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
      describe '#status' do
    it 'works for failed jobs' do
      job.failed_at = Time.now
      expect(status(job)).to eq('<span class='label label-danger'>failed</span>')
    end
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
      describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
    
        context 'running workers' do
      before do
        AgentRunner.class_variable_set(:@@agents, [HuginnScheduler, DelayedJobWorker])
        stub.instance_of(HuginnScheduler).setup
        stub.instance_of(DelayedJobWorker).setup
      end
    
          expect(exporter.as_json[:links]).to eq([{ :source => guid_order(agent_list, :jane_weather_agent), :receiver => guid_order(agent_list, :jane_rain_notifier_agent) }])
    end
    
        it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_string('Received <$.content.text.*> from <$.content.name> .') }.
        to raise_error('JSONPath '$.content.text.*' is too complex, please check your migration.')
    end
  end
    
          event = Event.new
      event.agent = agents(:bob_rain_notifier_agent)
      event.payload = {
        'url' => 'http://xkcd.com',
        'link' => 'Random',
      }
      agent.receive([event])
    end
    
          it 'writes headers when with_header is true' do
        event = Event.new(payload: { 'data' => {'key' => 'value', 'key2' => 'value2', 'key3' => 'value3'} })
        expect { @checker.receive([event])}.to change(Event, :count).by(1)
        expect(Event.last.payload).to eq('data' => '\'key\',\'key2\',\'key3\'\n\'value\',\'value2\',\'value3\'\n')
      end
    
          # Find a bottle built for a previous version of macOS.
      def find_older_compatible_tag(tag)
        begin
          tag_version = MacOS::Version.from_symbol(tag)
        rescue ArgumentError
          return
        end
    
      describe '#inspect' do
    subject { described_class.new(%w[1.7+]) }
    
          def sdk_path(v = nil)
        sdk(v)&.path
      end
    
      # Returns the id for this page.
  # @return [String]
  def body_id_for(page)
    if !(name = page.data.sidebar_current).blank?
      return 'page-#{name.strip}'
    end
    if page.url == '/' || page.url == '/index.html'
      return 'page-home'
    end
    if !(title = page.data.page_title).blank?
      return title
        .downcase
        .gsub(''', '')
        .gsub(/[^\w]+/, '-')
        .gsub(/_+/, '-')
        .squeeze('-')
        .squeeze(' ')
    end
    return ''
  end
    
    describe VagrantPlugins::Chef::Cap::FreeBSD::ChefInstalled do
  include_context 'unit'
    
        it 'adds from HTTP URL' do
      box_path = iso_env.box2_file(:virtualbox)
      with_web_server(box_path) do |port|
        env[:box_name] = 'foo'
        env[:box_url] = 'http://127.0.0.1:#{port}/#{box_path.basename}'
    
            # Skip providers that can't be defaulted, unless they're in our
        # config, in which case someone made our decision for us.
        if !config.include?(key)
          next if popts.key?(:defaultable) && !popts[:defaultable]
        end
    
        context 'when the box does not match the provider' do
      before do
        env.box3('foo', '1.0', :other, vagrantfile: <<-VF)
          Vagrant.configure('2') do |config|
            config.vagrant.plugins = 'vagrant-plugin'
          end
        VF
        env.vagrantfile <<-VF
          Vagrant.configure('2') do |config|
            config.vm.box = 'foo'
          end
        VF
      end
    
      let(:keys) { [] }
  let(:loader) {
    Vagrant::Config::Loader.new(
      Vagrant::Config::VERSIONS, Vagrant::Config::VERSIONS_ORDER)
  }
    
          it 'should flag threads as being parallel actions' do
        parallel = nil
        subject.custom(machine) { |m| parallel = Thread.current[:batch_parallel_action] }
        subject.custom(machine) { |*_| }
        subject.run
        expect(parallel).to eq(true)
      end
    
          # Allow InstallerSet to find matching specs, then filter
      # for preferred sources
      def find_all(req)
        result = super
        if system_plugins.include?(req.name)
          result.delete_if do |spec|
            spec.is_a?(Gem::Resolver::InstalledSpecification)
          end
        end
        subset = result.find_all do |idx_spec|
          preferred = false
          if prefer_sources[req.name]
            if idx_spec.source.respond_to?(:path)
              preferred = prefer_sources[req.name].include?(idx_spec.source.path.to_s)
            end
            if !preferred
              preferred = prefer_sources[req.name].include?(idx_spec.source.uri.to_s)
            end
          end
          preferred
        end
        subset.empty? ? result : subset
      end
    end
    
      @@command_opts = Rex::Parser::Arguments.new(
    '-f' => [true,  'The function to pass to the command.'],
    '-a' => [true,  'The arguments to pass to the command.'],
    '-h' => [false, 'Help menu.']
  )
    
        res = send_request_cgi(
      'method'   => 'GET',
      'uri'      => go_go_gadget1('/search/index'),
      'vars_get' => {'q' => 'a'}
    )
    
        uri
  end
    
        output = client.kiwi.kerberos_ticket_list.strip
    if output == ''
      print_error('No kerberos tickets exist in the current session.')
    else
      print_good('Kerberos tickets found in the current session.')
      print_line(output)
    end
    print_line
  end
    
        dll_path = '#{path}\\#{get_name('DLLNAME', 'dll')}'
    write_file(dll_path, generate_payload_dll)
    
      def initialize(info = {})
    super(update_info(info,
      'Name' => 'Windows Persistent Service Installer',
      'Description'   => %q{
        This Module will generate and upload an executable to a remote host, next will make it a persistent service.
        It will create a new service which will start the payload whenever the service is running. Admin or system
        privilege is required.
      },
      'License'       => MSF_LICENSE,
      'Author'        => [ 'Green-m <greenm.xxoo[at]gmail.com>' ],
      'Platform'      => [ 'windows' ],
      'Targets'       => [['Windows', {}]],
      'SessionTypes'  => [ 'meterpreter', 'shell'],
      'DefaultTarget'        => 0,
      'References'           => [
        [ 'URL', 'https://github.com/rapid7/metasploit-framework/blob/master/external/source/metsvc/src/metsvc.cpp' ]
      ],
      'DisclosureDate'=> 'Oct 20 2018'
    ))
    
        # Check for result
    begin
      size = session.fs.file.stat(net_com_opts[:target].gsub('\\', '\\\\')).size
      print_good 'File #{net_com_opts[:target].gsub('\\', '\\\\')} found, #{size}kb'
    rescue
      print_error 'File #{net_com_opts[:target].gsub('\\', '\\\\')} not found,' \
                  ' NET CLR version #{datastore['NET_CLR_VER']} possibly not available'
      return
    end
    
    # Default parameters for payload
rhost = Rex::Socket.source_address('1.2.3.4')
rport = 4444
delay = 5
install = false
autoconn = false
serv = false
altexe = nil
target_dir = nil
payload_type = 'windows/meterpreter/reverse_tcp'
script = nil
script_on_target = nil
    
        def bad_request?(e)
      Sinatra::BadRequest === e
    end
    
            begin
          token = decode_token(token)
        rescue ArgumentError # encoded_masked_token is invalid Base64
          return false
        end
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end