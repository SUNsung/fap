describe Gitlab::Template::Finders::GlobalTemplateFinder do
  let(:base_dir) { Dir.mktmpdir }
    
            described_class.approximate_counts(models, strategies: strategies)
      end
    end
    
        visit(diffs_project_merge_request_path(project, merge_request))
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
            begin
          token = decode_token(token)
        rescue ArgumentError # encoded_masked_token is invalid Base64
          return false
        end
    
    module Rack
  module Protection
    class Base
      DEFAULT_OPTIONS = {
        :reaction    => :default_reaction, :logging   => true,
        :message     => 'Forbidden',       :encryptor => Digest::SHA1,
        :session_key => 'rack.session',    :status    => 403,
        :allow_empty_referrer => true,
        :report_key           => 'protection.failed',
        :html_types           => %w[text/html application/xhtml text/xml application/xml]
      }
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS
    # Supported browsers:: all
    # More infos::         http://en.wikipedia.org/wiki/Cross-site_scripting
    #
    # Automatically escapes Rack::Request#params so they can be embedded in HTML
    # or JavaScript without any further issues. Calls +html_safe+ on the escaped
    # strings if defined, to avoid double-escaping in Rails.
    #
    # Options:
    # escape:: What escaping modes to use, should be Symbol or Array of Symbols.
    #          Available: :html (default), :javascript, :url
    class EscapedParams < Base
      extend Rack::Utils
    
      it 'should set the Content Security Policy' do
    expect(
      get('/', {}, 'wants' => 'text/html').headers['Content-Security-Policy']
    ).to eq('connect-src 'self'; default-src none; img-src 'self'; script-src 'self'; style-src 'self'')
  end
    
        it 'redirects requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/')
    end
    
      def redirect_to_with_json(url, flash_messages = {})
    if url.is_a?(Array) && url[0] == :return_to
      url = url_with_return_to(url[1])
    else
      url = url_for(url)
    end
    
      def new
    @track_domain = @server.track_domains.build
  end
    
      def edit
    @user = User.find(current_user.id)
  end