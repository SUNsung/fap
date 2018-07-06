
        
                key.revoke!
      end
    end
  end
end

    
            expect(result).to eq('/usr/local/bin/cloc --exclude-dir=test1,test2,build --by-file --xml  --out=build/cloc.xml')
      end
    
        context 'Mercurial repository' do
      before do
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git?).and_return(false)
        expect(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_hg?).and_return(true)
      end
    
            # Checks if the confirmation for the user is within the limit time.
        # We do this by calculating if the difference between today and the
        # confirmation sent date does not exceed the confirm in time configured.
        # allow_unconfirmed_access_for is a model configuration, must always be an integer value.
        #
        # Example:
        #
        #   # allow_unconfirmed_access_for = 1.day and confirmation_sent_at = today
        #   confirmation_period_valid?   # returns true
        #
        #   # allow_unconfirmed_access_for = 5.days and confirmation_sent_at = 4.days.ago
        #   confirmation_period_valid?   # returns true
        #
        #   # allow_unconfirmed_access_for = 5.days and confirmation_sent_at = 5.days.ago
        #   confirmation_period_valid?   # returns false
        #
        #   # allow_unconfirmed_access_for = 0.days
        #   confirmation_period_valid?   # will always return false
        #
        #   # allow_unconfirmed_access_for = nil
        #   confirmation_period_valid?   # will always return true
        #
        def confirmation_period_valid?
          self.class.allow_unconfirmed_access_for.nil? || (confirmation_sent_at && confirmation_sent_at.utc >= self.class.allow_unconfirmed_access_for.ago)
        end
    
      def sign_in_params
    devise_parameter_sanitizer.sanitize(:sign_in)
  end
    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
          protected
    
    # For compatibility with jquery-rails (and other engines that need action_view) in pro
require 'action_controller/railtie'
require 'action_view/railtie'
    
    unless ENV['BUNDLE_GEMFILE']
  require 'pathname'
    
              s[:pass] = ''
          return
        end
    
    classNames = [ 'HelloWorld1', 'HelloWorld2' ]
    
    #keytool = clsKeyTool
#jarsigner = clsJarSigner