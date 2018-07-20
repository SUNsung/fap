
        
          protected
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
          @router_name = options[:router_name]
    
      it 'uses '-e' as file' do
    ruby_exe('puts __FILE__', escape: false).chomp.should == '-e'
  end
    
      describe 'RTYPEDATA' do
    it 'returns the struct data' do
      a = @s.typed_wrap_struct(1024)
      @s.typed_get_struct_rdata(a).should == 1024
    end
    
        add_file name, mode do |io|
      Gem::Package::DigestIO.wrap io, digests do |digest_io|
        yield digest_io
      end
    end
    
        gemspec_file = File.join(@tempdir, @gem.spec_name)
    
      def test_ssl_connection
    ssl_server = self.class.start_ssl_server
    temp_ca_cert = File.join(DIR, 'ca_cert.pem')
    with_configured_fetcher(':ssl_ca_cert: #{temp_ca_cert}') do |fetcher|
      fetcher.fetch_path('https://localhost:#{ssl_server.config[:Port]}/yaml')
    end
  end
    
      def meta
    object.file.meta
  end
end

    
      def deliver_digest
    NotificationMailer.digest(user.account).deliver_now!
    user.touch(:last_emailed_at)
  end
end

    
        it 'tracks when sign in is older than one day' do
      user.update(current_sign_in_at: 2.days.ago)
      sign_in user, scope: :user
      get :show
    
              if @address.update_attributes(address_params)
            respond_with(@address, default_template: :show)
          else
            invalid_resource!(@address)
          end
        end
    
            def stock_location
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:id])
        end
    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end