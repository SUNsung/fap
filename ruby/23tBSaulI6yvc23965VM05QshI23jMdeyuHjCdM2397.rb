    projects << @user.personal_projects.visible_to_user(current_user) if current_user
    projects << @user.personal_projects.public_to_user(current_user)
    
        begin
      response = U2F::RegisterResponse.load_from_json(params[:device_response])
      registration_data = u2f.register!(challenges, response)
      registration.update(certificate: registration_data.certificate,
                          key_handle: registration_data.key_handle,
                          public_key: registration_data.public_key,
                          counter: registration_data.counter,
                          user: user,
                          name: params[:name])
    rescue JSON::ParserError, NoMethodError, ArgumentError
      registration.errors.add(:base, 'Your U2F device did not send a valid JSON response.')
    rescue U2F::Error => e
      registration.errors.add(:base, e.message)
    end
    
                -- Return the time part and the sequence part. OR appears
            -- faster here than addition, but they're equivalent:
            -- time_part has no trailing two bytes, and tail is only
            -- the last two bytes.
            RETURN time_part | tail;
          END
        $$ LANGUAGE plpgsql VOLATILE;
      SQL
    end
    
      # After we load the schema, make sure we have sequences for each
  # table using timestamp IDs.
  Rake::Task['db:schema:load'].enhance do
    Rake::Task['db:ensure_id_sequences_exist'].invoke
  end
    
      def index
    @follows = Follow.where(target_account: @account).recent.page(params[:page]).per(FOLLOW_PER_PAGE).preload(:account)
    
      def type
    'Emoji'
  end
    
      describe 'GET #show' do
    it 'returns http success' do
      get :show
      expect(response).to have_http_status(:success)
    end
  end
    
      module Sass::Plugin::Configuration
    # Different default options in a m environment.
    def default_options
      @default_options ||= begin
        version = Merb::VERSION.split('.').map {|n| n.to_i}
        if version[0] <= 0 && version[1] < 5
          root = MERB_ROOT
          env  = MERB_ENV
        else
          root = Merb.root.to_s
          env  = Merb.environment
        end