
        
        invalids = []
Parallel.each(links, in_threads: 4) do |link|
  href = link.attribute('href').to_s
  begin
    case check_link(URI.join(BASE_URI, href))
    when (200...300)
      putc('.')
    when (300..302)
      putc('w')
    end
  rescue => e
    putc('F')
    invalids << '#{href} (reason: #{e.message})'
  end
end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
            entries
      end
    end
  end
end

    
      belongs_to :status_message
  has_many :poll_answers, -> { order 'id ASC' }, dependent: :destroy
  has_many :poll_participations, dependent: :destroy
  has_one :author, through: :status_message
    
        def index
      pods_json = PodPresenter.as_collection(Pod.all)
    
          def create
        restore_request_parameters
        process_authorization_consent(params[:approve])
      end
    
          def find
        client = Api::OpenidConnect::OAuthApplication.find_by(client_name: params[:client_name])
        if client
          render json: {client_id: client.client_id}
        else
          render json: {error: 'Client with name #{params[:client_name]} does not exist'}
        end
      end
    
          def get_key_from_kid(keys, kid)
        keys.each do |key|
          return key if key.has_value?(kid)
        end
      end