
        
            groups << @user.authorized_groups.visible_to_user(current_user) if current_user
    groups << @user.authorized_groups.public_to_user(current_user)
    
    def main(pidfile, cmd)
  if middle_pid = Process.fork
    # outer process
    # Do not exit the outer process before the middle process finishes
    Process.waitpid(middle_pid)
    exit $?.exitstatus
  end
    
          if valid_type?(type)
        type.constantize.new(attributes).tap do |instance|
          instance.user = user if instance.respond_to?(:user=)
        end
      else
        const_get(:BASE_CLASS_NAME).constantize.new(attributes).tap do |instance|
          instance.type = type
          instance.user = user if instance.respond_to?(:user=)
        end
      end
    end
  end
end
    
        begin
      raise '#{short_type} does not support dry-run' unless can_dry_run?
      readonly!
      @dry_run_started_at = Time.zone.now
      @dry_run_logger.info('Dry Run started')
      if event
        raise 'This agent cannot receive an event!' unless can_receive_events?
        receive([event])
      else
        check
      end
      @dry_run_logger.info('Dry Run finished')
    rescue => e
      @dry_run_logger.info('Dry Run failed')
      error 'Exception during dry-run. #{e.message}: #{e.backtrace.join('\n')}'
    end
    
        @services = current_user.services.reorder(table_sort).page(params[:page])
    
      def test_keyword_self_reference
    bug9593 = '[ruby-core:61299] [Bug #9593]'
    o = Object.new
    assert_warn(/circular argument reference - var/) do
      o.instance_eval('def foo(var: defined?(var)) var end')
    end
    assert_equal(42, o.foo(var: 42))
    assert_equal('local-variable', o.foo, bug9593)
    
      ##
  # The default set of extensions are:
  #
  # * The certificate is not a certificate authority
  # * The key for the certificate may be used for key and data encipherment
  #   and digital signatures
  # * The certificate contains a subject key identifier
    
      def test_post_install_message_no
    @cmd.handle_options %w[--no-post-install-message]
    
        assert_equal URI(@proxy_uri), proxy
  end
    
      def participation_answer(user)
    poll_participations.find_by(author_id: user.person.id)
  end
    
        on :fetch_private_key do |diaspora_id|
      key = Person.where(diaspora_handle: diaspora_id).joins(:owner).pluck(:serialized_private_key).first
      OpenSSL::PKey::RSA.new(key) unless key.nil?
    end
    
        def index
      pods_json = PodPresenter.as_collection(Pod.all)
    
        def assign_attributes(values)
      values.each do |k, v|
        public_send('#{k}=', v)
      end
    end
    
      def _log(level, message)
    @messages << [level, message]
  end
end

    
            {
          :always_update     => false,
          :template_location => root + '/public/stylesheets/sass',
          :css_location      => root + '/public/stylesheets',
          :cache_location    => root + '/tmp/sass-cache',
          :always_check      => env != 'production',
          :quiet             => env != 'production',
          :full_exception    => env != 'production'
        }.freeze
      end
    end
  end
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
          def escape_string(str)
        str = @escaper.escape_url(str)        if @url
        str = @escaper.escape_html(str)       if @html
        str = @escaper.escape_javascript(str) if @javascript
        str
      end
    end
  end
end

    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
      it 'should not override the header if already set' do
    mock_app with_headers('X-Frame-Options' => 'allow')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('allow')
  end
end

    
        it 'accepts #{method} requests with whitelisted Origin' do
      mock_app do
        use Rack::Protection::HttpOrigin, :origin_whitelist => ['http://www.friend.com']
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://www.friend.com')).to be_ok
    end
  end
end

    
      it 'should not override the header if already set X-Content-Type-Options' do
    mock_app with_headers('X-Content-Type-Options' => 'sniff')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Content-Type-Options']).to eq('sniff')
  end
end

    
      # rspec-mocks config goes here. You can use an alternate test double
  # library (such as bogus or mocha) by changing the `mock_with` option here.
  config.mock_with :rspec do |mocks|
    # Enable only the newer, non-monkey-patching expect syntax.
    # For more details, see:
    #   - http://teaisaweso.me/blog/2013/05/27/rspecs-new-message-expectation-syntax/
    mocks.syntax = :expect
    
      it 'allows passing on values in env' do
    klass    = described_class
    changer  = Struct.new(:app) do
      def call(env)
        env['foo.bar'] = 42
        app.call(env)
      end
    end
    detector = Struct.new(:app) do
      def call(env)
        app.call(env)
      end
    end
    
        def add_paperclip_callbacks
      @klass.send(
        :define_paperclip_callbacks,
        :post_process, :'#{@name}_post_process')
    end
    
      # Get list of styles saved on previous deploy (running rake paperclip:refresh:missing_styles)
  def self.get_registered_attachments_styles
    YAML.load_file(Paperclip.registered_attachments_styles_path)
  rescue Errno::ENOENT
    nil
  end
  private_class_method :get_registered_attachments_styles
    
        def clear_processors!
      @known_processors.try(:clear)
    end