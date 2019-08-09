
        
            expect(tight_hashes).to eq(loose_hashes)
  end
    
        it 'should import branch from ssh url' do
      Discourse::Utils.expects(:execute_command).with({
        'GIT_SSH_COMMAND' => 'ssh -i #{@ssh_folder}/id_rsa -o StrictHostKeyChecking=no'
      }, 'git', 'clone', '--single-branch', '-b', branch, ssh_url, @temp_folder)
    
        unless @topic.topic_allowed_users.where(user_id: @user.id).exists?
      unless @topic.topic_allowed_groups.where('group_id IN (
                                              SELECT group_id FROM group_users where user_id = ?
                                           )', @user.id).exists?
        @topic.topic_allowed_users.create!(user_id: @user.id)
      end
    end
  end
    
          put '/admin/groups/bulk.json', params: {
        group_id: group.id, users: [user.username.upcase, user2.email, 'doesnt_exist']
      }
    
        self.serialized_private_key = OpenSSL::PKey::RSA.generate(key_size).to_s if serialized_private_key.blank?
    
      def update_order
    params[:ordered_aspect_ids].each_with_index do |id, i|
      current_user.aspects.find(id).update_attributes(order_id: i)
    end
    head :no_content
  end
    
      def new
    respond_to do |format|
      format.mobile { render layout: false }
    end
  end
    
        if message.save
      logger.info 'event=create type=message user=#{current_user.diaspora_handle} status=success ' \
                  'message=#{message.id} chars=#{params[:message][:text].length}'
      Diaspora::Federation::Dispatcher.defer_dispatch(current_user, message)
    else
      flash[:error] = I18n.t('conversations.new_conversation.fail')
    end
    redirect_to conversations_path(:conversation_id => conversation.id)
  end
end

    
        it { expect(self_class_node.is_a?(described_class)).to be(true) }
  end
    
        context 'in a method calling `super` with arguments' do
      context 'when a method argument is unused' do
        it 'registers an offense' do
          message = 'Unused method argument - `foo`. If it's necessary, use ' \
                      '`_` or `_foo` as an argument name to indicate that ' \
                      'it won't be used. You can also write as ' \
                      '`some_method(*)` if you want the method to accept any ' \
                      'arguments but don't care about them.'
    
            rhs
      end
    end
  end
end

    
          def sidebar
        if @sidebar.nil?
          if page = @page.sidebar
            @sidebar = page.text_data
          else
            @sidebar = false
          end
        end
        @sidebar
      end
    
      it 'renders a podcast index if there is a podcast with the slug successfully' do
    expect(get: '/#{podcast.slug}').to route_to(
      controller: 'stories',
      action: 'index',
      username: podcast.slug,
    )
  end
    
        it 'works successfully' do
      article = create(:article, user: user)
      get '#{article.path}/manage'
      expect(response).to have_http_status(:ok)
      expect(response.body).to include('Manage Your Post')
    end
    
      def self.buff!(article_id, text, buffer_profile_id_code, social_service_name = 'twitter', tag_id = nil)
    buffer_response = send_to_buffer(text, buffer_profile_id_code)
    create(
      article_id: article_id,
      tag_id: tag_id,
      body_text: text,
      buffer_profile_id_code: buffer_profile_id_code,
      social_service_name: social_service_name,
      buffer_response: buffer_response,
      status: 'sent_direct',
    )
  end
    
        obj = Helpers.new('HTTP_ACCEPT_LANGUAGE' => 'fr-FR,fr;q=0.8,en-US;q=0.6,en;q=0.4,ru;q=0.2')
    assert_equal 'fr', obj.locale
    
    describe Sidekiq::Manager do
  before do
    Sidekiq.redis {|c| c.flushdb }
  end
    
    describe 'job scheduling' do
  describe 'middleware' do
    class SomeScheduledWorker
      include Sidekiq::Worker
      sidekiq_options :queue => :custom_queue
      def perform(x)
      end
    end
    
        assert_raises InlineError do
      InlineWorker.perform_async(false)
    end
  end
    
      [jekyllPid, compassPid].each { |pid| Process.wait(pid) }
end
    
    class SinatraStaticServer < Sinatra::Base
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
      # Summary is used on the Archive pages to return the first block of content from a post.
  def summary(input)
    if input.index(/\n\n/)
      input.split(/\n\n/)[0]
    else
      input
    end
  end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end