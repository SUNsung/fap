
        
        describe Deliver::HtmlGenerator do
  let(:generator) { Deliver::HtmlGenerator.new }
    
          it 'automatically removes new lines from the version number' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(version_number: '1.77.3\n', bump_type: 'major')
        end').runner.execute(:test)