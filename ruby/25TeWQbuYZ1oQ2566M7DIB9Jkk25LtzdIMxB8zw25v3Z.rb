    assert_not_predicate @developer, :no_touching?
    assert_not_predicate @owner, :no_touching?
    assert_equal @previously_updated_at, @developer.updated_at
  end
    
      # Use a different logger for distributed setups.
  # require 'syslog/logger'
  # config.logger = ActiveSupport::TaggedLogging.new(Syslog::Logger.new 'app-name')
    
          test '`rake routes` outputs a deprecation warning' do
        add_to_env_config('development', 'config.active_support.deprecation = :stderr')
    
        def tmux_split_command
      path = if tab.root?
               '#{Tmuxinator::Config.default_path_option} #{tab.root}'
             end
      '#{project.tmux} splitw #{path} -t #{tab.tmux_window_target}'
    end
    
        def tmux_window_command_prefix
      '#{project.tmux} send-keys -t #{project.name}:#{index + project.base_index}'
    end
    
        it 'should return an instance of the class if the file loads' do
      expect(described_class.load(path, options)).to be_a Tmuxinator::Project
    end
  end
    
        context 'with a project yml' do
      it 'gets the project as path to the yml file' do
        expect(File).to receive(:exist?).with(default) { true }
        expect(described_class.local_project).to eq default
      end
    end
    
          it 'returns false' do
        expect(described_class.installed?).to be_falsey
      end
    end
  end
    
          it { is_expected.to be true }
    end
    
            def include_new_modules(modules)
          modules.each { |mod| make_inclusion(mod) }
        end
    
            # Specify additional content-types, e.g.:
        #   content_type :xls, 'application/vnd.ms-excel'
        def content_type(key, val)
          namespace_stackable(:content_types, key.to_sym => val)
        end
    
              found_code = http_codes.find do |http_code|
            (http_code[0].to_i == env[Grape::Env::API_ENDPOINT].status) && http_code[2].respond_to?(:represent)
          end if env[Grape::Env::API_ENDPOINT].request