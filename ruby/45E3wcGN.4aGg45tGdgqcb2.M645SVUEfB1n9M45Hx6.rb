
        
            attr_accessor :crashlytics_path
    attr_accessor :api_key
    attr_accessor :build_secret
    attr_accessor :emails
    attr_accessor :groups
    attr_accessor :schemes
    attr_accessor :export_method
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
    source 'https://rubygems.org'
    
      # GET /resource/password/new
  def new
    self.resource = resource_class.new
  end
    
      # GET /resource/unlock?unlock_token=abcdef
  def show
    self.resource = resource_class.unlock_access_by_token(params[:unlock_token])
    yield resource if block_given?
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
            # This should return the state of the machine within this provider.
        # The state must be an instance of {MachineState}. Please read the
        # documentation of that class for more information.
        #
        # @return [MachineState]
        def state
          nil
        end
    
          class << self
        # Mark a given block of code as a 'busy' block of code, which will
        # register a SIGINT handler for the duration of the block. When a
        # SIGINT occurs, the `sig_callback` proc will be called. It is up
        # to the callback to behave properly and exit the application.
        def busy(sig_callback)
          register(sig_callback)
          return yield
        ensure
          unregister(sig_callback)
        end
    
          # Renders a template, handling the template as a string, but otherwise
      # acting the same way as {#render}.
      #
      # @return [String]
      def render_string
        Erubis::Eruby.new(template, trim: true).result(binding)
      end
    
    Print a list of currently running Applications and associated
Bundle IDs, which may be useful in a Cask uninstall stanza, eg
    
      // writing
  $('form').on('submit',function(e) {
    $.post('/', {msg: '<%= user %>: ' + $('#msg').val()});
    $('#msg').val(''); $('#msg').focus();
    e.preventDefault();
  });
</script>
    
          def random_string(secure = defined? SecureRandom)
        secure ? SecureRandom.hex(16) : '%032x' % rand(2**128-1)
      rescue NotImplementedError
        random_string false
      end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
        it 'leaves normal params untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => 'bar'
      expect(body).to eq('bar')
    end
    
    
  it 'should set the X-Content-Type-Options for other content types' do
    expect(get('/', {}, 'wants' => 'application/foo').header['X-Content-Type-Options']).to eq('nosniff')
  end
    
    When /^(?:|I )follow '([^']*)'$/ do |link|
  click_link(link)
end
    
        # Extracts the Geometry from a file (or path to a file)
    def self.from_file(file)
      GeometryDetector.new(file).make
    end
    
        def define_getters
      define_instance_getter
      define_class_getter
    end
    
          original_extension = extension(attachment, style_name)
      style = attachment.styles[style_name.to_s.to_sym]
      if style && style[:format]
        style[:format].to_s
      elsif extensions_for_mime_type.include? original_extension
        original_extension
      elsif !extensions_for_mime_type.empty?
        extensions_for_mime_type.first
      else
        # It's possible, though unlikely, that the mime type is not in the
        # database, so just use the part after the '/' in the mime type as the
        # extension.
        %r{/([^/]*)\z}.match(attachment.content_type)[1]
      end
    end
    
            def error_when_not_valid?
          @subject.send(@attachment_name).assign(nil)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}'].present?
        end
    
            raise LoadError, 'Could not find the '#{name}' processor in any of these paths: #{directories.join(', ')}' unless required.any?
      end
    end