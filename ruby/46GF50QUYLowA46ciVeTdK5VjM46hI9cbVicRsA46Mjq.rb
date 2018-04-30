
        
                if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        def merge!(hash)
      return super unless hash.is_a? Hash
      hash.assert_valid_keys URI::Generic::COMPONENT
      hash.each_pair do |key, value|
        send '#{key}=', value
      end
      self
    end
    
        prune
  end
    
          EOS
      login!
    end
    
        if ARGV.dry_run?
      if ARGV.include? '--strict'
        ohai 'brew audit --strict #{formula.path.basename}'
      elsif ARGV.include? '--audit'
        ohai 'brew audit #{formula.path.basename}'
      end
    else
      failed_audit = false
      if ARGV.include? '--strict'
        system HOMEBREW_BREW_FILE, 'audit', '--strict', formula.path
        failed_audit = !$CHILD_STATUS.success?
      elsif ARGV.include? '--audit'
        system HOMEBREW_BREW_FILE, 'audit', formula.path
        failed_audit = !$CHILD_STATUS.success?
      end
      if failed_audit
        formula.path.atomic_write(backup_file)
        odie 'brew audit failed!'
      end
    end
    
        export LANG=en_US.UTF-8
    DOC
  else
    STDERR.puts <<-DOC
    \e[33mWARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile:
    
            def run
          print_version
          signal_end_of_output
          listen
        end