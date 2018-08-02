
        
                hash.each do |key, value|
          self[convert_key(key)] = value
        end
      end
    
                o.on('-f', '--force', 'Remove without confirmation.') do |f|
              options[:force] = f
            end
    
    Given an Application (app) bundle directory on disk, find all
login items associated with that app, which you can use in a
Cask uninstall stanza, eg