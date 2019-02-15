
        
          def prev_page
    account_outbox_url(@account, page: true, min_id: @statuses.first.id) unless @statuses.empty?
  end
    
        def index
      authorize :email_domain_block, :index?
      @email_domain_blocks = EmailDomainBlock.page(params[:page])
    end
    
        def destroy
      authorize @report_note, :destroy?
      @report_note.destroy!
      redirect_to admin_report_path(@report_note.report_id), notice: I18n.t('admin.report_notes.destroyed_msg')
    end
    
        # Mobile devices do not support regular notifications, so we enable push notifications by default
    alerts_enabled = active_session.detection.device.mobile? || active_session.detection.device.tablet?
    
          if @user.persisted?
        sign_in_and_redirect @user, event: :authentication
        set_flash_message(:notice, :success, kind: provider_id.capitalize) if is_navigational_format?
      else
        session['devise.#{provider}_data'] = request.env['omniauth.auth']
        redirect_to new_user_registration_url
      end
    end
  end
    
      # Eager load code on boot. This eager loads most of Rails and
  # your application in memory, allowing both thread web servers
  # and those relying on copy on write to perform better.
  # Rake tasks automatically ignore this option for performance.
  config.eager_load = true
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
            safe?(env) ||
          valid_token?(session, env['HTTP_X_CSRF_TOKEN']) ||
          valid_token?(session, Request.new(env).params[options[:authenticity_param]]) ||
          ( options[:allow_if] && options[:allow_if].call(env) )
      end
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
    # define charCodeAt on String
class String
  def charCodeAt(k)
    # use scan, nil check, and unpack instead of ord for 1.8
    # 1.9 can simply use self[k].ord
    # http://stackoverflow.com/questions/7793177/split-utf8-string-regardless-of-ruby-version
    c = self.scan(/./mu)[k]
    return nil if c.nil?
    c.unpack('U')[0]
  end
end
    
          def next_link
      end
    end
  end
end

    
          def title
        'Home'
      end
    
      test 'clean path without leading slash' do
    assert_equal '/Mordor', clean_path('Mordor')
  end
    
    #############################################################################
#
# Standard tasks
#
#############################################################################
    
      get(/.+/) do
    send_sinatra_file(request.path) {404}
  end
    
      # The CategoryIndex class creates a single category page for the specified category.
  class CategoryIndex < Page
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)

    
    Before '@javascript' do
  Capybara.current_driver = Capybara.javascript_driver
end
    
      context 'with xpath selectors' do
    it 'should find the first element using the given locator' do
      el = @session.find(:css, '#first_image')
      expect(el.ancestor(:xpath, '//p')).to have_text('Lorem ipsum dolor')
      expect(el.ancestor(:xpath, '//a')[:'aria-label']).to eq('Go to simple')
    end
  end