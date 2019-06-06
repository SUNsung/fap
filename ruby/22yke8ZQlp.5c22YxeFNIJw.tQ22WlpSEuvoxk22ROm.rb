
        
                SiteSetting.enable_markdown_linkify = false
        cooked = PrettyText.markdown(md, sanitize: false)
        cooked.strip!
        cooked.gsub!(' class=\'lang-auto\'', '')
        cooked.gsub!(/<span class='hashtag'>(.*)<\/span>/, '\\1')
        # we don't care about this
        cooked.gsub!('<blockquote>\n</blockquote>', '<blockquote></blockquote>')
        html.gsub!('<blockquote>\n</blockquote>', '<blockquote></blockquote>')
        html.gsub!('language-ruby', 'lang-ruby')
        # strip out unsupported languages
        html.gsub!(/ class='language-[;f].*'/, '')
    
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
    
      def report_collection_enabled?
    SiteSetting.content_security_policy_collect_reports
  end
end

    
          script_srcs = parse(builder.build)['script-src']
    
    # == Schema Information
#
# Table name: drafts
#
#  id         :integer          not null, primary key
#  user_id    :integer          not null
#  draft_key  :string           not null
#  data       :text             not null
#  created_at :datetime         not null
#  updated_at :datetime         not null
#  sequence   :integer          default(0), not null
#  revisions  :integer          default(1), not null
#
# Indexes
#
#  index_drafts_on_user_id_and_draft_key  (user_id,draft_key)
#

    
          @directives[directive] ||= []
    
        Extension.theme_extensions(theme_ids).each { |extension| builder << extension }
    Extension.plugin_extensions.each { |extension| builder << extension }
    builder << Extension.site_setting_extension
    
        # this is only required for NGINX X-SendFile it seems
    response.headers['Content-Length'] = File.size(cache_file).to_s
    set_cache_control_headers
    send_file(cache_file, disposition: :inline)
  end
    
        where('rotated_at < :time',
          time: SiteSetting.maximum_session_age.hours.ago - ROTATE_TIME).delete_all
    
    describe ApplicationHelper do
  describe '#icon_tag' do
    it 'returns a Glyphicon icon element' do
      icon = icon_tag('glyphicon-help')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help')).to be_a Nokogiri::XML::Element
    end
    
      describe '#relative_distance_of_time_in_words' do
    it 'in the past' do
      expect(relative_distance_of_time_in_words(Time.now-5.minutes)).to eq('5m ago')
    end
    
      describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
    
      it 'replaces invalid byte sequences in a message' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), level: 3)
    log.message = '\u{3042}\xffA\x95'
    expect { log.save! }.not_to raise_error
    expect(log.message).to eq('\u{3042}<ff>A\<95>')
  end
    
    class Converter
  extend Forwardable
  include Network
  include LessConversion
  include JsConversion
  include FontsConversion
    
        def log_file_info(s)
      puts '    #{magenta s}'
    end
    
      # Set to :debug to see everything in the log.
  config.log_level = :info
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
        def logstash_gem_home
      ::File.join(BUNDLE_DIR, ruby_engine, gem_ruby_version)
    end
    
        class Main < Clamp::Command
      subcommand 'list', 'List all installed Logstash plugins', LogStash::PluginManager::List
      subcommand 'install', 'Install a Logstash plugin', LogStash::PluginManager::Install
      subcommand 'remove', 'Remove a Logstash plugin', LogStash::PluginManager::Remove
      subcommand 'update', 'Update a plugin', LogStash::PluginManager::Update
      subcommand 'pack', 'Package currently installed plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Pack
      subcommand 'unpack', 'Unpack packaged plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Unpack
      subcommand 'generate', 'Create the foundation for a new plugin', LogStash::PluginManager::Generate
      subcommand 'uninstall', 'Uninstall a plugin. Deprecated: Please use remove instead', LogStash::PluginManager::Remove
      subcommand 'prepare-offline-pack', 'Create an archive of specified plugins to use for offline installation', LogStash::PluginManager::PrepareOfflinePack
    end
  end
end
    
      def execute
    signal_deprecation_warning_for_pack
    
        # any errors will be logged to $stderr by invoke!
    # Bundler cannot update and clean gems in one operation so we have to call the CLI twice.
    options = {:update => plugins, :rubygems_source => gemfile.gemset.sources}
    options[:local] = true if local?
    output = LogStash::Bundler.invoke!(options)
    # We currently dont removed unused gems from the logstash installation
    # see: https://github.com/elastic/logstash/issues/6339
    # output = LogStash::Bundler.invoke!(:clean => true)
    display_updated_plugins(previous_gem_specs_map)
  rescue => exception
    gemfile.restore!
    report_exception('Updated Aborted', exception)
  ensure
    display_bundler_output(output)
  end
    
          options = {:debug => ENV['LS_QA_DEBUG']}
      puts 'Destroying #{machines}'
      LogStash::VagrantHelpers.destroy(machines, options)
      puts 'Bootstrapping #{machines}'
      LogStash::VagrantHelpers.bootstrap(machines, options)
    end
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end
    
      puts '\n== Restarting application server =='
  system! 'bin/rails restart'
end

    
      # Use a different cache store in production.
  # config.cache_store = :mem_cache_store