
        
          s.add_development_dependency 'activesupport', '< 5.0.0' # Please see issue #432
  s.add_development_dependency 'awesome_print', '~> 1.2'
  s.add_development_dependency 'bundler', '>= 1.3'
  s.add_development_dependency 'coveralls', '~> 0.8'
  s.add_development_dependency 'factory_bot', '~> 4.8'
  s.add_development_dependency 'pry', '~> 0.10'
  s.add_development_dependency 'rake', '~> 10.4'
  s.add_development_dependency 'rspec', '~> 3.3'
  s.add_development_dependency 'rubocop', '~> 0.48.1'
  s.add_development_dependency 'simplecov', '~> 0.16'
    
    describe Tmuxinator::Hooks::Project do
  let(:project) { FactoryBot.build(:project) }
    
        msg = 'Actual pane does not match expected'
    msg << '\n  Expected #{@commands} but has #{actual.commands}' if @commands
    msg << '\n  Expected pane to have #{@expected_attrs}' if @expected_attrs
  end
    
      captured_stdout = StringIO.new
  captured_stderr = StringIO.new
    
        after do
      File.delete(local_project_path)
    end
  end
    
    describe Tmuxinator::Doctor do
  describe '.installed?' do
    context 'tmux is installed' do
      before do
        allow(Kernel).to receive(:system) { true }
      end
    
      describe '#synchronize_after?' do
    subject { window.synchronize_after? }