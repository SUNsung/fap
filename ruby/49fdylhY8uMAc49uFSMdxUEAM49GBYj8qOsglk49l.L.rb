
        
            def create
      authorize ReportNote, :create?
    
      def local_domain?
    TagManager.instance.web_domain?(hub_topic_domain)
  end
    
        web_subscription = ::Web::PushSubscription.create!(
      endpoint: subscription_params[:endpoint],
      key_p256dh: subscription_params[:keys][:p256dh],
      key_auth: subscription_params[:keys][:auth],
      data: data,
      user_id: active_session.user_id,
      access_token_id: active_session.access_token_id
    )
    
        render_empty
  end
    
          spec['version'] = Bootstrap::VERSION
    
        def pos
      byte_to_str_pos @s.pos
    end
    
        alias log puts
    
        post '/edit/Mordor/Orc', :content => 'not so big smelly creatures',
         :page                        => 'Orc', :path => 'Mordor', :message => 'minor edit'
    assert_equal 'http://example.org/Mordor/Orc', last_response.headers['Location']
    
        @wiki = Gollum::Wiki.new(@path)
    page  = @wiki.page('PG')
    assert_equal '바뀐 text', utf8(page.raw_data)
    assert_equal 'ghi', page.version.message
  end