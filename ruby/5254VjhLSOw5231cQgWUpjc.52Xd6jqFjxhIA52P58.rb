
        
              context 'when file paths contain spaces' do
        it 'escapes spaces in output and config file paths' do
          output_file = 'output path with spaces.txt'
          config_file = '.config file with spaces.yml'
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              output_file: '#{output_file}',
              config_file: '#{config_file}'
            )
          end').runner.execute(:test)
    
      def unpin
    path.unlink if pinned?
    HOMEBREW_PINNED_KEGS.rmdir_if_possible
  end
    
        it 'returns an array of flags' do
      expect(subject.flags_only).to eq ['--foo']
    end
  end
    
      it 'returns the pipeline id' do
    expect(subject.pipeline_id).to eq(pipeline_id)
  end
    
    module ActiveAdmin
  module BatchActions