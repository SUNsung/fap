
        
          describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
      describe '#get_pane_base_index' do
    it 'extracts pane-base-index from the global tmux window options' do
      allow_any_instance_of(Kernel).to receive(:`).
        with(Regexp.new('tmux.+ show-window-option -g pane-base-index')).
        and_return('pane-base-index 3\n')
    
        def send_pane_command(cmd, window_index, _pane_index)
      send_keys(cmd, window_index)
    end