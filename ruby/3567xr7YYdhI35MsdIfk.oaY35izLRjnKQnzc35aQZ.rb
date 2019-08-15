
        
        # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
    Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
    Benchmark.ips do |x|
  x.report('no body include?') { CONTENT_NOT_CONTAINING.include?('<body') }
  x.report('no body regexp')   { CONTENT_NOT_CONTAINING =~ /<\s*body/ }
  x.compare!
end
    
          #
    
          expect(I18n.instance_variable_get(:@overrides_by_site)).to eq(
        'default' => {
          'en' => { 'got' => 'summer' },
          'zh_TW' => { 'got' => '冬季' }
        }
      )
    end
  end
    
        describe '#delete_old' do
      it 'doesn't delete files when cleanup is disabled' do
        SiteSetting.maximum_backups = 1
        SiteSetting.s3_disable_cleanup = true
    
          it 'removes the file from s3 on multisite' do
        test_multisite_connection('default') do
          upload = build_upload
          store.expects(:get_depth_for).with(upload.id).returns(0)
          s3_helper.expects(:s3_bucket).returns(s3_bucket).at_least_once
          upload.update!(url: '//s3-upload-bucket.s3.dualstack.us-west-1.amazonaws.com/uploads/default/original/1X/#{upload.sha1}.png')
          s3_object = stub
    
    end

    
      wait = ENV['WAIT_FOR_URL'].to_i
    
        locale_setting_hash =
    {
      setting: 'default_locale',
      default: SiteSettings::DefaultsProvider::DEFAULT_LOCALE,
      category: 'required',
      description: description('default_locale'),
      type: SiteSetting.types[SiteSetting.types[:enum]],
      preview: nil,
      value: self.default_locale,
      valid_values: LocaleSiteSetting.values,
      translate_names: LocaleSiteSetting.translate_names?
    }
    
      describe 'setting with a validator' do
    before do
      settings.setting(:validated_setting, 'info@example.com', type: 'email')
      settings.refresh!
    end
    
                    machine.ui.info(I18n.t('vagrant.rsync_auto_remove_folder',
                                    folder: folder_opts[:hostpath]))
              else
                if options.has_key?(:rsync_chown)
                  folder_opts = folder_opts.merge(rsync_ownership: options[:rsync_chown])
                end
                sync_folders[id] = folder_opts
              end
            end
            folders = sync_folders
    
            # If specified, attach the private key paths.
        if ssh_info[:private_key_path]
          rsh += ssh_info[:private_key_path].map { |p| '-i '#{p}'' }
        end
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
        # Returns a list of the machine names as well as the options that
    # were specified for that machine.
    #
    # @return [Hash<Symbol, Hash>]
    def machine_names_and_options
      {}.tap do |r|
        @config.vm.defined_vms.each do |name, subvm|
          r[name] = subvm.options || {}
        end
      end
    end
    
          it 'raises an exception if the version is newer than ours' do
        Dir.mktmpdir('vagrant-test-env-newer-version') do |dir|
          Pathname.new(dir).join('setup_version').open('w') do |f|
            f.write('100.5')
          end
    
              if options[:box]
            update_specific(options[:box], options[:provider], download_options, options[:force])
          else
            update_vms(argv, options[:provider], download_options, options[:force])
          end
    
          it 'ensures recipient is not following sender' do
        expect(recipient.following?(sender)).to be false
      end
    end
  end
    
        let(:validator) { described_class.new(attributes: [attribute]) }
    let(:record)    { double(errors: errors) }
    let(:errors)    { double(add: nil) }
    let(:value)     { '' }
    let(:attribute) { :foo }
    
          it 'sends email' do
        is_expected.to change(ActionMailer::Base.deliveries, :count).by(1)
      end
    end
    
    require_relative '../lib/bootstrap/environment'
    
        class Main < Clamp::Command
      subcommand 'list', 'List all installed Logstash plugins', LogStash::PluginManager::List
      subcommand 'install', 'Install a Logstash plugin', LogStash::PluginManager::Install
      subcommand 'remove', 'Remove a Logstash plugin', LogStash::PluginManager::Remove
      subcommand 'update', 'Update a plugin', LogStash::PluginManager::Update
      subcommand 'pack', 'Package currently installed plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Pack
      subcommand 'unpack', 'Unpack packaged plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Unpack
      subcommand 'generate', 'Create the foundation for a new plugin', LogStash::PluginManager::Generate
      subcommand 'uninstall', 'Uninstall a plugin. Deprecated: Please use remove instead', LogStash::PluginManager::Remove
      subcommand 'prepare-offline-pack', 'Create an archive of specified plugins to use for offline installation', LogStash::PluginManager::PrepareOfflinePack
    end
  end
end
    
          packet_gem.pack
    
        def valid_format?(local_file)
      ::File.extname(local_file).downcase == PACK_EXTENSION
    end
  end
end end end

    
      namespace :acceptance do
    desc 'Run all acceptance'
    task :all do
      exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/**/*_spec.rb']]))
    end
    
          it 'flashes an error message' do
        post '/users/api_secrets', params: { api_secret: invalid_params }
        expect(flash[:error]).to be_truthy
        expect(flash[:notice]).to be_nil
      end
    end
  end
end

    
      describe 'DELETE blocks' do
    it 'updates block from input data' do
      block = create(:block, user_id: user.id, input_css: '.blue { color: blue;}')
      delete '/blocks/#{block.id}'
      expect(Block.all.size).to eq(0)
    end
  end
end

    
          it 'returns only featured articles' do
        expect(response.body).to include(featured_article.title)
        expect(response.body).not_to include(not_featured_article.title)
      end
    end
    
      def confirm_presence
    if user_params[:shipping_name].blank?
      @errors << 'You need a shipping name'
      @invalid_form = true
    end
    if user_params[:shipping_address].blank?
      @errors << 'You need a shipping address'
      @invalid_form = true
    end
    if user_params[:shipping_city].blank?
      @errors << 'You need a shipping city'
      @invalid_form = true
    end
    if user_params[:shipping_country].blank?
      @errors << 'You need a shipping country'
      @invalid_form = true
    end
    return if user_params[:top_languages].present?