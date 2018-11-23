
        
                      [:year, :month, :day, :hour, :min, :sec].each do |key|
                default[key] ||= time.send(key)
              end
    
                content ||= Translator
              .new(object, @object_name, method_and_value, scope: 'helpers.label')
              .translate
            content ||= @method_name.humanize
    
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
    
            session.action_launched(launch_context: launch_context)
      end
    end
  end
end

    
              it 'raises an exception' do
            expect do
              Fastlane::FastFile.new.parse('lane :test do
                  carthage(command: '#{command}', output: 'bla.framework.zip')
                end').runner.execute(:test)
            end.to raise_error('Output option is available only for 'archive' command.')
          end
        end
      end
    
          context 'as array' do
        let(:path) { ['myfile.txt', 'yourfile.txt'] }
    
    def expect_command(*command, exitstatus: 0, output: '')
  mock_input = double(:input)
  mock_output = StringIO.new(output)
  mock_status = double(:status, exitstatus: exitstatus)
  mock_thread = double(:thread, value: mock_status)
    
          it 'tries to find the macOS Sierra keychain too' do
        expected_command = 'security import item.path -k '#{Dir.home}/Library/Keychains/login.keychain-db' -P #{''.shellescape} -T /usr/bin/codesign -T /usr/bin/security &> /dev/null'
    
          it 'displays negative number as a two's complement prefixed with '..f'' do
        format('%x', -196).should == '..f' + '3c'
      end
    
      it 'raises a TypeError when passed nil' do
    lambda { srand(nil) }.should raise_error(TypeError)
  end
    
      it 'no raises error on fixnum values' do
    [1].each do |v|
      lambda { v.taint }.should_not raise_error(RuntimeError)
      v.tainted?.should == false
    end
  end
end

    
            -> { w.f4('', 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: \n$|)
        -> { w.f4(nil, 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: \n$|)
      end