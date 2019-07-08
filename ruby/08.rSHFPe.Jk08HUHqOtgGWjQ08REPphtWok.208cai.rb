
        
            if rbenv_prefix = prefix_from_bin('rbenv')
      prefixes << rbenv_prefix
    end
    
        def tmux_layout_command
      '#{project.tmux} select-layout -t #{tmux_window_target} #{layout}'
    end
    
      chain :with_commands do |*expected|
    @commands = expected
  end
  alias_method :and_commands, :with_commands
    
          # Sorted list of all .yml files, including duplicates
      def configs
        directories.map do |directory|
          Dir['#{directory}/**/*.yml'].map do |path|
            path.gsub('#{directory}/', '').gsub('.yml', '')
          end
        end.flatten.sort
      end
    
        context 'only $XDG_CONFIG_HOME/tmuxinator exists' do
      it 'is #xdg' do
        allow(described_class).to receive(:environment?).and_return false
        allow(described_class).to receive(:xdg?).and_return true
        allow(described_class).to receive(:home?).and_return false
    
      before do
    allow(project).to receive_messages(
      tmux: 'tmux',
      name: 'test',
      base_index: 1,
      pane_base_index: 0,
      root: '/project/tmuxinator',
      root?: true
    )
  end
    
      describe '#local' do
    before do
      allow(Tmuxinator::Config).to receive_messages(validate: project)
      allow(Tmuxinator::Config).to receive_messages(version: 1.9)
      allow(Kernel).to receive(:exec)
    end