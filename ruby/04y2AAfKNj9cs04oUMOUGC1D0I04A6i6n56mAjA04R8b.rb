
        
            describe 'watching' do
      it 'does notify watching users of new posts' do
        post = PostAlerter.post_created(Fabricate(:post, post_args))
        user2 = Fabricate(:coding_horror)
        post_args[:topic].notify_watch!(user2)
        expect {
          PostAlerter.post_created(Fabricate(:post, user: post.user, topic: post.topic))
        }.to change(user2.notifications, :count).by(1)
      end
    end
    
    class FixPhotosShareVisibilities < ActiveRecord::Migration[4.2]
  class Photo < ApplicationRecord
  end
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end
