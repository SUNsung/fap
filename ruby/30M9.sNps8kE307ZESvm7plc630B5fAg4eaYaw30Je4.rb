
        
        set :vmware_utility_name, 'vagrant-vmware-utility'
set :vmware_utility_version, '1.0.7'
    
                  if cache.file?
                @logger.info('Loading cached node_name...')
                @config.node_name = cache.read.strip
              end
            end
          end
        end
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
    # Add the test directory to the load path
$:.unshift File.expand_path('../../', __FILE__)
    
            port_name = '#{@machine.config.ssh.guest_port}/tcp'
        network   = driver.inspect_container(@machine.id)['NetworkSettings']
    
        it 'raises an exception if virtualbox is not available' do
      allow(VagrantPlugins::ProviderVirtualBox::Driver::Meta).to receive(:new).
        and_raise(Vagrant::Errors::VirtualBoxNotDetected)
    
              filter.each do |trigger|
            index = nil
            match = false
            if trigger.only_on
              trigger.only_on.each do |o|
                if o.match(guest_name.to_s)
                  # trigger matches on current guest, so we're fine to use it
                  match = true
                  break
                end
              end
              # no matches found, so don't use trigger for guest
              index = triggers.index(trigger) unless match == true
            end
    
          subject.action(machine, 'up')
      subject.run
    end
    
        it 'fails if it encounters an error' do
      allow(machine.state).to receive(:id).and_return(:running)
      allow(provision).to receive(:provision).and_raise('Nope!')
      allow(VagrantPlugins::Shell::Provisioner).to receive(:new).
        and_return(provision)
    
        context 'when using '%' in a private_key_path' do
      let(:private_key_path) { '/tmp/percent%folder' }
      let(:ssh_info) {{
        host: 'localhost',
        port: 2222,
        username: 'vagrant',
        private_key_path: [private_key_path],
        compression: true,
        dsa_authentication: true
      }}
    
              @env.ui.info('')
        end
    
        ScratchPad.record []
    while true
      begin
        ScratchPad << enum.next
      rescue StopIteration
        break
      end
    end
    
      before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
    ScratchPad.clear
  end
    
        describe 'with a multi-byte character' do
      it 'prepends the character to the stream' do
        @gz.ungetc 'ŷ'
        @gz.read.should == 'ŷ12345abcde'
      end