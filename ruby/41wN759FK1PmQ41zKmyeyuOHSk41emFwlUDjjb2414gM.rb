
        
                if Devise.activerecord51?
          def clear_reset_password_token?
            encrypted_password_changed = respond_to?(:will_save_change_to_encrypted_password?) && will_save_change_to_encrypted_password?
            authentication_keys_changed = self.class.authentication_keys.any? do |attribute|
              respond_to?('will_save_change_to_#{attribute}?') && send('will_save_change_to_#{attribute}?')
            end
    
    module Devise
  module Models
    # Rememberable manages generating and clearing token for remembering the user
    # from a saved cookie. Rememberable also has utility methods for dealing
    # with serializing the user into the cookie and back from the cookie, trying
    # to lookup the record based on the saved information.
    # You probably wouldn't use rememberable methods directly, they are used
    # mostly internally for handling the remember token.
    #
    # == Options
    #
    # Rememberable adds the following options in devise_for:
    #
    #   * +remember_for+: the time you want the user will be remembered without
    #     asking for credentials. After this time the user will be blocked and
    #     will have to enter their credentials again. This configuration is also
    #     used to calculate the expires time for the cookie created to remember
    #     the user. By default remember_for is 2.weeks.
    #
    #   * +extend_remember_period+: if true, extends the user's remember period
    #     when remembered via cookie. False by default.
    #
    #   * +rememberable_options+: configuration options passed to the created cookie.
    #
    # == Examples
    #
    #   User.find(1).remember_me!  # regenerating the token
    #   User.find(1).forget_me!    # clearing the token
    #
    #   # generating info to put into cookies
    #   User.serialize_into_cookie(user)
    #
    #   # lookup the user based on the incoming cookie information
    #   User.serialize_from_cookie(cookie_string)
    module Rememberable
      extend ActiveSupport::Concern
    
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

    
            def run
          query = @use_regex ? @query : Regexp.escape(@query)
          filepath = if @show_all
                       specs = get_path_of_spec(query, @show_all).split(/\n/)
                       index = UI.choose_from_array(specs, 'Which spec would you like to print [1-#{specs.count}]? ')
                       specs[index]
                     else
                       get_path_of_spec(query)
                     end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
          it 'gets the custom tmux command' do
        expect(project.tmux_command).to eq 'byobu'
      end
    end
    
          it 'should load and validate the project' do
        expect(described_class).to receive_messages(directory: fixtures_dir)
        expect(described_class.validate(name: 'sample')).to \
          be_a Tmuxinator::Project
      end
    end
    
          it 'returns false' do
        expect(described_class.shell?).to be_falsey
      end
    end
  end
end

    
            content = Erubis::Eruby.new(raw_content).result(binding)
        YAML.safe_load(content, [], [], true)
      rescue SyntaxError, StandardError => error
        raise 'Failed to parse config file: #{error.message}'
      end