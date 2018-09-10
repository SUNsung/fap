
        
              # Creates a text field of type 'date'.
      #
      # ==== Options
      # * Accepts the same options as text_field_tag.
      #
      # ==== Examples
      #   date_field_tag 'name'
      #   # => <input id='name' name='name' type='date' />
      #
      #   date_field_tag 'date', '01/01/2014'
      #   # => <input id='date' name='date' type='date' value='01/01/2014' />
      #
      #   date_field_tag 'date', nil, class: 'special_input'
      #   # => <input class='special_input' id='date' name='date' type='date' />
      #
      #   date_field_tag 'date', '01/01/2014', class: 'special_input', disabled: true
      #   # => <input disabled='disabled' class='special_input' id='date' name='date' type='date' value='01/01/2014' />
      def date_field_tag(name, value = nil, options = {})
        text_field_tag(name, value, options.merge(type: :date))
      end
    
        EMPTY = ''
    def from_rails_root(string) # :doc:
      string = string.sub(rails_root, EMPTY)
      string.sub!(VIEWS_PATTERN, EMPTY)
      string
    end
    
          super(default_locale)
    end
  end
end

    
          def typecast(paths)
        paths.map do |path|
          case path
          when Pathname, String
            OptimizedFileSystemResolver.new path.to_s
          else
            path
          end
        end
      end
  end
end

    
      protected
    
    Rails.application.initialize!
    
          # Stores the provided location to redirect the user after signing in.
      # Useful in combination with the `stored_location_for` helper.
      #
      # Example:
      #
      #   store_location_for(:user, dashboard_path)
      #   redirect_to user_facebook_omniauth_authorize_path
      #
      def store_location_for(resource_or_scope, location)
        session_key = stored_location_key_for(resource_or_scope)
        
        path = extract_path_from_location(location)
        session[session_key] = path if path
      end
    
        def skip_format?
      %w(html */*).include? request_format.to_s
    end
    
    module Vagrant
  # This class handles guest-OS specific interactions with a machine.
  # It is primarily responsible for detecting the proper guest OS
  # implementation and then delegating capabilities.
  #
  # Vagrant has many tasks which require specific guest OS knowledge.
  # These are implemented using a guest/capability system. Various plugins
  # register as 'guests' which determine the underlying OS of the system.
  # Then, 'guest capabilities' register themselves for a specific OS (one
  # or more), and these capabilities are called.
  #
  # Example capabilities might be 'mount_virtualbox_shared_folder' or
  # 'configure_networks'.
  #
  # This system allows for maximum flexibility and pluginability for doing
  # guest OS specific operations.
  class Guest
    include CapabilityHost
    
              result
        end
    
            # Execute a command on the remote machine. The exact semantics
        # of this method are up to the implementor, but in general the
        # users of this class will expect this to be a shell.
        #
        # This method gives you no way to write data back to the remote
        # machine, so only execute commands that don't expect input.
        #
        # @param [String] command Command to execute.
        # @yield [type, data] Realtime output of the command being executed.
        # @yieldparam [String] type Type of the output. This can be
        #   `:stdout`, `:stderr`, etc. The exact types are up to the
        #   implementor.
        # @yieldparam [String] data Data for the given output.
        # @return [Integer] Exit code of the command.
        def execute(command, opts=nil)
        end
    
      # Sets a value in the underlying database (and creates it if necessary).
  def set(key, value)
    db[key] = value
  end
    
          def set_constraints(name, depends_on:, required_for:)
        secondary = option_to_name(name)
        unless required_for.nil?
          primary = option_to_name(required_for)
          @constraints << [primary, secondary, :mandatory]
        end
    
        # Find commands in Homebrew/cmd
    puts 'Built-in commands'
    puts Formatter.columns(internal_commands.sort)
    
        if args.pinned? || args.versions?
      filtered_list
    elsif ARGV.named.empty?
      if args.full_name?
        full_names = Formula.installed.map(&:full_name).sort(&tap_and_name_comparison)
        return if full_names.empty?
        puts Formatter.columns(full_names)
      else
        ENV['CLICOLOR'] = nil
        exec 'ls', *ARGV.options_only << HOMEBREW_CELLAR
      end
    elsif args.verbose? || !$stdout.tty?
      exec 'find', *ARGV.kegs.map(&:to_s) + %w[-not -type d -print]
    else
      ARGV.kegs.each { |keg| PrettyListing.new keg }
    end
  end
    
    # Thanks in announcement ===============================================
    
      task :index do
    doc = File.read('README.md')
    file = 'doc/rack-protection-readme.md'
    Dir.mkdir 'doc' unless File.directory? 'doc'
    puts 'writing #{file}'
    File.open(file, 'w') { |f| f << doc }
  end