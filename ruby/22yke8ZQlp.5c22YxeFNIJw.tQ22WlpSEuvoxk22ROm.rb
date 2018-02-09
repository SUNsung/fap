
        
            def log_http_get_file(url, cached = false)
      s = '  #{'CACHED ' if cached}GET #{url}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      def pod_prefix
    File.expand_path('../..', pod_bin)
  end
    
          def stack
        UI::ErrorReport.stack
      end
    
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

    
            private
    
    When /^(?:|I )press '([^']*)'$/ do |button|
  click_button(button)
end
    
        def assign_fingerprint
      if instance_respond_to?(:fingerprint)
        instance_write(:fingerprint, yield)
      end
    end
    
            def failure_message_when_negated
          'Attachment #{@attachment_name} should not be required'
        end
        alias negative_failure_message failure_message_when_negated
    
          expect('.border-color-explicit').to have_rule(rule)
    end
  end
    
          expect('.all-buttons-active').to have_ruleset(ruleset)
    end
  end
    
      context 'called with two sizes' do
    it 'applies to alternating sides' do
      rule = 'padding: 2px 3px'
    
    describe 'size' do
  before(:all) do
    ParserSupport.parse_file('library/size')
  end