
        
          describe 'GET blocks index' do
    it 'renders proper blocks index' do
      create(:block, user_id: user.id, input_css: '.blue { color: blue;}')
      get '/blocks'
      expect(response.body).to include('color: blue')
    end
  end
    
      it 'renders a podcast index if there is a podcast with the slug successfully' do
    expect(get: '/#{podcast.slug}').to route_to(
      controller: 'stories',
      action: 'index',
      username: podcast.slug,
    )
  end
    
      def user_org_admin?
    user.org_admin?(record.organization_id)
  end
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
    
      def page_params
    allowed_params = %i[title slug body_markdown body_html description template is_top_level_path]
    params.require(:page).permit(allowed_params)
  end
end
