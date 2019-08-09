
        
              expect(headers['X-Runtime'].to_f).to be > 0
    end
  end
    
        if @user.staged
      TopicUser.auto_notification_for_staging(@user.id, @topic.id, TopicUser.notification_reasons[:auto_watch])
    elsif !@topic.private_message?
      notification_level = @user.user_option.notification_level_when_replying || NotificationLevels.topic_levels[:tracking]
      TopicUser.auto_notification(@user.id, @topic.id, TopicUser.notification_reasons[:created_post], notification_level)
    end
  end
    
          owner_ids.each do |user_id|
        group.group_users.build(user_id: user_id, owner: true)
      end
    end
    
      before do
    sign_in(admin)
  end
    
        respond_to do |format|
    
      def source_regex(db_name, filename, multisite:)
    bucket = Regexp.escape(SiteSetting.s3_backup_bucket)
    prefix = file_prefix(db_name, multisite)
    filename = Regexp.escape(filename)
    expires = S3Helper::DOWNLOAD_URL_EXPIRES_AFTER_SECONDS
    
      describe '#diff' do
    it 'can generate diffs for theme changes' do
      theme = Fabricate(:theme)
      theme.set_field(target: :mobile, name: :scss, value: 'body {.up}')
      theme.set_field(target: :common, name: :scss, value: 'omit-dupe')
    
        topic_view = TopicView.new(topic, user, post_ids: [post.id])
    
        helper = S3Helper.new('bob', 'tomb')
    helper.update_tombstone_lifecycle(100)
  end
    
        # NOTE: `relative-dir` is not actually a 'relative dir' in this data structure
    # due to the fact that when vagrant stores synced folders, it path expands
    # them with root_dir, and when you grab those synced_folders options from
    # the machines config file, they end up being a full path rather than a
    # relative path, and so these tests reflect that.
    # For reference:
    # https://github.com/hashicorp/vagrant/blob/9c1b014536e61b332cfaa00774a87a240cce8ed9/lib/vagrant/action/builtin/synced_folders.rb#L45-L46
    let(:config_synced_folders)  { {'/vagrant':
      {type: 'rsync',
        hostpath: '/Users/brian/code/vagrant-sandbox'},
      '/vagrant/other-dir':
      {type: 'rsync',
        hostpath: '/Users/brian/code/vagrant-sandbox/other-dir'},
      '/vagrant/relative-dir':
      {type: 'rsync',
        hostpath: '/Users/brian/code/relative-dir'}}}
    
        it 'executes the rsync post command' do
      expect(machine.communicate).to receive(:sudo).
        with(cmd)
      subject.rsync_post(machine, opts)
    end
  end
    
    # Unset all host plugins so that we aren't executing subprocess things
# to detect a host for every test.
Vagrant.plugin('2').manager.registered.dup.each do |plugin|
  if plugin.components.hosts.to_hash.length > 0
    Vagrant.plugin('2').manager.unregister(plugin)
  end
end
    
      describe '#chef_installed' do
    let(:version) { '15.0.0' }
    let(:command) { 'test -x /opt/chef_solo/bin/knife&& /opt/chef_solo/bin/knife --version | grep '15.0.0'' }
    
              options = {sources: Vagrant::Bundler::DEFAULT_GEM_SOURCES.dup, env_local: true}
          options[:sources] = pconfig[:sources] if pconfig[:sources]
          options[:require] = pconfig[:entry_point] if pconfig[:entry_point]
          options[:version] = pconfig[:version] if pconfig[:version]
    
        it 'should not set plugin as environment local by default' do
      expect(subject).to receive(:internal_install) do |info, update, opts|
        expect(opts[:env_local]).to be_falsey
      end
      subject.install_local(plugin_path)
    end
    
            # Save the composition
        #
        # @param [Hash] composition New composition
        def write_composition(composition)
          @logger.debug('Saving composition to `#{composition_path}`: #{composition}')
          tmp_file = Tempfile.new('vagrant-docker-compose')
          tmp_file.write(composition.to_yaml)
          tmp_file.close
          synchronized do
            FileUtils.mv(tmp_file.path, composition_path.to_s)
          end
        end
    
      describe '#create' do
    let(:params) { {
      image:      'jimi/hendrix:electric-ladyland',
      cmd:        ['play', 'voodoo-chile'],
      ports:      '8080:80',
      volumes:    '/host/path:guest/path',
      detach:     true,
      links:      [[:janis, 'joplin'], [:janis, 'janis']],
      env:        {key: 'value'},
      name:       cid,
      hostname:   'jimi-hendrix',
      privileged: true
    } }
    
              if !provider
            if boxes[name].length > 1
              raise Vagrant::Errors::BoxUpdateMultiProvider,
                name: name.to_s,
                providers: boxes[name].keys.map(&:to_s).sort.join(', ')
            end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift(int, shift)
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
        def self.xtest(*args)
    end
    
      def app
    Precious::App
  end
end
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
      def new?
    true
  end
    
        shared_context 'when user/organization articles exist' do
      let(:organization) { create(:organization) }
      let!(:user_article) { create(:article, user_id: user.id) }
      let!(:organization_article) { create(:article, organization_id: organization.id) }
    end
    
      def user_defined_image(article)
    return article.social_image if article.social_image.present?
    return article.main_image if article.main_image.present?
    return article.video_thumbnail_url if article.video_thumbnail_url.present?
  end
end

    
      def validate_body_text_recent_uniqueness
    return if persisted?
    
          def discount
        order.promo_total * exchange_multiplier
      end
    
          # Captures the entire amount of a payment.
      def purchase!
        handle_payment_preconditions { process_purchase }
      end
    
              adjustments.each do |a|
            adjustment = (adjustable || order).adjustments.build(
              order: order,
              amount: a[:amount].to_f,
              label: a[:label],
              source_type: source_type_from_adjustment(a)
            )
            adjustment.save!
            adjustment.close!
          rescue Exception => e
            raise 'Order import adjustments: #{e.message} #{a}'
          end
        end
    
            def update
          if @property
            authorize! :update, @property
            @property.update(property_params)
            respond_with(@property, status: 200, default_template: :show)
          else
            invalid_resource!(@property)
          end
        end
    
            def show
          authorize! :admin, ReturnAuthorization
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :show).find(params[:id])
          respond_with(@return_authorization)
        end