
        
            module Models
      class << self
        attr_accessor :types
        attr_accessor :types_cache
      end
    
          module InternalState
        PROCESSING_EXCEPTION = 'PROCESSING_EXCEPTION'
        MISSING_EXPORT_COMPLIANCE = 'MISSING_EXPORT_COMPLIANCE'
        READY_FOR_BETA_TESTING = 'READY_FOR_BETA_TESTING'
        IN_BETA_TESTING = 'IN_BETA_TESTING'
        EXPIRED = 'EXPIRED'
        IN_EXPORT_COMPLIANCE_REVIEW = 'IN_EXPORT_COMPLIANCE_REVIEW'
      end
    
          def self.find(email: nil, includes: nil)
        return all(filter: { email: email }, includes: includes)
      end
    end
  end
end

    
          def self.all(filter: {}, includes: nil, limit: nil, sort: nil)
        resps = Spaceship::ConnectAPI.get_devices(filter: filter, includes: includes).all_pages
        return resps.map(&:to_models).flatten
      end
    end
  end
end

    
        it 'includes StrictHostKeyChecking, and UserKnownHostsFile when verify_host_key is :never' do
      ssh_info[:verify_host_key] = :never
    
              @machine.communicate.tap do |comm|
            paths.each do |path|
              if windows?
                comm.sudo('mkdir ''#{path}'' -f')
              else
                comm.sudo('mkdir -p #{path}')
                comm.sudo('chown -h #{@machine.ssh_info[:username]} #{path}')
              end
            end
          end
        end
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
            context 'machine has download options' do
          before do
            machine.config.vm.box_download_ca_cert = 'oof'
            machine.config.vm.box_download_ca_path = 'rab'
            machine.config.vm.box_download_client_cert = 'zab'
            machine.config.vm.box_download_insecure = false
          end
    
              find_every_method_call_by_name(body_node, :depends_on).each do |method|
            key, value = destructure_hash(parameters(method).first)
            next if key.nil? || value.nil?
            next unless match = regex_match_group(value, /^(lua|perl|python|ruby)(\d*)/)
    
          # Finally, some users make their MacPorts or Fink directories
      # read-only in order to try out Homebrew, but this doesn't work as
      # some build scripts error out when trying to read from these now
      # unreadable paths.
      %w[/sw /opt/local].map { |p| Pathname.new(p) }.each do |path|
        paths << path if path.exist? && !path.readable?
      end
    
          def find_matching_tag(tag)
        # Used primarily by developers testing beta macOS releases.
        if OS::Mac.prerelease? && ARGV.skip_or_later_bottles?
          generic_find_matching_tag(tag)
        else
          generic_find_matching_tag(tag) ||
            find_older_compatible_tag(tag)
        end
      end
    
        it 'uses older tags when needed', :needs_macos do
      subject[:mavericks] = 'foo'
      expect(subject.send(:find_matching_tag, :mavericks)).to eq(:mavericks)
      expect(subject.send(:find_matching_tag, :yosemite)).to eq(:mavericks)
    end
    
        it 'sets itself to be the resource's owner' do
      subject.resource('foo') { url 'foo-1.0' }
      subject.owner = owner
      subject.resources.each_value do |r|
        expect(r.owner).to eq(subject)
      end
    end
    
      it 'properly handles Casks that are not present' do
    expect {
      described_class.run('notacask')
    }.to raise_error(Cask::CaskUnavailableError)
  end
end

    
          # use the same cask file that was used for installation, if possible
      installed_caskfile = @cask.installed_caskfile
      installed_cask = installed_caskfile.exist? ? CaskLoader.load(installed_caskfile) : @cask
    
            # Displays the state of each pod.
        #
        # @return [void]
        #
        def print
          states = %i(added deleted changed unchanged)
          lines(states).each do |line|
            UI.message(line, '', 2)
          end
        end
    
        it 'uses the specified bundle_package_type' do
      generator = Generator::InfoPlistFile.new('1.0.0', Platform.new(:ios, '6.0'), :bndl)
      file = temporary_directory + 'Info.plist'
      generator.save_as(file)
      Xcodeproj::Plist.read_from_path(file)['CFBundlePackageType'].should == 'BNDL'
    end
    
          # @return [Pathname] The path of the license file as indicated in the
      #         specification or auto-detected.
      #
      def license
        spec_license || path_list.glob([GLOB_PATTERNS[:license]]).first
      end
    
    #---------------------------------------------------------------------------#
    
        it 'should show link to new pod guide after creation' do
      @sut.any_instance.stubs(:clone_template)
      @sut.any_instance.stubs(:configure_template)
      output = run_command('lib', 'create', 'TestPod')
      output.should.include? 'https://guides.cocoapods.org/making/making-a-cocoapod'
    end