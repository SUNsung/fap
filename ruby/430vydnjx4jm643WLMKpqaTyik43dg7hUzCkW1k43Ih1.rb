
        
              def process_response(response)
        super.merge! response_url: response.url
      end
    end
  end
end

    
            name = name.split(':').first
    
      # staged_path not available in Installer/Uninstall Stanza, workaround by nesting with preflight/postflight
  # see https://github.com/Homebrew/homebrew-cask/pull/8887
  # and https://github.com/Homebrew/homebrew-cask-versions/pull/296
    
      # Generate digests for assets URLs.
  config.assets.digest = true
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end