
        
                  return_val = lane_obj.call(parameters) # by default no parameters
    
          new_path = File.join(FastlaneCore.fastlane_user_dir, file_name)
      did_show = File.exist?(new_path)
    
            # Stub out calls related to the execution environment
        client = double('ingester_client')
        session = FastlaneCore::AnalyticsSession.new(analytics_ingester_client: client)
        expect(client).to receive(:post_event).with({
            client_id: p_hash,
            category: 'fastlane Client Langauge - ruby',
            action: :launch,
            label: nil,
            value: nil
        })
    
            allow(File).to receive(:file?).and_return(false)
        allow(File).to receive(:file?).with(keychain_path).and_return(true)
        allow(File).to receive(:exist?).and_return(false)
        expect(File).to receive(:exist?).with(cert_name).and_return(true)
        expect(FastlaneCore::Helper).to receive(:backticks).with(expected_set_key_partition_list_command, print: false)
        expect(FastlaneCore::Helper).to receive(:backticks).with(expected_security_import_command, print: false)
    
    module CrossplatformShellwords
  # handle switching between implementations of shellescape
  def shellescape(str)
    if FastlaneCore::Helper.windows?
      WindowsShellwords.shellescape(str)
    else
      # using `escape` instead of expected `shellescape` here
      # which corresponds to Shellword's `String.shellescape` implementation
      # https://github.com/ruby/ruby/blob/1cf2bb4b2085758112503e7da7414d1ef52d4f48/lib/shellwords.rb#L216
      Shellwords.escape(str)
    end
  end
  module_function :shellescape
    
      include_examples 'multiline literal brace layout trailing comma' do
    let(:open) { '[' }
    let(:close) { ']' }
  end
end

    
          it 'detects closing brace on different line from last element' do
        src = construct(false, true)
        inspect_source(src)
    
    shared_examples_for 'multiline literal brace layout method argument' do
  include MultilineLiteralBraceHelper
    
              raise ArgumentError unless valid_argument_types?
        end