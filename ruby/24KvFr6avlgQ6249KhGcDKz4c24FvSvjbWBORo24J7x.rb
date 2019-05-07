
        
        def version
  Jekyll::VERSION
end
    
            UI.message('Adding git tag '#{tag}' 🎯.')
        Actions.sh(cmd.join(' '))
      end
    
    # Here be monkey patches
    
    # remove all double quotes completely
def simulate_normal_shell_unwrapping(string)
  string.gsub!(''', '')
  regex = /^(')(\S*)(')$/
  unless string.to_s.match(regex).nil?
    string = string.to_s.match(regex)[2] # get only part in quotes
  end
  return string
end
    
      zap trash: [
               '~/Library/Application Support/Adobe/Lightroom',
               '~/Library/Preferences/com.adobe.Lightroom#{version.major}.plist',
             ]
    
      def commands_match
    @actual.commands == commands
  end
    
          private
    
          expect(described_class.configs).
        to eq ['both', 'both', 'dup/local-dup', 'home', 'local-dup', 'xdg']
    end