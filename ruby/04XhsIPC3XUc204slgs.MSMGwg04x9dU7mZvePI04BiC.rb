
        
                  # The sleep ensures that the output is truly flushed before any `sudo`
          # commands are issued.
          ui.info I18n.t('vagrant.hosts.bsd.nfs_export')
          sleep 0.5
    
          def rsync_pre(machine, opts)
        guest_path = Shellwords.escape(opts[:guestpath])
        machine.communicate.sudo('mkdir -p #{guest_path}')
      end
    
        let(:empty_opts) {{:type=>:rsync,
                 :guestpath=>'/vagrant',
                 :hostpath=>'/home/user/syncfolder',
                 :disabled=>false,
                 :__vagrantfile=>true,
                 :exclude=>[],
                 :owner=>'vagrant',
                 :group=>'vagrant'}}
    
    # Unset all host plugins so that we aren't executing subprocess things
# to detect a host for every test.
Vagrant.plugin('2').manager.registered.dup.each do |plugin|
  if plugin.components.hosts.to_hash.length > 0
    Vagrant.plugin('2').manager.unregister(plugin)
  end
end
    
          expect(app).to receive(:call).with(env)
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
              # Test if the provider is usable or not
          begin
            provider_cls.usable?(true)
          rescue Errors::VagrantError => e
            raise Errors::ProviderNotUsable,
              machine: name.to_s,
              provider: provider.to_s,
              message: e.to_s
          end
        else
          box_formats = provider
        end
      end
    
          env = environment.create_vagrant_env
      expect(env.pushes).to eq([:noop])
    end
  end
    
      describe '#install_local' do
    let(:plugin_source){ double('plugin_source', spec: plugin_spec) }
    let(:plugin_spec){ double('plugin_spec', name: plugin_name, version: plugin_version) }
    let(:plugin_name){ 'PLUGIN_NAME' }
    let(:plugin_version){ '1.0.0' }
    let(:plugin_path){ 'PLUGIN_PATH' }
    let(:sources){ 'SOURCES' }
    
            def build(dir, **opts, &block)
          name = machine.name.to_s
          @logger.debug('Applying build for `#{name}` using `#{dir}` directory.')
          begin
            update_composition do |composition|
              services = composition['services'] ||= {}
              services[name] ||= {}
              services[name]['build'] = {'context' => dir}
              # Extract custom dockerfile location if set
              if opts[:extra_args] && opts[:extra_args].include?('--file')
                services[name]['build']['dockerfile'] = opts[:extra_args][opts[:extra_args].index('--file') + 1]
              end
              # Extract any build args that can be found
              case opts[:build_args]
              when Array
                if opts[:build_args].include?('--build-arg')
                  idx = 0
                  build_args = {}
                  while(idx < opts[:build_args].size)
                    arg_value = opts[:build_args][idx]
                    idx += 1
                    if arg_value.start_with?('--build-arg')
                      if !arg_value.include?('=')
                        arg_value = opts[:build_args][idx]
                        idx += 1
                      end
                      key, val = arg_value.to_s.split('=', 2).to_s.split('=')
                      build_args[key] = val
                    end
                  end
                end
              when Hash
                services[name]['build']['args'] = opts[:build_args]
              end
            end
          rescue => error
            @logger.error('Failed to apply build using `#{dir}` directory: #{error.class} - #{error}')
            update_composition do |composition|
              composition['services'].delete(name)
            end
            raise
          end
        end
    
                  expect(action_runner).to receive(:run).with(any_args) { |action, opts|
                expect(opts[:box_download_ca_cert]).to eq('foo')
                expect(opts[:box_download_ca_path]).to eq('bar')
                expect(opts[:box_download_client_cert]).to eq('baz')
                expect(opts[:box_download_insecure]).to be(true)
                true
              }
    
          def destroy
        authorization = Api::OpenidConnect::Authorization.find_by(id: params[:id])
        if authorization
          authorization.destroy
        else
          flash[:error] = I18n.t('api.openid_connect.authorizations.destroy.fail', id: params[:id])
        end
        redirect_to api_openid_connect_user_applications_url
      end
    
          def create
        req = Rack::Request.new(request.env)
        if req['client_assertion_type'] == 'urn:ietf:params:oauth:client-assertion-type:jwt-bearer'
          handle_jwt_bearer(req)
        end
        self.status, headers, self.response_body = Api::OpenidConnect::TokenEndpoint.new.call(request.env)
        headers.each {|name, value| response.headers[name] = value }
        nil
      end
    
      def raw
    @conversation = current_user.conversations.where(id: params[:conversation_id]).first
    if @conversation
      @first_unread_message_id = @conversation.first_unread_message(current_user).try(:id)
      @conversation.set_read(current_user)
      render partial: 'conversations/show', locals: {conversation: @conversation}
    else
      head :not_found
    end
  end
    
      namespace :install do
    GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
      desc 'Build and install #{gem} as local gem'
      task gem => package(gem, '.gem') do
        sh 'gem install #{package(gem, '.gem')}'
      end
    end
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
    <style type='text/css' media='screen'>
  *                   {margin: 0; padding: 0; border: 0; outline: 0;}
  div.clear           {clear: both;}
  body                {background: #EEEEEE; margin: 0; padding: 0;
                       font-family: 'Lucida Grande', 'Lucida Sans Unicode',
                       'Garuda';}
  code                {font-family: 'Lucida Console', monospace;
                       font-size: 12px;}
  li                  {height: 18px;}
  ul                  {list-style: none; margin: 0; padding: 0;}
  ol:hover            {cursor: pointer;}
  ol li               {white-space: pre;}
  #explanation        {font-size: 12px; color: #666666;
                       margin: 20px 0 0 100px;}
/* WRAP */
  #wrap               {width: 1000px; background: #FFFFFF; margin: 0 auto;
                       padding: 30px 50px 20px 50px;
                       border-left: 1px solid #DDDDDD;
                       border-right: 1px solid #DDDDDD;}
/* HEADER */
  #header             {margin: 0 auto 25px auto;}
  #header img         {float: left;}
  #header #summary    {float: left; margin: 12px 0 0 20px; width:660px;
                       font-family: 'Lucida Grande', 'Lucida Sans Unicode';}
  h1                  {margin: 0; font-size: 36px; color: #981919;}
  h2                  {margin: 0; font-size: 22px; color: #333333;}
  #header ul          {margin: 0; font-size: 12px; color: #666666;}
  #header ul li strong{color: #444444;}
  #header ul li       {display: inline; padding: 0 10px;}
  #header ul li.first {padding-left: 0;}
  #header ul li.last  {border: 0; padding-right: 0;}
/* BODY */
  #backtrace,
  #get,
  #post,
  #cookies,
  #rack               {width: 980px; margin: 0 auto 10px auto;}
  p#nav               {float: right; font-size: 14px;}
/* BACKTRACE */
  a#expando           {float: left; padding-left: 5px; color: #666666;
                      font-size: 14px; text-decoration: none; cursor: pointer;}
  a#expando:hover     {text-decoration: underline;}
  h3                  {float: left; width: 100px; margin-bottom: 10px;
                       color: #981919; font-size: 14px; font-weight: bold;}
  #nav a              {color: #666666; text-decoration: none; padding: 0 5px;}
  #backtrace li.frame-info {background: #f7f7f7; padding-left: 10px;
                           font-size: 12px; color: #333333;}
  #backtrace ul       {list-style-position: outside; border: 1px solid #E9E9E9;
                       border-bottom: 0;}
  #backtrace ol       {width: 920px; margin-left: 50px;
                       font: 10px 'Lucida Console', monospace; color: #666666;}
  #backtrace ol li    {border: 0; border-left: 1px solid #E9E9E9;
                       padding: 2px 0;}
  #backtrace ol code  {font-size: 10px; color: #555555; padding-left: 5px;}
  #backtrace-ul li    {border-bottom: 1px solid #E9E9E9; height: auto;
                       padding: 3px 0;}
  #backtrace-ul .code {padding: 6px 0 4px 0;}
  #backtrace.condensed .system,
  #backtrace.condensed .framework {display:none;}
/* REQUEST DATA */
  p.no-data           {padding-top: 2px; font-size: 12px; color: #666666;}
  table.req           {width: 980px; text-align: left; font-size: 12px;
                       color: #666666; padding: 0; border-spacing: 0;
                       border: 1px solid #EEEEEE; border-bottom: 0;
                       border-left: 0;
                       clear:both}
  table.req tr th     {padding: 2px 10px; font-weight: bold;
                       background: #F7F7F7; border-bottom: 1px solid #EEEEEE;
                       border-left: 1px solid #EEEEEE;}
  table.req tr td     {padding: 2px 20px 2px 10px;
                       border-bottom: 1px solid #EEEEEE;
                       border-left: 1px solid #EEEEEE;}
/* HIDE PRE/POST CODE AT START */
  .pre-context,
  .post-context       {display: none;}
    
          def self.token(session)
        self.new(nil).mask_authenticity_token(session)
      end
    
          def encrypt(value)
        options[:encryptor].hexdigest value.to_s
      end
    
            if has_vector?(request, headers)
          warn env, 'attack prevented by #{self.class}'
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to be_nil
    expect(headers['Content-Security-Policy-Report-Only']).to eq('connect-src 'self'; default-src none; img-src 'self'; report-uri /my_amazing_csp_report_parser; script-src 'self'; style-src 'self'')
  end