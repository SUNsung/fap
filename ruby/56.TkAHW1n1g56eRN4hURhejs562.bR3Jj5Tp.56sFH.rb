
        
                return return_val
      rescue => ex
        Dir.chdir(path_to_use) do
          # Provide error block exception without color code
          begin
            error_blocks[current_platform].call(current_lane, ex, parameters) if current_platform && error_blocks[current_platform]
            error_blocks[nil].call(current_lane, ex, parameters) if error_blocks[nil]
          rescue => error_block_exception
            UI.error('An error occurred while executing the `error` block:')
            UI.error(error_block_exception.to_s)
            raise ex # raise the original error message
          end
        end
    
        def did_show_message?
      file_name = '.did_show_opt_info'
    
            expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape} #{commit}')
      end
    
            inner_command = 'git describe --tags `git rev-list --tags --max-count=1`'
        # this is not really the command that would have been executed, but a 'fabricated' representation for tests (by Actions.sh) that includes both command that would have been run
        pseudocommand = 'git log --pretty=\'%B\' #{inner_command.shellescape}...HEAD'
        expect(result).to eq(pseudocommand)
      end
    
          context 'when specify mode explicitly' do
        it 'uses lint mode as default' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint
          end').runner.execute(:test)
    
          it 'should shell escape keychain names when checking for installation' do
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
        expect(FastlaneCore::Helper).to receive(:backticks).with(name_regex, anything).and_return('')
    
              expected = 'FOO\\ BAR=I\\\'m\\ foo\\ bar BAZ=And\\ I\\\'m\\ baz'
          expected = '\'FOO BAR\'=\'I'm foo bar\' BAZ=\'And I'm baz\'' if FastlaneCore::Helper.windows?
          expect(value).to eq(expected)
        end
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelperXcode8.swift')
  warn('You modified `SnapshotHelperXcode8.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
            c.action do |args, options|
          Cert.config = FastlaneCore::Configuration.create(Cert::Options.available_options, options.__hash__)
          Cert::Runner.new.launch
        end
      end