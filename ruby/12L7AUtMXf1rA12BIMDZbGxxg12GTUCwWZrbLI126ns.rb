
        
        end

    
        Category.transaction do
      lounge.group_names = ['trust_level_3']
      unless lounge.save
        puts lounge.errors.full_messages
        raise 'Failed to set permissions on trust level 3 lounge category!'
      end
    
        context 'action launch' do
      let(:launch_context) do
        FastlaneCore::ActionLaunchContext.new(
          action_name: action_name,
          p_hash: p_hash,
          platform: 'ios',
          fastlane_client_language: fastlane_client_language
        )
      end
    
          it 'properly shell escapes its message' do
        tag = '2.0.0'
        message = 'message with 'quotes' (and parens)'
    
            inner_command = 'git describe --tags `git rev-list --tags --max-count=1`'
        pseudocommand = 'git log --pretty=\'%B\' #{inner_command.shellescape}...HEAD --no-merges'
        expect(result).to eq(pseudocommand)
      end
    
            keychain_path = File.expand_path(File.join('~', 'Library', 'Keychains', keychain))
        expected_command = 'security import #{cert_name} -k '#{keychain_path}' -P #{password} -T /usr/bin/codesign -T /usr/bin/security'
    
          it 'raises an exception when the default compile_commands.json is not present' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            oclint
          end').runner.execute(:test)
        end.to raise_error('Could not find json compilation database at path 'compile_commands.json'')
      end
    
          true
    end
    
          def changed?
        @changed
      end
    
      protected
    def after_resetting_password_path_for(resource)
      Devise.sign_in_after_reset_password ? after_sign_in_path_for(resource) : new_session_path(resource_name)
    end
    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
      get '/' => 'test#index'
end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env