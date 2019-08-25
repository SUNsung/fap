
        
              # return nil for `{{ site.config }}` even if --config was passed via CLI
      def config; end
    end
  end
end

    
    def global_require
  JSON.pretty_generate(DATA)
end
    
              # Run the listener in a busy block so that we can cleanly
          # exit once we receive an interrupt.
          Vagrant::Util::Busy.busy(callback) do
            listener.start
            queue.pop
            listener.stop if listener.state != :stopped
          end
    
      describe '#chef_installed' do
    let(:version) { '15.0.0' }
    let(:command) { 'test -x /opt/chef_solo/bin/knife&& /opt/chef_solo/bin/knife --version | grep '15.0.0'' }
    
      describe '#primary_machine_name' do
    it 'returns the default name when single-VM' do
      configure { |config| }
    
            # @return [Integer] Maximum number of seconds to wait for lock
        LOCK_TIMEOUT = 60
        # @return [String] Compose file format version
        COMPOSE_VERSION = '2'.freeze