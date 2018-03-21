
        
            SPLIT_INTS = /(?<=\d)\.(?=[\s\d])/.freeze
    
        def ==(other)
      other.is_a?(self.class) && filters == other.filters
    end
    
            css('h2:not([id]) a[id]:not([href])').each do |node|
          node.parent['id'] = node['id']
          node.before(node.children).remove
        end
    
              css('##{dom_id}-methods ~ h4 code').each do |node|
            next unless name = node.content[/\('(\w+)'\)/, 1]
            id = node.parent['id'] = '#{dom_id}-#{name.parameterize}-method'
            name.prepend '#{dom_id.singularize.titleize}: '
            name << ' (method)'
            entries << [name, id]
          end
        end
    
      def self.wakeup_dying_sleeping_thread(kill_method_name=:kill)
    t = ThreadSpecs.dying_thread_ensures(kill_method_name) { yield }
    Thread.pass while t.status and t.status != 'sleep'
    t.wakeup
    t.join
  end
    
            self.description = <<-DESC
          Remove the cache for a given pod, or clear the cache completely.
    
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

    
          def stages
        names = Dir[stage_definitions].map { |f| File.basename(f, '.rb') }
        assert_valid_stage_names(names)
        names
      end