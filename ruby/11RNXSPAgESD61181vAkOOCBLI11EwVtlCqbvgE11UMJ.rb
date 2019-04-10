
        
            def action_launched(launch_context: nil)
      unless did_show_message?
        show_message
      end
    
          it 'doesn't add a no-skip-current flag to command if no_skip_current is set to false' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              command: 'build',
              no_skip_current: false
            )
          end').runner.execute(:test)
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add *.h *.m', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: #{path}, shell_escape: false)
          end').runner.execute(:test)
        end
      end