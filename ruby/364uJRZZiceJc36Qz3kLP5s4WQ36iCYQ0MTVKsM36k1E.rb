
        
            # Allows a configuration block (for_lane, for_platform) to get a clean
    # configuration for applying values, so that values can be overridden
    # (once) again. Those values are then merged into the surrounding
    # configuration as the block completes
    def with_a_clean_config_merged_when_complete
      previous_config = self.options.dup
      self.options = {}
      begin
        yield
      ensure
        self.options = previous_config.merge(self.options)
      end
    end
  end
end

    
          # Instantiates a client with cookie session or a JWT token.
      def initialize(cookie: nil, current_team_id: nil, token: nil)
        if token.nil?
          super(cookie: cookie, current_team_id: current_team_id)
        else
          options = {
            request: {
              timeout:       (ENV['SPACESHIP_TIMEOUT'] || 300).to_i,
              open_timeout:  (ENV['SPACESHIP_TIMEOUT'] || 300).to_i
            }
          }
          @token = token
          @current_team_id = current_team_id
    
          attr_accessor :first_name
      attr_accessor :last_name
      attr_accessor :email
      attr_accessor :invite_type
      attr_accessor :invitation
    
          it 'expands the hostpath relative to the root path' do
        opts[:hostpath] = 'foo'
        opts[:guestpath] = '/bar'
    
          def rsync_command(machine)
        'sudo rsync'
      end
    
            expect(app).to receive(:call).with(env)
    
    describe VagrantPlugins::Chef::Cap::FreeBSD::ChefInstalled do
  include_context 'unit'
    
      subject { described_class }
    
        # This defines a hook point where plugin action hooks that are registered
    # against the given name will be run in the context of this environment.
    #
    # @param [Symbol] name Name of the hook.
    # @param [Action::Runner] action_runner A custom action runner for running hooks.
    def hook(name, opts=nil)
      @logger.info('Running hook: #{name}')
      opts ||= {}
      opts[:callable] ||= Action::Builder.new
      opts[:runner] ||= action_runner
      opts[:action_name] = name
      opts[:env] = self
      opts.delete(:runner).run(opts.delete(:callable), opts)
    end
    
    ::Bundler.with_friendly_errors do
  ::Bundler::CLI.start(ARGV, :debug => true)
end

    
          def get_installer_for(plugin_name)
        uri = pack_uri(plugin_name)
    
          it 'returns true if the pipeline is a system pipeline' do
        expect(subject.system?).to be_truthy
      end
    end
    
        def user_feedback_string_for(action, platform, machines, options={})
      experimental_string = options['experimental'] ? 'experimental' : 'non experimental'
      message  = '#{action} all #{experimental_string} VM's defined in acceptance/Vagrantfile'
      '#{message} for #{platform}: #{machines}' if !platform.nil?
    end
    
      describe 'on #{logstash.hostname}' do
    context 'with a direct internet connection' do
      context 'when the plugin exist' do
        context 'from a local `.GEM` file' do
          let(:gem_name) { 'logstash-filter-qatest-0.1.1.gem' }
          let(:gem_path_on_vagrant) { '/tmp/#{gem_name}' }
          before(:each) do
            logstash.download('https://rubygems.org/gems/#{gem_name}', gem_path_on_vagrant)
          end