
        
            describe '#devices' do
      let(:devices) { subject.devices }
      it 'returns a list of device hashes' do
        expect(devices).to be_instance_of(Array)
        expect(devices.first.keys).to eq(['deviceId', 'name', 'deviceNumber', 'devicePlatform', 'status', 'model', 'deviceClass'])
      end
    end
    
          lane_obj = lanes.fetch(current_platform, {}).fetch(current_lane, nil)
    
            # Stub Time.now to return current time on first call and 6 minutes later on second
        before { allow(Time).to receive(:now).and_return(time_now, (time_now + 60 * 6)) }
        it 'throws a UI error' do
          allow(fake_app).to receive(:latest_version).and_return(fake_version)
          allow(fake_version).to receive(:candidate_builds).and_return([])
          expect do
            review_submitter.wait_for_build(fake_app, '1.2.3')
          end.to raise_error(FastlaneCore::Interface::FastlaneError, 'Could not find any available candidate builds on App Store Connect to submit')
        end
      end
    
          def self.output
        [
          ['MATCH_PROVISIONING_PROFILE_MAPPING', 'The match provisioning profile mapping'],
          ['SIGH_PROFILE_TYPE', 'The profile type, can be appstore, adhoc, development, enterprise']
        ]
      end
    
    describe Utils::Bottles::Collector do
  describe '#fetch_checksum_for' do
    it 'returns passed tags' do
      subject[:yosemite] = 'foo'
      subject[:el_captain] = 'bar'
      expect(subject.fetch_checksum_for(:el_captain)).to eq(['bar', :el_captain])
    end
    
        depends_on(deps) if add_mac_dependency?(args)
  end
    
        def metadata_timestamped_path(version: self.version, timestamp: :latest, create: false)
      raise CaskError, 'Cannot create metadata path when timestamp is :latest.' if create && timestamp == :latest
    
        def initialize(index, project, tab, *commands)
      @commands = commands
      @index = index
      @project = project
      @tab = tab
    end
    
            expect(project.startup_pane).to eq('sample:0.4')
      end
    end
  end
    
      chain :with_commands do |*expected|
    @commands = expected
  end
  alias_method :and_commands, :with_commands
    
          context 'when no args are supplied' do
        it 'should call #local' do
          instance = instance_double(cli)
          expect(cli).to receive(:new).and_return(instance)
          expect(instance).to receive(:local)
          subject
        end
      end
    
        it 'checks if the given project exists' do
      expect(described_class.exists?(name: 'test')).to be_truthy
    end
  end