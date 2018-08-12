
        
          private
    
      test 'broadcasting_for with an object' do
    assert_equal 'Room#1-Campfire', ChatChannel.broadcasting_for(Room.new(1))
  end
    
      test 'processing disconnect message' do
    run_in_eventmachine do
      open_connection
    
      describe '.create' do
    it 'creates a key with the client' do
      expected_service_configs = {
        'U27F4V844T' => [],
        'DQ8HTZ7739' => [],
        '6A7HVUVQ3M' => ['some-music-id']
      }
      mock_client_response(:create_key!, with: { name: 'New Key', service_configs: expected_service_configs }) do
        {
          keyId: 'a-new-key-id'
        }
      end
    
          it 'splits correctly' do
        expected = ['One', 'Two', 'Three', 'Four Token']
        expect(generator.split_keywords(keywords)).to eq(expected)
      end
    end
    
          # Run a certain action
      def trigger(task: nil, flags: nil, serial: nil, print_command: true, print_command_output: true)
        android_serial = (serial != '') ? 'ANDROID_SERIAL=#{serial}' : nil
        command = [android_serial, escaped_gradle_path, task, flags].compact.join(' ')
        Action.sh(command, print_command: print_command, print_command_output: print_command_output)
      end
    
          it 'does set the exclude directories' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(exclude_dir: 'test1,test2,build')
          end').runner.execute(:test)
    
          it 'automatically removes new lines from the version number' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(version_number: '1.77.3\n', bump_type: 'major')
        end').runner.execute(:test)
    
        if GitHub.api_credentials_type == :none
      puts <<~EOS
        You can create a new personal access token:
         #{GitHub::ALL_SCOPES_URL}
        and then set the new HOMEBREW_GITHUB_API_TOKEN as the authentication method.