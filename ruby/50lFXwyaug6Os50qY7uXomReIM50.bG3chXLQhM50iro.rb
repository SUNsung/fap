
        
          def skip_download?
    return @skip_download if defined?(@skip_download)
    @skip_download ||= DomainBlock.find_by(domain: @account.domain)&.reject_media?
  end
    
          it 'renders application layout' do
        get :show, params: { id: 'test', max_id: late.id }
        expect(response).to render_template layout: 'application'
      end
    end
    
    task default: :test