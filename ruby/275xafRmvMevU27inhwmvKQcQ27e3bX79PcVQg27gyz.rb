
        
                # Remove skipped items
        css('li > span').each do |node|
          node.parent.remove
        end
      end
    
            if slug.in?(%w(cintro carray c_interface))
          'C Interface'
        elsif context[:html_title].start_with?('SQLite Query Language')
          'Query Language'
        else
          'Miscellaneous'
        end
      end
    
              if @config.respond_to?(:node_name) && !present?(@config.node_name)
            # First attempt to get the node name from the hostname, and if that
            # is not present, generate/retrieve a random hostname.
            hostname = @machine.config.vm.hostname
            if present?(hostname)
              @machine.ui.info I18n.t('vagrant.provisioners.chef.using_hostname_node_name',
                hostname: hostname,
              )
              @config.node_name = hostname
            else
              cache = @machine.data_dir.join('chef_node_name')
              if !cache.exist?
                @machine.ui.info I18n.t('vagrant.provisioners.chef.generating_node_name')
                cache.open('w+') do |f|
                  f.write('vagrant-#{SecureRandom.hex(4)}')
                end
              end
    
            # Runs a script on a guest
        #
        # @param [Provisioners::Shell::Config] config A Shell provisioner config
        def run(config, on_error, exit_codes)
          if config.inline
            if Vagrant::Util::Platform.windows?
              cmd = config.inline
            else
              cmd = Shellwords.split(config.inline)
            end
    
          trigger = trigger_run.before_triggers.first
      shell_config = trigger.run_remote
      on_error = trigger.on_error
      exit_codes = trigger.exit_codes
    
        context 'when using '%' in a private_key_path' do
      let(:private_key_path) { '/tmp/percent%folder' }
      let(:ssh_info) {{
        host: 'localhost',
        port: 2222,
        username: 'vagrant',
        private_key_path: [private_key_path],
        compression: true,
        dsa_authentication: true
      }}
    
        it 'removes invalid entries' do
      # Invalid entry because vagrantfile path is gone
      entryA = new_entry('A')
      entryA.vagrantfile_path = '/i/dont/exist'
      locked = iso_env.machine_index.set(entryA)
      iso_env.machine_index.release(locked)
    
        def initialize(attributes={})
      assign_attributes(attributes)
      yield(self) if block_given?
    end
    
      def set_up_contacts_mobile
    @contacts = case params[:set]
      when 'only_sharing'
        current_user.contacts.only_sharing
      when 'all'
        current_user.contacts
      else
        if params[:a_id]
          @aspect = current_user.aspects.find(params[:a_id])
          @aspect.contacts
        else
          current_user.contacts.receiving
        end
    end
    @contacts = @contacts.for_a_stream.paginate(:page => params[:page], :per_page => 25)
    @contacts_size = @contacts.length
  end
end

    
          # Scan to find the location of the two contiguous null records
      open(target_path, 'rb') do |file|
    
        pkgdata = {
      'arch' => architecture,
      'name' => name,
      'version' => pkg_version,
      'comment' => description,
      'desc' => description,
      'origin' => pkg_origin,
      'maintainer' => maintainer,
      'www' => url,
      # prefix is required, but it doesn't seem to matter
      'prefix' => '/',
    }
    
      end