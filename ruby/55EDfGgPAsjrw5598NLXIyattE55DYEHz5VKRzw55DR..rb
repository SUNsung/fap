
        
              command_return = ActionCommandReturn.new(
        return_value: action_return,
        return_value_type: action_class_ref.return_type,
        closure_argument_value: closure_argument_value
      )
      return command_return
    end
    
          it 'should not be fooled by 10 local code signing identities available' do
        allow(FastlaneCore::CertChecker).to receive(:wwdr_certificate_installed?).and_return(true)
        allow(FastlaneCore::CertChecker).to receive(:list_available_identities).and_return('     10 valid identities found\n')
        expect(FastlaneCore::UI).not_to(receive(:error))
    
            FastlaneCore::CommanderGenerator.new.generate(Cert::Options.available_options, command: c)
    
      before_action :set_account
  respond_to :txt
    
      before_action :require_user!
    
      Devise.omniauth_configs.each_key do |provider|
    provides_callback_for provider
  end
    
      def create
    @account = unfollow_attempt.try(:target_account)
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end
    
            if built_in_scm_name?
          load_built_in_scm
        else
          # Compatibility with existing 3.x third-party SCMs
          register_legacy_scm_hooks
          load_legacy_scm_by_name
        end
      end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
      it 'calls Hooks.commands_from' do
    expect(Tmuxinator::Hooks).to receive(:commands_from).
      with(kind_of(Tmuxinator::Project), hook_name).once
    project.send('hook_#{hook_name}')
  end
    
        context 'installed' do
      let(:version) { '2.4' }
      it { is_expected.to eq version.to_f }
    end
  end
    
      describe '.shell?' do
    context '$SHELL is set' do
      before do
        allow(ENV).to receive(:[]).with('SHELL') { 'vim' }
      end
    
        desc 'copy [EXISTING] [NEW]', COMMANDS[:copy]
    map 'c' => :copy
    map 'cp' => :copy
    
        context 'new project already exists' do
      before do
        allow(Thor::LineEditor).to receive_messages(readline: 'y')
      end