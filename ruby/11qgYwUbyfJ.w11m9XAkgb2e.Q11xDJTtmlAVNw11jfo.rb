
        
          let :reverted_extract do
    old_extract
  end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
    When /^I turn off class caching$/ do
  cd('.') do
    file = 'config/environments/test.rb'
    config = IO.read(file)
    config.gsub!(%r{^\s*config.cache_classes.*$},
                 'config.cache_classes = false')
    File.open(file, 'w'){|f| f.write(config) }
  end
end
    
    When /^(?:|I )go to (.+)$/ do |page_name|
  visit path_to(page_name)
end