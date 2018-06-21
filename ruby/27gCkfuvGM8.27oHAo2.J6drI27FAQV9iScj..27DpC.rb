
        
                    raise SystemExit unless process.success?
          end
        end
      end
    end
  end
end

    
          # Run a certain action
      def trigger(task: nil, flags: nil, serial: nil, print_command: true, print_command_output: true)
        android_serial = (serial != '') ? 'ANDROID_SERIAL=#{serial}' : nil
        command = [android_serial, escaped_gradle_path, task, flags].compact.join(' ')
        Action.sh(command, print_command: print_command, print_command_output: print_command_output)
      end
    
            expect(result).to eq('hg parent --template '{node|short}'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('hg parent --template '{node|short}'')
      end
    
      def validate_email_options
    errors.add(:base, 'subject and expected_receive_period_in_days are required') unless options['subject'].present? && options['expected_receive_period_in_days'].present?
    
          _form_configurable_fields[name] = options
    end
    
      def tumblr_consumer_secret
    ENV['TUMBLR_OAUTH_SECRET']
  end
    
      def new
    @user_credential = current_user.user_credentials.build
    
          origin = caller[1]
      if origin =~ /rubygems\/custom_require/
        origin = caller[3]
        if origin.nil?
          STDERR.puts 'Unknown origin'
          STDERR.puts caller.join('\n')
        end
      end
      origin = origin.gsub(/:[0-9]+:in .*/, '') if origin