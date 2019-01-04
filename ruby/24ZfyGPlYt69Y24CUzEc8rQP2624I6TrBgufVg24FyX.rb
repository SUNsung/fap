
        
                  pipelines.each do |pipeline|
            self.new(pipeline).tap do |preloader|
              preloader.preload_commit_authors
              preloader.preload_pipeline_warnings
              preloader.preload_stages_warnings
            end
          end
        end
    
          def rate_limit_counter
        @rate_limit_counter ||= Gitlab::Metrics.counter(
          :github_importer_rate_limit_hits,
          'The number of times we hit the GitHub rate limit when importing projects'
        )
      end
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Given(/^file '(.*?)' does not exist in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{TestApp.shared_path}')
  run_vagrant_command('touch #{file_shared_path} && rm #{file_shared_path}')
end
    
          # Internal use only.
      def peek(key, default=nil, &block)
        value = fetch_for(key, default, &block)
        while callable_without_parameters?(value)
          value = (values[key] = value.call)
        end
        value
      end