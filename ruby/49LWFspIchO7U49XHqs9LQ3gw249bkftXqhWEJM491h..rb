
        
            BUNDLE_DIR = ::File.join(LOGSTASH_HOME, 'vendor', 'bundle')
    GEMFILE_PATH = ::File.join(LOGSTASH_HOME, 'Gemfile')
    LOCAL_GEM_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'local_gems')
    CACHE_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'cache')
    LOCKFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile.lock'))
    GEMFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile'))
    
            if explicit_plugins.any? { |spec| filename =~ /^#{spec.name}/ }
          FileUtils.mv(gem_file, ::File.join(explicit_path, filename))
        else
          FileUtils.mv(gem_file, ::File.join(dependencies_path, filename))
        end
      end
    end
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end
    
        def pane_index
      index + tab.project.pane_base_index
    end
    
      describe '#get_pane_base_index' do
    it 'extracts pane-base-index from the global tmux window options' do
      allow_any_instance_of(Kernel).to receive(:`).
        with(Regexp.new('tmux.+ show-window-option -g pane-base-index')).
        and_return('pane-base-index 3\n')