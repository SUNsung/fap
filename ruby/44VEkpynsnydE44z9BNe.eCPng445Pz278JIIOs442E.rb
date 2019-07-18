
        
                file
      end
    end
    
        it 'should import from http url' do
      Discourse::Utils.expects(:execute_command).with('git', 'clone', url, @temp_folder)
    
        # If we are sorting in the default order desc, we should consider including pinned
    # topics. Otherwise, just use bumped_at.
    if sort_column == 'default'
      if sort_dir == 'DESC'
        # If something requires a custom order, for example 'unread' which sorts the least read
        # to the top, do nothing
        return result if options[:unordered]
      end
      sort_column = 'bumped_at'
    end
    
      def log_request_info(env, result, info)
    
      context '.score_required_to_hide_post' do
    it 'returns 10 if we can't calculated any percentiles' do
      SiteSetting.hide_post_sensitivity = Reviewable.sensitivity[:low]
      expect(Reviewable.score_required_to_hide_post).to eq(10.0)
      SiteSetting.hide_post_sensitivity = Reviewable.sensitivity[:medium]
      expect(Reviewable.score_required_to_hide_post).to eq(10.0)
    end
    
      def group_params
    permitted = [
      :name,
      :mentionable_level,
      :messageable_level,
      :visibility_level,
      :automatic_membership_email_domains,
      :automatic_membership_retroactive,
      :title,
      :primary_group,
      :grant_trust_level,
      :incoming_email,
      :flair_url,
      :flair_bg_color,
      :flair_color,
      :bio_raw,
      :public_admission,
      :public_exit,
      :allow_membership_requests,
      :full_name,
      :default_notification_level,
      :membership_request_template,
      :owner_usernames,
      :usernames
    ]
    custom_fields = Group.editable_group_custom_fields
    permitted << { custom_fields: custom_fields } unless custom_fields.blank?
    
      private
    
    # create and write to opml file
xml = Builder::XmlMarkup.new(indent: 2)
xml.instruct! :xml, version: '1.0', encoding: 'UTF-8'
xml.tag!('opml', version: '1.0') do
  # head
  xml.tag!('head') do
    xml.title TITLE
  end
    
    namespace :bower do
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
        def startup_window
      '#{name}:#{yaml['startup_window'] || base_index}'
    end
    
        context 'with alias' do
      it 'renders the tmux config' do
        rendered = project_with_alias.render
        expect(rendered).to_not be_empty
        expect(rendered).to include('alias_is_working')
      end
    end
  end
    
          def valid_local_project?(name)
        return false if name
        raise NO_LOCAL_FILE_MSG unless local?
        true
      end
    
        context 'environment variable $TMUXINATOR_CONFIG is nil' do
      it 'is an empty string' do
        allow(ENV).to receive(:[]).with('TMUXINATOR_CONFIG').
          and_return nil
        # allow(XDG).to receive(:[]).with('CONFIG').and_return nil
        allow(File).to receive(:directory?).and_return true
        expect(described_class.environment).to eq ''
      end
    end