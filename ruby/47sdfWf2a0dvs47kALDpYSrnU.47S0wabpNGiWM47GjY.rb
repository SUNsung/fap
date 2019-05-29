
        
              def index
        render template: ActionView::Template::Text.new('Hello nil!')
      end
    end
    
      def status_finder
    StatusFinder.new(params[:url])
  end
    
        render_empty
  end
    
      def export_data
    raise 'Override in controller'
  end
    
      def preferred_locale
    http_accept_language.preferred_language_from(available_locales)
  end
    
        %w[iOS macOS].each do |platform|
        abstract_target '#{platform} Pods' do
            project '#{platform} Modules.xcodeproj'
    
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
