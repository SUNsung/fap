
        
        desc 'Default: run unit tests.'
task :default => [:clean, :all]
    
    When /^I reset Bundler environment variable$/ do
  BUNDLE_ENV_VARS.each do |key|
    ENV[key] = nil
  end
end