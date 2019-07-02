
        
                [
          'This will automatically tag your build with the following format: `<grouping>/<lane>/<prefix><build_number>`, where:'.markdown_preserve_newlines,
          list,
          'For example, for build 1234 in the 'appstore' lane, it will tag the commit with `builds/appstore/1234`.'
        ].join('\n')
      end
    
            message = 'builds/test/#{build_number}#{postfix} (fastlane)'
        tag = 'builds/test/#{build_number}#{postfix}'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
          it 'adds options param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            options: '--use-single-star --keep-intermediate-files --search-undocumented-doc'
          )
        end').runner.execute(:test)
    
            keychain = 'keychain with spaces.keychain'
        cmd = %r{curl -f -o (([A-Z]\:)?\/.+) https://developer\.apple\.com/certificationauthority/AppleWWDRCA.cer && security import \1 -k #{Regexp.escape(keychain.shellescape)}}
        require 'open3'
    
      it 'uses the replacement character' do
    ec = Encoding::Converter.new('utf-8', 'us-ascii', :invalid => :replace, :undef => :replace)
    ec.replacement = '!'
    dest = ''
    status = ec.primitive_convert '中文123', dest
    
        @exception2.readagain_bytes.encoding.should == Encoding::BINARY
  end
end

    
      it 'returns a replica of UTF-16BE' do
    name = @prefix + 'UTF-16-BE'
    e = Encoding::UTF_16BE.replicate(name)
    e.name.should == name
    'a'.force_encoding(e).valid_encoding?.should be_false
    '\x30\x42'.force_encoding(e).valid_encoding?.should be_true
    '\x80'.force_encoding(e).valid_encoding?.should be_false
  end
    
    Given(/^file '(.*?)' does not exist in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{TestApp.shared_path}')
  run_vagrant_command('touch #{file_shared_path} && rm #{file_shared_path}')
end