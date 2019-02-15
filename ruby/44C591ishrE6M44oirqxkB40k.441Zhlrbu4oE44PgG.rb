
        
            def to_a
      @filters.dup
    end
    
        def build_page(path)
      response = request_one url_for(path)
      result = handle_response(response)
      yield result if block_given?
      result
    end
    
        def log(msg)
      puts '\r' + justify(msg)
    end
    
          def is_edit_page
        true
      end
    
    # test/spec/mini 3
# http://gist.github.com/25455
# chris@ozmm.org
# file:lib/test/spec/mini.rb
def context(*args, &block)
  return super unless (name = args.first) && block
  require 'test/unit'
  klass = Class.new(defined?(ActiveSupport::TestCase) ? ActiveSupport::TestCase : Test::Unit::TestCase) do
    def self.test(name, &block)
      define_method('test_#{name.gsub(/\W/, '_')}', &block) if block
    end
    
      teardown do
    FileUtils.rm_rf(@path)
  end
    
      # piece file back together and write
  manifest = '  s.files = %w[\n#{files}\n  ]\n'
  spec = [head, manifest, tail].join('  # = MANIFEST =\n')
  File.open(gemspec_file, 'w') { |io| io.write(spec) }
  puts 'Updated #{gemspec_file}'
end
    
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
    
      extend ActiveSupport::Concern
    
      def update
    if @credential.update(params.require(:credential).permit(:name, :hold))
      redirect_to_with_json [organization, @server, :credentials]
    else
      render_form_errors 'edit', @credential
    end
  end
    
      before_action do
    if params[:server_id]
      @server = organization.servers.present.find_by_permalink!(params[:server_id])
      params[:id] && @domain = @server.domains.find_by_uuid!(params[:id])
    else
      params[:id] && @domain = organization.domains.find_by_uuid!(params[:id])
    end
  end
    
      def create
    @http_endpoint = @server.http_endpoints.build(safe_params)
    if @http_endpoint.save
      flash[:notice] = params[:return_notice] if params[:return_notice].present?
      redirect_to_with_json [:return_to, [organization, @server, :http_endpoints]]
    else
      render_form_errors 'new', @http_endpoint
    end
  end
    
      def new
    @ip_pool = IPPool.new
  end
    
      def style_width(width, options = {})
    width = 100 if width > 100.0
    width = 0 if width < 0.0
    style = 'width:#{width}%;'
    if options[:color]
      if width >= 100
        style += ' background-color:#e2383a;'
      elsif width >= 90
        style += ' background-color:#e8581f;'
      end
    end
    style
  end