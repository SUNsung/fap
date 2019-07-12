      begin
        if xcode_outdated
          # We have to raise that error within this `begin` block to show a nice user error without a stack trace
          FastlaneCore::UI.user_error!('fastlane requires a minimum version of Xcode #{Fastlane::MINIMUM_XCODE_RELEASE}, please upgrade and make sure to use `sudo xcode-select -s /Applications/Xcode.app`')
        end
    
            expect(result).to \
          eq('carthage bootstrap TestDependency1 TestDependency2')
      end
    
          run!
    end
  end
end

    
        context 'only newlines' do
      let(:keywords) { 'One\nTwo\r\nThree\nFour Token\n' }
    
        class [[NAME_CLASS]] < Action
      def self.run(params)
        # fastlane will take care of reading in the parameter and fetching the environment variable:
        UI.message 'Parameter API Token: #{params[:api_token]}'
    
        def translation_scope
      'devise.unlocks'
    end
end

    
    MESSAGE
  end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
          private
    
            @email = headers[:to]
        headers
      end
    
          selected_modules = modules.map(&:to_sym).uniq.sort_by do |s|
        Devise::ALL.index(s) || -1  # follow Devise::ALL order
      end
    
            # Attempt to find a user by its email. If a record is found, send new
        # password instructions to it. If user is not found, returns a new user
        # with an email not found error.
        # Attributes must contain the user's email
        def send_reset_password_instructions(attributes={})
          recoverable = find_or_initialize_with_errors(reset_password_keys, attributes, :not_found)
          recoverable.send_reset_password_instructions if recoverable.persisted?
          recoverable
        end
    
        AIR_APPLICATION_INSTALLER =
      '/Applications/Utilities/Adobe AIR Application Installer.app/Contents/MacOS/Adobe AIR Application Installer'
    
      config.action_mailer.perform_caching = false
    
        def _project_root
      project.root if project.root?
    end
    
      factory :project_with_custom_name, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/sample.yml') }
    end
    
    shared_examples_for 'a project hook' do
  let(:project) { FactoryBot.build(:project) }
    
      def attributes_match
    expect(@actual).to have_attributes(@expected_attrs)
  end
    
      orig_stdout = $stdout
  orig_stderr = $stderr
    
      describe '#name_options' do
    context 'with a name' do
      let(:window_name) { 'editor' }
    
        def start(name = nil, *args)
      # project-config takes precedence over a named project in the case that
      # both are provided.
      if options['project-config']
        args.unshift name if name
        name = nil
      end