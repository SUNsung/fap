
        
                  def install
            Formula.factory(name)
            ^^^^^^^^^^^^^^^^^^^^^ \'Formula.factory(name)\' is deprecated in favor of \'Formula[name]\'
          end
        end
      RUBY
    end
    
        def languages
      @languages ||= [
        *ARGV.value('language')&.split(','),
        *ENV['HOMEBREW_LANGUAGES']&.split(','),
        *Open3.capture2('defaults', 'read', '-g', 'AppleLanguages')[0].scan(/[^ \n'(),]+/),
      ].uniq
    end
    
      let(:local_caffeine) {
    Cask::CaskLoader.load(cask_path('local-caffeine'))
  }
    
        def metadata_versioned_path(version: self.version)
      cask_version = (version || :unknown).to_s
    
              @machine.communicate.sudo(remove_command(remote_file), error_check: false)
        end
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
          it 'should flag threads as being parallel actions' do
        parallel = nil
        subject.custom(machine) { |m| parallel = Thread.current[:batch_parallel_action] }
        subject.custom(machine) { |*_| }
        subject.run
        expect(parallel).to eq(true)
      end
    
              wait_remaining = MAX_REBOOT_RETRY_DURATION
          begin
            wait_for_reboot(machine)
          rescue Vagrant::Errors::MachineGuestNotReady, WinRM::WinRMHTTPTransportError => e
            raise if wait_remaining < 0
            @logger.warn('Machine not ready, cannot start reboot yet. Trying again')
            sleep(5)
            wait_remaining -= 5
            retry
          end
        end