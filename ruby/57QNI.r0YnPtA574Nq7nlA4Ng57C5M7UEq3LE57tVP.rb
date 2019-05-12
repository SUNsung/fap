
        
            ShareVisibility.joins('INNER JOIN photos ON photos.id = share_visibilities.shareable_id')
                   .where(shareable_type: 'Photo', photos: {public: true}).delete_all
    
    class PolymorphicMentions < ActiveRecord::Migration[4.2]
  def change
    remove_index :mentions, column: %i(post_id)
    remove_index :mentions, column: %i(person_id post_id), unique: true
    rename_column :mentions, :post_id, :mentions_container_id
    add_column :mentions, :mentions_container_type, :string
    add_index :mentions,
              %i(mentions_container_id mentions_container_type),
              name:   'index_mentions_on_mc_id_and_mc_type',
              length: {mentions_container_type: 191}
    add_index :mentions,
              %i(person_id mentions_container_id mentions_container_type),
              name:   'index_mentions_on_person_and_mc_id_and_mc_type',
              length: {mentions_container_type: 191},
              unique: true
    
        it 'generates the aspects_manage_contacts_json fixture', fixture: true do
      # adds one not mutual contact
      bob.share_with(FactoryGirl.create(:person), @aspect)
    
          sign_in alice, scope: :user
    end
    
        before do
      @post = FactoryGirl.create(:status_message, :public => true)
      @post_guid = @post.guid
    end
    
      before do
    @request.env['devise.mapping'] = Devise.mappings[:user]
    @user = alice
    @user.password = 'evankorth'
    @user.password_confirmation = 'evankorth'
    @user.save
  end
    
          it 'raises an error' do
        expect {
          put :update, params: {id: 42, post_id: @status.id}, format: :js
        }.to raise_error ActiveRecord::RecordNotFound
      end
    
      context 'with a logged in user' do
    before do
      sign_in alice
    end