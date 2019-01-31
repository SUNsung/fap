
        
                log_action :change_email, @user
    
        def disable
      authorize @custom_emoji, :disable?
      @custom_emoji.update!(disabled: true)
      log_action :disable, @custom_emoji
      flash[:notice] = I18n.t('admin.custom_emojis.disabled_msg')
      redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end
    
      def hub_lease_seconds
    params['hub.lease_seconds']
  end
    
    module LogStash
  module PluginManager
  end
end
    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
      parameter 'file', 'the package file name', :attribute_name => :package_file, :required => true
    
      it 'records when the config was read' do
    expect(subject.read_at).to be <= Time.now
  end
    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end
