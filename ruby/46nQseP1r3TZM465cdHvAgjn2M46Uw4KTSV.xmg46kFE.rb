
        
          def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
      devise_scope :user do
    get '/some/route' => 'some_devise_controller'
  end
    
    class ApplicationController < ActionController::Base
end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
            @email = headers[:to]
        headers
      end
    
            def send_reset_password_instructions_notification(token)
          send_devise_notification(:reset_password_instructions, token, {})
        end
    
      #
  # Calls the associated block with the name of every file and directory listed
  # as arguments, then recursively on their subdirectories, and so on.
  #
  # Returns an enumerator if no block is given.
  #
  # See the +Find+ module documentation for an example.
  #
  def find(*paths, ignore_error: true) # :yield: path
    block_given? or return enum_for(__method__, *paths, ignore_error: ignore_error)
    
      def in_addr(addr)
    case addr
    when Array
      octets = addr
    else
      m = RE_IPV4ADDRLIKE.match(addr) or return nil
      octets = m.captures
    end
    octets.inject(0) { |i, s|
      (n = s.to_i) < 256 or raise InvalidAddressError, 'invalid address'
      s.match(/\A0./) and raise InvalidAddressError, 'zero-filled number in IPv4 address is ambiguous'
      i << 8 | n
    }
  end
    
            rex = Regexp.new('#{Regexp.quote(file_name)}(\.o|\.rb)?')
        return false if $'.find{|f| f =~ rex}
    
        # Loads the given file in the current session's context and evaluates it.
    #
    # See Irb#suspend_input_method for more information.
    def load_file(path, priv = nil)
      irb.suspend_name(path, File.basename(path)) do
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
            if sets.count == 1
          set = sets.first
        elsif sets.map(&:name).include?(spec)
          set = sets.find { |s| s.name == spec }
        else
          names = sets.map(&:name) * ', '
          raise Informative, 'More than one spec found for '#{spec}':\n#{names}'
        end
    
      action :message do
    title 'Send a message'
    description 'This action allows you to send a message by providing the appropriate options'
    # Acceptable Parameters
    param :to, 'The e-mail addresses of the recipients (max 50)', :type => Array
    param :cc, 'The e-mail addresses of any CC contacts (max 50)', :type => Array
    param :bcc, 'The e-mail addresses of any BCC contacts (max 50)', :type => Array
    param :from, 'The e-mail address for the From header', :type => String
    param :sender, 'The e-mail address for the Sender header', :type => String
    param :subject, 'The subject of the e-mail', :type => String
    param :tag, 'The tag of the e-mail', :type => String
    param :reply_to, 'Set the reply-to address for the mail', :type => String
    param :plain_body, 'The plain text body of the e-mail', :type => String
    param :html_body, 'The HTML body of the e-mail', :type => String
    param :attachments, 'An array of attachments for this e-mail', :type => Array
    param :headers, 'A hash of additional headers', :type => Hash
    param :bounce, 'Is this message a bounce?', :type => :boolean
    # Errors
    error 'ValidationError', 'The provided data was not sufficient to send an email', :attributes => {:errors => 'A hash of error details'}
    error 'NoRecipients', 'There are no recipients defined to receive this message'
    error 'NoContent', 'There is no content defined for this e-mail'
    error 'TooManyToAddresses', 'The maximum number of To addresses has been reached (maximum 50)'
    error 'TooManyCCAddresses', 'The maximum number of CC addresses has been reached (maximum 50)'
    error 'TooManyBCCAddresses', 'The maximum number of BCC addresses has been reached (maximum 50)'
    error 'FromAddressMissing', 'The From address is missing and is required'
    error 'UnauthenticatedFromAddress', 'The From address is not authorised to send mail from this server'
    error 'AttachmentMissingName', 'An attachment is missing a name'
    error 'AttachmentMissingData', 'An attachment is missing data'
    # Return
    returns Hash
    # Action
    action do
      attributes = {}
      attributes[:to] = params.to
      attributes[:cc] = params.cc
      attributes[:bcc] = params.bcc
      attributes[:from] = params.from
      attributes[:sender] = params.sender
      attributes[:subject] = params.subject
      attributes[:reply_to] = params.reply_to
      attributes[:plain_body] = params.plain_body
      attributes[:html_body] = params.html_body
      attributes[:bounce] = params.bounce ? true : false
      attributes[:tag] = params.tag
      attributes[:custom_headers] = params.headers
      attributes[:attachments] = []
      (params.attachments || []).each do |attachment|
        next unless attachment.is_a?(Hash)
        attributes[:attachments] << {:name => attachment['name'], :content_type => attachment['content_type'], :data => attachment['data'], :base64 => true}
      end
      message = OutgoingMessagePrototype.new(identity.server, request.ip, 'api', attributes)
      message.credential = identity
      if message.valid?
        result = message.create_messages
        {:message_id => message.message_id, :messages => result}
      else
        error message.errors.first
      end
    end
  end
    
      expansion(:details) {
    {
      :rcpt_to => o.rcpt_to,
      :mail_from => o.mail_from,
      :subject => o.subject,
      :message_id => o.message_id,
      :timestamp => o.timestamp.to_f,
      :direction => o.scope,
      :size => o.size,
      :bounce => o.bounce,
      :bounce_for_id => o.bounce_for_id,
      :tag => o.tag,
      :received_with_ssl => o.received_with_ssl
    }
  }
    
      def update
    if @credential.update(params.require(:credential).permit(:name, :hold))
      redirect_to_with_json [organization, @server, :credentials]
    else
      render_form_errors 'edit', @credential
    end
  end
    
    end

    
      def attachment
    if @message.attachments.size > params[:attachment].to_i
      attachment = @message.attachments[params[:attachment].to_i]
      send_data attachment.body, :content_type => attachment.mime_type, :disposition => 'download', :filename => attachment.filename
    else
      redirect_to attachments_organization_server_message_path(organization, @server, @message.id), :alert => 'Attachment not found. Choose an attachment from the list below.'
    end
  end
    
      def update
    @organization_obj = current_user.organizations_scope.find(organization.id)
    if @organization_obj.update(params.require(:organization).permit(:name, :time_zone))
      redirect_to_with_json organization_settings_path(@organization_obj), :notice => 'Settings for #{@organization_obj.name} have been saved successfully.'
    else
      render_form_errors 'edit', @organization_obj
    end
  end
    
      def toggle_ssl
    @track_domain.update(:ssl_enabled => !@track_domain.ssl_enabled)
    redirect_to_with_json [organization, @server, :track_domains], :notice => 'SSL settings for #{@track_domain.full_name} updated successfully.'
  end
    
      def update
    @organization_user = organization.user_assignment(@user)
    if @organization_user.update(params.require(:organization_user).permit(:admin))
      redirect_to_with_json [organization, :users], :notice => 'Permissions for #{@organization_user.user.name} have been updated successfully.'
    else
      render_form_errors 'edit', @organization_user
    end
  end
    
      def create
    @webhook = @server.webhooks.build(safe_params)
    if @webhook.save
      redirect_to_with_json [organization, @server, :webhooks]
    else
      render_form_errors 'new', @webhook
    end
  end