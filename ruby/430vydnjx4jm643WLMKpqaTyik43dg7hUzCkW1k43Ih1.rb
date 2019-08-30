
        
          def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
      # Gets the actual resource stored in the instance variable
  def resource
    instance_variable_get(:'@#{resource_name}')
  end
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
    class TestApp < Rails::Application
  config.root = File.dirname(__FILE__)
  config.session_store :cookie_store, key: 'cookie_store_key'
  secrets.secret_token    = 'secret_token'
  secrets.secret_key_base = 'secret_key_base'
  config.eager_load = false
    
        unless env['devise.skip_trackable']
      warden.session(scope)['last_request_at'] = Time.now.utc.to_i
    end
  end
end

    
          # Resets reset password token and send reset password instructions by email.
      # Returns the token sent in the e-mail.
      def send_reset_password_instructions
        token = set_reset_password_token
        send_reset_password_instructions_notification(token)
    
          private
    
          # Determines what how a Trigger should behave if it runs into an error.
      # Defaults to :halt, otherwise can only be set to :continue.
      #
      # @return [Symbol]
      attr_accessor :on_error
    
    # Unset all host plugins so that we aren't executing subprocess things
# to detect a host for every test.
Vagrant.plugin('2').manager.registered.dup.each do |plugin|
  if plugin.components.hosts.to_hash.length > 0
    Vagrant.plugin('2').manager.unregister(plugin)
  end
end
    
        it 'locks the environment' do
      another = env.create_vagrant_env
      raised  = false
    
              if providers.include? provider.downcase
            raise Errors::ProviderNotFoundSuggestion,
              machine: name, provider: provider,
              suggestion: provider.downcase, providers: providers_str
          end
    
            vf_path           = @machine.provider_config.vagrant_vagrantfile
        host_machine_name = @machine.provider_config.vagrant_machine || :default
        if !vf_path
          # We don't have a Vagrantfile path set, so we're going to use
          # the default but we need to copy it into the data dir so that
          # we don't write into our installation dir (we can't).
          default_path = File.expand_path('../hostmachine/Vagrantfile', __FILE__)
          vf_path      = @machine.env.data_dir.join('docker-host', 'Vagrantfile')
          begin
            @machine.env.lock('docker-provider-hostvm') do
              vf_path.dirname.mkpath
              FileUtils.cp(default_path, vf_path)
            end
          rescue Vagrant::Errors::EnvironmentLockedError
            # Lock contention, just retry
            retry
          end
    
                @ui.detail(I18n.t('vagrant.trigger.run.script', path: config.path))
          end
    
      describe '#run' do
    let(:machine) { new_machine(provider_options) }
    let(:machine2) { new_machine(provider_options) }
    
        it 'continues on error' do
      allow(Vagrant::Util::Subprocess).to receive(:execute).
        and_raise('Fail!')
      allow(env).to receive(:root_path).and_return('/vagrant/home')
      allow(FileUtils).to receive(:chmod).and_return(true)
    
        it 'searches current PATH if original PATH did not result in valid executable' do
      expect(Vagrant::Util::Which).to receive(:which).with('ssh', original_path: true).and_return(nil)
      expect(Vagrant::Util::Which).to receive(:which).with('ssh').and_return('valid-return')
      allow(Vagrant::Util::SafeExec).to receive(:exec).and_return(nil)
      described_class.exec(ssh_info)
    end
    
            # Machine-readable (non-formatted) output
        @env.ui.machine('metadata', 'machine-count', entries.length.to_s);
        entries.each do |entry|
          opts = { 'target' => entry.name.to_s }
          @env.ui.machine('machine-id', entry.id.to_s[0...7], opts)
          @env.ui.machine('provider-name', entry.provider.to_s, opts)
          @env.ui.machine('machine-home', entry.vagrantfile_path.to_s, opts)
          @env.ui.machine('state', entry.state.to_s, opts)
        end
    
      if rss_url && rss_url.length > 0
    blogs.push(Struct::Blog.new(name, web_url, rss_url))
  else
    unavailable.push(Struct::Blog.new(name, web_url, rss_url))
  end
end
    
          private
    
          def initialize(values={})
        @trusted_keys = []
        @fetched_keys = []
        @locations = {}
        @values = values
        @trusted = true
      end
    
          def after
        @versions[1][0..6]
      end
    
    def normal(text)
  text.gsub!(' ', '')
  text.gsub!('\n', '')
  text
end
    
      if wiki_options[:plantuml_url]
    Gollum::Filter::PlantUML.configure do |config|
      puts 'Using #{wiki_options[:plantuml_url]} as PlantUML endpoint'
      config.url = wiki_options[:plantuml_url]
    end
  end
    
        context 'when iteration is nil' do
      before do
        subject.iteration = nil
      end
    
      # Handle architecture naming conversion:
  # <osname>:<osversion>:<arch>:<wordsize>[.other]
  def architecture
    osname    = %x{uname -s}.chomp
    osversion = %x{uname -r}.chomp.split('.').first
    
      end # def input
    
        if File.exists?(params[:output])
      # TODO(sissel): Allow folks to choose output?
      logger.error('Puppet module directory '#{params[:output]}' already ' \
                    'exists. Delete it or choose another output (-p flag)')
    end
    
      def create_scripts
    if script?(:after_install)
      File.write(File.join(fpm_meta_path, 'after_install'), script(:after_install))
    end
  end