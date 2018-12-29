
        
        module ActionView
  module Helpers
    module Tags # :nodoc:
      class Base # :nodoc:
        include Helpers::ActiveModelInstanceTag, Helpers::TagHelper, Helpers::FormTagHelper
        include FormOptionsHelper
    
              def render_component(builder)
            builder.radio_button + builder.label
          end
      end
    end
  end
end

    
              add_default_name_and_id_for_value(tag_value, name_and_id)
          options.delete('index')
          options.delete('namespace')
          options['for'] = name_and_id['id'] unless options.key?('for')
    
        def exists?(path, prefixes, *args)
      find_all(path, prefixes, *args).any?
    end
    
        keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
      # True if a {Formula} is being built with {Formula.stable} instead of {Formula.devel} or {Formula.head}. This is the default.
  # <pre>args << '--some-beta' if build.devel?</pre>
  def stable?
    !(head? || devel?)
  end
    
      def find_internal_commands(directory)
    directory.children.reduce([]) do |cmds, f|
      cmds << f.basename.to_s.sub(/\.(?:rb|sh)$/, '') if f.file?
      cmds
    end
  end
end

    
        select_agent_type('Trigger Agent')
    fill_in(:agent_name, with: 'Test Trigger Agent')
    click_on('Toggle View')
    
    describe DefaultScenarioImporter do
  let(:user) { users(:bob) }
  describe '.import' do
    it 'imports a set of agents to get the user going when they are first created' do
      mock(DefaultScenarioImporter).seed(is_a(User))
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      DefaultScenarioImporter.import(user)
    end
    
        @agent1 = Agents::SchedulerAgent.new(name: 'Scheduler 1', options: { action: 'run', schedule: '*/1 * * * * *' }).tap { |a|
      a.user = users(:bob)
      a.save!
    }
    @agent2 = Agents::SchedulerAgent.new(name: 'Scheduler 2', options: { action: 'run', schedule: '*/1 * * * * *' }).tap { |a|
      a.user = users(:bob)
      a.save!
    }
  end
    
        it 'updates Agents' last_error_log_at when an error is logged' do
      AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 3, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at).to be_nil
    
            @agent.trigger_web_request(request)
        expect(@agent.reload.memory['last_request']).to eq([ { 'some_param' => 'some_value' }, 'post', 'text/html' ])
        expect(@agent.last_web_request_at.to_i).to be_within(1).of(Time.now.to_i)
      end
    end
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
      prepend Compat
end
