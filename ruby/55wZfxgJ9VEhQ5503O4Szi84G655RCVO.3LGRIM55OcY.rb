    describe '#revoke!' do
      it 'revokes the key with the client' do
        mock_client_response(:revoke_key!)
    
        context 'with keywords' do
      let(:options) do
        {
          name: { 'en-US' => 'Fastlane Demo' },
          description: { 'en-US' => 'Demo description' },
          keywords: { 'en-US' => 'Some, key, words' }
        }
      end
    
            command = [escaped_gradle_path, 'tasks', '--console=plain'].join(' ')
        output = Action.sh(command, print_command: false, print_command_output: false)
        output.split('\n').each do |line|
          if (result = line.match(/(\w+)\s\-\s([\w\s]+)/))
            self.tasks << GradleTask.new(title: result[1], description: result[2])
          end
        end
    
          it 'raises an exception when use passes workspace' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            increment_version_number(xcodeproj: 'project.xcworkspace')
          end').runner.execute(:test)
        end.to raise_error('Please pass the path to the project, not the workspace')
      end
    end
  end
end

    
      # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end
    
        def default_controllers(options)
      mod = options[:module] || 'devise'
      @controllers = Hash.new { |h,k| h[k] = '#{mod}/#{k}' }
      @controllers.merge!(options[:controllers]) if options[:controllers]
      @controllers.each { |k,v| @controllers[k] = v.to_s }
    end
    
        options[:skip] = %w(
      contents.html
      genindex.html
      py-modindex.html
      glossary.html
      search.html
      intro/whatsnext.html)
    
        self.name = 'Elixir'
    self.type = 'elixir'
    self.root_path = 'api-reference.html'
    self.links = {
      home: 'https://elixir-lang.org/',
      code: 'https://github.com/elixir-lang/elixir'
    }
    
    module Docs
  class PageDb
    attr_reader :pages
    
          base = path
      dest = url.path
    
      it 'renders admin layout as a moderator' do
    routes.draw { get 'success' => 'admin/base#success' }
    sign_in(Fabricate(:user, moderator: true))
    get :success
    expect(response).to render_template layout: 'admin'
  end
    
      def meta
    object.file.meta
  end
end

    
    class NotificationMailerPreview < ActionMailer::Preview
  # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/mention
  def mention
    m = Mention.last
    NotificationMailer.mention(m.account, Notification.find_by(activity: m))
  end
    
      def share_target
    { url_template: 'share?title={title}&text={text}&url={url}' }
  end
end

    
          it 'sets the regeneration marker to expire' do
        allow(RegenerationWorker).to receive(:perform_async)
        get :show
        expect(Redis.current.ttl('account:#{user.account_id}:regeneration')).to be >= 0
      end
    
      File.unlink(out) if (File.size(out) == 0)
    
        # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 143 and pkt.tcp_dport != 143)
    s = find_session((pkt.tcp_sport == 143) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'imap4'
    
          case matched
      when :webhost
        sessions[s[:session]].merge!({k => matches})
        if(s[:get])
          print_status('HTTP GET: #{s[:session]} http://#{s[:webhost]}#{s[:get]}')
          sessions.delete(s[:session])
          return
        end
      when nil
        # No matches, no saved state
      end # end case matched
    end # end of each_key
  end # end of parse
end # end of URL sniffer
    
    #compileOpts = ['']
#outputDir		= system.getProperty('java.io.tmpdir')
outputDir		= 'testoutdir'
compileOpts 	= [ '-target', '1.3', '-source', '1.3', '-d', outputDir ]
    
      # Uninstalls this logger from \{Sass.logger\}. This should only be called if
  # the logger was installed using \{#install!}
  def uninstall!
    if Sass.logger != self
      throw Exception.new('Can't uninstall a logger that's not currently installed.')
    end
    
        # The type of the query (e.g. `'screen'` or `'print'`).
    #
    # When parsed as Sass code, this contains strings and SassScript nodes. When
    # parsed as CSS, it contains a single string (accessible via
    # \{#resolved_type}).
    #
    # @return [Array<String, Sass::Script::Tree::Node>]
    attr_accessor :type
    
        # Evaluates the interpolation.
    #
    # @param environment [Sass::Environment] The environment in which to evaluate the SassScript
    # @return [Sass::Script::Value::String]
    #   The SassScript string that is the value of the interpolation
    def _perform(environment)
      res = ''
      res << @before.perform(environment).to_s if @before
      res << ' ' if @before && @whitespace_before
    
          def assert_valid_stage_names(names)
        invalid = names.find { |n| RESERVED_NAMES.include?(n) }
        return if invalid.nil?
    
        def exit_deploy_because_of_exception(ex)
      warn t(:deploy_failed, ex: ex.message)
      invoke 'deploy:failed'
      exit(false)
    end
    
        # @abstract
    #
    # Copy the contents of the cache-repository onto the release path
    #
    # @return void
    #
    def release
      raise NotImplementedError, 'Your SCM strategy module should provide a #release method'
    end
    
      entries = [{ template: deploy_rb, file: config_dir.join('deploy.rb') }]
  entries += envs.split(',').map { |stage| { template: stage_rb, file: deploy_dir.join('#{stage}.rb') } }
    
          describe 'setting an internal hosts and roles filter' do
        subject { dsl.roles(:app) }
        it 'ignores it' do
          dsl.set :filter, roles: :web, hosts: 'example1.com'
          expect(subject.map(&:hostname)).to eq(['example3.com', 'example4.com'])
        end
      end
    
      at_exit { Application.run! if $!.nil? && Application.run? }
end
    
    begin
  require 'escape_utils'
rescue LoadError
end
    
        it 'leaves TempFiles untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['file'][:filename] + '\n' + \
                                                 request.params['file'][:tempfile].read + '\n' + \
                                                 request.params['other']]]
      end
    
      %w(POST PUT DELETE).each do |method|
    it 'denies #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).not_to be_ok
    end
    
      it 'accepts requests with a changing Accept-Encoding header' do
    # this is tested because previously it led to clearing the session
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_ENCODING' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_ENCODING' => 'b'
    expect(session).not_to be_empty
  end
    
      it 'should not override the header if already set' do
    mock_app with_headers('X-XSS-Protection' => '0')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-XSS-Protection']).to eq('0')
  end
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end