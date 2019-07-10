
        
                  @registered.each do |plugin|
            plugin.components.host_capabilities.each do |host, caps|
              results[host].merge!(caps)
            end
          end
    
              # Register a new provisioner class only if a name was given
          data[:provisioners].register(name.to_sym, &block) if name != UNSET_VALUE
    
          result
    end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          servers.add_role(name, hosts, options)
    end
    
          def response
        return @response if defined? @response
    
          def servers_by_key
        @servers_by_key ||= {}
      end
    
          def trusted_keys
        @trusted_keys.dup
      end
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'
    
        def last?
      index == tab.panes.length - 1
    end
    
      describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
      def is_pane
    @actual.is_a? Tmuxinator::Pane
  end
end

    
    FactoryBot.find_definitions
    
            it 'returns two panes in an Array' do
          expect(window.panes).to match [
            a_pane.with(index: 0).and_commands('vim'),
            a_pane.with(index: 1).and_commands(command1, command2)
          ]
        end
      end
    end
  end
    
        context 'unsupported version' do
      before do
        allow($stdin).to receive_messages(getc: 'y')
        allow(Tmuxinator::TmuxVersion).to receive(:supported?).and_return(false)
      end
    
    
    {    ..........................................................
    __________________________________________________________
  }