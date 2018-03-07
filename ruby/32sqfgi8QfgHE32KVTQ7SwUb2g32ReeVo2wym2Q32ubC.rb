  private
    
    ActiveRecord::Base.establish_connection( adapter: :sqlite3, database:  ':memory:')
    
          opts[:script_name] = relative_url_root if relative_url_root?
    
        def type=(value)
      @type = value.try :strip
    end
    
        respond_to do |format|
      format.html do
        serializable_resource = ActiveModelSerializers::SerializableResource.new(InitialStatePresenter.new(initial_state_params), serializer: InitialStateSerializer)
        @initial_state_json   = serializable_resource.to_json
      end
    
      describe 'GET #show' do
    it 'returns http success' do
      get :show
      expect(response).to have_http_status(:success)
    end
  end
    
      describe 'PUT #update' do
    it 'updates the user record' do
      put :update, params: { user: { locale: 'en', filtered_languages: ['es', 'fr', ''] } }
    
    Then /^(?:|I )should see '([^']*)'$/ do |text|
  expect(page).to have_content(text)
end

    
        # Returns an extension based on the content type. e.g. 'jpeg' for
    # 'image/jpeg'. If the style has a specified format, it will override the
    # content-type detection.
    #
    # Each mime type generally has multiple extensions associated with it, so
    # if the extension from the original filename is one of these extensions,
    # that extension is used, otherwise, the first in the list is used.
    def content_type_extension attachment, style_name
      mime_type = MIME::Types[attachment.content_type]
      extensions_for_mime_type = unless mime_type.empty?
        mime_type.first.extensions
      else
        []
      end
    
        def clear_processors!
      @known_processors.try(:clear)
    end
    
    describe 'border-color' do
  before(:all) do
    ParserSupport.parse_file('library/border-color')
  end
    
      context 'called with two styles' do
    it 'applies to alternating sides' do
      rule = 'border-style: dotted dashed'
    
          expect('.all-buttons').to have_ruleset(ruleset)
    end
  end