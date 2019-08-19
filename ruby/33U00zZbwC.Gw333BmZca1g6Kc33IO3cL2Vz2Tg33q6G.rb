
        
          it 'accepts post form requests with masked authenticity_token field' do
    post('/', {'authenticity_token' => masked_token}, 'rack.session' => session)
    expect(last_response).to be_ok
  end
    
      it 'should ignore CSP3 no arg directives unless they are set to true' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :block_all_mixed_content => false, :disown_opener => 'false', :upgrade_insecure_requests => 'foo'
    
    # Now, add our init-scripts, systemd services, and so on:
pleaserun = package.convert(FPM::Package::PleaseRun)
pleaserun.input ['/usr/bin/my-executable', '--foo-from', 'bar']
    
        pkg = klass.new
    pkg.cleanup_staging # purge any directories that may have been created by klass.new
    
        # Build the packaging metadata files.
    checksums = {}
    self.files.each do |f|
      path = staging_path(f)
      if File.symlink?(path)
        checksums[f] = '-'
      elsif File.file?(path)
        checksums[f] = Digest::SHA256.file(path).hexdigest
      end
    end
    
        npm_flags = []
    settings.each do |key, value|
      # npm lets you specify settings in a .npmrc but the same key=value settings
      # are valid as '--key value' command arguments to npm. Woo!
      logger.debug('Configuring npm', key => value)
      npm_flags += [ '--#{key}', value ]
    end
    
        if self.attributes[:osxpkg_payload_free?]
      args << '--nopayload'
    else
      args += ['--root', staging_path]
    end
    
        logger.info('Installing pear package', :package => input_package,
                  :directory => staging_path)
    ::Dir.chdir(staging_path) do
      safesystem('pear', '-c', config, 'install', '-n', '-f', input_package)
    end
    
        args = [ tar_cmd,
             '-C',
             staging_path,
             '-cf',
             payload_tar,
             '--owner=0',
             '--group=0',
             '--numeric-owner',
             '.' ]
    
        def synchronize_after?
      synchronize == 'after'
    end
  end
end

    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
    shared_examples_for 'a project hook' do
  let(:project) { FactoryBot.build(:project) }
    
        context 'attach is false in yaml' do
      before { project.yaml['attach'] = false }
      it 'returns false' do
        expect(project.attach?).to be_falsey
      end
    end
    
          expect(instance.render).to match %r{wemux.ls.2>\/dev\/null}
    end
  end
    
        context 'environment variable $TMUXINATOR_CONFIG is nil' do
      it 'is an empty string' do
        allow(ENV).to receive(:[]).with('TMUXINATOR_CONFIG').
          and_return nil
        # allow(XDG).to receive(:[]).with('CONFIG').and_return nil
        allow(File).to receive(:directory?).and_return true
        expect(described_class.environment).to eq ''
      end
    end
    
        context 'synchronization is true' do
      let(:synchronize) { true }
    
      config.before(:suite) do
    # Test that the factories are working as they should and then clean up before getting started on
    # the rest of the suite.
    begin
      DatabaseCleaner.start
      FactoryBot.lint(FactoryBot.factories.select { |f| !FACTORIES_EXCLUDED_FROM_LINT.include?(f.name.to_sym) })
    ensure
      DatabaseCleaner.clean
    end
    
      def destroy
    @credential.destroy
    redirect_to_with_json [organization, @server, :credentials]
  end
    
      def create
    @ip_address = @ip_pool.ip_addresses.build(safe_params)
    if @ip_address.save
      redirect_to_with_json [:edit, @ip_pool]
    else
      render_form_errors 'new', @ip_address
    end
  end
    
      def index
    @ip_pools = IPPool.order(:name).to_a
  end