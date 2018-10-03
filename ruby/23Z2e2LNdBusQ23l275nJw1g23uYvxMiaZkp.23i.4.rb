
        
            If you wish to use the 2.x release you can install it
    either via Homebrew:
      brew install homebrew/binary/ngrok2
    
    old_trap = trap('INT') { exit! 130 }
    
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