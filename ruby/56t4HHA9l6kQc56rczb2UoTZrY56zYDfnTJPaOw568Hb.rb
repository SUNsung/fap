
        
          context 'when migrating application settings' do
    before do
      settings.create!(id: 1, runners_registration_token: 'plain-text-token1')
    end
    
          expect(encrypted).to match %r{\A[A-Za-z0-9+/=]+\z}
      expect(encrypted).not_to include '\n'
    end
  end
    
      it 'returns members for nested group', :nested_groups do
    group.add_developer(user2)
    nested_group.request_access(user4)
    member1 = group.add_maintainer(user1)
    member3 = nested_group.add_maintainer(user2)
    member4 = nested_group.add_maintainer(user3)
    
      describe '#can_resend_invite?' do
    context 'when group_member is invited' do
      before do
        expect(group_member).to receive(:invite?).and_return(true)
      end
    
        it 'has a default when options[:name] is nil' do
      expect(AgentsExporter.new(:name => nil).filename).to eq('exported-agents.json')
    end
    
        it 'should ignore strings which just contain a JSONPath' do
      expect(LiquidMigrator.convert_string('$.data')).to eq('$.data')
      expect(LiquidMigrator.convert_string('$first_title')).to eq('$first_title')
      expect(LiquidMigrator.convert_string(' $.data', true)).to eq(' $.data')
      expect(LiquidMigrator.convert_string('lorem $.data', true)).to eq('lorem $.data')
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_string('$.data.test.*', true) }.
        to raise_error('JSONPath '$.data.test.*' is too complex, please check your migration.')
    end
  end
    
      def prompt_for_two_factor(user)
    session[:otp_user_id] = user.id
    render :two_factor
  end
    
    rails_env = BundlerHelper.rails_env
database = BundlerHelper.database
    
          def request_authorization_consent_form
        add_claims_to_scopes
        endpoint = Api::OpenidConnect::AuthorizationPoint::EndpointStartPoint.new(current_user)
        handle_start_point_response(endpoint)
      end
    
          rescue_from OpenIDConnect::ValidationFailed,
                  ActiveRecord::RecordInvalid, Api::OpenidConnect::Error::InvalidSectorIdentifierUri do |e|
        validation_fail_as_json(e)
      end
    
        @aspect.chat_enabled = !@aspect.chat_enabled
    @aspect.save
    head :no_content
  end
    
        if comment
      respond_create_success(comment)
    else
      render plain: I18n.t('comments.create.error'), status: 422
    end
  end
    
        @invalid_emails = html_safe_string_from_session_array(:invalid_email_invites)
    @valid_emails   = html_safe_string_from_session_array(:valid_email_invites)
    
      task :index do
    doc = File.read('README.md')
    file = 'doc/rack-protection-readme.md'
    Dir.mkdir 'doc' unless File.directory? 'doc'
    puts 'writing #{file}'
    File.open(file, 'w') { |f| f << doc }
  end
    
            close_body(body) if reaction
    
      it 'accepts post requests with masked X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => masked_token)
    expect(last_response).to be_ok
  end
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end
