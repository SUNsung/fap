
        
            it 'raises an exception when there is no version in podspec' do
      expect do
        Fastlane::Helper::PodspecHelper.new.parse('')
      end.to raise_error('Could not find version in podspec content ''')
    end
    
          # Show message when self.modified_values is empty
      if self.modified_values.empty?
        UI.important('No values defined in '#{self.configfile_path}'')
        return
      end
    
          def self.details
        [
          'Returns the current build number of either the live or testflight version - it is useful for getting the build_number of the current or ready-for-sale app version, and it also works on non-live testflight version.',
          'If you need to handle more build-trains please see `latest_testflight_build_number`.'
        ].join('\n')
      end
    
        def fetch_app_platform(required: true)
      result = config[:app_platform]
      result ||= FastlaneCore::IpaFileAnalyser.fetch_app_platform(config[:ipa]) if config[:ipa]
      if required
        result ||= UI.input('Please enter the app's platform (appletvos, ios, osx): ')
        UI.user_error!('App Platform must be ios, appletvos, or osx') unless ['ios', 'appletvos', 'osx'].include?(result)
        UI.verbose('App Platform (#{result})')
      end
      return result
    end
  end
end

    
          def self.all(filter: {}, includes: nil, limit: nil, sort: nil)
        resps = Spaceship::ConnectAPI.get_bundle_ids(filter: filter, includes: includes).all_pages
        return resps.map(&:to_models).flatten
      end
    
          def self.find(email: nil, includes: nil)
        return all(filter: { email: email }, includes: includes)
      end
    end
  end
end

    
    # Load in helpers
require 'unit/support/dummy_communicator'
require 'unit/support/dummy_provider'
require 'unit/support/shared/base_context'
require 'unit/support/shared/action_synced_folders_context'
require 'unit/support/shared/capability_helpers_context'
require 'unit/support/shared/plugin_command_context'
require 'unit/support/shared/virtualbox_context'
    
          expect(result[0]).to be_kind_of(Vagrant::BoxMetadata)
      expect(result[1]).to be_kind_of(Vagrant::BoxMetadata::Version)
      expect(result[2]).to be_kind_of(Vagrant::BoxMetadata::Provider)
    
        context 'when provider validation is ignored' do
      before do
        configure do |config|
          config.vm.box = 'base'
          config.vm.box_version = '1.0'
          config.vm.define :guest1
          config.vm.define :guest2
    
          expect(subject).to receive(:fire)
      subject.fire_triggers(:up, :before, 'guest', :action)
    end
  end
    
      # This holds a global lock for the duration of the block. This should
  # be invoked around anything that is modifying process state (such as
  # environmental variables).
  def self.global_lock
    @@global_lock.synchronize do
      return yield
    end
  end