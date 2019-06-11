
        
            def order_by_category_sql(dir)
      -'CASE WHEN categories.id = #{SiteSetting.uncategorized_category_id.to_i} THEN '' ELSE categories.name END #{dir}'
    end
    
    describe ContentSecurityPolicy::Builder do
  let(:builder) { described_class.new }
    
        # remove old drafts
    delete_drafts_older_than_n_days = SiteSetting.delete_drafts_older_than_n_days.days.ago
    Draft.where('updated_at < ?', delete_drafts_older_than_n_days).destroy_all
  end
    
        def script_assets(base = base_url, s3_cdn = GlobalSetting.s3_cdn_url, cdn = GlobalSetting.cdn_url)
      SCRIPT_ASSET_DIRECTORIES.map do |dir, can_use_s3_cdn, can_use_cdn|
        if can_use_s3_cdn && s3_cdn
          s3_cdn + dir
        elsif can_use_cdn && cdn
          cdn + dir
        else
          base + dir
        end
      end
    end
    
        langs.sort
  end
    
        Extension.theme_extensions(theme_ids).each { |extension| builder << extension }
    Extension.plugin_extensions.each { |extension| builder << extension }
    builder << Extension.site_setting_extension
    
        def site_setting_extension
      { script_src: SiteSetting.content_security_policy_script_src.split('|') }
    end
    
      def show
    raise Discourse::NotFound unless last_modified.present?
    return render body: nil, status: 304 if not_modified?
    
      def update_time_read!
    UserStat.update_time_read!(id)
  end
    
          @env[USER_API_KEY_ENV] = true
    end
    
          def cache_key_iid
        if object.respond_to?(:noteable_id)
          object.noteable_id
        elsif object.respond_to?(:iid)
          object.iid
        else
          raise(
            TypeError,
            'Instances of #{object.class} are not supported'
          )
        end
      end
    end
  end
end

    
          def action_for_grape(env)
        endpoint = env[ENDPOINT_KEY]
        route = endpoint.route rescue nil
    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
    end

    
        it 'strips punctuation' do
      expect(AgentsExporter.new(:name => 'foo,bar').filename).to eq('foo-bar.json')
    end
    
          expect(@scheduler.scheduler_agent_jobs.map(&:scheduler_agent)).to eq([@agent1])
    end
  end
end

    
        it 'should revert extract and template options for an updated WebsiteAgent' do
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
      ConvertWebsiteAgentTemplateForMerge.new.down
      agent.reload
      expect(agent.options).to include('extract' => reverted_extract,
                                       'template' => reverted_template)
    end
  end
end

    
            @user.send_confirmation_instructions
      end
    
      def maxheight_or_default
    params[:maxheight].present? ? params[:maxheight].to_i : nil
  end
end

    
          if @user.persisted?
        sign_in_and_redirect @user, event: :authentication
        set_flash_message(:notice, :success, kind: provider_id.capitalize) if is_navigational_format?
      else
        session['devise.#{provider}_data'] = request.env['omniauth.auth']
        redirect_to new_user_registration_url
      end
    end
  end
    
      def set_locale
    I18n.locale = default_locale
    I18n.locale = current_user.locale if user_signed_in?
  rescue I18n::InvalidLocale
    I18n.locale = default_locale
  end