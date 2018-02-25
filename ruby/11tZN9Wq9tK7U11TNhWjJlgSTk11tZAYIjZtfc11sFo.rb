    admin = Admin::WithSaveInCallback.create(valid_attributes.except(:username))
    assert !admin.pending_reconfirmation?
  end
    
      def translation_scope
    'devise.omniauth_callbacks'
  end
end

    
    group :test do
  gem 'omniauth-facebook'
  gem 'omniauth-openid'
  gem 'webrat', '0.7.3', require: false
  gem 'mocha', '~> 1.1', require: false
end
    
        users.all?(&:blank?)
  end
    
        # The path used after unlocking the resource
    def after_unlock_path_for(resource)
      new_session_path(resource)  if is_navigational_format?
    end
    
      def index
    if params[:agent_id]
      @agent = current_user.agents.find(params[:agent_id])
      @events = @agent.events.page(params[:page])
    else
      @events = current_user.events.preload(:agent).page(params[:page])
    end
    
        respond_to do |format|
      format.html { render layout: !request.xhr? }
      format.json { render json: @jobs }
    end
  end
    
      def destroy
    @services = current_user.services.find(params[:id])
    @services.destroy
    
             RUBY
                         else
                           <<-RUBY
  # Uncomment the next line if you're using Swift or would like to use dynamic frameworks
  # use_frameworks!
    
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

    
            # Runs the template configuration utilities.
        #
        # @return [void]
        #
        def print_info
          UI.puts '\nTo learn more about the template see `#{template_repo_url}`.'
          UI.puts 'To learn more about creating a new pod, see `#{CREATE_NEW_POD_INFO_URL}`.'
        end
    
          def self.options
        [
          ['--update', 'Run `pod repo update` before listing'],
          ['--stats',  'Show additional stats (like GitHub watchers and forks)'],
        ].concat(super)
      end
    
            def_node_matcher :redundant_regex?, <<-PATTERN
          {(send $!nil? {:match :=~} (regexp (str $#literal_at_end?) (regopt)))
           (send (regexp (str $#literal_at_end?) (regopt)) {:match :=~} $_)}
        PATTERN
    
                  add_offense(condition)
            end