
        
            delegate :repository, to: :project
    
            def diff_files
          @diff_files ||= diffs.decorate! { |diff| decorate_diff!(diff) }
        end
    
      let(:machine) { iso_env.machine(iso_env.machine_names[0], :dummy) }
  let(:communicator) { VagrantTests::DummyCommunicator::Communicator.new(machine) }
  let(:config)  { double('config') }
    
    # Set the dummy provider to the default for tests
ENV['VAGRANT_DEFAULT_PROVIDER'] = 'dummy'
    
          begin
        @logger.debug('Creating: #{@local_data_path}')
        FileUtils.mkdir_p(@local_data_path)
        # Create the rgloader/loader file so we can use encoded files.
        loader_file = @local_data_path.join('rgloader', 'loader.rb')
        if !loader_file.file?
          source_loader = Vagrant.source_root.join('templates/rgloader.rb')
          FileUtils.mkdir_p(@local_data_path.join('rgloader').to_s)
          FileUtils.cp(source_loader.to_s, loader_file.to_s)
        end
      rescue Errno::EACCES
        raise Errors::LocalDataDirectoryNotAccessible,
          local_data_path: @local_data_path.to_s
      end
    end
    
          configure do |config|
        config.vm.box = 'foo'
      end
    
              @logger = Log4r::Logger.new('vagrant::trigger::#{self.class.to_s.downcase}')
        end
    
    require File.expand_path('../../base', __FILE__)
    
            expect(described_class.exec(ssh_info)).to eq(nil)
        expect(Vagrant::Util::SafeExec).to have_received(:exec)
          .with(ssh_path, 'vagrant@localhost', '-p', '2222', '-o', 'LogLevel=FATAL', '-o', 'StrictHostKeyChecking=no', '-o', 'UserKnownHostsFile=/dev/null', '-i', ssh_info[:private_key_path][0],'-o', 'ForwardX11=yes', '-o', 'ForwardX11Trusted=yes')
      end
    end
    
        # Enable Vagrant environment specific plugins at given data path
    #
    # @param [Pathname] Path to Vagrant::Environment data directory
    # @return [Pathname] Path to environment specific gem directory
    def environment_path=(env_data_path)
      @env_plugin_gem_path = env_data_path.join('plugins', 'gems', RUBY_VERSION).freeze
    end