
        
            def class_ref_for_action(named: nil)
      class_ref = Actions.action_class_ref(named)
      unless class_ref
        if Fastlane::Actions.formerly_bundled_actions.include?(action)
          # This was a formerly bundled action which is now a plugin.
          UI.verbose(caller.join('\n'))
          UI.user_error!('The action '#{action}' is no longer bundled with fastlane. You can install it using `fastlane add_plugin #{action}`')
        else
          Fastlane::ActionsList.print_suggestions(action)
          UI.user_error!('Action '#{action}' not available, run `fastlane actions` to get a full list')
        end
      end
    
          inspector = GhInspector::Inspector.new('fastlane', 'fastlane', verbose: FastlaneCore::Globals.verbose?)
      delegate = Fastlane::InspectorReporter.new
      if message_or_error.kind_of?(String)
        inspector.search_query(message_or_error, delegate)
      else
        inspector.search_exception(message_or_error, delegate)
      end
    rescue => ex
      FastlaneCore::UI.error('Error finding relevant GitHub issues: #{ex}') if FastlaneCore::Globals.verbose?
    end
  end
end

    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            grouping: '#{grouping}',
            build_number: #{specified_build_number},
          })
        end').runner.execute(:test)
    
          it 'handles the exclude_dirs parameter with multiple  elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['.bundle', 'Packages/'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir .bundle --exclude-dir Packages/')
      end
    end
  end
end

    
            expect(result).to include(' -rule #{rule.shellescape} ')
        expect(result).to include(' -disable-rule #{rule.shellescape} ')
      end
    
          it 'returns the return value of the block if present' do
        expect_command('ls', '-la')
        return_value = Fastlane::Actions.sh('ls', '-la') do |status, result|
          42
        end
        expect(return_value).to eq(42)
      end
    end
  end
    
        # An empty argument will be skipped, so return empty quotes.
    # https://github.com/ruby/ruby/blob/a6413848153e6c37f6b0fea64e3e871460732e34/lib/shellwords.rb#L142-L143
    return ''''.dup if str.empty?
    
        # From asking people, it seems MacPorts does not have a `prefix` command, like
    # Homebrew does, so make an educated guess:
    if port_prefix = prefix_from_bin('port')
      prefixes << port_prefix
    end