
        
              # generate variables template
      save_file 'templates/project/_bootstrap-variables.sass',
                '// Override Bootstrap variables here (defaults from bootstrap-sass v#{Bootstrap::VERSION}):\n\n' +
                    File.read('#{save_to}/_variables.scss').lines[1..-1].join.gsub(/^(?=\$)/, '// ').gsub(/ !default;/, '')
    end
    
        alias log puts
    
        status data.respond_to?(:status_code) ? data.status_code : 200
    
        r0
  end
    
          # Only print require() calls that did actual work.
      # require() returns true on load, false if already loaded.
      if result
        source = caller[0]
        #p source.include?('/lib/polyglot.rb:63:in `require'') => source
        if source.include?('/lib/polyglot.rb:63:in `require'')
          source = caller[1]
        end