
        
          if tap.nil? || tap.core_tap?
    full_name = name
  else
    full_name = '#{tap}/#{name}'
  end
    
            if file_is_stale || ARGV.switch?('s') && !f.installed? || bottle_file_outdated?(f, file)
          cleanup_path(file) { file.unlink }
        end
      end
    end
    
      def external_commands
    paths.reduce([]) do |cmds, path|
      Dir['#{path}/brew-*'].each do |file|
        next unless File.executable?(file)
        cmd = File.basename(file, '.rb')[5..-1]
        cmds << cmd unless cmd.include?('.')
      end
      cmds
    end.sort
  end
    
        if ARGV.include?('--pinned') || ARGV.include?('--versions')
      filtered_list
    elsif ARGV.named.empty?
      if ARGV.include? '--full-name'
        full_names = Formula.installed.map(&:full_name).sort do |a, b|
          if a.include?('/') && !b.include?('/')
            1
          elsif !a.include?('/') && b.include?('/')
            -1
          else
            a <=> b
          end
        end
        puts_columns full_names
      else
        ENV['CLICOLOR'] = nil
        exec 'ls', *ARGV.options_only << HOMEBREW_CELLAR
      end
    elsif ARGV.verbose? || !$stdout.tty?
      exec 'find', *ARGV.kegs.map(&:to_s) + %w[-not -type d -print]
    else
      ARGV.kegs.each { |keg| PrettyListing.new keg }
    end
  end
    
            output = String.new
        output << %Q|<link rel='next' href='#{next_page}'></link>| if next_page
        output << %Q|<link rel='prev' href='#{prev_page}'></link>| if prev_page
        output.html_safe
      end
    end
  end
end

    
          def params_for(page)
        page_params = Rack::Utils.parse_nested_query('#{@param_name}=#{page}')
        page_params = @params.deep_merge(page_params)