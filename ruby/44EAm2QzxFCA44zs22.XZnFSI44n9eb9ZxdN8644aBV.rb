
        
            # advance scanner to pos after the next match of pattern and return the match
    def scan_next(pattern)
      return unless @s.scan_until(pattern)
      @s.matched
    end
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
          def remove_page_extentions(page_path)
        Gollum::Markup.formats.values.each do |format|
          page_path = page_path.gsub(/\.#{format[:regexp]}$/, '')
        end
        return page_path
      end
    
        assert_match /New/, last_response.body, ''New' link is blocked in pages template'
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
    require 'gollum'
require 'gollum/views/layout'
require 'gollum/views/editable'
require 'gollum/views/has_page'
    
        it 'accepts chat channel invitation' do
      membership = ChatChannelMembership.last
      sign_in second_user
      put '/chat_channel_memberships/#{membership.id}', params: {
        chat_channel_membership: {
          user_action: 'accept'
        }
      }
      expect(ChatChannelMembership.find(membership.id).status).to eq('active')
    end
    
      def satellite_tweet!
    @article.tags.find_each do |tag|
      BufferUpdate.buff!(@article.id, twitter_buffer_text, tag.buffer_profile_id_code, 'twitter', tag.id) if tag.buffer_profile_id_code.present?
    end
    @article.update(last_buffered: Time.current)
  end
    
      def self.upbuff!(buffer_update_id, admin_id, body_text, status)
    buffer_update = BufferUpdate.find(buffer_update_id)
    if status == 'confirmed'
      buffer_response = send_to_buffer(body_text, buffer_update.buffer_profile_id_code)
      buffer_update.update!(buffer_response: buffer_response, status: status, approver_user_id: admin_id, body_text: body_text)
    else
      buffer_update.update!(status: status, approver_user_id: admin_id)
    end
  end