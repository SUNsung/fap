
        
            def upload_changelogs(language)
      client.apks_version_codes.each do |apk_version_code|
        upload_changelog(language, apk_version_code)
      end
      client.aab_version_codes.each do |aab_version_code|
        upload_changelog(language, aab_version_code)
      end
    end
    
        context '.all_processing_builds' do
      it 'returns a collection of builds that are processing' do
        #        builds = Spaceship::TestFlight::Build.all_processing_builds(app_id: 10, platform: 'ios')
        #        expect(builds.size).to eq(1)
        #        expect(builds.sample.id).to eq(3)
      end
    end
    
        describe '#delete_provisioning_profile!' do
      it 'makes a requeset to delete a provisioning profile' do
        response = subject.delete_provisioning_profile!('2MAY7NPHRU')
        expect(response['resultCode']).to eq(0)
      end
    end
    
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
    
            if Helper.test?
          Actions.lane_context[SharedValues::BUILD_NUMBER] = command
        else
          build_number = Actions.sh(command).split('\n').last.strip
    
            it 'raises an error if `apple_id` is set to bundle identifier' do
          expect do
            options = {
              username: 'username@example.com',
              apple_id: 'com.bundle.identifier'
            }
            pilot_config = FastlaneCore::Configuration.create(Pilot::Options.available_options, options)
          end.to raise_error('`apple_id` value is incorrect. The correct value should be taken from Apple ID property in the App Information section in App Store Connect.')
        end
    
        let(:default_add_tester_options_with_group) do
      FastlaneCore::Configuration.create(Pilot::Options.available_options, {
        apple_id: '123456789',
        email: fake_tester.email,
        first_name: fake_tester.first_name,
        last_name: fake_tester.last_name,
        groups: ['Test Group']
      })
    end