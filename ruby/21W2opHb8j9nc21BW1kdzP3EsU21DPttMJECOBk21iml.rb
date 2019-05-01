
        
                cmd << ['-am #{message.shellescape}']
        cmd << '--force' if options[:force]
        cmd << '-s' if options[:sign]
        cmd << tag.shellescape
        cmd << options[:commit].to_s if options[:commit]
    
          context 'as string' do
        let(:path) { 'myfile.txt' }
    
          it 'works given a path to the directory containing compile_commands.json' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint'
            )
          end').runner.execute(:test)
    
          context 'when specify config_file options' do
        it 'adds config option' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              config_file: '#{config_file}'
            )
          end').runner.execute(:test)
    
    # Windows implementation
module WindowsShellwords
  def shellescape(str)
    str = str.to_s
    
      # https://stackoverflow.com/a/18623297/252627, last variant
  require 'open3'
  Open3.popen3(compare_command) do |stdin, stdout, stderr, thread|
    error = stderr.read.chomp
    # expect(error).to eq(expected_compare_error)
    expect(error).to eq(expected_compare_error) # match(/#{expected_compare_error}/)
  end
end