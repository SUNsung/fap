
        
                  action_name = from_action ? nil : class_ref.step_text
          Actions.execute_action(action_name) do
            # arguments is an array by default, containing an hash with the actual parameters
            # Since we usually just need the passed hash, we'll just use the first object if there is only one
            if arguments.count == 0
              arguments = ConfigurationHelper.parse(class_ref, {}) # no parameters => empty hash
            elsif arguments.count == 1 && arguments.first.kind_of?(Hash)
              arguments = ConfigurationHelper.parse(class_ref, arguments.first) # Correct configuration passed
            elsif !class_ref.available_options
              # This action does not use the new action format
              # Just passing the arguments to this method
            else
              UI.user_error!('You have to call the integration like `#{method_sym}(key: \'value\')`. Run `fastlane action #{method_sym}` for all available keys. Please check out the current documentation on GitHub.')
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

    
            expect(result).to eq('git commit -m message ./fastlane/README.md')
      end
    
              it 'uses system wide oclint' do
            expect(result).to include(command)
          end
        end
    
    # confirms that the escaped string that is generated actually
# gets turned back into the source string by the actual shell.
# abuses a `grep` (or `find`) error message because that should be cross platform
def confirm_shell_unescapes_string_correctly(string, escaped)
  compare_string = string.to_s.dup
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelper.swift')
  warn('You modified `SnapshotHelper.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
          it 'allows closing brace on same line as last multiline element' do
        expect_no_offenses(construct(true, a, make_multi(multi), false))
      end
    
    module RuboCop
  module AST
    # Common functionality for nodes that can be used as hash elements:
    # `pair`, `kwsplat`
    module HashElementNode
      # Returns the key of this `hash` element.
      #
      # @note For keyword splats, this returns the whole node
      #
      # @return [Node] the key of the hash element
      def key
        node_parts[0]
      end