
        
            def build_pages
      history = Set.new initial_urls.map(&:downcase)
      instrument 'running.scraper', urls: initial_urls
    
            css('.content', 'article', '.api-header', 'section', '.instance-member').each do |node|
          node.before(node.children).remove
        end
    
            css('.multi-line-signature').each do |node|
          node.name = 'pre'
          node.content = node.content.strip
        end
    
    package = FPM::Package::Dir.new
    
      # Returns path of a processed template PackageInfo given to 'pkgbuild --info'
  # note: '--info' is undocumented:
  # http://managingosx.wordpress.com/2012/07/05/stupid-tricks-with-pkgbuild
  def pkginfo_template_path
    pkginfo_template = Tempfile.open('fpm-PackageInfo')
    pkginfo_data = template('osxpkg.erb').result(binding)
    pkginfo_template.write(pkginfo_data)
    pkginfo_template.close
    pkginfo_template.path
  end # def write_pkginfo_template
    
      # mknod is __xmknod in glibc a wrapper around mknod to handle
  # various stat struct formats. See bits/stat.h in glibc source
  begin
    attach_function :mknod, :mknod, [:string, :uint, :ulong], :int
  rescue FFI::NotFoundError
    # glibc/io/xmknod.c int __xmknod (int vers, const char *path, mode_t mode, dev_t *dev)
    attach_function :xmknod, :__xmknod, [:int, :string, :uint, :pointer], :int
  end
    
    module FPM
  module Issues
    module TarWriter
      # See https://github.com/rubygems/rubygems/issues/1608
      def self.has_issue_1608?
        name, prefix = nil,nil
        io = StringIO.new
        ::Gem::Package::TarWriter.new(io) do |tw|
          name, prefix = tw.split_name('/123456789'*9 + '/1234567890') # abs name 101 chars long
        end
        return prefix.empty?
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
    
      include WithinOrganization
    
      def destroy
    @credential.destroy
    redirect_to_with_json [organization, @server, :credentials]
  end
    
    end

    
        def make_install_directory
      FileUtils.mkdir_p(install_path)
    end
    
          expect('.border-width-alternate').to have_rule(rule)
    end
  end
    
          expect('.margin-false-third').to have_ruleset(ruleset)
      expect('.margin-false-third').to_not have_rule(bad_rule)
    end
  end
end

    
      context 'called with null values' do
    it 'writes rules for others' do
      ruleset = 'position: static; ' +
                'top: 11px; ' +
                'left: 13px;'
      bad_rule = 'position-bottom: null; position-right: null;'