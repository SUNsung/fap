
        
              xcode_outdated = false
      begin
        unless FastlaneCore::Helper.xcode_at_least?(Fastlane::MINIMUM_XCODE_RELEASE)
          xcode_outdated = true
        end
      rescue
        # We don't care about exceptions here
        # We'll land here if the user doesn't have Xcode at all for example
        # which is fine for someone who uses fastlane just for Android project
        # What we *do* care about is when someone links an old version of Xcode
      end
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --docset-atom-filename \'DocSet atom feed filename\' --exit-threshold \'2\' input/dir')
      end
    
            expect(result).to eq('carthage bootstrap --platform Mac')
      end
    
          it 'works given the path to compile_commands.json' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json'
            )
          end').runner.execute(:test)
    
                result = Fastlane::FastFile.new.parse('lane :test do
              swiftlint(ignore_exit_status: true)
            end').runner.execute(:test)
          end
        end
    
          # We need to explicity test against Fastlane::Boolean, TrueClass/FalseClass
      if value.class != FalseClass && value.class != TrueClass
        UI.user_error!(''#{self.key}' value must be either `true` or `false`! Found #{value.class} instead.')
      end
    end
    
        str = str.dup
    
    # remove all double quotes completely
def simulate_normal_shell_unwrapping(string)
  string.gsub!(''', '')
  regex = /^(')(\S*)(')$/
  unless string.to_s.match(regex).nil?
    string = string.to_s.match(regex)[2] # get only part in quotes
  end
  return string
end
    
    # The * turns the array into a parameter list
# This is using the form of exec which takes a variable parameter list, e.g. `exec(command, param1, param2, ...)`
# We need to use that, because otherwise invocations like
# `spaceauth -u user@fastlane.tools` would recognize '-u user@fastlane.tools' as a single parameter and throw errors
exec(*exec_arr)

    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
    require 'rack/test'
require 'action_controller/railtie'
require 'active_record'
require 'devise/rails/routes'
require 'devise/rails/warden_compat'
    
          # Sign in a user bypassing the warden callbacks and stores the user
      # straight in session. This option is useful in cases the user is already
      # signed in, but we want to refresh the credentials in session.
      #
      # Examples:
      #
      #   bypass_sign_in @user, scope: :user
      #   bypass_sign_in @user
      def bypass_sign_in(resource, scope: nil)
        scope ||= Devise::Mapping.find_scope!(resource)
        expire_data_after_sign_in!
        warden.session_serializer.store(resource, scope)
      end
    
          # Resets reset password token and send reset password instructions by email.
      # Returns the token sent in the e-mail.
      def send_reset_password_instructions
        token = set_reset_password_token
        send_reset_password_instructions_notification(token)
    
          resources :taxons, only: [:index]
    
            def find_payment
          @payment = @order.payments.find_by!(number: params[:id])
        end
    
    module Sidekiq
  module Generators # :nodoc:
    class WorkerGenerator < ::Rails::Generators::NamedBase # :nodoc:
      desc 'This generator creates a Sidekiq Worker in app/workers and a corresponding test'
    
        def match(request_method, path)
      case matcher
      when String
        {} if path == matcher
      else
        if path_match = path.match(matcher)
          Hash[path_match.names.map(&:to_sym).zip(path_match.captures)]
        end
      end
    end
  end
end
