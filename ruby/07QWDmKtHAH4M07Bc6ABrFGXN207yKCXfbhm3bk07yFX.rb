
        
            def url
      @url ||= URL.parse request.base_url
    end
    
            css('label', 'h2 > em', 'h3 > em').each do |node|
          node.name = 'code'
        end
    
        if authenticated && resource = warden.user(resource_name)
      flash[:alert] = I18n.t('devise.failure.already_authenticated')
      redirect_to after_sign_in_path_for(resource)
    end
  end
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
        pod 'ObjCPod', path: 'ObjCPod'
    pod 'SwiftPod', path: 'SwiftPod'
    pod 'MixedPod', path: 'MixedPod'
    pod 'CustomModuleMapPod', path: 'CustomModuleMapPod'
    
    class Rack::Builder
  include Sinatra::Delegator
end

    
          def origin(env)
        env['HTTP_ORIGIN'] || env['HTTP_X_ORIGIN']
      end
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
      it 'should not override the header if already set' do
    mock_app with_headers('Content-Security-Policy' => 'default-src: none')
    expect(get('/', {}, 'wants' => 'text/html').headers['Content-Security-Policy']).to eq('default-src: none')
  end
end

    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
        def get_web_content(url)
      raw_uri           = URI.parse url
      proxy             = ENV['http_proxy']
      if proxy
        proxy_uri       = URI.parse(proxy)
        https           = Net::HTTP::Proxy(proxy_uri.host, proxy_uri.port).new raw_uri.host, raw_uri.port
      else
        https           = Net::HTTP.new raw_uri.host, raw_uri.port
      end
      https.use_ssl     = true
      https.verify_mode = OpenSSL::SSL::VERIFY_NONE
      request           = Net::HTTP::Get.new raw_uri.request_uri
      data              = https.request request
    end
  end
    
        def initialize(tag_name, markup, tokens)
      attributes = ['class', 'src', 'width', 'height', 'title']
    
        def tmux_split_command
      path = if tab.root?
               '#{Tmuxinator::Config.default_path_option} #{tab.root}'
             end
      '#{project.tmux} splitw #{path} -t #{tab.tmux_window_target}'
    end
    
          # Sorted list of all .yml files, including duplicates
      def configs
        directories.map do |directory|
          Dir['#{directory}/**/*.yml'].map do |path|
            path.gsub('#{directory}/', '').gsub('.yml', '')
          end
        end.flatten.sort
      end
    
              after(:all) do
            puts @session
            Kernel.system 'tmux kill-session -t #{@session}'
          end
    
        Thank you for installing tmuxinator.