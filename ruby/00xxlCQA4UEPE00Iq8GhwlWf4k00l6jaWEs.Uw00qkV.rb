
        
            def log_file_info(s)
      puts '    #{magenta s}'
    end
    
        def remove(key, *values)
      set(key, Array(fetch(key)) - values)
    end
    
    http://capistranorb.com/documentation/advanced-features/custom-scm
    
          def servers_by_key
        @servers_by_key ||= {}
      end
    
        def extract_tmux_config
      options_hash = {}
    
      factory :project_with_force_attach, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/detach.yml') }
    end
    
          def show_continuation_prompt
        say
        print 'Press ENTER to continue.'
        STDIN.getc
      end
    
          def version
        if Tmuxinator::Doctor.installed?
          tmux_version = `tmux -V`.split(' ')[1]
    
          it 'returns false' do
        expect(described_class.editor?).to be_falsey
      end
    end
  end