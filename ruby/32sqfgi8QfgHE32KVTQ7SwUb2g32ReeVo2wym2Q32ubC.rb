
        
                def execute_repl_command(repl_command)
          unless repl_command == '\n'
            repl_commands = repl_command.split
            subcommand = repl_commands.shift.capitalize
            arguments = repl_commands
            subcommand_class = Pod::Command::IPC.const_get(subcommand)
            subcommand_class.new(CLAide::ARGV.new(arguments)).run
            signal_end_of_output
          end
        end
      end
    end
  end
end

    
          def initialize(argv)
        @update = argv.flag?('update')
        @stats  = argv.flag?('stats')
        super
      end
    
      context 'called with two styles' do
    it 'applies to alternating sides' do
      rule = 'border-style: dotted dashed'
    
          expect('.margin-explicit').to have_rule(rule)
    end
  end
    
      context 'called with argument (2)' do
    it 'outputs the second value from the default scale' do
      expect('.two-base-one').to have_rule('font-size: 1.5625em')
    end
  end
    
          expect('.padding-alternate').to have_rule(rule)
    end
  end
    
      context 'called with three sizes' do
    it 'applies second width to left and right' do
      ruleset = 'position: relative; ' +
                'top: 4px; ' +
                'right: 5px; ' +
                'bottom: 6px; ' +
                'left: 5px;'