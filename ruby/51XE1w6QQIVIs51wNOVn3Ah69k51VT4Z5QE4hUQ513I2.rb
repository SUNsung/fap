
        
        Benchmark.ips do |x|
  [true, false].each do |sanitize|
    tests.each do |test, text|
      x.report('#{test} sanitize: #{sanitize}') do
        PrettyText.markdown(text, sanitize: sanitize)
      end
    end
  end
    
    profile do
  SiteSetting.title = SecureRandom.hex
end

    
        users = psql_query <<-SQL
      SELECT u.user_id, u.username, u.user_email, u.user_regdate, u.user_lastvisit, u.user_ip,
        u.user_type, u.user_inactive_reason, g.group_id, g.group_name, b.ban_start, b.ban_end, b.ban_reason,
        u.user_posts, u.user_website, u.user_from, u.user_birthday, u.user_avatar_type, u.user_avatar
      FROM #{TABLE_PREFIX}users u
        LEFT OUTER JOIN #{TABLE_PREFIX}groups g ON (g.group_id = u.group_id)
        LEFT OUTER JOIN #{TABLE_PREFIX}banlist b ON (
          u.user_id = b.ban_userid AND b.ban_exclude = 0 AND
          b.ban_end = 0
        )
      WHERE u.user_id > #{@last_imported_user_id}
      ORDER BY u.user_id
    SQL
    
          {
        imported_id: row[0] + PRIVATE_OFFSET,
        topic_id: topic_id,
        user_id: user_id_from_imported_id(row[2]),
        created_at: Time.zone.at(row[4]),
        raw: normalize_text(row[5]),
      }
    end
  end
    
      def alive?(pid)
    Process.kill(0, pid)
    true
  rescue
    false
  end
    
    diff.group_by do |x|
  [x['type'], x['file'], x['line']]
end.map { |x, y|
  [x, y.count]
}.sort { |a, b|
  b[1] <=> a[1]
}.each { |x, y|
  puts 'Leaked #{y} #{x[0]} objects at: #{x[1]}:#{x[2]}'
}

    
        batches(BATCH_SIZE) do |offset|
      posts = @client.exec(<<-SQL
          SELECT A.id, A.author_id, A.added_at, A.text, A.thread_id, B.title
            FROM askbot_post A
            JOIN askbot_thread B
              ON A.thread_id = B.id
           WHERE NOT B.closed AND A.post_type <> 'question'
        ORDER BY A.added_at
          LIMIT #{BATCH_SIZE}
          OFFSET #{offset}
      SQL
      )
    
                    next
              end[0]
    
        # 'Nodes' in Drupal are divided into types. Here we import two types,
    # and will later import all the comments/replies for each node.
    # You will need to figure out what the type names are on your install and edit the queries to match.
    if ENV['DRUPAL_IMPORT_BLOG']
      create_blog_topics
    end
    
          command :create do |c|
        c.syntax = 'fastlane cert create'
        c.description = 'Create new iOS code signing certificates'
    
          # Use the signing request to create a new distribution certificate
      begin
        certificate = certificate_type.create!(csr: csr)
      rescue => ex
        type_name = (Cert.config[:development] ? 'Development' : 'Distribution')
        if ex.to_s.include?('You already have a current')
          UI.user_error!('Could not create another #{type_name} certificate, reached the maximum number of available #{type_name} certificates.', show_github_issues: true)
        elsif ex.to_s.include?('You are not allowed to perform this operation.') && type_name == 'Distribution'
          UI.user_error!('You do not have permission to create this certificate. Only Team Admins can create Distribution certificates\n 🔍 See https://developer.apple.com/library/content/documentation/IDEs/Conceptual/AppDistributionGuide/ManagingYourTeam/ManagingYourTeam.html for more information.')
        end
        raise ex
      end
    
          expect(Security::InternetPassword).to receive(:find).with(server: 'deliver.felix@krausefx.com').and_return(dummy)
      expect(c.password).to eq('Yeah! Pass!')
      ENV.delete('FASTLANE_USER')
      ENV.delete('FASTLANE_PASSWORD')
    end
    
          devices.each do |device_type, array|
        array.each do |resolution|
          if skip_landscape
            if size[0] == (resolution[0]) && size[1] == (resolution[1]) # portrait
              return device_type
            end
          else
            if (size[0] == (resolution[0]) && size[1] == (resolution[1])) || # portrait
               (size[1] == (resolution[0]) && size[0] == (resolution[1])) # landscape
              return device_type
            end
          end
        end
      end
    
          options[:app_identifier] = identifier if identifier.to_s.length > 0
      options[:app_identifier] ||= UI.input('The Bundle Identifier of your App: ')
    rescue => ex
      UI.error('#{ex.message}\n#{ex.backtrace.join('\n')}')
      UI.user_error!('Could not infer your App's Bundle Identifier')
    end
    
      def update
    if @broadcast_message.update(broadcast_message_params)
      redirect_to admin_broadcast_messages_path, notice: 'Broadcast Message was successfully updated.'
    else
      render :edit
    end
  end
    
        respond_to do |format|
      format.html { redirect_to admin_deploy_keys_path, status: 302 }
      format.json { head :ok }
    end
  end
    
      before_action :hook_logs, only: :edit
    
      private
    
        Gitlab::AppLogger.info('User #{impersonator.username} has stopped impersonating #{original_user.username}')
    
        respond_to do |format|
      format.html
      format.json do
        render json: {
          html: view_to_html_string('admin/projects/_projects', locals: { projects: @projects })
        }
      end
    end
  end
    
      skip_before_action :authenticate_user!, only: [:users, :award_emojis]
  before_action :load_project, only: [:users]
  before_action :load_group, only: [:users]
    
      protected
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end