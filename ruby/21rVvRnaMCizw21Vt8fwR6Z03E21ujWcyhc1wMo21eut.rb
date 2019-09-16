
        
                    if method_called_ever?(method, :exist?) && !method_called_ever?(method, :!)
              problem 'Use `assert_predicate <path_to_file>, :exist?` instead of `#{method.source}`'
            end
    
        expect do
      described_class.run('local-transmission', 'local-caffeine')
    end.to output('#{transmission_location}\n#{caffeine_location}\n').to_stdout
  end
    
          # Config option `ruby` for a trigger which reads in a ruby block and sets
      # it to be evaluated when the configured trigger fires. This method is only
      # invoked when the regular 'block' syntax is used. Otherwise the proc is
      # set through the attr_accessor if the hash syntax is used.
      #
      # @param [Proc] block
      def ruby(&block)
        @ruby_block = block
      end
    
          # If we're forcing the default, just short-circuit and return
      # that (the default behavior)
      if default && opts[:force_default]
        @logger.debug('Using forced default provider: `#{default}`')
        return default
      end
    
        it 'raises an error if the machine is not found' do
      expect { subject.machine_config(:foo, :foo, boxes) }.
        to raise_error(Vagrant::Errors::MachineNotFound)
    end
    
              # If we forked during the process run, we need to do a hard
          # exit here. Ruby's fork only copies the running process (which
          # would be us), so if we return from this thread, it results
          # in a zombie Ruby process.
          if Process.pid != start_pid
            # We forked.
    
    describe VagrantPlugins::CommandGlobalStatus::Command do
  include_context 'unit'
    
              # This re-establishes our symbolic links if they were
          # created between now and a reboot
          machine.communicate.execute('net use', error_check: false, shell: :powershell)
        end
      end
    end
  end
end

    
      before { sign_in user }
    
      def edit
    @page = Page.find(params[:id])
  end