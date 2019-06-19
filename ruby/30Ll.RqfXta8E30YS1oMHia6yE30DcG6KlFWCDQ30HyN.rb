
        
            pkg_origin = attributes[:freebsd_origin]
    if pkg_origin == 'fpm/<name>'  # fill in default
      pkg_origin = 'fpm/#{name}'
    end
    
        self.conflicts = control['conflict'] || self.conflicts
    
      # Where we keep metadata and post install scripts and such
  def fpm_meta_path
    @fpm_meta_path ||= begin
                         path = File.join(staging_path, '.fpm')
                         FileUtils.mkdir_p(path)
                         path
                       end
  end
end

    
        def window_index
      tab.index + project.base_index
    end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
      it 'calls Hooks.commands_from' do
    expect(Tmuxinator::Hooks).to receive(:commands_from).
      with(kind_of(Tmuxinator::Project), hook_name).once
    project.send('hook_#{hook_name}')
  end
    
      describe '#tmux_command' do
    context 'tmux_command specified' do
      before do
        project.yaml['tmux_command'] = 'byobu'
      end
    
    # Copied from minitest.
def capture_io
  require 'stringio'