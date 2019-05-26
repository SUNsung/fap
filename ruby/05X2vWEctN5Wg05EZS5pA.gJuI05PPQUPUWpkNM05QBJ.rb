
        
        module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
                  EM.start_server(
                opts['host'],
                opts['livereload_port'],
                HttpAwareConnection,
                opts
              ) do |ws|
                handle_websockets_event(ws)
              end
    
        def order_top_with_notification_levels(score)
      -'COALESCE(topic_users.notification_level, 1) DESC, COALESCE(category_users.notification_level, 1) DESC, COALESCE(top_topics.#{score}, 0) DESC, topics.bumped_at DESC'
    end
    
    # == Schema Information
#
# Table name: application_requests
#
#  id       :integer          not null, primary key
#  date     :date             not null
#  req_type :integer          not null
#  count    :integer          default(0), not null
#
# Indexes
#
#  index_application_requests_on_date_and_req_type  (date,req_type) UNIQUE
#

    
        if env['REQUEST_METHOD'] == ('OPTIONS') && env['HTTP_ACCESS_CONTROL_REQUEST_METHOD']
      return [200, Discourse::Cors.apply_headers(cors_origins, env, {}), []]
    end
    
      def self.headings
    @headings ||= [:likes_received,
                   :likes_given,
                   :topics_entered,
                   :topic_count,
                   :post_count,
                   :posts_read,
                   :days_visited]
  end
    
    class Draft < ActiveRecord::Base
  NEW_TOPIC ||= 'new_topic'
  NEW_PRIVATE_MESSAGE ||= 'new_private_message'
  EXISTING_TOPIC ||= 'topic_'
    
          theme_ids = env[:resolved_theme_ids]
      headers['Content-Security-Policy'] = policy(theme_ids) if SiteSetting.content_security_policy
      headers['Content-Security-Policy-Report-Only'] = policy(theme_ids) if SiteSetting.content_security_policy_report_only
    
      def set_cache_control_headers
    if Rails.env.development?
      response.headers['Last-Modified'] = Time.zone.now.httpdate
      immutable_for(1.second)
    else
      response.headers['Last-Modified'] = last_modified.httpdate if last_modified
      immutable_for(1.year)
    end
  end
end

    
        no_cookies
    
      def hub_topic_uri
    @_hub_topic_uri ||= Addressable::URI.parse(hub_topic).normalize
  end
    
      def request_locale
    preferred_locale || compatible_locale
  end
    
          post_install_messages.compact.each do |message|
        PluginManager.ui.info(message)
      end
    
    @@ layout
<html>
  <head>
    <title>Sinatra + Sidekiq</title>
    <body>
      <%= yield %>
    </body>
</html>
    
    chdir APP_ROOT do
  # This script is a starting point to setup your application.
  # Add necessary setup steps to this file.
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
    desc 'Move source to source.old, install source theme updates, replace source/_includes/navigation.html with source.old's navigation'
task :update_source, :theme do |t, args|
  theme = args.theme || 'classic'
  if File.directory?('#{source_dir}.old')
    puts '## Removed existing #{source_dir}.old directory'
    rm_r '#{source_dir}.old', :secure=>true
  end
  mkdir '#{source_dir}.old'
  cp_r '#{source_dir}/.', '#{source_dir}.old'
  puts '## Copied #{source_dir} into #{source_dir}.old/'
  cp_r '#{themes_dir}/'+theme+'/source/.', source_dir, :remove_destination=>true
  cp_r '#{source_dir}.old/_includes/custom/.', '#{source_dir}/_includes/custom/', :remove_destination=>true
  cp '#{source_dir}.old/favicon.png', source_dir
  mv '#{source_dir}/index.html', '#{blog_index_dir}', :force=>true if blog_index_dir != source_dir
  cp '#{source_dir}.old/index.html', source_dir if blog_index_dir != source_dir && File.exists?('#{source_dir}.old/index.html')
  puts '## Updated #{source_dir} ##'
end