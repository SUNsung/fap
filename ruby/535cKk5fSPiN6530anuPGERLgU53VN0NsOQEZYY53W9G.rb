
        
              context 'rvm option is present' do
        before do
          allow(project).to receive_messages(rbenv?: false)
          allow(project).to \
            receive_message_chain(:yaml, :[]).and_return('ruby-2.0.0-p247')
        end
    
          def template
        asset_path 'template.erb'
      end
    
        context '$EDITOR is not set' do
      before do
        allow(ENV).to receive(:[]).with('EDITOR') { nil }
      end
    
          it 'returns three panes' do
        expect(window.panes).to all be_a_pane.with(
          project: project, tab: window
        )
    
        package_name 'tmuxinator' \
      unless Gem::Version.create(Thor::VERSION) < Gem::Version.create('0.18')