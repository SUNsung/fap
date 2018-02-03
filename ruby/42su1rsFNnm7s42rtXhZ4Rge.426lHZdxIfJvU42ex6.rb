
        
              # move bootstrap/_bootstrap.scss to _bootstrap.scss adjusting import paths
      main_from = '#{save_to}/_bootstrap.scss'
      main_to   = File.expand_path('#{save_to}/../_bootstrap.scss')
      save_file main_to, File.read(main_from).gsub(/ '/, ' 'bootstrap/')
      File.delete(main_from)
    
        def silence_log
      @silence = true
      yield
    ensure
      @silence = false
    end
  end
end

    
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
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
    (deny default)
EOS
    
            # Split out the targets into app and test targets
        test_targets, app_targets = project.native_targets.
                              sort_by { |t| t.name.downcase }.
                              partition(&:test_target_type?)
    
          def self.options
        [
          ['--update', 'Run `pod repo update` before listing'],
          ['--stats',  'Show additional stats (like GitHub watchers and forks)'],
        ].concat(super)
      end