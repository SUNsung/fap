
        
          describe 'instance methods' do
    let(:key_attributes) do # these keys are intentionally strings.
      {
        'canDownload' => false,
        'canRevoke' => true,
        'keyId' => 'some-key-id',
        'keyName' => 'fastlane',
        'servicesCount' => 3,
        'services' => [
          {
            'name' => 'APNS',
            'id' => 'U27F4V844T',
            'configurations' => []
          },
          {
            'name' => 'MusicKit',
            'id' => '6A7HVUVQ3M',
            'configurations' => [
              {
                'name' => 'music id test',
                'identifier' => 'music.com.snatchev.test',
                'type' => 'music',
                'prefix' => 'some-prefix-id',
                'id' => 'some-music-kit-id'
              }
            ]
          },
          {
            'name' => 'DeviceCheck',
            'id' => 'DQ8HTZ7739',
            'configurations' => []
          }
        ]
      }
    end
    
        context 'Mercurial repository' do
      before do
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git?).and_return(false)
        expect(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_hg?).and_return(true)
      end
    
          it 'prefers a custom version number over a boring version bump' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(version_number: '1.77.3', bump_type: 'major')
        end').runner.execute(:test)
    
      desc 'Install all spree gems'
  task install: :build do
    for_each_gem do |gem_path|
      Bundler.with_clean_env do
        sh 'gem install #{gem_path}'
      end
    end
  end
    
              @name = name.to_sym
          @declaration_node = declaration_node
          @scope = scope
    
        context 'opening brace on same line as first element' do
      context 'last element has a trailing comma' do
        it 'autocorrects closing brace on different line from last element' do
          new_source = autocorrect_source(['#{prefix}#{open}#{a}, # a',
                                           '#{b}, # b',
                                           close,
                                           suffix])