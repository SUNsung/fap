
        
                        logger.info('Invalid ID, pruning: #{id}')
                nfs_cleanup(id)
              end
            end
          end
        rescue Errno::EACCES
          raise Vagrant::Errors::NFSCantReadExports
        end
    
    # Disable checkpoint
Checkpoint.disable!

    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
      subject { described_class }
    
          home_vagrantfile = nil
      root_vagrantfile = nil
      home_vagrantfile = find_vagrantfile(home_path) if home_path
      if root_path
        root_vagrantfile = find_vagrantfile(root_path, @vagrantfile_name)
      end
    
      describe 'local data path' do
    it 'is set to the proper default' do
      default = instance.root_path.join(described_class::DEFAULT_LOCAL_DATA)
      expect(instance.local_data_path).to eq(default)
    end
    
                problem '\'\#{share}#{match[1]}\' should be \'\#{#{match[2]}}\''
          end
    
            uses_from_macos('foo')
      end
    
      describe '#uses_from_macos' do
    before do
      sierra_os_version = OS::Mac::Version.from_symbol(:sierra)
    
        it 'allows specifying recommended dependencies' do
      subject.depends_on 'bar' => :recommended
      expect(subject).to have_defined_option('without-bar')
    end
  end
    
            Thanks!
      EOS
    end
    
          def latest_version
        case MacOS.version
        when '10.9'  then '6.2'
        when '10.10' then '7.2.1'
        when '10.11' then '8.2.1'
        when '10.12' then '9.2'
        when '10.13' then '10.1'
        when '10.14' then '10.2.1'
        when '10.15' then '11.0'
        else
          raise 'macOS '#{MacOS.version}' is invalid' unless OS::Mac.prerelease?
    
          # For OS::Mac::Version compatability
      def requires_nehalem_cpu?
        Hardware.oldest_cpu(self) == :nehalem
      end
      # https://en.wikipedia.org/wiki/Nehalem_(microarchitecture)
      # Ensure any extra methods are also added to version/null.rb
      alias requires_sse4? requires_nehalem_cpu?
      alias requires_sse41? requires_nehalem_cpu?
      alias requires_sse42? requires_nehalem_cpu?
      alias requires_popcnt? requires_nehalem_cpu?
    end
  end
end

    
      it 'prints the file used to cache the Cask' do
    transmission_location = CurlDownloadStrategy.new(
      local_transmission.url.to_s, local_transmission.token, local_transmission.version,
      cache: Cask::Cache.path, **local_transmission.url.specs
    ).cached_location
    caffeine_location = CurlDownloadStrategy.new(
      local_caffeine.url.to_s, local_caffeine.token, local_caffeine.version,
      cache: Cask::Cache.path, **local_caffeine.url.specs
    ).cached_location
    
      describe '#source_modified_time' do
    it 'returns the right modification time' do
      cached_location.cd do
        setup_git_repo
      end
      expect(subject.source_modified_time.to_i).to eq(1_485_115_153)
    end
  end
    
            Download the source packages for the given <formula>.
        For tarballs, also print SHA-256 checksums.
      EOS
      switch '--HEAD',
             description: 'Fetch HEAD version instead of stable version.'
      switch '--devel',
             description: 'Fetch development version instead of stable version.'
      switch :verbose,
             description: 'Do a verbose VCS checkout, if the URL represents a VCS. This is useful for '\
                          'seeing if an existing VCS cache has been updated.'
      switch :force,
             description: 'Remove a previously cached version and re-fetch.'
      switch '--retry',
             description: 'Retry if a download fails or re-download if the checksum of a previously cached '\
                         'version no longer matches.'
      switch '--deps',
             description: 'Download dependencies for any listed <formula>.'
      switch '-s', '--build-from-source',
             description: 'Download the source for rather than a bottle.'
      switch '--build-bottle',
             description: 'Download the source (for eventual bottling) rather than a bottle.'
      switch '--force-bottle',
             description: 'Download a bottle if it exists for the current or newest version of macOS, '\
                          'even if it would not be used during installation.'
      switch :verbose
      switch :debug
      conflicts '--devel', '--HEAD'
      conflicts '--build-from-source', '--build-bottle', '--force-bottle'
    end
  end
    
      namespace :check do
    desc 'Check shared and release directories exist'
    task :directories do
      on release_roles :all do
        execute :mkdir, '-p', shared_path, releases_path
      end
    end
    
          private
    
            if callable.is_a?(Question)
          ValidatedQuestion.new(validation_callback)
        else
          validation_callback
        end
      end