
        
            it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
          allow(driver_obj).to receive(:inspect_container).and_return(empty_network_settings)
    
        it 'returns nil if the index has no matching entries' do
      index << new_entry('foo', 'bar', '1.0')
      index << new_entry('foo', 'baz', '1.2')
    
        # Check for any local plugins defined within the Vagrantfile. If
    # found, validate they are available. If they are not available,
    # request to install them, or raise an exception
    #
    # @return [Hash] plugin list for loading
    def process_configured_plugins
      return if !Vagrant.plugins_enabled?
      errors = vagrantfile.config.vagrant.validate(nil)
      if !errors['vagrant'].empty?
        raise Errors::ConfigInvalid,
          errors: Util::TemplateRenderer.render(
            'config/validation_failed',
            errors: errors)
      end
      # Check if defined plugins are installed
      installed = Plugin::Manager.instance.installed_plugins
      needs_install = []
      config_plugins = find_configured_plugins
      config_plugins.each do |name, info|
        if !installed[name]
          needs_install << name
        end
      end
      if !needs_install.empty?
        ui.warn(I18n.t('vagrant.plugins.local.uninstalled_plugins',
          plugins: needs_install.sort.join(', ')))
        if !Vagrant.auto_install_local_plugins?
          answer = nil
          until ['y', 'n'].include?(answer)
            answer = ui.ask(I18n.t('vagrant.plugins.local.request_plugin_install') + ' [N]: ')
            answer = answer.strip.downcase
            answer = 'n' if answer.to_s.empty?
          end
          if answer == 'n'
            raise Errors::PluginMissingLocalError,
              plugins: needs_install.sort.join(', ')
          end
        end
        needs_install.each do |name|
          pconfig = Util::HashWithIndifferentAccess.new(config_plugins[name])
          ui.info(I18n.t('vagrant.commands.plugin.installing', name: name))
    
          results = subject.machine_config(:default, nil, nil)
      box     = results[:box]
      config  = results[:config]
      expect(config.vm.box).to eq('foo')
      expect(box).to be_nil
      expect(results[:provider_cls]).to be_nil
    end
    
            if host_vm?
          # We need to use a special communicator that proxies our
          # SSH requests over our host VM to the container itself.
          @machine.config.vm.communicator = :docker_hostvm
        end
      end
    
          expect(subject.state.id).to eq(:not_created)
    end
  end
    
                @ui.detail(I18n.t('vagrant.trigger.run.inline', command: config.inline))
          else
            cmd = File.expand_path(config.path, @env.root_path).shellescape
            args = Array(config.args)
            cmd << ' #{args.join(' ')}' if !args.empty?
            cmd = Shellwords.split(cmd)
    
          subject.action(machine, 'up')
      subject.run
    end
    
    
  def new_entry(name)
    entry_klass.new.tap do |e|
      e.name = name
      e.vagrantfile_path = '/bar'
    end
  end
    
      describe 'follow' do
    let(:follow) { sender.follow!(receiver.account) }
    let(:mail) { NotificationMailer.follow(receiver.account, Notification.create!(account: receiver.account, activity: follow)) }
    
      describe 'GET #show' do
    let(:poll) { Fabricate(:poll, status: Fabricate(:status, visibility: visibility)) }
    
      let(:unknown_object_json) do
    {
      '@context': 'https://www.w3.org/ns/activitystreams',
      id: 'https://example.com/actor/hello-world',
      type: 'Note',
      attributedTo: 'https://example.com/actor',
      content: 'Hello world',
      to: 'http://example.com/followers',
    }
  end
    
      # Define the way to render check boxes / radio buttons with labels.
  # Defaults to :nested for bootstrap config.
  #   inline: input + label
  #   nested: label > input
  config.boolean_style = :nested
    
    module Jekyll
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
      # Improved version of Liquid's truncatewords:
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncatewords(input, length)
    truncate = input.split(' ')
    if truncate.length > length
      truncate[0..length-1].join(' ').strip + ' &hellip;'
    else
      input
    end
  end
    
      def check_dns(source = :manual)
    check_spf_record
    check_dkim_record
    check_mx_records
    check_return_path_record
    self.dns_checked_at = Time.now
    self.save!
    if source == :auto && !dns_ok? && self.owner.is_a?(Server)
      WebhookRequest.trigger(self.owner, 'DomainDNSError', {
        :server => self.owner.webhook_hash,
        :domain => self.name,
        :uuid => self.uuid,
        :dns_checked_at => self.dns_checked_at.to_f,
        :spf_status => self.spf_status,
        :spf_error => self.spf_error,
        :dkim_status => self.dkim_status,
        :dkim_error => self.dkim_error,
        :mx_status => self.mx_status,
        :mx_error => self.mx_error,
        :return_path_status => self.return_path_status,
        :return_path_error => self.return_path_error
      })
    end
    dns_ok?
  end
    
            log 'Lock acquired for queued message #{original_message.id}'
    
      def update
    if @ip_address.update(safe_params)
      redirect_to_with_json [:edit, @ip_pool]
    else
      render_form_errors 'edit', @ip_address
    end
  end
    
      def index
    @ip_pools = IPPool.order(:name).to_a
  end