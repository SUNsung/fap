
        
              def self.all(filter: {}, includes: nil, limit: nil, sort: nil)
        resps = Spaceship::ConnectAPI.get_apps(filter: filter, includes: includes, limit: limit, sort: sort).all_pages
        return resps.map(&:to_models).flatten
      end
    
          #
      # API
      #
    
    module Spaceship
  class ConnectAPI
    module Provisioning
      class Client < Spaceship::ConnectAPI::Client
        def self.instance
          # Verify there is a token or a client that can be used
          if Spaceship::ConnectAPI.token
            if @client.nil? || @client.token != Spaceship::ConnectAPI.token
              @client = Spaceship::ConnectAPI::Provisioning::Client.new(token: Spaceship::ConnectAPI.token)
            end
          elsif Spaceship::Portal.client
            # Initialize new client if new or if team changed
            if @client.nil? || @client.team_id != Spaceship::Portal.client.team_id
              @client = Spaceship::ConnectAPI::Provisioning::Client.client_with_authorization_from(Spaceship::Portal.client)
            end
          end
    
      before do
    allow(machine).to receive(:communicate).and_return(communicator)
  end
    
    require 'vagrant/box_metadata'
    
        # The root path is the path where the top-most (loaded last)
    # Vagrantfile resides. It can be considered the project root for
    # this environment.
    #
    # @return [String]
    def root_path
      return @root_path if defined?(@root_path)
    
        it 'raise an error if nothing else is usable' do
      plugin_providers[:foo] = [provider_usable_class(false), { priority: 5 }]
      plugin_providers[:bar] = [provider_usable_class(false), { priority: 5 }]
      plugin_providers[:baz] = [provider_usable_class(false), { priority: 5 }]
    
          # Load once so that we can get the proper box value
      config, config_warnings, config_errors = @loader.load(keys)
    
                exit_status = true
            if Thread.current[:error]
              # We had an error, print the stack trace and exit immediately.
              exit_status = false
              error = Thread.current[:error]
              @logger.error(error.inspect)
              @logger.error(error.message)
              @logger.error(error.backtrace.join('\n'))
            end
    
          after_triggers = triggers.after_triggers
      expect(after_triggers.size).to eq(3)
      subject.send(:filter_triggers, after_triggers, 'ubuntu-guest', :action)
      expect(after_triggers.size).to eq(3)
    end
  end
    
          expect(communicator).to receive(:test).with(/# Function/, { error_check: false, shell: :powershell }).and_return(0)
      expect(communicator).to receive(:execute).with(/shutdown/, { shell: :powershell }).and_return(0)
      expect(described_class).to receive(:wait_for_reboot)
    
      def cmd_wdigest(*args)
    method = Proc.new { client.mimikatz.wdigest }
    mimikatz_request('wdigest', method)
  end
    
      #
  # Nothing to speak of.
  #
  def stop_handler
    # Stop the listener threads
    self.listener_threads.each do |t|
      t.kill
    end
    self.listener_threads = []
    self.listener_pairs = {}
  end
    
      def self.handler_type_alias
    'bind_tcp_rc4'
  end
    
        # iterate over all users
    get_nonsystem_accounts.each do |user_info|
      user = user_info['name']
      next if datastore['MATCHUSER'].present? and datastore['MATCHUSER'] !~ user
      print_status 'Attempting to grab shadow for user #{user}...'
      if gt_lion? # 10.8+
        # pull the shadow from dscl
        shadow_bytes = grab_shadow_blob(user)
        next if shadow_bytes.blank?
    
      public class Exploit {
      public Exploit(){
          try {
              Payload.main(null);
          } catch (Exception e) { }
    }
    }
    
    stager_file = ARGV[0]
data = File.binread(stager_file)
macho = MachO::MachOFile.new_from_bin(data)
main_func = macho[:LC_MAIN].first
entry_offset = main_func.entryoff
    
          paths.each do |browser_path|
        if file?(browser_path)
          found_browser_path = browser_path
          break
        end
      end
    
          # Keep track of the columns that we were given, in
      # the order we are given them, while removing duplicates
      columns = []
      existing = Set.new
      accounts[k].each do |acct|
        acct.keys.each do |k|
          unless existing.include?(k)
            columns << k
            existing.add(k)
          end
        end
      end
    
      # Local service functionality should probably be replaced with upstream Post
  def remove_dyn_service(file_path)
    service_stop(datastore['SVC_NAME'])
    if service_delete(datastore['SVC_NAME'])['GetLastError'] == 0
      vprint_good('Service #{datastore['SVC_NAME']} Removed, deleting #{file_path.gsub('\\','\\\\')}')
      session.fs.file.rm(file_path.gsub('\\','\\\\'))
    else
      print_error('Something went wrong, not deleting #{file_path.gsub('\\','\\\\')}')
    end
    return
  end
    
    require 'rack/show_exceptions'
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
        it 'leaves normal params untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => 'bar'
      expect(body).to eq('bar')
    end
    
      def test_display_illegal_args
    o = Helpers.new
    s = o.display_args([1,2,3])
    assert_equal '1, 2, 3', s
    s = o.display_args(['<html>', 12])
    assert_equal '&quot;&lt;html&gt;&quot;, 12', s
    s = o.display_args('<html>')
    assert_equal 'Invalid job payload, args must be an Array, not String', s
    s = o.display_args(nil)
    assert_equal 'Invalid job payload, args is nil', s
  end
end

    
        it 'can start and stop' do
      f = Sidekiq::Processor.new(Mgr.new)
      f.terminate
    end
    
      it 'allows until delay scheduling of AM mails' do
    ss = Sidekiq::ScheduledSet.new
    assert_equal 0, ss.size
    UserMailer.delay_until(5.days.from_now).greetings(1, 2)
    assert_equal 1, ss.size
  end
    
        assert_equal 1, FirstWorker.count
    assert_equal 1, SecondWorker.count
  end
    
        def tmux_has_session?(name)
      # Redirect stderr to /dev/null in order to prevent 'failed to connect
      # to server: Connection refused' error message and non-zero exit status
      # if no tmux sessions exist.
      # Please see issues #402 and #414.
      sessions = `#{tmux_command} ls 2> /dev/null`
    
        private
    
      before do
    allow(project).to receive(:name).and_return 'foo'
    allow(project).to receive(:base_index).and_return 0
    allow(project).to receive(:pane_base_index).and_return 1
    
          # Sorted list of all .yml files, including duplicates
      def configs
        directories.map do |directory|
          Dir['#{directory}/**/*.yml'].map do |path|
            path.gsub('#{directory}/', '').gsub('.yml', '')
          end
        end.flatten.sort
      end