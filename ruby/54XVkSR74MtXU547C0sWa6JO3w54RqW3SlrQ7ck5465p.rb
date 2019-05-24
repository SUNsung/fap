
        
          gem.add_development_dependency 'danger'
  gem.add_development_dependency 'mocha'
  gem.add_development_dependency 'rspec'
  gem.add_development_dependency 'rubocop', '0.48.1'
end

    
    Then(/^the specified stage files are created$/) do
  qa = TestApp.test_app_path.join('config/deploy/qa.rb')
  production = TestApp.test_app_path.join('config/deploy/production.rb')
  expect(File.exist?(qa)).to be true
  expect(File.exist?(production)).to be true
end
    
    Given(/^file '(.*?)' does not exist in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{TestApp.shared_path}')
  run_vagrant_command('touch #{file_shared_path} && rm #{file_shared_path}')
end
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
          def matches?(other)
        # This matching logic must stay in sync with `Servers#add_host`.
        hostname == other.hostname && port == other.port
      end
    
    set_if_empty :default_env, {}
set_if_empty :keep_releases, 5
    
      # Configure public file server for tests with Cache-Control for performance.
  config.public_file_server.enabled = true
  config.public_file_server.headers = {
    'Cache-Control' => 'public, max-age=#{1.hour.to_i}'
  }
    
      private