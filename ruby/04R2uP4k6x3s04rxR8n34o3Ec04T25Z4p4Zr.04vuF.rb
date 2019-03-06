
        
            def execute(command: nil, target_object: nil)
      action_name = command.method_name
      action_class_ref = class_ref_for_action(named: action_name)
      parameter_map = {}
      closure_argument_value = nil
    
          File.write(new_path, '1')
      false
    end
    
        def rescue_file_error(e)
      # We're also printing the new-lines, as otherwise the message is not very visible in-between the error and the stack trace
      puts('')
      FastlaneCore::UI.important('Error accessing file, this might be due to fastlane's directory handling')
      FastlaneCore::UI.important('Check out https://docs.fastlane.tools/advanced/#directory-behavior for more details')
      puts('')
      raise e
    end
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --use-single-star --keep-intermediate-files --search-undocumented-doc --exit-threshold \'2\' input/dir')
      end
    
            inner_command = 'git describe --tags `git rev-list --tags --max-count=1`'
        pseudocommand = 'git log --pretty=\'%B\' #{inner_command.shellescape}...HEAD --no-merges'
        expect(result).to eq(pseudocommand)
      end
    
          it 'handles the extensions parameter with a single element correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.m')
      end
    
          context 'when specify list of files to process' do
        it 'adds use script input files option and environment variables' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              files: ['AppDelegate.swift', 'path/to/project/src/Model.swift', 'path/to/project/test/Test.swift']
            )
          end').runner.execute(:test)
    
      it 'has no effect on immediate values' do
    [nil, true, false].each do |v|
      v.taint
      v.tainted?.should == false
    end
  end
    
      platform_is_not :windows do
    it 'returns true when passed ?l if the argument is a symlink' do
      link = tmp('file_symlink.lnk')
      File.symlink(@file, link)
      begin
        Kernel.test(?l, link).should be_true
      ensure
        rm_r link
      end
    end
  end
    
        pod 'ObjCPod', path: 'ObjCPod'
    pod 'SwiftPod', path: 'SwiftPod'
    pod 'MixedPod', path: 'MixedPod'
    pod 'CustomModuleMapPod', path: 'CustomModuleMapPod'