
        
                  0
        end
    
            # Folder options
        opts[:owner] ||= ssh_info[:username]
        opts[:group] ||= ssh_info[:username]
    
        before do
      allow(subject).to receive(:with_target_vms) { |&block| block.call machine }
      allow(machine.ui).to receive(:info)
      allow(machine.state).to receive(:id).and_return(:created)
      allow(machine.env).to receive(:cwd).
        and_return('/Users/brian/code/vagrant-sandbox')
      allow(machine.provider).to receive(:capability?).and_return(false)
      allow(machine.config).to receive(:vm).and_return(true)
      allow(machine.config.vm).to receive(:synced_folders).and_return(config_synced_folders)
    
                    logger.info('Invalid ID, pruning: #{id}')
                nfs_cleanup(id)
              end
            end
          end
        rescue Errno::EACCES
          raise Vagrant::Errors::NFSCantReadExports
        end
    
            expect(app).to receive(:call).with(env)
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
            name = name_folder.basename.to_s.to_sym
        name_folder.children(true).each do |provider_folder|
          # If this isn't a directory then it isn't a provider
          next if !provider_folder.directory?
    
          it 'raises an error if there are multiple providers' do
        test_iso_env.box3('foo', '1.0', :vmware)
    
        def backtrace_pattern
      loc = Rake.application.find_rakefile_location
      return unless loc
    
        def remove(key, *values)
      set(key, Array(fetch(key)) - values)
    end
    
          def scm_name
        fetch(:scm)
      end