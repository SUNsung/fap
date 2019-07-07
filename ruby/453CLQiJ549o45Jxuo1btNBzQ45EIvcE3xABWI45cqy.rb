
        
            def pause
      stop!
      @paused = true
    end
    
      def initialize(app, options = nil)
    @app = app
    if GlobalSetting.enable_cors && GlobalSetting.cors_origin.present?
      @global_origins = GlobalSetting.cors_origin.split(',').map(&:strip)
    end
  end
    
    module HighlightJs
  HIGHLIGHTJS_DIR ||= '#{Rails.root}/vendor/assets/javascripts/highlightjs/'
    
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
    
          if api_key.user
        api_key.user if !api_username || (api_key.user.username_lower == api_username.downcase)
      elsif api_username
        User.find_by(username_lower: api_username.downcase)
      elsif user_id = header_api_key? ? @env[HEADER_API_USER_ID] : request['api_user_id']
        User.find_by(id: user_id.to_i)
      elsif external_id = header_api_key? ? @env[HEADER_API_USER_EXTERNAL_ID] : request['api_user_external_id']
        SingleSignOnRecord.find_by(external_id: external_id.to_s).try(:user)
      end
    end
  end
    
    class AdminUserIndexQuery
    
    module Gitlab
  module GithubImport
    module Importer
      class DiffNotesImporter
        include ParallelScheduling
    
              issue.label_names.each do |label_name|
            # Although unlikely it's technically possible for an issue to be
            # given a label that was created and assigned after we imported all
            # the project's labels.
            next unless (label_id = label_finder.id_for(label_name))
    
              sidekiq_worker_class
            .perform_async(project.id, repr.to_hash, waiter.key)
    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end
