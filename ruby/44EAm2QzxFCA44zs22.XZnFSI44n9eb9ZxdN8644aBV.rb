    it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
      describe '#working?' do
    it 'should not be working until the first event was received' do
      expect(@checker).not_to be_working
      @checker.last_receive_at = Time.now
      expect(@checker).to be_working
    end
  end
    
        def entries_as_json
      @entries.sort! { |a, b| sort_fn(a.name, b.name) }.map(&:as_json)
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def document?
      @content =~ DOCUMENT_RGX
    end
    
        private
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
          get_web_content(redirected_url)
    end
    
      expansion(:inspection) {
    {
      :inspected => o.inspected == 1 ? true : false,
      :spam => o.spam == 1 ? true : false,
      :spam_score => o.spam_score.to_f,
      :threat => o.threat == 1 ? true : false,
      :threat_details => o.threat_details
    }
  }
    
      def update
    if @credential.update(params.require(:credential).permit(:name, :hold))
      redirect_to_with_json [organization, @server, :credentials]
    else
      render_form_errors 'edit', @credential
    end
  end
    
        if @domain.save
      if @domain.verified?
        redirect_to_with_json [:setup, organization, @server, @domain]
      else
        redirect_to_with_json [:verify, organization, @server, @domain]
      end
    else
      render_form_errors 'new', @domain
    end
  end
    
          if @query = (params[:query] || session['msg_query_#{@server.id}_#{scope}']).presence
        session['msg_query_#{@server.id}_#{scope}'] = @query
        qs = Postal::QueryString.new(@query)
        if qs.empty?
          flash.now[:alert] = 'It doesn't appear you entered anything to filter on. Please double check your query.'
        else
          @queried = true
          if qs[:order] == 'oldest-first'
            options[:direction] = 'asc'
          end
    
      def finish_password_reset
    @user = User.where(:password_reset_token => params[:token]).where('password_reset_token_valid_until > ?', Time.now).first
    if @user.nil?
      redirect_to login_path(:return_to => params[:return_to]), :alert => 'This link has expired or never existed. Please choose reset password to try again.'
    end
    
      def create
    @track_domain = @server.track_domains.build(params.require(:track_domain).permit(:name, :domain_id, :track_loads, :track_clicks, :excluded_click_domains, :ssl_enabled))
    if @track_domain.save
      redirect_to_with_json [:return_to, [organization, @server, :track_domains]]
    else
      render_form_errors 'new', @track_domain
    end
  end
    
      def join
    if @invite = UserInvite.where(:uuid => params[:token]).where('expires_at > ?', Time.now).first
      if logged_in?
        if request.post?
          @invite.accept(current_user)
          redirect_to_with_json root_path(:nrd => 1), :notice => 'Invitation has been accepted successfully. You now have access to this organization.'
        elsif request.delete?
          @invite.reject
          redirect_to_with_json root_path(:nrd => 1), :notice => 'Invitation has been rejected successfully.'
        else
          @organizations = @invite.organizations.order(:name).to_a
        end
      else
        redirect_to new_signup_path(params[:token])
      end
    else
      redirect_to_with_json root_path(:nrd => 1), :alert => 'The invite URL you have has expired. Please ask the person who invited you to re-send your invitation.'
    end
  end
    
      def update
    @organization_user = organization.user_assignment(@user)
    if @organization_user.update(params.require(:organization_user).permit(:admin))
      redirect_to_with_json [organization, :users], :notice => 'Permissions for #{@organization_user.user.name} have been updated successfully.'
    else
      render_form_errors 'edit', @organization_user
    end
  end
    
      def format_delivery_details(server, text)
    text.gsub!(/\<msg\:(\d+)\>/) do
      id = $1.to_i
      link_to('message ##{id}', organization_server_message_path(server.organization, server, id), :class => 'u-link')
    end
    text.html_safe
  end