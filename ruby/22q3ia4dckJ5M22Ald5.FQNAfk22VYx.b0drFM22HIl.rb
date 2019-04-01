
        
                  content_is_options = content_or_options.is_a?(Hash)
          if content_is_options
            options.merge! content_or_options
            @content = nil
          else
            @content = content_or_options
          end
    
            def ==(type)
          @symbol == type.to_sym unless type.blank?
        end
      end
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
    When /^I (?:sign|log) in manually as '([^']*)' with password '([^']*)'( on the mobile website)?$/ \
do |username, password, mobile|
  @me = User.find_by_username(username)
  @me.password ||= password
  manual_login
  confirm_login mobile
end
    
          delete :destroy, params: {post_id: @message.id, id: like2.id}, format: :json
      expect(response.status).to eq(404)
      expect(response.body).to eq(I18n.t('likes.destroy.error'))
      expect(Like.count).to eq(like_count)
    end
  end
end
