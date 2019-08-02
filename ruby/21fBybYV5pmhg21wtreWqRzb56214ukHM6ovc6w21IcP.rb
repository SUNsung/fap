
        
            def store_result
      output_path = screenshot.output_path
      image.format('png')
      image.write(output_path)
      Helper.hide_loading_indicator
      UI.success('Added frame: '#{File.expand_path(output_path)}'')
    end
    
          def self.allowed_services_description
        return Produce::DeveloperCenter::ALLOWED_SERVICES.map do |k, v|
          '#{k}: (#{v.join('|')})(:on|:off)(true|false)'
        end.join(', ')
      end
    
        # Actually sends the request to the remote server
    # Automatically retries the request up to 3 times if something goes wrong
    def send_request(method, url_or_path, params, headers, &block)
      with_retry do
        response = @client.send(method, url_or_path, params, headers, &block)
        log_response(method, url_or_path, response, headers, &block)
    
        describe '#provisioning_profiles' do
      it 'makes a call to the developer portal API' do
        profiles = subject.provisioning_profiles
        expect(profiles).to be_instance_of(Array)
        expect(profiles.sample.keys).to include('provisioningProfileId',
                                                'name',
                                                'status',
                                                'type',
                                                'distributionMethod',
                                                'proProPlatform',
                                                'version',
                                                'dateExpire',
                                                'managingApp',
                                                'deviceIds',
                                                'certificateIds')
        expect(a_request(:post, 'https://developer.apple.com/services-account/QH65B2/account/ios/profile/listProvisioningProfiles.action')).to have_been_made
      end
    end
    
          def suffix
        return []
      end
    
            device = find_device(device_name, os_version)
        if device.nil?
          UI.user_error!('No device found named '#{device_name}' for version '#{os_version}'')
        elsif device.os_version != os_version
          UI.important('Using device named '#{device_name}' with version '#{device.os_version}' because no match was found for version '#{os_version}'')
        end
        value = 'platform=#{os} Simulator,id=#{device.udid},OS=#{device.os_version}'
    
        def upload_apk(path_to_apk)
      ensure_active_edit!
    
        it 'allows to delete a user' do
      visit admin_users_path
      find(:css, 'a[href='/admin/users/#{users(:bob).id}']').click
      expect(page).to have_text('User 'bob' was deleted.')
      expect(page).to have_no_text('bob@example.com')
    end
    
        def data_url_string?(str)
      str.start_with?(DATA_URL)
    end
    
        attr_reader :filters
    
        def parse_as_document
      document = Nokogiri::HTML.parse @content, nil, 'UTF-8'
      @title = document.at_css('title').try(:content)
      document
    end
    
        html_filters.push 'apply_base_url', 'container', 'clean_html', 'normalize_urls', 'internal_urls', 'normalize_paths', 'parse_cf_email'
    text_filters.push 'images' # ensure the images filter runs after all html filters
    text_filters.push 'inner_html', 'clean_text', 'attribution'
    
          INDEX = Set.new
    
        it 'adds --force-local flag for tar on Windows' do
      Executable.stubs(:which).returns('/usr/bin/tar.exe')
      status = Object.new
      status.define_singleton_method(:success?) { return true }
      Executable.expects(:popen3).with('/usr/bin/tar.exe', ['--force-local'], [], []).returns(status)
      Executable.execute_command('tar', [])
    end
  end
end

    
              # Ensure that vendored static frameworks and libraries are not linked
          # twice to the aggregate target, which shares the xcconfig of the user
          # target.
          #
          def custom_build_settings
            settings = {
              'CODE_SIGN_IDENTITY[sdk=appletvos*]' => '',
              'CODE_SIGN_IDENTITY[sdk=iphoneos*]'  => '',
              'CODE_SIGN_IDENTITY[sdk=watchos*]'   => '',
              'MACH_O_TYPE'                        => 'staticlib',
              'OTHER_LDFLAGS'                      => '',
              'OTHER_LIBTOOLFLAGS'                 => '',
              'PODS_ROOT'                          => '$(SRCROOT)',
              'PRODUCT_BUNDLE_IDENTIFIER'          => 'org.cocoapods.${PRODUCT_NAME:rfc1034identifier}',
              'SKIP_INSTALL'                       => 'YES',
    }
    
            it 'raises when given an unknown linkage' do
          -> { BuildType.new(:linkage => :foo) }.should.raise(ArgumentError).
            message.should.include? 'Invalid linkage option :foo, valid options are [:static, :dynamic]'
        end
      end
    
    @end
    
              it 'returns the path of the podfile directory relative to the standard user project' do
            podfile = @target.target_definition.podfile
            podfile.stubs(:defined_in_file).returns(Pathname.new(@target.client_root) + 'Podfile')
            @target.target_definition.stubs(:podfile).returns(podfile)
            @generator.target.podfile_dir_relative_path.should == '${SRCROOT}/.'
          end
    
            # Read the project from the disk to ensure that it is up to date as
        # other TargetIntegrators might have modified it.
        #
        # @return [Project]
        #
        def user_project
          target.user_project
        end
    
          it { expect(module_node.body.begin_type?).to be(true) }
    end
    
          let(:expected_source) { <<-RUBY }
        def some_method(foo, bar)
          foo + bar
        end
      RUBY
    
        context 'when there's a similar variable' do
      it 'suggests the variable name' do
        expect_offense(<<~RUBY)
          def some_method
            environment = nil
            another_symbol
            enviromnent = {}
            ^^^^^^^^^^^ Useless assignment to variable - `enviromnent`. Did you mean `environment`?
            puts environment
          end
        RUBY
      end
    end