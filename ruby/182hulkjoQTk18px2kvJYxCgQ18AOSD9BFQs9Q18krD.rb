
        
            keys.find do |key|
      if key.to_s.end_with?('_or_later')
        later_tag = key.to_s[/(\w+)_or_later$/, 1].to_sym
        MacOS::Version.from_symbol(later_tag) <= tag_version
      end
    end
  end
end

    
          puts_columns Array(result)
    else
      query = ARGV.first
      rx = query_regexp(query)
      local_results = search_formulae(rx)
      puts_columns(local_results)
      tap_results = search_taps(rx)
      puts_columns(tap_results)
    
    # This formula serves as the base class for several very similar
# formulae for Amazon Web Services related tools.
class AmazonWebServicesFormula < Formula
  # Use this method to peform a standard install for Java-based tools,
  # keeping the .jars out of HOMEBREW_PREFIX/lib
  def install
    rm Dir['bin/*.cmd'] # Remove Windows versions
    libexec.install Dir['*']
    bin.install_symlink Dir['#{libexec}/bin/*'] - ['#{libexec}/bin/service']
  end
  alias_method :standard_install, :install
    
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
    
          it 'splits correctly' do
        expected = [
          'One',
          'Two',
          'Three',
          'Four Token',
          'Or',
          'Newlines',
          'Everywhere'
        ]
        expect(generator.split_keywords(keywords)).to eq(expected)
      end
    end
  end
end

    
          it 'it increments all targets minor version major' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(bump_type: 'major')
        end').runner.execute(:test)