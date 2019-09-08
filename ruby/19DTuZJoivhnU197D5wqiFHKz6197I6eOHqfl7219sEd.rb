
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
          if Supply.config[:validate_only]
        UI.message('Validating all changes with Google Play...')
        client.validate_current_edit!
        UI.success('Successfully validated the upload to Google Play')
      else
        UI.message('Uploading all changes to Google Play...')
        client.commit_current_edit!
        UI.success('Successfully finished the upload to Google Play')
      end
    end
    
                  # Stores bundle identifiers that have already been mapped to inform user
              if provisioning_profile_mapping[bundle_identifier] && (has_profile_specifier || has_profile_uuid)
                bundle_identifiers_with_duplicates << bundle_identifier
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
    
          def destination(device_name)
        not_implemented(__method__)
      end
    
          def pipe(device_type, language, locale)
        log_path = xcodebuild_log_path(device_type: device_type, language: language, locale: locale)
        return ['| tee #{log_path.shellescape} | xcpretty #{Snapshot.config[:xcpretty_args]}']
      end
    
          def self.category
        :project
      end
    end
  end
end

    
          def self.fill_in_default_values(params)
        embed = Actions.lane_context[Actions::SharedValues::SIGH_PROFILE_PATH] || ENV['SIGH_PROFILE_PATH']
        params[:embed] ||= embed if embed
        params
      end
    
          def self.description
        'Easily sync your certificates and profiles across your team (via _match_)'
      end
    
            it 'passes when `apple_id` is correct' do
          options = {
            username: 'username@example.com',
            apple_id: '123456789'
          }
          pilot_config = FastlaneCore::Configuration.create(Pilot::Options.available_options, options)
          expect(pilot_config[:apple_id]).to eq('123456789')
        end
      end
    end
  end
end

    
    module Workers
  class PublishToHub < Base
    def perform(*_args)
      # don't publish to pubsubhubbub in cucumber
    end
  end
    
    describe ContactsController, :type => :controller do
  describe '#index' do
    before do
      AppConfig.chat.enabled = true
      @aspect = bob.aspects.create(:name => 'another aspect')
      bob.share_with alice.person, @aspect
      bob.share_with eve.person, @aspect
      sign_in bob, scope: :user
    end
    
        # Disable testing because we don't really need to run the cpan tests. The
    # goal is to see the parsed result (name, module description, etc)
    # Additionally, it fails on my workstation when cpan_test? is enabled due
    # to not finding `Test.pm`, and it seems like a flakey test if we keep this
    # enabled.
    subject.attributes[:cpan_test?] = false
    subject.input('Digest::MD5')
    insist { subject.name } == 'perl-Digest-MD5'
    insist { subject.description } == 'Perl interface to the MD-5 algorithm'
    insist { subject.vendor } == 'Gisle Aas <gisle@activestate.com>'
    # TODO(sissel): Check dependencies
  end
    
          # Value sanity check
      insist { subject.name } == 'name'
      insist { subject.version } == '1.23'
      insist { subject.architecture } == 'noarch' # see #architecture
      insist { subject.iteration } == '100'
      insist { subject.epoch } == 5
      insist { subject.dependencies }.include?('something > 10')
      insist { subject.dependencies }.include?('hello >= 20')
      insist { subject.conflicts[0] } == 'bad < 2'
      insist { subject.license } == @generator.license.split('\n').join(' ') # See issue #252
      insist { subject.provides[0] } == 'bacon = 1.0'
      
    end
    it 'should not cause errors when reading rpm with script in input (#802)' do
      @generator.scripts[:before_install] = 'example before_install'
      @generator.scripts[:after_install] = 'example after_install'
      @generator.scripts[:before_remove] = 'example before_remove'
      @generator.scripts[:after_remove] = 'example after_remove'
      @generator.scripts[:rpm_verifyscript] = 'example rpm_verifyscript'
      @generator.scripts[:rpm_posttrans] = 'example rpm_posttrans'
      @generator.scripts[:rpm_pretrans] = 'example rpm_pretrans'
    
          it 'should not include iteration if it is nil' do
        pending('Ruby 1.x and 2.0.x are unsupported for Snap because it lacks Psych::safe_load') if is_old_ruby
      # This is the default filename commonly produced by snapcraft
        expect(subject.to_s).to(be == 'name_123_all.snap')
      end
    end
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
    
        cwd = ::Dir.pwd
    ::Dir.chdir(staging_path)
    
        ::Dir.chdir staging_path do
      # Should create a package directory named by the package name.
      safesystem('pkgmk', '-o', '-f', '#{build_path}/Prototype', '-d', build_path)
    end