
        
        
    # immediate selector of css at pos
    def selector_for_pos(css, pos, depth = -1)
      css[css_def_pos(css, pos, depth)].dup.strip
    end
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
        inp.attributes.keys.each do |ikey|
      if (ikey.downcase == 'value')
        inp[ikey] = ''
        next
      end
    
    def usage
  $stderr.puts '#{$0} [site list] [output-dir]'
  exit(0)
end
    
          if(pkt.payload =~ self.sigs[k])
        matched = k
        matches = $1
      end
    
                  s[:proto] = 'tcp'
              s[:name]  = 'pop3'
              s[:extra] = 'Successful Login. Banner: #{s[:banner]}'
              report_auth_info(s)
              print_status('Successful POP3 Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]} (#{s[:banner].strip})')
    
    module GitHub
  module_function
    
          opts.on('-T', '--to FORMAT',
        'The format to convert to. Can be scss or sass.',
        'By default, this is inferred from the output filename.',
        'If there is none, defaults to sass.') do |name|
        @options[:to] = name.downcase.to_sym
        unless [:scss, :sass].include?(@options[:to])
          raise 'Unknown format for sass-convert --to: #{name}'
        end
      end