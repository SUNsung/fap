
        
              if description
        UI.user_error!('Do not let descriptions end with a '.', since it's used for user inputs as well for key :#{key}') if description[-1] == '.'
      end
    
    # remove all double quotes completely
def simulate_normal_shell_unwrapping(string)
  string.gsub!(''', '')
  regex = /^(')(\S*)(')$/
  unless string.to_s.match(regex).nil?
    string = string.to_s.match(regex)[2] # get only part in quotes
  end
  return string
end
    
            FastlaneCore::CommanderGenerator.new.generate(Cert::Options.available_options, command: c)
    
          describe 'running with fastlane' do
        before do
          allow(FastlaneCore::Helper).to receive(:fastlane_enabled?).and_return(true)
          allow(FastlaneCore::FastlaneFolder).to receive(:path).and_return('./fastlane')