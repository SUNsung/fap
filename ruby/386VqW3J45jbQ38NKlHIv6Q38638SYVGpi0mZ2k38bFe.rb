
        
              def merge!(other)
        other.each do |key, value|
          self[convert_key(key)] = value
        end
        self
      end
    
    $stdout.puts res

    
            when :err
          case s[:last]
            when :pass
              # Oops got a -ERR after a pass so its crap ignore the pass
              # But report it, might be helpfull for guessing :-)
    
    		self.block[-1] << '    ''
    
          def report
        <<-EOS
    
          def update_if_necessary!
        if @update && config.verbose?
          UI.section('\nUpdating Spec Repositories\n'.yellow) do
            Repo.new(ARGV.new(['update'])).run
          end
        end
      end