
        
        module Fastlane
  # Handles receiving commands from the socket server, finding the Action to be invoked,
  # invoking it, and returning any return values
  class SocketServerActionCommandExecutor < CommandExecutor
    attr_accessor :runner
    attr_accessor :actions_requiring_special_handling
    
            cmd << ['-am #{message.shellescape}']
        cmd << '--force' if options[:force]
        cmd << '-s' if options[:sign]
        cmd << tag.shellescape
        cmd << options[:commit].to_s if options[:commit]
    
          it 'sets the platform to iOS' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              platform: 'iOS'
            )
          end').runner.execute(:test)
    
          it 'shellescapes the exclude_dirs correctly' do
        directory = 'My Dir'
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['#{directory}'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir #{directory.shellescape}')
      end
    
        os = 'other'
    shelljoin_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        array = testcase['input']
        expect_correct_implementation_to_be_called(array, :shelljoin, os)
        joined = array.shelljoin
        expect(joined).to eq(testcase['expect'][os])
      end
    end
  end
end
    
            allow(File).to receive(:file?).and_return(false)
        expect(File).to receive(:file?).with('#{Dir.home}/Library/Keychains/login.keychain').and_return(true)
        allow(File).to receive(:exist?).and_return(false)
        expect(File).to receive(:exist?).with('item.path').and_return(true)