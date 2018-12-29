
        
            it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
      it 'schould register the schedules with the rufus scheduler and run' do
    mock(@rufus_scheduler).join
    scheduler = HuginnScheduler.new
    scheduler.setup!(@rufus_scheduler, Mutex.new)
    scheduler.run
  end
    
      it 'replaces invalid byte sequences in a message' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), level: 3)
    log.message = '\u{3042}\xffA\x95'
    expect { log.save! }.not_to raise_error
    expect(log.message).to eq('\u{3042}<ff>A\<95>')
  end
    
            agent.memory = ''
        expect(agent.memory['foo']).to be_nil
        expect(agent.memory).to eq({})
    
            # This is the method called to 'prepare' the provisioner. This is called
        # before any actions are run by the action runner (see {Vagrant::Actions::Runner}).
        # This can be used to setup shared folders, forward ports, etc. Whatever is
        # necessary on a 'meta' level.
        #
        # No return value is expected.
        def prepare
        end
    
                  next env.machine(entry.name.to_sym, entry.provider.to_sym)
            end
    
            # This contains all the registered guest capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :guest_capabilities
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                # Don't set the value if it is the unset value, either.
                value = obj.instance_variable_get(key)
                result.instance_variable_set(key, value) if value != UNSET_VALUE
              end
            end
          end
    
    module Vagrant
  module Plugin
    module V2
      # This class maintains a list of all the registered plugins as well
      # as provides methods that allow querying all registered components of
      # those plugins as a single unit.
      class Manager
        attr_reader :registered
    
            # This should return an action callable for the given name.
        #
        # @param [Symbol] name Name of the action.
        # @return [Object] A callable action sequence object, whether it
        #   is a proc, object, etc.
        def action(name)
          nil
        end
    
          def self.default_generator_root
        File.dirname(__FILE__)
      end