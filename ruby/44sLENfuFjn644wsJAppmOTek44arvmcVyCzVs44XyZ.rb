
        
                  def datetime_selector(options, html_options)
            datetime = options.fetch(:selected) { value || default_datetime(options) }
            @auto_index ||= nil
    
        # for test and sidekiq
    def async=(val)
      @async = val
    end
    
          if period_type == :all
        DB.exec <<~SQL
          UPDATE user_stats s
          SET likes_given         = d.likes_given,
              likes_received      = d.likes_received,
              topic_count         = d.topic_count,
              post_count          = d.post_count
    
        @omniauth.before_request_phase do |env|
      # If the user is trying to reconnect to an existing account, store in session
      request = ActionDispatch::Request.new(env)
      request.session[:auth_reconnect] = !!request.params['reconnect']
    end
  end
    
        # remove old drafts
    delete_drafts_older_than_n_days = SiteSetting.delete_drafts_older_than_n_days.days.ago
    Draft.where('updated_at < ?', delete_drafts_older_than_n_days).destroy_all
  end
    
        Extension.theme_extensions(theme_ids).each { |extension| builder << extension }
    Extension.plugin_extensions.each { |extension| builder << extension }
    builder << Extension.site_setting_extension
    
          extensions
    end
    
      it 'can be extended by plugins' do
    plugin = Class.new(Plugin::Instance) do
      attr_accessor :enabled
      def enabled?
        @enabled
      end
    end.new(nil, '#{Rails.root}/spec/fixtures/plugins/csp_extension/plugin.rb')
    
      def search
    RailsMultisite::ConnectionManagement.with_hostname(params[:hostname]) do
    
        cookies.delete('authentication_data')
    cookies.delete(TOKEN_COOKIE)
  end
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
    describe ConversationsController, :type => :controller do
  describe '#index' do
    before do
      @person = alice.contacts.first.person
      hash = {
        :author => @person,
        :participant_ids => [alice.person.id, @person.id],
        :subject => 'not spam',
        :messages_attributes => [ {:author => @person, :text => 'cool stuff'} ]
      }
      @conv1 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv1.id)
             .increase_unread(alice)
      Message.create(:author => @person, :created_at => Time.now + 200, :text => 'another message', :conversation_id => @conv1.id)
             .increase_unread(alice)
    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
          it_behaves_like 'on a visible post'
    end
    
        it 'redirects to /stream for a mobile user' do
      request.headers['X_MOBILE_DEVICE'] = true
      post :create, params: {user: {remember_me: '0', username: @user.username, password: 'evankorth'}}
      expect(response).to be_redirect
      expect(response.location).to match /^#{stream_url}\??$/
    end
  end
    
      gem 'bacon'
  gem 'mocha'
  gem 'mocha-on-bacon'
  gem 'prettybacon'
  gem 'webmock'
    
        pod 'ObjCPod', path: 'ObjCPod'
    pod 'SwiftPod', path: 'SwiftPod'
    pod 'MixedPod', path: 'MixedPod'
    pod 'CustomModuleMapPod', path: 'CustomModuleMapPod'
    
    require_relative '../lib/bootstrap/environment'
    
          explicit_plugins_specs.each do |spec|
        packet_gem.add(spec.name)
      end
    
        puts('Packaging plugins for offline usage')
    
      it 'does object equality on config_hash and pipeline_id' do
    another_exact_pipeline = described_class.new(source, pipeline_id, ordered_config_parts, settings)
    expect(subject).to eq(another_exact_pipeline)
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end
    
    module Jekyll
    
    Liquid::Template.register_tag('include_code', Jekyll::IncludeCodeTag)

    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)
