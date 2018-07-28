
        
              def get_type
        return 'Reference' if base_url.path == '/spec/'
    
        options[:attribution] = <<-HTML
      &copy; 2009&ndash;2018 Jeremy Ashkenas<br>
      Licensed under the MIT License.
    HTML
    
          options[:only_patterns] = [/\Ad3[\-\w]+\z/, /\Ad3\/blob\/master\/changes\.md\z/i]
      options[:skip_patterns] = [/3\.x-api-reference/]
    
        html_filters.push 'tensorflow/entries', 'tensorflow/clean_html'
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        def initialize
      @pages = {}
    end
    
      GEMFILE_EXTENSIONS.each do |extension|
    extension_pathname = root.join('Gemfile#{extension}')
    
        end
    
      def parse(pkt)
    # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 21 and pkt.tcp_dport != 21)
    s = find_session((pkt.tcp_sport == 21) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'ftp'
    
    classNames = [ 'HelloWorld1', 'HelloWorld2' ]
    
    
signer._invoke('KeyToolMSF','[Ljava.lang.String;',keytoolOpts)
    
    unless STDIN.tty?
	p = ::Parser.new('')
	p.parse
	p.dump_all
else
	print 'Tested with:\n'
	print '\tGNU objdump 2.9-aix51-020209\n'
	print '\tGNU objdump 2.15.92.0.2 20040927\n'
	print 'Usage: objdump -dM suffix <file(s)> | ruby objdumptoc.rb\n'
end

    
            def run
          if @pod_name.nil?
            # Note: at that point, @wipe_all is always true (thanks to `validate!`)
            # Remove all
            clear_cache
          else
            # Remove only cache for this pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            elsif cache_descriptors.count > 1 && !@wipe_all
              # Ask which to remove
              choices = cache_descriptors.map { |c| '#{@pod_name} v#{c[:version]} (#{pod_type(c)})' }
              index = UI.choose_from_array(choices, 'Which pod cache do you want to remove?')
              remove_caches([cache_descriptors[index]])
            else
              # Remove all found cache of this pod
              remove_caches(cache_descriptors)
            end
          end
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
