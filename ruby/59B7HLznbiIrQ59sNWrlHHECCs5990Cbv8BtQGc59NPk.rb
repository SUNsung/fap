
        
                  directory = select_directory(file_name)
          directory ? File.join(category_directory(directory), file_name) : nil
        end
    
    module Gitlab
  module CryptoHelper
    extend self
    
            self.instance_eval(&block) if block_given?
    
        context 'when user cannot update_project_member' do
      before do
        allow(presenter).to receive(:can?).with(user, :update_project_member, presenter).and_return(false)
        allow(presenter).to receive(:can?).with(user, :override_project_member, presenter).and_return(false)
      end
    
          def get_type
        category, subcategory, subfolder, page = *slug.split('/')
        provider = page ? subcategory : category
        nice_provider = PROVIDER_NAME_MAP[provider] || provider.capitalize
    
      action :raw do
    title 'Send a raw RFC2882 message'
    description 'This action allows you to send us a raw RFC2822 formatted message along with the recipients that it should be sent to. This is similar to sending a message through our SMTP service.'
    param :mail_from, 'The address that should be logged as sending the message', :type => String, :required => true
    param :rcpt_to, 'The addresses this message should be sent to', :type => Array, :required => true
    param :data, 'A base64 encoded RFC2822 message to send', :type => String, :required => true
    param :bounce, 'Is this message a bounce?', :type => :boolean
    returns Hash
    error 'UnauthenticatedFromAddress', 'The From address is not authorised to send mail from this server'
    action do
      # Decode the raw message
      raw_message = Base64.decode64(params.data)
    
      def check_spf_record
    result = resolver.getresources(self.name, Resolv::DNS::Resource::IN::TXT)
    spf_records = result.map(&:data).select { |d| d =~ /\Av=spf1/}
    if spf_records.empty?
      self.spf_status = 'Missing'
      self.spf_error = 'No SPF record exists for this domain'
    else
      suitable_spf_records = spf_records.select { |d| d =~ /include\:\s*#{Regexp.escape(Postal.config.dns.spf_include)}/}
      if suitable_spf_records.empty?
        self.spf_status = 'Invalid'
        self.spf_error = 'An SPF record exists but it doesn't include #{Postal.config.dns.spf_include}'
        false
      else
        self.spf_status = 'OK'
        self.spf_error = nil
        true
      end
    end
  end
    
      def update
    if @credential.update(params.require(:credential).permit(:name, :hold))
      redirect_to_with_json [organization, @server, :credentials]
    else
      render_form_errors 'edit', @credential
    end
  end
    
    end
