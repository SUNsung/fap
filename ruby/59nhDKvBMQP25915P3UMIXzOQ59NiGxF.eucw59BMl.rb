
        
            options[:title] = false
    options[:root_title] = 'Node.js'
    options[:container] = '#apicontent'
    options[:skip] = %w(index.html all.html documentation.html synopsis.html)
    
        def length
      @entries.length
    end
    
        def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
      def test_truncate_beyond_eof
    Tempfile.create('test-truncate') {|f|
      f.print 'abc'
      f.truncate 10
      assert_equal('\0' * 7, f.read(100), '[ruby-dev:24532]')
    }
  end
    
      it 'interprets Julian-Gregorian gap dates using Gregorian proleptic calendar' do
    Time.send(@method, 1582, 10, 14, 12).to_i.should == -12219336000 # 2299160j
  end
    
          def handle_jwt_bearer(req)
        jwt_string = req['client_assertion']
        jwt = JSON::JWT.decode jwt_string, :skip_verification
        o_auth_app = Api::OpenidConnect::OAuthApplication.find_by(client_id: jwt['iss'])
        raise Rack::OAuth2::Server::Authorize::BadRequest(:invalid_request) unless o_auth_app
        public_key = fetch_public_key(o_auth_app, jwt)
        JSON::JWT.decode(jwt_string, JSON::JWK.new(public_key).to_key)
        req.update_param('client_id', o_auth_app.client_id)
        req.update_param('client_secret', o_auth_app.client_secret)
      end
    
            on roles(target_roles) do
          unless test '[ -f #{file.to_s.shellescape} ]'
            info 'Uploading #{prerequisite_file} to #{file}'
            upload! File.open(prerequisite_file), file
          end
        end
      end
    end
    
      desc 'Publish the release.'
  task :publishing do
  end
    
          it 'sets the variable as the default' do
        expect(dsl.fetch(:scm)).to eq :svn
      end
    end
  end
    
    module Sinatra
  class Application < Base
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
        it 'denies requests with sneaky encoded session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.%73ession=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
      it 'denies requests with a changing Accept-Language header' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'b'
    expect(session).to be_empty
  end