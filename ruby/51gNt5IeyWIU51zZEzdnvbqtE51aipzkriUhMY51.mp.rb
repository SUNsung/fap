
        
          p.action do |args, _|
    if args.empty?
      Jekyll.logger.error 'A subcommand is required.'
      puts p
      abort
    else
      subcommand = args.first
      unless p.has_command? subcommand
        Jekyll.logger.abort_with 'fatal: 'jekyll #{args.first}' could not' \
          ' be found. You may need to install the jekyll-#{args.first} gem' \
          ' or a related gem to be able to use this subcommand.'
      end
    end
  end
end

    
          #
    
            def initialize(config)
          @main_fallback_highlighter = config['highlighter'] || 'rouge'
          @config = config['kramdown'] || {}
          @highlighter = nil
          setup
        end
    
              builds = scope_relevant.select('count(*)').to_sql
          created = scope_relevant.created.select('count(*)').to_sql
          success = scope_relevant.success.select('count(*)').to_sql
          manual = scope_relevant.manual.select('count(*)').to_sql
          pending = scope_relevant.pending.select('count(*)').to_sql
          running = scope_relevant.running.select('count(*)').to_sql
          skipped = scope_relevant.skipped.select('count(*)').to_sql
          canceled = scope_relevant.canceled.select('count(*)').to_sql
          warnings = scope_warnings.select('count(*) > 0').to_sql
    
            def importer_class
          NoteImporter
        end
    
            # attributes - A Hash containing the raw note details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
        # This returns whether the guest is ready to work. If this returns
    # `false`, then {#detect!} should be called in order to detect the
    # guest OS.
    #
    # @return [Boolean]
    def ready?
      !!capability_host_chain
    end
  end
end

    
            @machine_locks.delete(id)
      end
    end
    
              # Default opts to a blank optionparser if none is given
          opts ||= OptionParser.new
    
              providers
        end
    
                    raise Errors::VMNoMatchError if machines.empty?
              else
                # String name, just look for a specific VM
                @logger.debug('Finding machine that match name: #{name}')
                machines << get_machine.call(name.to_sym)
                raise Errors::VMNotFoundError, name: name if !machines[0]
              end
            end
          else
            # No name was given, so we return every VM in the order
            # configured.
            @logger.debug('Loading all machines...')
            machines = @env.machine_names.map do |machine_name|
              get_machine.call(machine_name)
            end
          end
    
            # This contains all the registered provider capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :provider_capabilities
    
            # This should return the state of the machine within this provider.
        # The state must be an instance of {MachineState}. Please read the
        # documentation of that class for more information.
        #
        # @return [MachineState]
        def state
          nil
        end
    
      it 'no raises error on fixnum values' do
    [1].each do |v|
      lambda { v.taint }.should_not raise_error(RuntimeError)
      v.tainted?.should == false
    end
  end
end

    
          ENV[new_initial_revision_var] ||= ENV[old_initial_revision_var]
      ENV[new_current_revision_var] ||= ENV[old_current_revision_var]