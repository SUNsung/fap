        if ARGV.git?
          puts 'This directory is now a git repo. Make your changes and then use:'
          puts '  git diff | pbcopy'
          puts 'to copy the diff to the clipboard.'
        end
    
      def fish_completion_caveats
    if keg && keg.completion_installed?(:fish) && which('fish') then <<-EOS.undent
      fish completion has been installed to:
        #{HOMEBREW_PREFIX}/share/fish/vendor_completions.d
      EOS
    end
  end
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
      def core_tap_origin
    CoreTap.instance.remote || '(none)'
  end
    
            if msg = blacklisted?(query)
          if count > 0
            puts
            puts 'If you meant #{query.inspect} precisely:'
            puts
          end
          puts msg
        elsif count == 0
          puts 'No formula found for #{query.inspect}.'
          begin
            GitHub.print_pull_requests_matching(query)
          rescue GitHub::Error => e
            SEARCH_ERROR_QUEUE << e
          end
        end
      end
    end
    
      # Use this method to generate standard caveats.
  def standard_instructions(home_name, home_value = libexec)
    <<-EOS.undent
      Before you can use these tools you must export some variables to your $SHELL.
    
            expect(result).to eq('hg parent --template '{node|short}'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('hg parent --template '{node|short}'')
      end