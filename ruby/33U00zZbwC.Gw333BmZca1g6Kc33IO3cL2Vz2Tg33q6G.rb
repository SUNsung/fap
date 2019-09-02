
        
              # return nil for `{{ site.config }}` even if --config was passed via CLI
      def config; end
    end
  end
end

    
    multitask :default => [:test, :features]
    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
      subject { described_class }
    
    describe VagrantPlugins::DockerProvider::Provider do
  let(:driver_obj){ double('driver') }
  let(:provider){ double('provider', driver: driver_obj) }
  let(:provider_config){ double('provider_config', force_host_vm: false) }
  let(:ssh) { double('ssh', guest_port: 22) }
  let(:config) { double('config', ssh: ssh) }
  let(:machine){ double('machine', provider: provider, provider_config: provider_config, config: config) }
    
          results = subject.machine_config(:default, :foo, boxes)
      config  = results[:config]
      box     = results[:box]
      expect(config.vm.box).to eq('foobox')
      expect(config.ssh.port).to eq(234)
      expect(config.vm.box_version).to eq('2.0')
      expect(box).to_not be_nil
      expect(box.name).to eq('foobox')
      expect(box.version).to eq('2.0')
    end
    
          errors = []
    
        it 'executes a ruby block' do
      expect(block).to receive(:call)
      subject.send(:execute_ruby, block)
    end
  end
end

    
            entries.each do |entry|
          columns.each do |_, method|
            v = entry.send(method).to_s
            v = v[0...7] if method == :id
            v = v.ljust(widths[method]) if widths[method]
            @env.ui.info('#{v} ', new_line: false)
          end
    
      let(:machine) { iso_env.machine(iso_env.machine_names[0], :dummy) }
    
    ::Bundler.with_friendly_errors do
  ::Bundler::CLI.start(ARGV, :debug => true)
end

    
          PluginManager.ui.info('Install successful')
    rescue ::Bundler::BundlerError => e
      raise PluginManager::InstallError.new(e), 'An error occurred went installing plugins'
    ensure
      FileUtils.rm_rf(uncompressed_path) if uncompressed_path && Dir.exist?(uncompressed_path)
    end
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end

    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end

    
      def check_dkim_record!
    check_dkim_record
    save!
  end
    
      def update
    if @credential.update(params.require(:credential).permit(:name, :hold))
      redirect_to_with_json [organization, @server, :credentials]
    else
      render_form_errors 'edit', @credential
    end
  end
    
      def create
    scope = @server ? @server.ip_pool_rules : organization.ip_pool_rules
    @ip_pool_rule = scope.build(safe_params)
    if @ip_pool_rule.save
      redirect_to_with_json [organization, @server, :ip_pool_rules]
    else
      render_form_errors 'new', @ip_pool_rule
    end
  end
    
    end

    
      def edit
    @organization_user = organization.user_assignment(@user)
  end