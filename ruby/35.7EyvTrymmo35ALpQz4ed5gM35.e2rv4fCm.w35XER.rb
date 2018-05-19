
        
        require 'rex/post/meterpreter'
    
    		self.block[-1] << ';'
		self.block[-1] << ''
	end
    
      if ARGV.include? '--no-ansi'
    STDERR.puts <<-DOC
    WARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile:
    
            def self.options
          [[
            '--short', 'Only print the path relative to the cache root'
          ]].concat(super)
        end
    
          def plugins_string
        UI::ErrorReport.plugins_string
      end