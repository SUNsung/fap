# This is basically a copy of the original bundler 'bundle' shim
# with the addition of the loading of our Bundler patches that
# modify Bundler's caching behaviour.
    
      private
    
        after :each do
      logstash.uninstall
    end
    
        it 'joins array using ;' do
      expect(project.send('hook_#{hook_name}')).
        to eq('echo 'on hook'; echo 'another command here'')
    end
  end
end
    
      describe '#validate!' do
    it 'should raise if there are no windows defined' do
      nowindows_project = FactoryBot.build(:nowindows_project)
      expect do
        nowindows_project.validate!
      end.to raise_error RuntimeError, %r{should.include.some.windows}
    end
    
              it 'creates a project file' do
            capture_io { cli.start }
            expect(file.string).to_not be_empty
            # make sure the output is valid YAML
            expect { YAML.parse file.string }.to_not raise_error
          end
        end
    
        def kill
      self.class.render_template(Tmuxinator::Config.stop_template, binding)
    end
    
          expect(instance.render).to match %r{wemux.ls.2>\/dev\/null}
    end
  end
    
    module ActiveAdmin
  module BatchActions
    
      end
end
