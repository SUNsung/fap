
        
              it 'calls errors.add' do
        expect(errors).to have_received(:add).with(attribute, I18n.t('applications.invalid_url'))
      end
    end
    
          context 'limit_reached?' do
        let(:limit_reached) { true }
    
            it 'does notify' do
          is_expected.to change(Notification, :count)
        end
      end
    end
    
      def refresh_poll
    ActivityPub::FetchRemotePollService.new.call(@poll, current_account) if user_signed_in? && @poll.possibly_stale?
  end
end

    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
      describe 'PUT blocks' do
    it 'updates block from input data' do
      block = create(:block, user_id: user.id, input_css: '.blue { color: blue;}')
      put '/blocks/#{block.id}', params: {
        block: { input_css: '.blue { color: red;}',
                 input_html: 'yo',
                 input_javascript: 'alert('hey')' }
      }
      expect(Block.last.processed_css).to include('color: red')
    end
  end
    
      it 'renders a user index if there is a user with the username successfully' do
    expect(get: '/#{user.username}').to route_to(
      controller: 'stories',
      action: 'index',
      username: user.username,
    )
  end
    
    When /^I configure the application to use '([^\']+)'$/ do |gem_name|
  append_to_gemfile 'gem '#{gem_name}''
end
    
    After do
  ORIGINAL_BUNDLE_VARS.each_pair do |key, value|
    ENV[key] = value
  end
end
    
        def self.names_for(klass)
      instance.names_for(klass)
    end
    
        def define
      define_flush_errors
      define_getters
      define_setter
      define_query
      register_new_attachment
      add_active_record_callbacks
      add_paperclip_callbacks
      add_required_validations
    end