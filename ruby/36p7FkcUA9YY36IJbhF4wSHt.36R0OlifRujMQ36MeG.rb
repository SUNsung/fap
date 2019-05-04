
        
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

    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Given(/^servers with the roles app and web$/) do
  begin
    vagrant_cli_command('up')
  rescue
    nil
  end
end
    
          # rubocop:disable Style/GuardClause
      def register_legacy_scm_hooks
        if Rake::Task.task_defined?('deploy:new_release_path')
          after 'deploy:new_release_path', '#{scm_name}:create_release'
        end