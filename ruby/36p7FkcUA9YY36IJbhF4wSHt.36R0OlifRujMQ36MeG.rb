
        
              def html_pages
        @site_html_pages ||= @obj.pages.select do |page|
          page.html? || page.url.end_with?('/')
        end
      end
    
    WITH_LIQUID = <<-LIQUID.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. {{ author }} et metus fermentum, eu cursus lorem
mattis. Curabitur vel dui et lacus rutrum suscipit et eget neque.
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
        def promote_track
      version_codes = client.track_version_codes(Supply.config[:track])
      # the actual value passed for the rollout argument does not matter because it will be ignored by the Google Play API
      # but it has to be between 0.0 and 1.0 to pass the validity check. So we are passing the default value 0.1
      client.update_track(Supply.config[:track], 0.1, nil) if Supply.config[:deactivate_on_promote]
      client.update_track(Supply.config[:track_promote_to], Supply.config[:rollout] || 0.1, version_codes)
    end
    
            Actions.lane_context[SharedValues::FL_CHANGELOG] = changelog.strip.length > 0 ? changelog : params[:fallback_changelog]
      end
    
          def self.description
        'Receive the version number from a podspec file'
      end
    
            contains_key = self.shared_values_constants.include?(key.to_s)
        add_offense(node, :expression, MISSING_CONST_DEFINITION_MSG) unless contains_key
      end
    
          [
        # app upload info
        FastlaneCore::ConfigItem.new(key: :username,
                                     short_option: '-u',
                                     env_name: 'PILOT_USERNAME',
                                     description: 'Your Apple ID Username',
                                     default_value: user,
                                     default_value_dynamic: true),
        FastlaneCore::ConfigItem.new(key: :app_identifier,
                                     short_option: '-a',
                                     env_name: 'PILOT_APP_IDENTIFIER',
                                     description: 'The bundle identifier of the app to upload or manage testers (optional)',
                                     optional: true,
                                     code_gen_sensitive: true,
                                     # This incorrect env name is here for backwards compatibility
                                     default_value: ENV['TESTFLIGHT_APP_IDENTITIFER'] || CredentialsManager::AppfileConfig.try_fetch_value(:app_identifier),
                                     default_value_dynamic: true),
        FastlaneCore::ConfigItem.new(key: :app_platform,
                                     short_option: '-m',
                                     env_name: 'PILOT_PLATFORM',
                                     description: 'The platform to use (optional)',
                                     optional: true,
                                     default_value: 'ios',
                                     verify_block: proc do |value|
                                       UI.user_error!('The platform can only be ios, appletvos, or osx') unless ['ios', 'appletvos', 'osx'].include?(value)
                                     end),
        FastlaneCore::ConfigItem.new(key: :apple_id,
                                     short_option: '-p',
                                     env_name: 'PILOT_APPLE_ID',
                                     description: 'Apple ID property in the App Information section in App Store Connect',
                                     optional: true,
                                     code_gen_sensitive: true,
                                     default_value: ENV['TESTFLIGHT_APPLE_ID'],
                                     default_value_dynamic: true,
                                     type: String,
                                     verify_block: proc do |value|
                                       error_message = '`apple_id` value is incorrect. The correct value should be taken from Apple ID property in the App Information section in App Store Connect.'
    
            groups = [custom_tester_group]
        group_names = groups.map(&:name).join(';')
        expect(FastlaneCore::UI).to receive(:success).with('Successfully added tester #{fake_tester.email} to app #{fake_app_name} in group(s) #{group_names}')
    
          def encode_token(token)
        Base64.strict_encode64(token)
      end
    
          def call(env)
        request               = Request.new(env)
        status, headers, body = app.call(env)
    
            post '/', :file => Rack::Test::UploadedFile.new(temp_file.path), :other => '<bar>'
        expect(body).to eq('_escaped_params_tmp_file\nhello world\n&lt;bar&gt;')
      ensure
        File.unlink(temp_file.path)
      end
    end
  end
end

    
      it 'accepts post form requests with correct authenticity_token field' do
    post('/', {'authenticity_token' => token}, 'rack.session' => session)
    expect(last_response).to be_ok
  end