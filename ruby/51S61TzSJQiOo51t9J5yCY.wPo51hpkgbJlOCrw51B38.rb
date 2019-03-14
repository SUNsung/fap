
        
              def perform(yml)
        (target, method_name, args) = YAML.load(yml)
        msg = target.public_send(method_name, *args)
        # The email method can return nil, which causes ActionMailer to return
        # an undeliverable empty message.
        if msg
          deliver(msg)
        else
          raise '#{target.name}##{method_name} returned an undeliverable mail object'
        end
      end
    
            begin
          File.open(fp.path, 'a') { |tmpfp| fp.reopen(tmpfp) }
          fp.sync = true
          nr += 1
        rescue IOError, Errno::EBADF
          # not much we can do...
        end
      end
      nr
    rescue RuntimeError => ex
      # RuntimeError: ObjectSpace is disabled; each_object will only work with Class, pass -X+O to enable
      puts 'Unable to reopen logs: #{ex.message}'
    end
    
        # Add any facets or actuators that are needed.
    # TODO(jcraig): add manpage actuator to enable install wo/ man pages
    
        scripts[:after_install] = template(File.join('pleaserun', 'scripts', 'after-install.sh')).result(binding)
    scripts[:before_remove] = template(File.join('pleaserun', 'scripts', 'before-remove.sh')).result(binding)
  end # def input
    
        # If this is a hard-link, there's no metadata to copy.
    # If this is a symlink, what it points to hasn't been copied yet.
    return if source_stat.ino == dest_stat.ino || dest_stat.symlink?
    
      failure_message do |actual|
    return 'Expected #{actual} to be a Tmuxinator::Pane' unless is_pane
    
        def self.parse_settings(args)
      settings = args.select { |x| x.match(/.*=.*/) }
      args.reject! { |x| x.match(/.*=.*/) }
    
          # $TMUXINATOR_CONFIG (and create directory) or ''.
      def environment
        environment = ENV['TMUXINATOR_CONFIG']
        return '' if environment.to_s.empty? # variable is unset (nil) or blank
        FileUtils::mkdir_p(environment) unless File.directory?(environment)
        environment
      end
    
        let(:tmux_part) { project.tmux }
  end
    
        no_commands do
      def new_project(name)
        project_file = find_project_file(name, options[:local])
        Kernel.system('$EDITOR #{project_file}') || doctor
      end