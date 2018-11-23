
        
        describe 'Dry running an Agent', js: true do
  let(:agent)   { agents(:bob_website_agent) }
  let(:formatting_agent) { agents(:bob_formatting_agent) }
  let(:user)    { users(:bob) }
  let(:emitter) { agents(:bob_weather_agent) }
    
    describe DotHelper do
  describe 'with example Agents' do
    class Agents::DotFoo < Agent
      default_schedule '2pm'
    
        def log_file_info(s)
      puts '    #{magenta s}'
    end
    
        def read_cached_files(path, files)
      full_path = '#@cache_path/#@branch_sha/#{path}'
      contents  = {}
      if File.directory?(full_path)
        files.each do |name|
          path = '#{full_path}/#{name}'
          contents[name] = File.read(path, mode: 'rb') if File.exists?(path)
        end
      end
      contents
    end
    
      class Notification < ApplicationRecord
  end
    
    Then /^I should have (\d+) email delivery$/ do |n|
  ActionMailer::Base.deliveries.length.should == n.to_i
end