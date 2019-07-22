
        
                # if the guest has a guest path scrubber capability, use it
        if machine.guest.capability?(:rsync_scrub_guestpath)
          guestpath = machine.guest.capability(:rsync_scrub_guestpath, opts)
        end
    
      let(:guest)   { double('guest') }
  let(:machine) { iso_env.machine(iso_env.machine_names[0], :dummy) }
    
        it 'returns the updated box info within constraints' do
      metadata = Vagrant::BoxMetadata.new(StringIO.new(<<-RAW))
      {
        'name': 'foo',
        'versions': [
          {
            'version': '1.0'
          },
          {
            'version': '1.1',
            'providers': [
              {
                'name': 'virtualbox',
                'url': 'bar'
              }
            ]
          },
          {
            'version': '1.4',
            'providers': [
              {
                'name': 'virtualbox',
                'url': 'bar'
              }
            ]
          }
        ]
      }
      RAW
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
    describe VagrantPlugins::Chef::Cap::Windows::ChefInstalled do
  include_context 'unit'
    
            # Create a new driver instance
        #
        # @param [Vagrant::Machine] machine Machine instance for this driver
        def initialize(machine)
          if !Vagrant::Util::Which.which('docker-compose')
            raise Errors::DockerComposeNotInstalledError
          end
          super()
          @machine = machine
          @data_directory = Pathname.new(machine.env.local_data_path).
            join('docker-compose')
          @data_directory.mkpath
          @logger = Log4r::Logger.new('vagrant::docker::driver::compose')
          @compose_lock = Mutex.new
          @logger.debug('Docker compose driver initialize for machine `#{@machine.name}` (`#{@machine.id}`)')
          @logger.debug('Data directory for composition file `#{@data_directory}`')
        end
    
          oink = MiniTest::Mock.new
      oink.expect(:multi, [0, 1])
      pork = ConnectionPool.new(size: 1) { oink }
    
      def new_manager(opts)
    Sidekiq::Manager.new(opts)
  end
    
    def Process.rss
  `ps -o rss= -p #{Process.pid}`.chomp.to_i
end