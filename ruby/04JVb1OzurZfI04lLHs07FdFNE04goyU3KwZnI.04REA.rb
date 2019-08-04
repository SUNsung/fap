
        
              Jekyll.logger.info '', 'and done. Generating results..'
      Jekyll.logger.info ''
    end
    
    def slugify(header)
  header.delete('#').strip.downcase.gsub(%r!\s+!, '-')
end
    
          desc 'Get the list of the available template' do
        detail 'This feature was introduced in GitLab #{gitlab_version}.'
        success Entities::TemplatesList
      end
      params do
        use :pagination
      end
      get 'templates/#{template_type}' do
        templates = ::Kaminari.paginate_array(TemplateFinder.build(template_type, nil).execute)
        present paginate(templates), with: Entities::TemplatesList
      end
    
    # Searches and reads files present on each GitLab project repository
module Gitlab
  module Template
    module Finders
      class RepoTemplateFinder < BaseTemplateFinder
        # Raised when file is not found
        FileNotFoundError = Class.new(StandardError)
    
        it 'finds a template in the Bar category' do
      create_template!('bar/test-template')
    
        def aes256_gcm_decrypt(value)
      return unless value
    
            def diff_file_with_new_path(new_path)
          diff_files.find { |diff_file| diff_file.new_path == new_path }
        end
    
              find_every_method_call_by_name(body_node, :system).each do |method|
            next unless match = regex_match_group(parameters(method).first, /^(env|export)(\s+)?/)
    
            # Ask Spotlight where Xcode is. If the user didn't install the
        # helper tools and installed Xcode in a non-conventional place, this
        # is our only option. See: https://superuser.com/questions/390757
        MacOS.app_with_bundle_id(BUNDLE_ID, OLD_BUNDLE_ID)
      end
    
      # Does the {Bottle} this BottleSpecification belongs to need to be relocated?
  def skip_relocation?
    cellar == :any_skip_relocation
  end
    
      it 'properly handles Casks that are not present' do
    expect {
      described_class.run('notacask')
    }.to raise_error(Cask::CaskUnavailableError)
  end
end

    
          it 'adds the appropriate curl args' do
        expect(subject).to receive(:system_command!) { |*, args:, **|
          expect(args.each_cons(2)).to include(['-d', 'form=data'])
          expect(args.each_cons(2)).to include(['-d', 'is=good'])
        }
    
            # @return [Array<String>] The list of the UUIDs of the
        #         user targets integrated by this umbrella
        #         target.  They can be used to find the
        #         targets opening the project They can be used
        #         to find the targets opening the project with
        #         Xcodeproj.
        #
        def user_target_uuids
          user_targets.map(&:uuid)
        end
      end
    end
  end
end

    
        # Checks that the podfile exists.
    #
    # @raise  If the podfile does not exists.
    #
    # @return [void]
    #
    def verify_podfile_exists!
      unless config.podfile
        raise Informative, 'No `Podfile' found in the project directory.'
      end
    end
    
          it 'allows to differentiate between an exclusive variant with a specific subspec and ' \
        'an inclusive variant with the default subspecs plus a non-default subspec' do
        variants = PodVariantSet.new([
          PodVariant.new([@foo_subspec], [], [], Platform.ios),
          PodVariant.new([@root_spec, @default_subspec, @foo_subspec], [], [], Platform.ios),
        ])
        variants.scope_suffixes.values.should == %w(Foo .default-Foo)
      end
    
              it 'requires a host target for XPC service targets' do
            @target.user_targets.first.stubs(:symbol_type).returns(:xpc_service)
            @target.requires_host_target?.should == true
          end
    
            it 'allows specifying packaging' do
          BuildType.new(:packaging => :framework).should == BuildType.static_framework
        end
    
    @property (nonatomic, strong) UIWindow *window;
    
      describe 'PUT blocks' do
    it 'updates block from input data' do
      block = create(:block, user_id: user.id, input_css: '.blue { color: blue;}')
      put '/blocks/#{block.id}', params: {
        block: { input_css: '.blue { color: red;}',
                 input_html: 'yo',
                 input_javascript: 'alert('hey')' }
      }
      expect(Block.last.processed_css).to include('color: red')
    end
  end
    
      it 'renders a user index if there is a user with the username successfully' do
    expect(get: '/#{user.username}').to route_to(
      controller: 'stories',
      action: 'index',
      username: user.username,
    )
  end
    
      it 'allows delayed scheduling of AM mails' do
    ss = Sidekiq::ScheduledSet.new
    assert_equal 0, ss.size
    UserMailer.delay_for(5.days).greetings(1, 2)
    assert_equal 1, ss.size
  end
    
        def with_sidekiq_option(name, value)
      _original, Sidekiq.options[name] = Sidekiq.options[name], value
      begin
        yield
      ensure
        Sidekiq.options[name] = _original
      end
    end
    
      describe 'default_worker_options' do
    it 'stringifies keys' do
      @old_options = Sidekiq.default_worker_options
      begin
        Sidekiq.default_worker_options = { queue: 'cat'}
        assert_equal 'cat', Sidekiq.default_worker_options['queue']
      ensure
        Sidekiq.default_worker_options = @old_options
      end
    end
  end
    
        context 'and :python_fix_dependencies? is true' do
      before :each do
        subject.attributes[:python_fix_dependencies?] = true
      end
    
          context 'the getter' do
        before do
          subject.send('#{item}=', value)
        end
        it 'returns the value set previously' do
          expect(subject.send(item)).to(be == value)
        end
      end
    end
  end
    
              # clear off ownership info
          header = replace_ownership_headers(header, true)
    
        wordsize = case @architecture
    when nil, 'native'
      %x{getconf LONG_BIT}.chomp # 'native' is current arch
    when 'amd64'
      '64'
    when 'i386'
      '32'
    else
      %x{getconf LONG_BIT}.chomp # default to native, the current arch
    end
    
      option '--identifier-prefix', 'IDENTIFIER_PREFIX',
    'Reverse domain prefix prepended to package identifier, ' \
    'ie. 'org.great.my'. If this is omitted, the identifer ' \
    'will be the package name.'
  option '--payload-free', :flag, 'Define no payload, assumes use of script options.',
    :default => false
  option '--ownership', 'OWNERSHIP',
    '--ownership option passed to pkgbuild. Defaults to 'recommended'. ' \
    'See pkgbuild(1).', :default => 'recommended' do |value|
    if !OWNERSHIP_OPTIONS.include?(value)
      raise ArgumentError, 'osxpkg-ownership value of '#{value}' is invalid. ' \
        'Must be one of #{OWNERSHIP_OPTIONS.join(', ')}'
    end
    value
  end
    
        # Remove the stuff we don't want
    delete_these = ['.depdb', '.depdblock', '.filemap', '.lock', '.channel', 'cache', 'temp', 'download', '.channels', '.registry']
    Find.find(staging_path) do |path|
      if File.file?(path)
        logger.info('replacing staging_path in file', :replace_in => path, :staging_path => staging_path)
        begin
          content = File.read(path).gsub(/#{Regexp.escape(staging_path)}/, '')
          File.write(path, content)
        rescue ArgumentError => e
          logger.warn('error replacing staging_path in file', :replace_in => path, :error => e)
        end
      end
      FileUtils.rm_r(path) if delete_these.include?(File.basename(path))
    end
    
          base = staging_path(File.join(attributes[:prefix], '#{platform.platform}/#{platform.target_version || 'default'}'))
      target = File.join(base, 'files')
      actions_script = File.join(base, 'install_actions.sh')
      ::PleaseRun::Installer.install_files(platform, target, false)
      ::PleaseRun::Installer.write_actions(platform, actions_script)
    end
    
          success = safesystem(setup_cmd)
      #%x{#{setup_cmd}}
      if !success
        logger.error('setup.py get_metadata failed', :command => setup_cmd,
                      :exitcode => $?.exitstatus)
        raise 'An unexpected error occurred while processing the setup.py file'
      end
      File.read(tmp)
    end
    logger.debug('result from `setup.py get_metadata`', :data => output)
    metadata = JSON.parse(output)
    logger.info('object output of get_metadata', :json => metadata)
    
    describe 'margin' do
  before(:all) do
    ParserSupport.parse_file('library/margin')
  end
    
          expect('.all-text-inputs-hover').to have_ruleset(ruleset)
    end
  end