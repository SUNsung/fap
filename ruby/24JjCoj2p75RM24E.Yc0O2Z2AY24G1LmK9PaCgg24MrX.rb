
        
          # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
          def call
        title('Gems')
        table(all_gem_names) do |gem, row|
          row.yellow if update_available?(gem)
          row << gem
          row << installed_gem_version(gem)
          row << '(update available)' if update_available?(gem)
        end
      end
    
        def define_remote_file_task(task, target_roles)
      Capistrano::UploadTask.define_task(task) do |t|
        prerequisite_file = t.prerequisites.first
        file = shared_path.join(t.name)
    
          if download =~ /.tar.gz/
        prefix = download.gsub('.tar.gz', '').gsub('#{target}/', '')
        untar(download) do |entry|
          next unless out = eval_file(entry, file['files'], prefix)
          File.join(target, out)
        end
    
      def raw_message
    @raw_message ||= begin
      mail = Mail.new
      if @custom_headers.is_a?(Hash)
        @custom_headers.each { |key, value| mail[key.to_s] = value.to_s }
      end
      mail.to = self.to_addresses.join(', ') if self.to_addresses.present?
      mail.cc = self.cc_addresses.join(', ') if self.cc_addresses.present?
      mail.from = @from
      mail.sender = @sender
      mail.subject = @subject
      mail.reply_to = @reply_to
      if @html_body.blank? && attachments.empty?
        mail.body = @plain_body
      else
        if !@plain_body.blank?
          mail.text_part = Mail::Part.new
          mail.text_part.body = @plain_body
        end
        if !@html_body.blank?
          mail.html_part = Mail::Part.new
          mail.html_part.content_type = 'text/html; charset=UTF-8'
          mail.html_part.body = @html_body
        end
      end
      attachments.each do |attachment|
        mail.attachments[attachment[:name]] = {
          :mime_type => attachment[:content_type],
          :content => attachment[:data]
        }
      end
      mail.header['Received'] = 'from #{@source_type} (#{self.resolved_hostname} [#{@ip}]) by Postal with HTTP; #{Time.now.utc.rfc2822.to_s}'
      mail.message_id = '<#{@message_id}>'
      mail.to_s
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
    
      def safe_params
    params.require(:http_endpoint).permit(:name, :url, :encoding, :format, :strip_replies, :include_attachments, :timeout)
  end
    
      before_action :admin_required, :only => [:new, :create]
  before_action :require_organization_admin, :only => [:edit, :update, :delete, :destroy]