
        
            context 'a private message' do
      it 'doesn't increase unread_notifications' do
        expect { Fabricate(:private_message_notification, user: user); user.reload }.not_to change(user, :unread_notifications)
      end
    
    User.seed do |u|
  u.id = -1
  u.name = 'system'
  u.username = 'system'
  u.username_lower = 'system'
  u.password = SecureRandom.hex
  u.active = true
  u.admin = true
  u.moderator = true
  u.approved = true
  u.trust_level = TrustLevel[4]
end