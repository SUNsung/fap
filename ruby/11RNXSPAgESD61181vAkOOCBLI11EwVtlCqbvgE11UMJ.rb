
        
            puts 'Your system is ready to brew.' unless Homebrew.failed?
  end
end

    
      DATA = :DATA
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
    Given /^I have been invited by '([^\']+)'$/ do |email|
  AppConfig.settings.enable_registrations = false
  @inviter = User.find_by_email(email)
  @inviter_invite_count = @inviter.invitation_code.count
  i = EmailInviter.new('new_invitee@example.com', @inviter)
  i.send!
end
    
    require 'coveralls'
Coveralls.wear!('rails')
    
      class SendPrivate < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
        context 'on my own post' do
      it 'succeeds' do
        @target = alice.post :status_message, text: 'AWESOME', to: @alices_aspect.id
        post :create, params: like_hash, format: :json
        expect(response.code).to eq('201')
      end
    end