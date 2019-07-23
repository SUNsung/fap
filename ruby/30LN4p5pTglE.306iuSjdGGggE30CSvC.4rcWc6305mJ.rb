
        
            # NOTE: `relative-dir` is not actually a 'relative dir' in this data structure
    # due to the fact that when vagrant stores synced folders, it path expands
    # them with root_dir, and when you grab those synced_folders options from
    # the machines config file, they end up being a full path rather than a
    # relative path, and so these tests reflect that.
    # For reference:
    # https://github.com/hashicorp/vagrant/blob/9c1b014536e61b332cfaa00774a87a240cce8ed9/lib/vagrant/action/builtin/synced_folders.rb#L45-L46
    let(:config_synced_folders)  { {'/vagrant':
      {type: 'rsync',
        hostpath: '/Users/brian/code/vagrant-sandbox'},
      '/vagrant/other-dir':
      {type: 'rsync',
        hostpath: '/Users/brian/code/vagrant-sandbox/other-dir'},
      '/vagrant/relative-dir':
      {type: 'rsync',
        hostpath: '/Users/brian/code/relative-dir'}}}
    
        it 'returns not_created if no ID' do
      allow(machine).to receive(:id).and_return(nil)
      expect(subject.state.id).to eq(:not_created)
    end
    
      subject { described_class }
    
    require Vagrant.source_root.join('plugins/provisioners/chef/cap/linux/chef_installed')
    
            iso_env.box3('base', '1.0', :custom, vagrantfile: <<-VF)
        Vagrant.configure('2') do |config|
          config.vagrant.plugins = 'vagrant-custom'
        end
        VF
      end
    
          begin
        @logger.debug('Creating: #{@local_data_path}')
        FileUtils.mkdir_p(@local_data_path)
        # Create the rgloader/loader file so we can use encoded files.
        loader_file = @local_data_path.join('rgloader', 'loader.rb')
        if !loader_file.file?
          source_loader = Vagrant.source_root.join('templates/rgloader.rb')
          FileUtils.mkdir_p(@local_data_path.join('rgloader').to_s)
          FileUtils.cp(source_loader.to_s, loader_file.to_s)
        end
      rescue Errno::EACCES
        raise Errors::LocalDataDirectoryNotAccessible,
          local_data_path: @local_data_path.to_s
      end
    end
    
        it 'should not include any update plugins' do
      expect(subject).to receive(:internal_install).with(anything, nil, any_args)
      subject.install(plugins)
    end
    
                if !machine.box
              collection = Vagrant::BoxCollection.new(@env.boxes_path)
              machine.box = collection.find(machine.config.vm.box, provider || machine.provider_name || @env.default_provider, '> 0')
              if !machine.box
                machine.ui.output(I18n.t(
                  'vagrant.errors.box_update_no_box',
                  name: machine.config.vm.box))
                next
              end
            end
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
            @response = (gets || '').chomp
      end
    
            if callable_without_parameters?(value_to_evaluate)
          super(key, assert_valid_later(key, value_to_evaluate), &nil)
        else
          assert_valid_now(key, value_to_evaluate)
          super
        end
      end
    
          def initialize(values={})
        @trusted_keys = []
        @fetched_keys = []
        @locations = {}
        @values = values
        @trusted = true
      end
    
          # sidebar HTML variant
      it 'renders html variant' do
        html_variant = create(:html_variant, published: true, approved: true)
        get article.path + '?variant_version=1'
        expect(response.body).to include html_variant.html
      end
    
        context 'when amount is 1 dollar' do
      it 'adds level_1_member role' do
        valid_instance(user_one, 100).subscribe_customer
        expect(user_one.has_role?(:level_1_member)).to eq(true)
      end
    end
  end
    
        def handle_gist_redirecting(data)
      redirected_url = data.header['Location']
      if redirected_url.nil? || redirected_url.empty?
        raise ArgumentError, 'GitHub replied with a 302 but didn't provide a location in the response headers.'
      end
    
    module Jekyll