
        
          def variant_with_format_and_custom_render
    request.variant = :mobile
    
            def ref
          @symbol
        end
        alias to_sym ref
    
        if !(layout = page.data.layout).blank?
      classes << 'layout-#{page.data.layout}'
    end
    
      subject { described_class }
    
      before do
    allow(machine).to receive(:communicate).and_return(communicator)
  end
    
          # Check if this machine has a local box metadata file
      # describing the existing guest. If so, load it and
      # set the box name and version to allow the actual
      # box in use to be discovered.
      if data_path
        meta_file = data_path.join('box_meta')
        if meta_file.file?
          box_meta = JSON.parse(meta_file.read)
          config.vm.box = box_meta['name']
          config.vm.box_version = box_meta['version']
        end
      end
    
          configure do |config|
        config.vm.box = 'foo'
        config.vm.provider 'foo' do |p|
          p.value = 'rawr'
        end
      end
    
                # We can only do the things below if we do not fork, otherwise
            # it'll hang the process.
            if Process.pid == start_pid
              # Let the user know that this process had an error early
              # so that they see it while other things are happening.
              machine.ui.error(I18n.t('vagrant.general.batch_notify_error'))
            end
          end
    
        it 'fails if it encounters an error' do
      allow(machine.state).to receive(:id).and_return(:running)
      allow(provision).to receive(:provision).and_raise('Nope!')
      allow(VagrantPlugins::Shell::Provisioner).to receive(:new).
        and_return(provision)
    
            expect(described_class.exec(ssh_info)).to eq(nil)
        expect(Vagrant::Util::SafeExec).to have_received(:exec)
          .with(ssh_path, 'vagrant@localhost', '-p', '2222', '-o', 'LogLevel=FATAL', '-o', 'StrictHostKeyChecking=no', '-o', 'UserKnownHostsFile=/dev/null', '-i', ssh_info[:private_key_path][0])
      end
    end
    
          # Invalid entry because that specific machine doesn't exist anymore.
      entryB_env = isolated_environment
      entryB_env.vagrantfile('')
      entryB = new_entry('B')
      entryB.vagrantfile_path = entryB_env.workdir
      locked = iso_env.machine_index.set(entryB)
      iso_env.machine_index.release(locked)
    
    desc 'generate documentation'
task :doc => 'doc:all'
    
          prepare_package(explicit_plugins_specs, temp_path)
      LogStash::Util::Zip.compress(temp_path, @target)
    ensure
      FileUtils.rm_rf(temp_path)
    end
    
              it 'autocorrects' do
            new_source = autocorrect_source(source)
            expect(new_source).to eq('1.is_a?(Integer)')
          end
        end
    
          # Checks whether the `for` node has a `do` keyword.
      #
      # @return [Boolean] whether the `for` node has a `do` keyword
      def do?
        loc.begin&.is?('do')
      end