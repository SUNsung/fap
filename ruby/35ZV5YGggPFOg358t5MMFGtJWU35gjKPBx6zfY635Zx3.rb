
        
          # :stopdoc:
  def _dispatch_0() nil end
  def _dispatch_1(a) a end
  def _dispatch_2(a, b) a end
  def _dispatch_3(a, b, c) a end
  def _dispatch_4(a, b, c, d) a end
  def _dispatch_5(a, b, c, d, e) a end
  def _dispatch_6(a, b, c, d, e, f) a end
  def _dispatch_7(a, b, c, d, e, f, g) a end
  # :startdoc:
    
    # include would include the module in Object
# extend only extends the `main` object
extend Sinatra::Delegator
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end
    
      it 'accepts post requests with correct X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => token)
    expect(last_response).to be_ok
  end
    
      it 'should allow setting CSP3 no arg directives' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :block_all_mixed_content => true, :disown_opener => true, :upgrade_insecure_requests => true