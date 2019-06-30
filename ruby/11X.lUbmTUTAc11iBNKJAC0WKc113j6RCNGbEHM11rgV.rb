
        
              def test_declare_missing_helper
        e = assert_raise AbstractController::Helpers::MissingHelperError do
          AbstractHelpers.helper :missing
        end
        assert_equal 'helpers/missing_helper.rb', e.path
      end
    
              @scrolls.each do |scroll|
            feed.entry(scroll) do |entry|
              entry.title(scroll.title)
              entry.content(scroll.body, :type => 'html')
              entry.tag!('app:edited', Time.now)