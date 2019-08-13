
        
            assert_kind_of Integer, m1.my_house_population
    assert_equal 3, m1.my_house_population
    
        def test_up_only
      InvertibleMigration.new.migrate(:up)
      horse1 = Horse.create
      # populates existing horses with oldie = 1 but new ones have default 0
      UpOnlyMigration.new.migrate(:up)
      Horse.reset_column_information
      horse1.reload
      horse2 = Horse.create
    
            enable = @recorder.inverse_of :remove_foreign_key, [:dogs, to_table: :people, column: :owner_id]
        assert_equal [:add_foreign_key, [:dogs, :people, column: :owner_id]], enable
      end
    
        assert_not_equal previously_owner_happy_at, pet.owner.happy_at
  end
    
          class ClassInheritance < FormulaCop
        def audit_formula(_node, class_node, parent_class_node, _body_node)
          begin_pos = start_column(parent_class_node)
          end_pos = end_column(class_node)
          return unless begin_pos-end_pos != 3
    
    require 'rubocops/extend/formula'
    
      private
    
          expect(subject.deps.first.name).to eq('foo')
      expect(subject.deps.first.tags).to include(:head)
    end
    
    require 'requirements/java_requirement'
    
          # For OS::Mac::Version compatability
      def requires_nehalem_cpu?
        Hardware.oldest_cpu(self) == :nehalem
      end
      # https://en.wikipedia.org/wiki/Nehalem_(microarchitecture)
      # Ensure any extra methods are also added to version/null.rb
      alias requires_sse4? requires_nehalem_cpu?
      alias requires_sse41? requires_nehalem_cpu?
      alias requires_sse42? requires_nehalem_cpu?
      alias requires_popcnt? requires_nehalem_cpu?
    end
  end
end

    
        def generate_temporary_path
      Stud::Temporary.pathname
    end
    
        desc 'Generate a valid ssh-config'
    task :ssh_config do
      require 'json'
      # Loop until the Vagrant box finishes SSH bootstrap
      raw_ssh_config = Stud.try(50.times, LogStash::CommandExecutor::CommandError) do
          LogStash::VagrantHelpers.fetch_config.stdout.split('\n');
      end
      parsed_ssh_config = LogStash::VagrantHelpers.parse(raw_ssh_config)
      File.write('.vm_ssh_config', parsed_ssh_config.to_json)
    end
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end
