
        
          # Get the user's like of a post, if there is one.
  # @param [Post] post
  # @return [Like]
  def like_for(target)
    if target.likes.loaded?
      target.likes.find {|like| like.author_id == person.id }
    else
      Like.find_by(author_id: person.id, target_type: target.class.base_class.to_s, target_id: target.id)
    end
  end
    
    if rails_env != 'development'
  config('path vendor/bundle')
  config('frozen true')
  config('disable_shared_gems true')
end
    
        #@posts[:new_public] = Post.where(:type => ['StatusMessage','ActivityStreams::Photo'],
    #                                 :public => true).order('created_at DESC').limit(15).all
    
      rescue_from ActiveRecord::RecordNotFound do
    render plain: I18n.t('aspect_memberships.destroy.no_membership'), status: 404
  end
    
        @invalid_emails = html_safe_string_from_session_array(:invalid_email_invites)
    @valid_emails   = html_safe_string_from_session_array(:valid_email_invites)
    
      describe 'DELETE /chat_channel_memberships/:id' do
    before do
      user.add_role(:super_admin)
      post '/chat_channel_memberships', params: {
        chat_channel_membership: { user_id: second_user.id, chat_channel_id: chat_channel.id }
      }
    end
    
      def new
    @page = Page.new
  end
    
      it 'shows comments', js: true do
    create_list(:comment, 3, commentable: article)
    visit '/#{user.username}/#{article.slug}'
    expect(page).to have_selector('.single-comment-node', visible: true, count: 3)
  end
    
        it { expect(module_node.is_a?(described_class)).to be(true) }
  end
    
            if contained_by_multiline_collection_that_could_be_broken_up?(node)
          return true
        end
    
        context 'when inside a union, with a nonmatching value' do
      let(:pattern) { '{str (int %)}' }
      let(:params) { [10] }
      let(:ruby) { '1.0' }
    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
    module Jekyll
    
        def get_web_content(url)
      raw_uri           = URI.parse url
      proxy             = ENV['http_proxy']
      if proxy
        proxy_uri       = URI.parse(proxy)
        https           = Net::HTTP::Proxy(proxy_uri.host, proxy_uri.port).new raw_uri.host, raw_uri.port
      else
        https           = Net::HTTP.new raw_uri.host, raw_uri.port
      end
      https.use_ssl     = true
      https.verify_mode = OpenSSL::SSL::VERIFY_NONE
      request           = Net::HTTP::Get.new raw_uri.request_uri
      data              = https.request request
    end
  end
    
      class PostFilters < Octopress::Hooks::Post
    def pre_render(post)
      OctopressFilters::pre_filter(post)
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