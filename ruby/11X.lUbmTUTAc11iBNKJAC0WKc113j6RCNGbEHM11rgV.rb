
        
            initializer 'action_mailbox.config' do
      config.after_initialize do |app|
        ActionMailbox.logger = app.config.action_mailbox.logger || Rails.logger
        ActionMailbox.incinerate = app.config.action_mailbox.incinerate.nil? ? true : app.config.action_mailbox.incinerate
        ActionMailbox.incinerate_after = app.config.action_mailbox.incinerate_after || 30.days
        ActionMailbox.queues = app.config.action_mailbox.queues || {}
        ActionMailbox.ingress = app.config.action_mailbox.ingress
      end
    end
  end
end

    
        assert_equal <<~MESSAGE, run_routes_command([ '-g', 'show' ])
                             Prefix Verb URI Pattern                                                                              Controller#Action
                               cart GET  /cart(.:format)                                                                          cart#show
      rails_conductor_inbound_email GET  /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#show
                 rails_service_blob GET  /rails/active_storage/blobs/:signed_id/*filename(.:format)                               active_storage/blobs#show
          rails_blob_representation GET  /rails/active_storage/representations/:signed_blob_id/:variation_key/*filename(.:format) active_storage/representations#show
                 rails_disk_service GET  /rails/active_storage/disk/:encoded_key/*filename(.:format)                              active_storage/disk#show
    MESSAGE
    
      # Acceptable options:
  #
  #   raw                     - raw text of post
  #   image_sizes             - We can pass a list of the sizes of images in the post as a shortcut.
  #   invalidate_oneboxes     - Whether to force invalidation of oneboxes in this post
  #   acting_user             - The user performing the action might be different than the user
  #                             who is the post 'author.' For example when copying posts to a new
  #                             topic.
  #   created_at              - Post creation time (optional)
  #   auto_track              - Automatically track this topic if needed (default true)
  #   custom_fields           - Custom fields to be added to the post, Hash (default nil)
  #   post_type               - Whether this is a regular post or moderator post.
  #   no_bump                 - Do not cause this post to bump the topic.
  #   cooking_options         - Options for rendering the text
  #   cook_method             - Method of cooking the post.
  #                               :regular - Pass through Markdown parser and strip bad HTML
  #                               :raw_html - Perform no processing
  #                               :raw_email - Imported from an email
  #   via_email               - Mark this post as arriving via email
  #   raw_email               - Full text of arriving email (to store)
  #   action_code             - Describes a small_action post (optional)
  #   skip_jobs               - Don't enqueue jobs when creation succeeds. This is needed if you
  #                             wrap `PostCreator` in a transaction, as the sidekiq jobs could
  #                             dequeue before the commit finishes. If you do this, be sure to
  #                             call `enqueue_jobs` after the transaction is comitted.
  #   hidden_reason_id        - Reason for hiding the post (optional)
  #
  #   When replying to a topic:
  #     topic_id              - topic we're replying to
  #     reply_to_post_number  - post number we're replying to
  #
  #   When creating a topic:
  #     title                 - New topic title
  #     archetype             - Topic archetype
  #     is_warning            - Is the topic a warning?
  #     category              - Category to assign to topic
  #     target_usernames      - comma delimited list of usernames for membership (private message)
  #     target_group_names    - comma delimited list of groups for membership (private message)
  #     meta_data             - Topic meta data hash
  #     created_at            - Topic creation time (optional)
  #     pinned_at             - Topic pinned time (optional)
  #     pinned_globally       - Is the topic pinned globally (optional)
  #     shared_draft          - Is the topic meant to be a shared draft
  #     topic_opts            - Options to be overwritten for topic
  #
  def initialize(user, opts)
    # TODO: we should reload user in case it is tainted, should take in a user_id as opposed to user
    # If we don't do this we introduce a rather risky dependency
    @user = user
    @opts = opts || {}
    opts[:title] = pg_clean_up(opts[:title]) if opts[:title] && opts[:title].include?('\u0000')
    opts[:raw] = pg_clean_up(opts[:raw]) if opts[:raw] && opts[:raw].include?('\u0000')
    opts.delete(:reply_to_post_number) unless opts[:topic_id]
    opts[:visible] = false if opts[:visible].nil? && opts[:hidden_reason_id].present?
    @guardian = opts[:guardian] if opts[:guardian]
    
      def version_required
    if params[:version].blank?
      render_json_error(I18n.t('reviewables.missing_version'), status: 422)
    end
  end
    
        private
    
            expect(response.status).to eq(200)
    
      context 'as an admin' do
    before :each do
      login_as(users(:jane))
    end
    
          it 'generates a richer DOT script' do
        expect(agents_dot(@agents, rich: true)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            (graph \[ [^\]]+ \];)?
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo,tooltip='Dot \x20 Foo',URL='#{Regexp.quote(agent_path(@foo))}'\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar1))}'\];
            \k<bar2> \[label=bar2,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar2))}',style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar3))}'\];
          \}
          \z
        }x)
      end
    end
  end
    
                expect(scenario_import).to be_valid
    
          @agent = Agents::HipchatAgent.new(:name => 'somename', :options => valid_params)
      @agent.user = users(:jane)
      @agent.save!
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

    
      describe '#that checker should be valid' do
    it 'should check that the aftership object is valid' do
      expect(@checker).to be_valid
    end
    
        stub(services(:generic)).refresh_token!
  end
    
          def session_key
        @session_key ||= options[:session_key]
      end
    end
  end
end

    
      it 'should not set the Content Security Policy for other content types' do
    headers = get('/', {}, 'wants' => 'text/foo').headers
    expect(headers['Content-Security-Policy']).to be_nil
    expect(headers['Content-Security-Policy-Report-Only']).to be_nil
  end