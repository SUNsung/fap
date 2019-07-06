
        
          describe '#check' do
    it 'should check that initial run creates an event' do
      @checker.memory[:last_updated_at] = '2016-03-15T14:01:05+00:00'
      expect { @checker.check }.to change { Event.count }.by(1)
    end
  end
end

    
        def show
      authorize @user, :change_email?
    end
    
        def new
      authorize :email_domain_block, :create?
      @email_domain_block = EmailDomainBlock.new
    end
    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end
    
      def payload
    @_payload ||= request.body.read
  end
    
      def after_sign_in_path_for(resource)
    if resource.email_verified?
      root_path
    else
      finish_signup_path
    end
  end
end

    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true