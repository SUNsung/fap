
        
          # Disable Rails's static asset server (Apache or nginx will already do this).
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
        def synchronize_after?
      synchronize == 'after'
    end
  end
end

    
      factory :project_with_number_as_name, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/sample_number_as_name.yml') }
    end
    
      it 'creates an instance' do
    expect(subject).to be_a(Tmuxinator::Pane)
  end
    
      describe '#render' do
    it 'renders the tmux config' do
      expect(project.render).to_not be_empty
    end
    
        result
  end
    
          def default_project(name)
        '#{directory}/#{name}.yml'
      end
    
        def windows
      windows_yml = yaml['tabs'] || yaml['windows']