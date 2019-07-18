
        
                def test_invert_change_table_comment_with_from_and_to_with_nil
          change = @recorder.inverse_of :change_table_comment, [:table, from: nil, to: 'new_value']
          assert_equal [:change_table_comment, [:table, from: 'new_value', to: nil]], change
        end
      end
    
      def test_valid_uses_create_context_when_new
    r = WrongReply.new
    r.title = 'Wrong Create'
    assert_not_predicate r, :valid?
    assert r.errors[:title].any?, 'A reply with a bad title should mark that attribute as invalid'
    assert_equal ['is Wrong Create'], r.errors[:title], 'A reply with a bad content should contain an error'
  end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        delegate :puts, :print, :tty?, to: :$stdout
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
          # Sign out a given user or scope. This helper is useful for signing out a user
      # after deleting accounts. Returns true if there was a logout and false if there
      # is no user logged in on the referred scope
      #
      # Examples:
      #
      #   sign_out :user     # sign_out(scope)
      #   sign_out @user     # sign_out(resource)
      #
      def sign_out(resource_or_scope=nil)
        return sign_out_all_scopes unless resource_or_scope
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        user = warden.user(scope: scope, run_callbacks: false) # If there is no user
    
        def log_transform(*args, from: caller[1][/`.*'/][1..-2].sub(/^block in /, ''))
      puts '    #{cyan from}#{cyan ': #{args * ', '}' unless args.empty?}'
    end
    
        it 'returns a flare tag if there are 2 flare tags in the list' do
      valid_article = create(:article, tags: %w[ama explainlikeimfive])
      expect(described_class.new(valid_article).tag.name).to eq('explainlikeimfive')
    end
  end
    
      it 'creates channel with users' do
    chat_channel = ChatChannel.create_with_users([create(:user), create(:user)])
    expect(chat_channel.users.size).to eq(2)
    expect(chat_channel.has_member?(User.first)).to eq(true)
  end
    
        it 'shows v1 if article has frontmatter' do
      article = create(:article, user_id: user.id)
      get '#{article.path}/edit'
      expect(response.body).to include('articleform__form--v1')
    end
  end
    
      def self.upbuff!(buffer_update_id, admin_id, body_text, status)
    buffer_update = BufferUpdate.find(buffer_update_id)
    if status == 'confirmed'
      buffer_response = send_to_buffer(body_text, buffer_update.buffer_profile_id_code)
      buffer_update.update!(buffer_response: buffer_response, status: status, approver_user_id: admin_id, body_text: body_text)
    else
      buffer_update.update!(status: status, approver_user_id: admin_id)
    end
  end
    
          time = Time.now.to_f
      Sidekiq.redis do |conn|
        conn.multi do
          conn.sadd('processes', odata['key'])
          conn.hmset(odata['key'], 'info', Sidekiq.dump_json(odata), 'busy', 10, 'beat', time)
          conn.sadd('processes', 'fake:pid')
        end
      end
    
      def options
    { :concurrency => 3, :queues => ['default'] }
  end
    
          msg['locale'] = 'jp'
      I18n.locale = I18n.default_locale
      assert_equal :en, I18n.locale
      mw = Sidekiq::Middleware::I18n::Server.new
      mw.call(nil, msg, nil) do
        assert_equal :jp, I18n.locale
      end
      assert_equal :en, I18n.locale
    end
    
          q = Sidekiq::Queue.new('custom_queue')
      qs = q.size
      assert SomeScheduledWorker.perform_in(-300, 'mike')
      assert_equal 3, ss.size
      assert_equal qs+1, q.size
    
      def perform(idx)
    #raise idx.to_s if idx % 100 == 1
  end
end
    
          # Create an Atom-feed for each index.
      feed = CategoryFeed.new(self, self.source, category_dir, category)
      feed.render(self.layouts, site_payload)
      feed.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << feed
    end