$x = [-1073741825]
test_ok($x.pack('q').unpack('q') == $x)
    
    def kikaku(a)
  a.collect {|x| x - a[0]}
end
def ud(a)
  kikaku(a.collect {|x| ((x+NP)%ROW)-ROW*((x+NP)/ROW) }.sort)
end
def rl(a)
  kikaku(a.collect {|x| ROW*((x+NP)/ROW)+ROW-((x+NP)%ROW)}.sort)
end
def xy(a)
  kikaku(a.collect {|x| ROW*((x+NP)%ROW) + (x+NP)/ROW }.sort)
end
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
        (stdout + stderr).each_line { |line| puts '[vagrant] #{line}' }
    
          def third_party_scm_name?
        !built_in_scm_name?
      end
    
          def pack_uri(plugin_name)
        url = '#{elastic_pack_base_uri}/#{plugin_name}/#{plugin_name}-#{LOGSTASH_VERSION}.#{PACK_EXTENSION}'
        URI.parse(url)
      end
    
        def user_feedback_string_for(action, platform, machines, options={})
      experimental_string = options['experimental'] ? 'experimental' : 'non experimental'
      message  = '#{action} all #{experimental_string} VM's defined in acceptance/Vagrantfile'
      '#{message} for #{platform}: #{machines}' if !platform.nil?
    end
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end
    
            fields = object.preferences.keys.map do |key|
          if object.has_preference?(key)
            form.label('preferred_#{key}', Spree.t(key) + ': ') +
              preference_field_for(form, 'preferred_#{key}', type: object.preference_type(key))
          end
        end
        safe_join(fields, '<br />'.html_safe)
      end
    
          def link_to_edit(resource, options = {})
        url = options[:url] || edit_object_url(resource)
        options[:data] = { action: 'edit' }
        options[:class] = 'btn btn-primary btn-sm'
        link_to_with_icon('edit', Spree.t(:edit), url, options)
      end
    
              if @order.update_from_params(params, permitted_checkout_attributes, request.headers.env)
            if current_api_user.has_spree_role?('admin') && user_id.present?
              @order.associate_user!(Spree.user_class.find(user_id))
            end
    
      def create
    login(User.authenticate(params[:email_address], params[:password]))
    flash[:remember_login] = true
    redirect_to_with_return_to root_path
  rescue Postal::Errors::AuthenticationError => e
    flash.now[:alert] = 'The credentials you've provided are incorrect. Please check and try again.'
    render 'new'
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