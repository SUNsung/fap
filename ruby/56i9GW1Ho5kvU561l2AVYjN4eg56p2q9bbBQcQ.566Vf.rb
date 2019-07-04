
        
              def test_missing_helper_error_has_the_right_path
        e = assert_raise(AbstractController::Helpers::MissingHelperError) { AbstractInvalidHelpers.helper(:missing) }
        assert_equal 'helpers/missing_helper.rb', e.path
      end
    end
  end
end

    
      def test_feed_entry_type_option_default_to_text_html
    with_restful_routing(:scrolls) do
      get :index, params: { id: 'defaults' }
      assert_select 'entry link[rel=alternate][type=\'text/html\']'
    end
  end
    
      # staged_path not available in Installer/Uninstall Stanza, workaround by nesting with preflight/postflight
  # see https://github.com/Homebrew/homebrew-cask/pull/8887
  # and https://github.com/Homebrew/homebrew-cask-versions/pull/296