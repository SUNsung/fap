      def rsync_command(machine)
        'sudo rsync'
      end
    
    # Do not buffer output
$stdout.sync = true
$stderr.sync = true
    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
      describe '#config' do
    it 'exposes the global configuration' do
      configure do |config|
        config.vm.box = 'what'
      end
    
      describe 'DEFAULT_GEM_SOURCES' do
    it 'should list hashicorp gemstore first' do
      expect(described_class.const_get(:DEFAULT_GEM_SOURCES).first).to eq(
        described_class.const_get(:HASHICORP_GEMSTORE))
    end
  end
    
    require Vagrant.source_root.join('plugins/commands/box/command/update')