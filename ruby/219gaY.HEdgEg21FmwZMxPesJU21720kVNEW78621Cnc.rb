
        
            md = <<~MD
      [poll type=multiple]
    
      def shuffle_last_poster_to_back_in(summary)
    unless last_poster_is_topic_creator?
      summary.reject! { |u| u.id == topic.last_post_user_id }
      summary << avatar_lookup[topic.last_post_user_id]
    end
    summary
  end
    
      end
    
        describe 'register_ip_skipper' do
      before do
        Middleware::RequestTracker.register_ip_skipper do |ip|
          ip == '1.1.1.2'
        end
        global_setting :max_reqs_per_ip_per_10_seconds, 1
        global_setting :max_reqs_per_ip_mode, 'block'
      end
    
          override_translation('en', 'throne', '%{title} is the new queen')
      expect(I18n.t('throne', title: 'snow')).to eq('snow is the new queen')
      expect(I18n.with_locale(:en) { I18n.t('throne', title: 'snow') })
        .to eq('snow is the new queen')
    end
    
      def version_required
    if params[:version].blank?
      render_json_error(I18n.t('reviewables.missing_version'), status: 422)
    end
  end
    
          it 'is secure when there are no registered editable fields' do
        Group.plugin_editable_group_custom_fields.clear
        params = group_params
        params[:group].merge!(custom_fields: { test: :hello1, test2: :hello2 })
    
        tag_id = params[:tag_id]
    @link = '#{Discourse.base_url}/tags/#{tag_id}'
    @description = I18n.t('rss_by_tag', tag: tag_id)
    @title = '#{SiteSetting.title} - #{@description}'
    @atom_link = '#{Discourse.base_url}/tags/#{tag_id}.rss'
    
        user = Fabricate(:user)
    post = Fabricate(:post)
    topic = post.topic
    
        # Initiate a re-follow for each follower
    origin_account.followers.local.select(:id).find_in_batches do |follower_accounts|
      UnfollowFollowWorker.push_bulk(follower_accounts.map(&:id)) do |follower_account_id|
        [follower_account_id, origin_account.id, target_account.id]
      end
    end
  end
    
        it_behaves_like 'forbidden for wrong scope', 'read:accounts'
  end
    
          described_class.new.validate(follow)
    end
    
            it 'calls errors.add' do
          expect(errors).to have_received(:add)
            .with(:text, I18n.t('statuses.disallowed_hashtags', tags: tags.join(', '), count: tags.size))
        end
      end
    end
  end
end

    
        it 'shows reblogs when explicitly enabled' do
      recipient.follow!(sender, reblogs: true)
      is_expected.to change(Notification, :count)
    end
    
          def translate(key, **options)
        options = options.dup
        options[:default] &&= options[:default].to_s
        message = ::I18n.translate(key, **options)
        message.present? ? message : fallback_message(key, **options)
      end
    
      module Formatter
    extend ::ActiveSupport::Autoload
    autoload :Json
    autoload :SerializableHash
    autoload :Txt
    autoload :Xml
  end
    
            def optioned_declared_params(options)
          declared_params = if options[:include_parent_namespaces]
                              # Declared params including parent namespaces
                              route_setting(:saved_declared_params).flatten | Array(route_setting(:declared_params))
                            else
                              # Declared params at current namespace
                              route_setting(:saved_declared_params).last & Array(route_setting(:declared_params))
                            end
    
              @api.route_setting(:declared_params, []) unless @api.route_setting(:declared_params)
          @api.route_setting(:declared_params, @api.namespace_stackable(:declared_params).flatten)
        end
      end