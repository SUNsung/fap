
        
                def test_spec_name_on_key_lookup
          spec = spec(:readonly, 'readonly' => { 'adapter' => 'sqlite3' })
          assert_equal 'readonly', spec.name
        end
    
      test 'raw_params returns a tuple of two key value pair strings' do
    auth = sample_request('rcHu+HzSFw89Ypyhn/896A=').authorization.to_s
    actual = ActionController::HttpAuthentication::Token.raw_params(auth)
    expected = ['token=\'rcHu+HzSFw89Ypyhn/896A=\'', 'nonce=\'def\'']
    assert_equal(expected, actual)
  end
    
      class MyController < ActionController::Metal
    use BlockMiddleware do |config|
      config.configurable_message = 'Configured by block.'
    end
    use MyMiddleware
    middleware.insert_before MyMiddleware, ExclaimerMiddleware
    
      test 'does not increment the deliveries collection on bogus deliveries' do
    old_raise_delivery_errors = DeliveryMailer.raise_delivery_errors
    begin
      DeliveryMailer.delivery_method = BogusDelivery
      DeliveryMailer.raise_delivery_errors = false
      DeliveryMailer.welcome.deliver_now
      assert_equal [], DeliveryMailer.deliveries
    ensure
      DeliveryMailer.raise_delivery_errors = old_raise_delivery_errors
    end
  end
end

    
    gem 'activemodel-serializers-xml', github: 'rails/activemodel-serializers-xml'
    
    class Devise::PasswordsController < DeviseController
  prepend_before_action :require_no_authentication
  # Render the #edit only if coming from a reset password email link
  append_before_action :assert_reset_token_passed, only: :edit
    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
        def http_auth
      self.status = 401
      self.headers['WWW-Authenticate'] = %(Basic realm=#{Devise.http_authentication_realm.inspect}) if http_auth_header?
      self.content_type = request.format.to_s
      self.response_body = http_auth_body
    end
    
    puts 'Validating #{links.size} links...'
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
        def html_output_for(script_url, code)
      code = CGI.escapeHTML code
      <<-HTML
<div><script src='#{script_url}'></script>
<noscript><pre><code>#{code}</code></pre></noscript></div>
      HTML
    end
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
        def render(context)
      file_dir = (context.registers[:site].source || 'source')
      file_path = Pathname.new(file_dir).expand_path
      file = file_path + @file
    
          attr_reader :agent