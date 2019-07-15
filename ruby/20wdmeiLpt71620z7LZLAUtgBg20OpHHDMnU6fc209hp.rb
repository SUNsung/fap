
        
            ShareVisibility.joins('INNER JOIN photos ON photos.id = share_visibilities.shareable_id')
                   .where(shareable_type: 'Photo', photos: {public: true}).delete_all
    
      def up_down(change)
    change.up do
      Mention.update_all(mentions_container_type: 'Post')
      change_column :mentions, :mentions_container_type, :string, null: false
      Notification.where(type: 'Notifications::Mentioned').update_all(type: 'Notifications::MentionedInPost')
    end
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
        it 'generates a jasmine fixture', :fixture => true do
      get :bookmarklet
      save_fixture(html_for('body'), 'bookmarklet')
    end
    
      describe '#create' do
    it 'redirects to /stream for a non-mobile user' do
      post :create, params: {user: {remember_me: '0', username: @user.username, password: 'evankorth'}}
      expect(response).to be_redirect
      expect(response.location).to match /^#{stream_url}\??$/
    end
    
      describe '#update' do
    context 'on a post you can see' do
      before do
        sign_in(bob, scope: :user)
      end