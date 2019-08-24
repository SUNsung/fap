
        
            # Override configuration for a specific platform. If received platform name
    # does not match the platform name available as environment variable, no
    # changes will be applied.
    #
    # @param platform_name Symbol representing a platform name.
    # @yield Block to run for overriding configuration values.
    #
    def for_platform(platform_name)
      if ENV['FASTLANE_PLATFORM_NAME'] == platform_name.to_s
        with_a_clean_config_merged_when_complete do
          yield
        end
      end
    end
    
          verify_config!
    
          it 'is active' do
        mock_client_response(:get_build) do
          {
            'externalState' => 'testflight.build.state.testing.active'
          }
        end
        expect(build).to be_active
      end
    
          it 'inspect works' do
        allow_any_instance_of(Time).to receive(:to_i).and_return(effective_date)
        TunesStubbing.itc_stub_update_price_tier
    
                  # Creates the mapping for a bundle identifier and profile specifier/uuid
              if has_profile_specifier
                provisioning_profile_mapping[bundle_identifier] = provisioning_profile_specifier
              elsif has_profile_uuid
                provisioning_profile_mapping[bundle_identifier] = provisioning_profile_uuid
              end
            end
    
        class GetBuildNumberAction < Action
      require 'shellwords'
    
        class MakeChangelogFromJenkinsAction < Action
      def self.run(params)
        require 'json'
        require 'net/http'
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
            case version
        when CURRENT_SETUP_VERSION
          # We're already good, at the latest version.
        when '1.1'
          # We need to update our directory structure
          upgrade_home_path_v1_1
    
      describe '#rm' do
    context 'when container has been created' do
      before { allow(subject).to receive(:created?).and_return(true) }
    
          it 'does not render html variant when user logged in' do
        html_variant = create(:html_variant, published: true, approved: true)
        sign_in user
        get article.path
        expect(response.body).not_to include html_variant.html
      end
    
      def article_social_image_url(article)
    image = user_defined_image(article)
    if image.present?
      return cl_image_path(image,
                           type: 'fetch',
                           width: '1000',
                           height: '500',
                           crop: 'imagga_scale',
                           quality: 'auto',
                           flags: 'progressive',
                           fetch_format: 'auto',
                           sign_url: true)
    end
    return legacy_article_social_image(article) unless use_new_social_url?(article)
    
      def self.buff!(article_id, text, buffer_profile_id_code, social_service_name = 'twitter', tag_id = nil)
    buffer_response = send_to_buffer(text, buffer_profile_id_code)
    create(
      article_id: article_id,
      tag_id: tag_id,
      body_text: text,
      buffer_profile_id_code: buffer_profile_id_code,
      social_service_name: social_service_name,
      buffer_response: buffer_response,
      status: 'sent_direct',
    )
  end