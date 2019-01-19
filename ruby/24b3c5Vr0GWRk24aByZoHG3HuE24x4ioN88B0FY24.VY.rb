
        
            def log_processing(name)
      puts yellow '  #{File.basename(name)}'
    end
    
      def test_font_helper_without_suffix
    assert_match %r(url\(['']?/assets/.*eot['']?\)), @css
  end