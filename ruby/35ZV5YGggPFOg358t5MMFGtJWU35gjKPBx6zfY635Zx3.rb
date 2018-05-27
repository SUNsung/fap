
        
        class NotificationMailerPreview < ActionMailer::Preview
  # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/mention
  def mention
    m = Mention.last
    NotificationMailer.mention(m.account, Notification.find_by(activity: m))
  end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
        it 'Reads referrer from Host header when Referer header is missing' do
      env = {'HTTP_HOST' => 'foo.com'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
        it 'redirects requests with sneaky encoded session cookies' do
      get '/path', {}, 'HTTP_COOKIE' => 'rack.%73ession=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/path')
    end
  end
    
      it 'should set the X-Frame-Options' do
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('SAMEORIGIN')
  end
    
        mock_app do
      use Rack::Head
      use(Rack::Config) { |e| e['rack.session'] ||= {}}
      use detector
      use klass
      run DummyApp
    end
    
      def fetch(url, sha1, output)