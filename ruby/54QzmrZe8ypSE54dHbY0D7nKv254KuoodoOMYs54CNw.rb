
        
                paths.sort.each do |path|
          UI.message('Uploading screenshot #{path}...')
          client.upload_image(image_path: File.expand_path(path),
                              image_type: screenshot_type,
                                language: language)
        end
      end
    end
    
        def try_switch_to_lane(new_lane, parameters)
      block = lanes.fetch(current_platform, {}).fetch(new_lane, nil)
      block ||= lanes.fetch(nil, {}).fetch(new_lane, nil) # fallback to general lane for multiple platforms
      if block
        original_full = full_lane_name
        original_lane = current_lane
    
          UI.verbose('Merging provisioning profile mappings')
      UI.verbose('-------------------------------------')
      UI.verbose('Primary provisioning profile mapping:')
      UI.verbose(primary_mapping)
      UI.verbose('Secondary provisioning profile mapping:')
      UI.verbose(secondary_mapping)
      UI.verbose('Resulting in the following mapping:')
      UI.verbose(final_mapping)
    
            device = find_device(device_name, os_version)
        if device.nil?
          UI.user_error!('No device found named '#{device_name}' for version '#{os_version}'')
        elsif device.os_version != os_version
          UI.important('Using device named '#{device_name}' with version '#{device.os_version}' because no match was found for version '#{os_version}'')
        end
        value = 'platform=#{os} Simulator,id=#{device.udid},OS=#{device.os_version}'
    
          def self.example_code
        [
          'build_number = get_build_number(xcodeproj: 'Project.xcodeproj')'
        ]
      end
    
          def self.is_supported?(platform)
        platform == :ios
      end
    
            expect(values[:changelog]).to eq('autogenerated changelog')
      end
    
        new.perform_failure(*args)
  end
    
          files = query.filter_results(files) if query.filters.any?
    
    shared_examples 'unfoldable diff' do
  let(:subject) { described_class.new(diffable, diff_options: nil) }
    
      class_methods do
    def chronic_duration_attr_reader(virtual_attribute, source_attribute)
      define_method(virtual_attribute) do
        chronic_duration_attributes[virtual_attribute] || output_chronic_duration_attribute(source_attribute)
      end
    end
    
        login_as User.create!(email: 'test@test.com', password: 'test123456', password_confirmation: 'test123456')
    
          # Stores the provided location to redirect the user after signing in.
      # Useful in combination with the `stored_location_for` helper.
      #
      # Example:
      #
      #   store_location_for(:user, dashboard_path)
      #   redirect_to user_facebook_omniauth_authorize_path
      #
      def store_location_for(resource_or_scope, location)
        session_key = stored_location_key_for(resource_or_scope)
        
        path = extract_path_from_location(location)
        session[session_key] = path if path
      end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
                if class_mod.respond_to?(:available_configs)
              available_configs = class_mod.available_configs
              available_configs.each do |config|
                next unless options.key?(config)
                send(:'#{config}=', options.delete(config))
              end
            end
          end
    
            # @return [Platform] the platform
        #
        attr_reader :platform
    
        it 'writes the module map to the disk for a library' do
      path = temporary_directory + 'BananaLib.modulemap'
      @pod_target.stubs(:build_type => Target::BuildType.static_library)
      @gen.save_as(path)
      path.read.should == <<-EOS.strip_heredoc
        module BananaLib {
          umbrella header 'BananaLib-umbrella.h'
    }
    
          LAUNCHSCREEN_STORYBOARD_CONTENTS = <<-XML.strip_heredoc.freeze
              <?xml version='1.0' encoding='UTF-8' standalone='no'?>
              <document type='com.apple.InterfaceBuilder3.CocoaTouch.Storyboard.XIB' version='3.0' toolsVersion='13122.16' systemVersion='17A277' targetRuntime='iOS.CocoaTouch' propertyAccessControl='none' useAutolayout='YES' launchScreen='YES' useTraitCollections='YES' useSafeAreas='YES' colorMatched='YES' initialViewController='01J-lp-oVM'>
                <dependencies>
                  <plugIn identifier='com.apple.InterfaceBuilder.IBCocoaTouchPlugin' version='13104.12'/>
                  <capability name='Safe area layout guides' minToolsVersion='9.0'/>
                  <capability name='documents saved in the Xcode 8 format' minToolsVersion='8.0'/>
                </dependencies>
                <scenes>
                  <!--View Controller-->
                  <scene sceneID='EHf-IW-A2E'>
                    <objects>
                      <viewController id='01J-lp-oVM' sceneMemberID='viewController'>
                        <view key='view' contentMode='scaleToFill' id='Ze5-6b-2t3'>
                          <rect key='frame' x='0.0' y='0.0' width='375' height='667'/>
                          <autoresizingMask key='autoresizingMask' widthSizable='YES' heightSizable='YES'/>
                          <color key='backgroundColor' red='1' green='1' blue='1' alpha='1' colorSpace='custom' customColorSpace='sRGB'/>
                          <viewLayoutGuide key='safeArea' id='6Tk-OE-BBY'/>
                        </view>
                      </viewController>
                      <placeholder placeholderIdentifier='IBFirstResponder' id='iYj-Kq-Ea1' userLabel='First Responder' sceneMemberID='firstResponder'/>
                    </objects>
                    <point key='canvasLocation' x='53' y='375'/>
                  </scene>
                </scenes>
              </document>
      XML
    end
  end
end

    
            # Cleans up projects before writing.
        #
        def cleanup_projects(projects)
          projects.each do |project|
            [project.pods, project.support_files_group,
             project.development_pods, project.dependencies_group].each { |group| group.remove_from_project if group.empty? }
            project.sort(:groups_position => :below)
          end
        end
      end
    end
  end
end

    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
          attr_reader :key, :default, :options
    
        assert_equal obj.attribute, Psych.load(Psych.dump(obj)).attribute
  end
end

    
        def with_sidekiq_option(name, value)
      _original, Sidekiq.options[name] = Sidekiq.options[name], value
      begin
        yield
      ensure
        Sidekiq.options[name] = _original
      end
    end
    
      describe 'redis info' do
    it 'calls the INFO command which returns at least redis_version' do
      output = Sidekiq.redis_info
      assert_includes output.keys, 'redis_version'
    end
  end
end

    
          refute Sidekiq::Testing.enabled?
      refute Sidekiq::Testing.inline?
      refute Sidekiq::Testing.fake?
    end
  end