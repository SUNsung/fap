
        
        module Docs
  class Subscriber < ActiveSupport::Subscriber
    cattr_accessor :namespace
    
            css('.multi-line-signature').each do |node|
          node.name = 'pre'
          node.content = node.content.strip
        end
    
          private
    
      def up_down(change)
    change.up do
      Mention.update_all(mentions_container_type: 'Post')
      change_column :mentions, :mentions_container_type, :string, null: false
      Notification.where(type: 'Notifications::Mentioned').update_all(type: 'Notifications::MentionedInPost')
    end
    
        describe 'other streams' do
      it 'redirects to the login page' do
        %i[activity followed_tags liked mentioned multi].each do |stream_path|
          get stream_path
          expect(response).to be_redirect
          expect(response).to redirect_to new_user_session_path
        end
      end
    end
  end
end
