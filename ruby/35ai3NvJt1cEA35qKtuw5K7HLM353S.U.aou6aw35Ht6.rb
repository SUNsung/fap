
        
            def order_nocategory_basic_bumped
      'CASE WHEN topics.pinned_globally AND (topics.pinned_at IS NOT NULL) THEN 0 ELSE 1 END, topics.bumped_at DESC'
    end
    
      def self.redis_key(req_type, time = Time.now.utc)
    'app_req_#{req_type}#{time.strftime('%Y%m%d')}'
  end
    
          # Calculate new values and update records
      #
      #
      # TODO
      # WARNING: post_count is a wrong name, it should be reply_count (excluding topic post)
      #
      DB.exec 'WITH x AS (SELECT
                    u.id user_id,
                    SUM(CASE WHEN p.id IS NOT NULL AND t.id IS NOT NULL AND ua.action_type = :was_liked_type THEN 1 ELSE 0 END) likes_received,
                    SUM(CASE WHEN p.id IS NOT NULL AND t.id IS NOT NULL AND ua.action_type = :like_type THEN 1 ELSE 0 END) likes_given,
                    COALESCE((SELECT COUNT(topic_id) FROM topic_views AS v WHERE v.user_id = u.id AND v.viewed_at > :since), 0) topics_entered,
                    COALESCE((SELECT COUNT(id) FROM user_visits AS uv WHERE uv.user_id = u.id AND uv.visited_at > :since), 0) days_visited,
                    COALESCE((SELECT SUM(posts_read) FROM user_visits AS uv2 WHERE uv2.user_id = u.id AND uv2.visited_at > :since), 0) posts_read,
                    SUM(CASE WHEN t2.id IS NOT NULL AND ua.action_type = :new_topic_type THEN 1 ELSE 0 END) topic_count,
                    SUM(CASE WHEN p.id IS NOT NULL AND t.id IS NOT NULL AND ua.action_type = :reply_type THEN 1 ELSE 0 END) post_count
                  FROM users AS u
                  LEFT OUTER JOIN user_actions AS ua ON ua.user_id = u.id AND COALESCE(ua.created_at, :since) > :since
                  LEFT OUTER JOIN posts AS p ON ua.target_post_id = p.id AND p.deleted_at IS NULL AND p.post_type = :regular_post_type AND NOT p.hidden
                  LEFT OUTER JOIN topics AS t ON p.topic_id = t.id AND t.archetype = 'regular' AND t.deleted_at IS NULL AND t.visible
                  LEFT OUTER JOIN topics AS t2 ON t2.id = ua.target_topic_id AND t2.archetype = 'regular' AND t2.deleted_at IS NULL AND t2.visible
                  LEFT OUTER JOIN categories AS c ON t.category_id = c.id
                  WHERE u.active
                    AND u.silenced_till IS NULL
                    AND u.id > 0
                  GROUP BY u.id)
      UPDATE directory_items di SET
               likes_received = x.likes_received,
               likes_given = x.likes_given,
               topics_entered = x.topics_entered,
               days_visited = x.days_visited,
               posts_read = x.posts_read,
               topic_count = x.topic_count,
               post_count = x.post_count
      FROM x
      WHERE
        x.user_id = di.user_id AND
        di.period_type = :period_type AND (
        di.likes_received <> x.likes_received OR
        di.likes_given <> x.likes_given OR
        di.topics_entered <> x.topics_entered OR
        di.days_visited <> x.days_visited OR
        di.posts_read <> x.posts_read OR
        di.topic_count <> x.topic_count OR
        di.post_count <> x.post_count )
    
        private
    
          return response unless html_response?(headers)
      ContentSecurityPolicy.base_url = request.host_with_port if Rails.env.development?
    
          io = hijack.call
    
    require 'open-uri'
require 'json'
require 'strscan'
require 'forwardable'
require 'term/ansicolor'
require 'fileutils'
    
            fields = object.preferences.keys.map do |key|
          if object.has_preference?(key)
            form.label('preferred_#{key}', Spree.t(key) + ': ') +
              preference_field_for(form, 'preferred_#{key}', type: object.preference_type(key))
          end
        end
        safe_join(fields, '<br />'.html_safe)
      end
    
          def configurations_sidebar_menu_item(link_text, url, options = {})
        is_selected = url.ends_with?(controller.controller_name) ||
          url.ends_with?('#{controller.controller_name}/edit') ||
          url.ends_with?('#{controller.controller_name.singularize}/edit')
    
    desc 'Creates a sandbox application for simulating the Spree code in a deployed Rails app'
task :sandbox do
  Bundler.with_clean_env do
    exec('lib/sandbox.sh')
  end
end

    
              def shipping_rates
            result = shipping_rates_service.call(order: spree_current_order)
    
        def _yaml_root
      File.expand_path(yaml['root']).shellescape if yaml['root']
    end
    
      chain :with_commands do |*expected|
    @commands = expected
  end
  alias_method :and_commands, :with_commands
    
    # Custom Matchers
require_relative 'matchers/pane_matcher'
    
          it 'should load and validate the project' do
        expect(described_class).to receive_messages(directory: fixtures_dir)
        expect(described_class.validate(name: 'sample')).to \
          be_a Tmuxinator::Project
      end
    end
    
      describe '.shell?' do
    context '$SHELL is set' do
      before do
        allow(ENV).to receive(:[]).with('SHELL') { 'vim' }
      end