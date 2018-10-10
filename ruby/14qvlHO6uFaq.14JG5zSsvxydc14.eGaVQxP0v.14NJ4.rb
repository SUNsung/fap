
        
                session.action_launched(launch_context: launch_context)
      end
    end
  end
end

    
          it 'allows you to sign the tag using the default e-mail address's key.' do
        tag = '2.0.0'
        message = 'message'
    
          it 'Accepts string value for :between' do
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(between: 'abcd,1234')
        end').runner.execute(:test)
    
          it 'handles extension and extensions parameters correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{rb,m,h}')
      end
    
            context 'when slather version is 2.4.1' do
          let(:version) { '2.4.1' }
          it 'pass the validation' do
            expect(action.validate_params!(param)).to be_truthy
          end
        end
      end
    
          if data_type == Array
        return value.split(',') if value.kind_of?(String)
      elsif data_type == Integer
        return value.to_i if value.to_i.to_s == value.to_s
      elsif data_type == Float
        return value.to_f if value.to_f.to_s == value.to_s
      elsif allow_shell_conversion
        return value.shelljoin if value.kind_of?(Array)
        return value.map { |k, v| '#{k.to_s.shellescape}=#{v.shellescape}' }.join(' ') if value.kind_of?(Hash)
      elsif data_type != String
        # Special treatment if the user specified true, false or YES, NO
        # There is no boolean type, so we just do it here
        if %w(YES yes true TRUE).include?(value)
          return true
        elsif %w(NO no false FALSE).include?(value)
          return false
        end
      end
    
            expect(Open3).to receive(:capture3).with(cmd).and_return('')
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
        it 'returns an active nav link' do
      stub(self).current_page?('/things') { true }
      nav = nav_link('Things', '/things')
      expect(nav).to be_html_safe
      a = Nokogiri(nav).at('li.active > a[href='/things']')
      expect(a).to be_a Nokogiri::XML::Element
      expect(a.text.strip).to eq('Things')
    end
    
            # Fix the order of receivers
        @agents.each do |agent|
          stub.proxy(agent).receivers { |orig| orig.order(:id) }
        end
      end
    
            subject.file = StringIO.new(invalid_data)
        expect(subject).not_to be_valid
        expect(subject.errors[:base]).to include('The provided data does not appear to be a valid Scenario.')
      end
    
        it 'cleans up old logs when there are more than log_length' do
      stub(AgentLog).log_length { 4 }
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 1')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 2')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 3')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 4')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 4')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 1')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 5')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 5')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 2')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 6')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 6')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 3')
    end
    
          # The main accessor for the warden proxy instance
      def warden
        request.env['warden'] or raise MissingWarden
      end
    
          # Stores the provided location to redirect the user after signing in.
      # Useful in combination with the `stored_location_for` helper.
      #
      # Example:
      #
      #   store_location_for(:user, dashboard_path)
      #   redirect_to user_facebook_omniauth_authorize_path
      #
      def store_location_for(resource_or_scope, location)
        session_key = stored_location_key_for(resource_or_scope)
        
        path = extract_path_from_location(location)
        session[session_key] = path if path
      end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
      uninstall_preflight do
    system_command '#{HOMEBREW_PREFIX}/bin/brew', args: ['cask', 'uninstall', 'adobe-photoshop-lightroom600']
  end
    
          NO_ARG_DIRECTIVES = %i(block_all_mixed_content disown_opener
                             upgrade_insecure_requests).freeze
    
    # Disable the metadata feature
$METADATA = false
    
    #############################################################################
#
# Custom tasks (add your own tasks here)
#
#############################################################################
    
    # external
require 'github/markup'
require 'sanitize'