
        
          p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
                c.action do |args, opts|
              Jekyll::Commands::NewTheme.process(args, opts)
            end
          end
        end
    
          # It's important to *not* have this code inside the rescue block
      # otherwise all NameErrors will be caught and the error message is
      # confusing
      begin
        return self.try_switch_to_lane(method_sym, arguments)
      rescue LaneNotAvailableError
        # We don't actually handle this here yet
        # We just try to use a user configured lane first
        # and only if there is none, we're gonna check for the
        # built-in actions
      end
    
            inner_command = 'git describe --tags `git rev-list --tags --max-count=1`'
        pseudocommand = 'git log --pretty=\'%s%n%b\' --date=\'short\' #{inner_command.shellescape}...HEAD'
        expect(result).to eq(pseudocommand)
      end
    
            expect(result.size).to eq(4)
        expect(result[0]).to eq('security create-keychain -p testpassword ~/Library/Keychains/test.keychain')
    
        context 'external commands are failed' do
      context 'with error_callback' do
        it 'doesn't raise shell_error' do
          allow(FastlaneCore::UI).to receive(:error)
          called = false
          expect_command('exit 1', exitstatus: 1)
          Fastlane::Actions.sh('exit 1', error_callback: ->(_) { called = true })
    
        # Determines the defined data type of this ConfigItem
    def data_type
      if @data_type.kind_of?(Symbol)
        nil
      elsif @data_type
        @data_type
      else
        (@is_string ? String : nil)
      end
    end
    
    module CrossplatformShellwords
  # handle switching between implementations of shellescape
  def shellescape(str)
    if FastlaneCore::Helper.windows?
      WindowsShellwords.shellescape(str)
    else
      # using `escape` instead of expected `shellescape` here
      # which corresponds to Shellword's `String.shellescape` implementation
      # https://github.com/ruby/ruby/blob/1cf2bb4b2085758112503e7da7414d1ef52d4f48/lib/shellwords.rb#L216
      Shellwords.escape(str)
    end
  end
  module_function :shellescape
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
          def extract_path_from_location(location)
        uri = parse_uri(location)
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
              if recoverable.persisted?
            if recoverable.reset_password_period_valid?
              recoverable.reset_password(attributes[:password], attributes[:password_confirmation])
            else
              recoverable.errors.add(:reset_password_token, :expired)
            end
          end
    
        def resource_params
      params.require(:report_note).permit(
        :content,
        :report_id
      )
    end
    
      def maxheight_or_default
    params[:maxheight].present? ? params[:maxheight].to_i : nil
  end
end

    
      def set_account
    @account = Account.find(params[:id])
  end
end

    
      def require_enabled_api!
    head 404 unless Setting.activity_api_enabled
  end
end

    
      def subscription_params
    params.require(:subscription).permit(:endpoint, keys: [:auth, :p256dh])
  end
    
      it 'calls #to_path on second argument when passed ?e and a filename' do
    p = mock('path')
    p.should_receive(:to_path).and_return @file
    Kernel.test(?e, p)
  end
    
      it 'sets the return value of the catch block to nil by default' do
    res = catch :blah do
      throw :blah
    end
    res.should == nil
  end
    
      it 'creates a public method in script binding' do
    eval @code, script_binding
    Object.should have_method :boom
  end
    
      # normalize out multiple slashes, directory traversal, and self referrential directories
  def normalize!(str)
    i = 0
    while (str.gsub!(/(\/\.\/|\/\w+\/\.\.\/|\/\/)/,'/')); i += 1; end
    i
  end
    
        head + [data.length].pack('v') + data
  end
    
              # Encodes the auth_time field
          #
          # @return [String]
          def encode_auth_time
            [auth_time].pack('N')
          end
    
                decode_asn1(asn1)
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcRequestBody from an String
          #
          # @param input [String] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
              # Decodes a Rex::Proto::Kerberos::Model::LastRequest
          #
          # @param input [String, OpenSSL::ASN1::Sequence] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::Sequence
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode LastRequest, invalid input'
            end
    
    @@ login
<form action='/'>
  <label for='user'>User Name:</label>
  <input name='user' value='' />
  <input type='submit' value='GO!' />
</form>
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
      it 'accepts post form requests with masked authenticity_token field' do
    post('/', {'authenticity_token' => masked_token}, 'rack.session' => session)
    expect(last_response).to be_ok
  end
    
      it 'should allow changing report only' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :report_uri => '/my_amazing_csp_report_parser', :report_only => true
      run DummyApp
    end
    
      def render(context)
    config_tag(context.registers[:site].config, @key, @tag, @classname)
  end
end
    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)
