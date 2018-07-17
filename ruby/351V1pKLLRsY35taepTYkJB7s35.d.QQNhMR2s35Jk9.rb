
        
          def tumblr_consumer_secret
    ENV['TUMBLR_OAUTH_SECRET']
  end
    
      context 'symmetrical style' do
    let(:cop_config) { { 'EnforcedStyle' => 'symmetrical' } }