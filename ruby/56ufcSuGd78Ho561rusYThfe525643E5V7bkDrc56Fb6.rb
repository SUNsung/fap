
        
          # Compress JavaScripts and CSS.
  config.assets.js_compressor = :uglifier
  # config.assets.css_compressor = :sass
    
      def test_font_helper_with_suffix_sharp
    assert_match %r(url\(['']?/assets/.*svg#.+['']?\)), @css
  end
    
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
    
            if explicit_plugins.any? { |spec| filename =~ /^#{spec.name}/ }
          FileUtils.mv(gem_file, ::File.join(explicit_path, filename))
        else
          FileUtils.mv(gem_file, ::File.join(dependencies_path, filename))
        end
      end
    end
    
      it 'does object equality on config_hash and pipeline_id' do
    another_exact_pipeline = described_class.new(source, pipeline_id, ordered_config_parts, settings)
    expect(subject).to eq(another_exact_pipeline)
    
            def swap_range(corrector, range1, range2)
          src1 = range1.source
          src2 = range2.source
          corrector.replace(range1, src2)
          corrector.replace(range2, src1)
        end
      end
    end
  end
end

    
          def ignored_node?(node)
        # Same object found in array?
        ignored_nodes.any? { |n| n.equal?(node) }
      end
    
      # Get the version of this package
  def version
    if instance_variable_defined?(:@version) && !@version.nil?
      return @version
    elsif attributes[:version_given?]
      # 'version_given?' will be true in cases where the
      # fpm command-line tool has been given '-v' or '--version' settings
      # We do this check because the default version is '1.0'
      # on the fpm command line.
      return attributes.fetch(:version)
    end
    
              extension_header[TAR_TYPEFLAG_OFFSET] = 'x'
          extension_header[TAR_LENGTH_OFFSET_START..TAR_LENGTH_OFFSET_END] = extension_data.length.to_s(8).rjust(12, '0')
          extension_header = checksum_header(extension_header)
    
        # extract Payload
    safesystem('tar -xz -f #{expand_dir}/Payload -C #{staging_path}')
  end # def input
    
      # Add a new source to this package.
  # The exact behavior depends on the kind of package being managed.
  #
  # For instance:
  #
  # * for FPM::Package::Dir, << expects a path to a directory or files.
  # * for FPM::Package::RPM, << expects a path to an rpm.
  #
  # The idea is that you can keep pumping in new things to a package
  # for later conversion or output.
  #
  # Implementations are expected to put files relevant to the 'input' in the
  # staging_path
  def input(pacman_pkg_path)
    control = {}
    # Unpack the control tarball
    safesystem(tar_cmd, '-C', staging_path, '-xf', pacman_pkg_path)
    pkginfo = staging_path('.PKGINFO')
    mtree = staging_path('.MTREE')
    install = staging_path('.INSTALL')
    
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
    
      def install_script
    path = build_path('installer.sh')
    File.open(path, 'w') do |file|
      file.write template('sh.erb').result(binding)
    end
    path
  end
    
      def default_output
    v = version
    v = '#{epoch}:#{v}' if epoch
    if iteration
      '#{name}_#{v}-#{iteration}_#{architecture}.#{type}'
    else
      '#{name}_#{v}_#{architecture}.#{type}'
    end
  end # def default_output
end # class FPM::Deb
    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
      def attributes_match
    expect(@actual).to have_attributes(@expected_attrs)
  end
    
      if base_index = options.fetch(:base_index) { 1 }
    standard_options << 'base-index #{base_index}'
  end
    
          it { is_expected.to be true }
    end