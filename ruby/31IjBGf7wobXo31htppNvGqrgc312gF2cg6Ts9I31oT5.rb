
        
              it 'adds docset_feed_url param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_feed_url: 'http://docset-feed-url.com'
          )
        end').runner.execute(:test)
    
        os = 'windows'
    shelljoin_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        array = testcase['input']
        expect_correct_implementation_to_be_called(array, :shelljoin, os)
        joined = array.shelljoin
        expect(joined).to eq(testcase['expect'][os])
      end
    end
  end
    
      puts '== Installing dependencies =='
  system! 'gem install bundler --conservative'
  system('bundle check') || system!('bundle install')
    
      # Do not eager load code on boot.
  config.eager_load = false
    
        context 'when user does not have access to report' do
      let(:report_id) { 3 }
      
      it { should be false }
    end
  end
end
    
        it { should eq 'foo' }
  end
    
      sub_test_case 'max_per_page' do
    test 'by default' do
      assert_nil Kaminari.config.max_per_page
    end
    test 'configure via config block' do
      begin
        Kaminari.configure {|c| c.max_per_page = 100}
        assert_equal 100, Kaminari.config.max_per_page
      ensure
        Kaminari.configure {|c| c.max_per_page = nil}
      end
    end
  end
    
        # Public: Filename
    #
    # Examples
    #
    #   Blob.new('/path/to/linguist/lib/linguist.rb', '').path
    #   # =>  '/path/to/linguist/lib/linguist.rb'
    #
    # Returns a String
    attr_reader :path
    
            # If the option-list begins with `set ` or `se `, it indicates an alternative
        # modeline syntax partly-compatible with older versions of Vi. Here, the colon
        # serves as a terminator for an option sequence, delimited by whitespace.
        (?=
          # So we have to ensure the modeline ends with a colon
          : (?=[ \t]* set? [ \t] [^\n:]+ :) |