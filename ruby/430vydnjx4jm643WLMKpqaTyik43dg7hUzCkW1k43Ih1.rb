
        
              raise Discourse::InvalidParameters.new(:to_address) unless args[:to_address].present?
    
      protected
    
          def get_type
        return 'Reference' if base_url.path == '/spec/'
    
        options[:attribution] = <<-HTML
      &copy; 2011&ndash;2018 Twitter, Inc.<br>
      &copy; 2011&ndash;2018 The Bootstrap Authors<br>
      Code licensed under the MIT License.<br>
      Documentation licensed under the Creative Commons Attribution License v3.0.
    HTML
    
          html_filters.push 'd3/clean_html', 'd3/entries_v3', 'title'
    
        def types_as_json
      @types.values.sort! { |a, b| sort_fn(a.name, b.name) }.map(&:as_json)
    end
    
        private
    
            css('h2:not([id]) a[id]:not([href])').each do |node|
          node.parent['id'] = node['id']
          node.before(node.children).remove
        end
    
      def id
    object.id.to_s
  end
    
      def participation_answer(user)
    poll_participations.find_by(author_id: user.person.id)
  end
    
      describe '#profile_photo_url' do
    it 'returns a large profile photo url' do
      @service.uid = 'abc123'
      @service.access_token = 'token123'
      expect(@service.profile_photo_url).to eq(
      'https://graph.facebook.com/abc123/picture?type=large&access_token=token123'
      )
    end
  end
    
          def save_request_parameters
        session[:client_id] = @o_auth_application.client_id
        session[:response_type] = @response_type
        session[:redirect_uri] = @redirect_uri
        session[:scopes] = scopes_as_space_seperated_values
        session[:state] = params[:state]
        session[:nonce] = params[:nonce]
      end