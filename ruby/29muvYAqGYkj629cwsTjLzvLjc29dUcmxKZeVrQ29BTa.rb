
        
              command_return = ActionCommandReturn.new(
        return_value: action_return,
        return_value_type: action_return_type,
        closure_argument_value: closure_argument_value
      )
    
        def rescue_file_error(e)
      # We're also printing the new-lines, as otherwise the message is not very visible in-between the error and the stack trace
      puts('')
      FastlaneCore::UI.important('Error accessing file, this might be due to fastlane's directory handling')
      FastlaneCore::UI.important('Check out https://docs.fastlane.tools/advanced/#directory-behavior for more details')
      puts('')
      raise e
    end
    
          it 'specified tag overrides generate tag' do
        tag = '2.0.0'
    
      describe 'shell_command_from_args' do
    it 'returns the string when a string is passed' do
      command = command_from_args('git commit -m 'A message'')
      expect(command).to eq('git commit -m 'A message'')
    end
    
          it 'keeps the specified metadata folder' do
        expect(options[:metadata_path]).to eq('./metadata')
      end
    end
  end
end

    
        # The path used after confirmation.
    def after_confirmation_path_for(resource_name, resource)
      if signed_in?(resource_name)
        signed_in_root_path(resource)
      else
        new_session_path(resource_name)
      end
    end
    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
    2) You are testing a Devise controller bypassing the router.
   If so, you can explicitly tell Devise which mapping to use:
    
          # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `def` node body is a void context
      def void_context?
        method?(:initialize) || assignment_method?
      end
    
            def declaration_with_comment(node)
          buffer = processed_source.buffer
          begin_pos = get_source_range(node, comments_as_separators).begin_pos
          end_line = buffer.line_for_position(node.loc.expression.end_pos)
          end_pos = buffer.line_range(end_line).end_pos
          Parser::Source::Range.new(buffer, begin_pos, end_pos)
        end
    
      option '--no-depends', :flag, 'Do not list any dependencies in this package',
    :default => false
    
        if @attributes.include?(:prefix)
      installdir = staging_path(@attributes[:prefix])
    else
      installdir = staging_path
    end
    
      # Removes the end-of-tar records from the given [target_path].
  # End of tar records are two contiguous empty tar records at the end of the file
  # Taken together, they comprise 1k of null data.
  def cut_tar_record(target_path)
    
      def self.default_prefix
    npm_prefix = safesystemout('npm', 'prefix', '-g').chomp
    if npm_prefix.count('\n') > 0
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned unexpected output.'
    elsif !File.directory?(npm_prefix)
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned a non-existent directory'
    end
    logger.info('Setting default npm install prefix', :prefix => npm_prefix)
    npm_prefix
  end
    
      # Output this package to the given path.
  def output(output_path)
    output_check(output_path)
    
        cwd = ::Dir.pwd
    ::Dir.chdir(staging_path)
    
    # A pleaserun package.
#
# This does not currently support 'output'
class FPM::Package::PleaseRun < FPM::Package
  # TODO(sissel): Implement flags.
    
        logger.info('Trying to download', :package => package)
    
    
    # Convert the 'package directory' built above to a real solaris package.
    safesystem('pkgtrans', '-s', build_path, output_path, name)
    safesystem('cp', '#{build_path}/#{output_path}', output_path)
  end # def output
    
      private
    
          def self.has_issues_with_add_symlink?
        return !::Gem::Package::TarWriter.public_instance_methods.include?(:add_symlink)
      end
    end # module TarWriter
  end # module Issues
end # module FPM