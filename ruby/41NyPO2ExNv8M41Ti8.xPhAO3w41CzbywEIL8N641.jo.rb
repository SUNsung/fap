      def test_missing_helper_error_has_the_right_path
        e = assert_raise(AbstractController::Helpers::MissingHelperError) { AbstractInvalidHelpers.helper(:missing) }
        assert_equal 'helpers/missing_helper.rb', e.path
      end
    end
  end
end

    
      include CachedCounting
    
      def report
    @report ||= JSON.parse(request.body.read)['csp-report'].slice(
      'blocked-uri',
      'disposition',
      'document-uri',
      'effective-directive',
      'original-policy',
      'referrer',
      'script-sample',
      'status-code',
      'violated-directive',
      'line-number',
      'source-file'
    )
  end
    
    end

    
        user_id = opts[:user].id
    offset = (opts[:offset] || 0).to_i
    limit = (opts[:limit] || 30).to_i
    
          script_srcs = parse(policy)['script-src']
      expect(script_srcs).to include('https://www.google-analytics.com/analytics.js')
      expect(script_srcs).to include('https://www.googletagmanager.com/gtm.js')
    end
    
    
end
end
end

    
                checksum = OpenSSL::HMAC.digest('MD5', k1, data_encrypt)
    
        execute 'INSERT INTO share_visibilities (user_id, shareable_id, shareable_type) ' \
            'SELECT post_visibility.user_id, photos.id, 'Photo' FROM photos ' \
            'INNER JOIN posts ON posts.guid = photos.status_message_guid AND posts.type = 'StatusMessage' ' \
            'LEFT OUTER JOIN share_visibilities ON share_visibilities.shareable_id = photos.id ' \
            'INNER JOIN share_visibilities AS post_visibility ON post_visibility.shareable_id = posts.id ' \
            'WHERE photos.public = false AND share_visibilities.shareable_id IS NULL ' \
            'AND post_visibility.shareable_type = 'Post''
  end
    
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
    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
      describe '#update' do
    context 'on a post you can see' do
      before do
        sign_in(bob, scope: :user)
      end
    
    describe StreamsController, :type => :controller do
  include_context :gon