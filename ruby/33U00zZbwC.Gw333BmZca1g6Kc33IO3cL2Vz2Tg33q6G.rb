
        
            class Agents::DotBar < Agent
      cannot_be_scheduled!
    
        it 'in the future' do
      expect(relative_distance_of_time_in_words(Time.now+5.minutes)).to eq('in 5m')
    end
  end
end

    
      after :each do
    @scheduler.shutdown(:wait)
    
      describe 'path request must exist' do
    it 'should check that validation added if path does not exist' do
      opts = @opts.tap { |o| o.delete('path') }
      @checker = Agents::AftershipAgent.new(:name => 'tectonic', :options => opts)
      @checker.user = users(:bob)
      expect(@checker.save).to eq false
      expect(@checker.errors.full_messages.first).to eq('You need to specify a path request')
    end
  end
    
      describe 'validating' do
    before do
      expect(@checker).to be_valid
    end
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
          def parse_uri(location)
        location && URI.parse(location)
      rescue URI::InvalidURIError
        nil
      end
    
        private
    
        def self.check_fields!(klass)
      failed_attributes = []
      instance = klass.new
    
        # Recoverable takes care of resetting the user password and send reset instructions.
    #
    # ==Options
    #
    # Recoverable adds the following options to devise_for:
    #
    #   * +reset_password_keys+: the keys you want to use when recovering the password for an account
    #   * +reset_password_within+: the time period within which the password must be reset or the token expires.
    #   * +sign_in_after_reset_password+: whether or not to sign in the user automatically after a password reset.
    #
    # == Examples
    #
    #   # resets the user password and save the record, true if valid passwords are given, otherwise false
    #   User.find(1).reset_password('password123', 'password123')
    #
    #   # creates a new token and send it with instructions about how to reset the password
    #   User.find(1).send_reset_password_instructions
    #
    module Recoverable
      extend ActiveSupport::Concern
    
            # This contains all the guests and their parents.
        #
        # @return [Registry<Symbol, Array<Class, Symbol>>]
        attr_reader :guests
    
              result
        end
    
              # Otherwise set the value
          data[key] = value
        end
      end
    end
  end
end

    
            # This should return a hash of information that explains how to
        # SSH into the machine. If the machine is not at a point where
        # SSH is even possible, then `nil` should be returned.
        #
        # The general structure of this returned hash should be the
        # following:
        #
        #     {
        #       host: '1.2.3.4',
        #       port: '22',
        #       username: 'mitchellh',
        #       private_key_path: '/path/to/my/key'
        #     }
        #
        # **Note:** Vagrant only supports private key based authentication,
        # mainly for the reason that there is no easy way to exec into an
        # `ssh` prompt with a password, whereas we can pass a private key
        # via commandline.
        #
        # @return [Hash] SSH information. For the structure of this hash
        #   read the accompanying documentation for this method.
        def ssh_info
          nil
        end