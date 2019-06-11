
        
              headers['Access-Control-Allow-Origin'] = origin || cors_origins[0]
      headers['Access-Control-Allow-Headers'] = 'Content-Type, Cache-Control, X-Requested-With, X-CSRF-Token, Discourse-Visible, User-Api-Key, User-Api-Client-Id'
      headers['Access-Control-Allow-Credentials'] = 'true'
      headers['Access-Control-Allow-Methods'] = 'POST, PUT, GET, OPTIONS, DELETE'
    end
    
        it 'no-ops on invalid values' do
      previous = builder.build
    
        # remove old drafts
    delete_drafts_older_than_n_days = SiteSetting.delete_drafts_older_than_n_days.days.ago
    Draft.where('updated_at < ?', delete_drafts_older_than_n_days).destroy_all
  end
    
        def clear_theme_extensions_cache!
      cache.clear
    end
    
        def html_response?(headers)
      headers['Content-Type'] && headers['Content-Type'] =~ /html/
    end
  end
end

    
      describe 'worker-src' do
    it 'always has self and blob' do
      worker_srcs = parse(policy)['worker-src']
      expect(worker_srcs).to eq(%w[
        'self'
        blob:
      ])
    end
  end
    
      def self.update_first_unread(last_seen, limit: 10_000)
    DB.exec(<<~SQL, min_date: last_seen, limit: limit, now: 10.minutes.ago)
      UPDATE user_stats us
      SET first_unread_at = COALESCE(Y.min_date, :now)
      FROM (
        SELECT u1.id user_id,
           X.min min_date
        FROM users u1
        LEFT JOIN
          (SELECT u.id AS user_id,
                  min(topics.updated_at) min
           FROM users u
           LEFT JOIN topic_users tu ON tu.user_id = u.id
           LEFT JOIN topics ON tu.topic_id = topics.id
           JOIN user_stats AS us ON us.user_id = u.id
           JOIN user_options AS uo ON uo.user_id = u.id
           JOIN categories c ON c.id = topics.category_id
           WHERE u.id IN (
               SELECT id
               FROM users
               WHERE last_seen_at IS NOT NULL
                AND last_seen_at > :min_date
                ORDER BY last_seen_at DESC
                LIMIT :limit
              )
             AND topics.archetype <> 'private_message'
             AND (('topics'.'deleted_at' IS NULL
                   AND tu.last_read_post_number < CASE
                                                      WHEN u.admin
                                                           OR u.moderator THEN topics.highest_staff_post_number
                                                      ELSE topics.highest_post_number
                                                  END
                   AND COALESCE(tu.notification_level, 1) >= 2)
                  OR (1=0))
             AND (topics.visible
                  OR u.admin
                  OR u.moderator)
             AND topics.deleted_at IS NULL
             AND (NOT c.read_restricted
                  OR u.admin
                  OR category_id IN
                    (SELECT c2.id
                     FROM categories c2
                     JOIN category_groups cg ON cg.category_id = c2.id
                     JOIN group_users gu ON gu.user_id = u.id
                     AND cg.group_id = gu.group_id
                     WHERE c2.read_restricted ))
             AND NOT EXISTS
               (SELECT 1
                FROM category_users cu
                WHERE last_read_post_number IS NULL
                  AND cu.user_id = u.id
                  AND cu.category_id = topics.category_id
                  AND cu.notification_level = 0)
           GROUP BY u.id,
                    u.username) AS X ON X.user_id = u1.id
        WHERE u1.id IN
            (
             SELECT id
             FROM users
             WHERE last_seen_at IS NOT NULL
              AND last_seen_at > :min_date
              ORDER BY last_seen_at DESC
              LIMIT :limit
            )
      ) Y
      WHERE Y.user_id = us.user_id
    SQL
  end
    
            # Parses the options given an OptionParser instance.
        #
        # This is a convenience method that properly handles duping the
        # originally argv array so that it is not destroyed.
        #
        # This method will also automatically detect '-h' and '--help'
        # and print help. And if any invalid options are detected, the help
        # will be printed, as well.
        #
        # If this method returns `nil`, then you should assume that help
        # was printed and parsing failed.
        def parse_options(opts=nil)
          # Creating a shallow copy of the arguments so the OptionParser
          # doesn't destroy the originals.
          argv = @argv.dup
    
    group :development do
  cp_gem 'claide',                'CLAide'
  cp_gem 'cocoapods-core',        'Core'
  cp_gem 'cocoapods-deintegrate', 'cocoapods-deintegrate'
  cp_gem 'cocoapods-downloader',  'cocoapods-downloader'
  cp_gem 'cocoapods-plugins',     'cocoapods-plugins'
  cp_gem 'cocoapods-search',      'cocoapods-search'
  cp_gem 'cocoapods-stats',       'cocoapods-stats'
  cp_gem 'cocoapods-trunk',       'cocoapods-trunk'
  cp_gem 'cocoapods-try',         'cocoapods-try'
  cp_gem 'molinillo',             'Molinillo'
  cp_gem 'nanaimo',               'Nanaimo'
  cp_gem 'xcodeproj',             'Xcodeproj'