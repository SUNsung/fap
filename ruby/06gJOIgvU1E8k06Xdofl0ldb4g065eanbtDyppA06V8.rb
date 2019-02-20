
        
              spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
        def log_processing(name)
      puts yellow '  #{File.basename(name)}'
    end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
        context 'on my own post' do
      it 'succeeds' do
        @target = alice.post :status_message, text: 'AWESOME', to: @alices_aspect.id
        post :create, params: like_hash, format: :json
        expect(response.code).to eq('201')
      end
    end
    
          it 'returns reshares without login' do
        bob.reshare!(@post)
        sign_out :user
        get :index, params: {post_id: @post.id}, format: :json
        expect(JSON.parse(response.body).map {|h| h['id'] }).to match_array(@post.reshares.map(&:id))
      end
    end
  end
end

    
    desc 'Runs all tests in all Spree engines'
task test: :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rspec'
    end
  end
end