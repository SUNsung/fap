
        
            def did_show_message?
      file_name = '.did_show_opt_info'
    
            # From https://stackoverflow.com/a/4789702/445598
        # We do this to make the actual error message red and therefore more visible
        reraise_formatted!(e, e.message)
      end
    end
    
          it 'allows you to specify a prefix' do
        prefix = '16309-'
    
          it 'adds use-ssh flag to command if use_ssh is set to true' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              use_ssh: true
            )
          end').runner.execute(:test)
    
          it 'cannot have both path and pathspec parameters' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            git_add(path: 'myfile.txt', pathspec: '*.txt')
          end').runner.execute(:test)
        end.to raise_error(FastlaneCore::Interface::FastlaneError)
      end
    end
  end
end

    
        context 'passing command arguments to the system' do
      it 'passes a string as a string' do
        expect_command('git commit')
        Fastlane::Actions.sh('git commit')
      end
    
    # To avoid 'PR & Runs' for which tests don't pass, we want to make spec errors more visible
# The code below will run on Circle, parses the results in JSON and posts them to the PR as comment
containing_dir = ENV['CIRCLE_TEST_REPORTS'] || '.' # for local testing
file_path = File.join(containing_dir, 'rspec', 'fastlane-junit-results.xml')
    
    module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
          attr_reader :scope_name, :resource
    
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
    
        return qstring
  end
    
            private
    
                cipher = OpenSSL::Cipher.new('rc4')
            cipher.encrypt
            cipher.key = k3
            encrypted = cipher.update(data_encrypt) + cipher.final
    
              def self.decode(input)
            elem = self.new
            elem.decode(input)
          end
    
              # Encodes the pa_data field
          #
          # @return [String]
          def encode_pa_data
            elems = []
            pa_data.each do |data|
              elems << data.encode
            end
    
              # Decodes the value from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_value(input)
            input.value[0].value
          end
        end
      end
    end
  end
end
    
    FIRST     = -> l { LEFT[RIGHT[l]] }
IF        = -> b { b }
LEFT      = -> p { p[-> x { -> y { x } } ] }
RIGHT     = -> p { p[-> x { -> y { y } } ] }
IS_EMPTY  = LEFT
REST      = -> l { RIGHT[RIGHT[l]] }
    
            def self.options
          [[
            '--short', 'Only print the path relative to the cache root'
          ]].concat(super)
        end