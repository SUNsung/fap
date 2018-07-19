
        
        end

    
            command = [escaped_gradle_path, 'tasks', '--console=plain'].join(' ')
        output = Action.sh(command, print_command: false, print_command_output: false)
        output.split('\n').each do |line|
          if (result = line.match(/(\w+)\s\-\s([\w\s]+)/))
            self.tasks << GradleTask.new(title: result[1], description: result[2])
          end
        end
    
            if Devise.activerecord51?
          def postpone_email_change_until_confirmation_and_regenerate_confirmation_token
            @reconfirmation_required = true
            self.unconfirmed_email = self.email
            self.email = self.email_in_database
            self.confirmation_token = nil
            generate_confirmation_token
          end
        else
          def postpone_email_change_until_confirmation_and_regenerate_confirmation_token
            @reconfirmation_required = true
            self.unconfirmed_email = self.email
            self.email = self.email_was
            self.confirmation_token = nil
            generate_confirmation_token
          end
        end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
    def load_apps
  out, err, status = Open3.capture3('/usr/bin/osascript', '-e', 'tell application 'System Events' to get (name, bundle identifier, unix id) of every process')
  if status.exitstatus > 0
    puts err
    exit status.exitstatus
  end
  out = out.split(', ')
  one_third   = out.length / 3
  @app_names  = out.shift(one_third)
  @bundle_ids = out.shift(one_third)
  @unix_ids   = out.shift(one_third)
end