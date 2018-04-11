
        
          def test_url_redirect_with_status_hash
    get :url_redirect_with_status_hash
    assert_response 301
    assert_equal 'http://www.example.com', redirect_to_url
  end
    
        # Set default test helper.
    self.test_helper = LocalAbcHelper
  end
    
    class MyCustomDelivery
end
    
      included do
    include Oauthable