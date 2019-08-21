
        
            should 'process other static files and generate correct permalinks' do
      assert_exist dest_dir('contacts.html')
      assert_exist dest_dir('dynamic_file.php')
    end
    
        if ENV['CI']
      report.pretty_print(scale_bytes: true, color_output: false, normalize_paths: true)
    else
      FileUtils.mkdir_p('tmp')
      report_file = File.join('tmp', args.file)
    
    def pre_pr(url)
  url[-1, 1] == FORWARD_SLASH ? url : File.dirname(url)
end
    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
            def running?
          EM.reactor_running?
        end
    
        #     expect(trailer.video_asset_token).to eq(nil)
    #     expect(trailer.picture_asset_token).to eq('Purple70/v4/5f/2b/81/5f2b814d-1083-5509-61fb-c0845f7a9374/pr_source.jpg')
    #     expect(trailer.descriptionXML).to eq(nil)
    #     expect(trailer.preview_frame_time_code).to eq('00:00:06:12')
    #     expect(trailer.video_url).to eq('http://a1713.phobos.apple.com/us/r30/PurpleVideo7/v4/be/38/db/be38db8d-868a-d442-87dc-cb6d630f921e/P37134684_default.m3u8')
    #     expect(trailer.preview_image_url).to eq('https://is1-ssl.mzstatic.com/image/thumb/PurpleVideo5/v4/b7/41/5e/b7415e96-5ad5-6cf5-9323-15122145e53f/Job21976428-61a9-456b-af46-26c1303ae607-91524171-PreviewImage_AppTrailer_quicktime-Time1438426738374.png/500x500bb-80.png')
    #     expect(trailer.full_sized_preview_image_url).to eq('https://is1-ssl.mzstatic.com/image/thumb/PurpleVideo5/v4/b7/41/5e/b7415e96-5ad5-6cf5-9323-15122145e53f/Job21976428-61a9-456b-af46-26c1303ae607-91524171-PreviewImage_AppTrailer_quicktime-Time1438426738374.png/900x1200ss-80.png')
    #     expect(trailer.device_type).to eq('ipad')
    #     expect(trailer.language).to eq('English')
    #   end
    
          it 'returns the current version once parsed with prerelease' do
        test_content = 'spec.version = '1.3.2-SNAPSHOT''
        result = @version_podspec_file.parse(test_content)
        expect(result).to eq('1.3.2-SNAPSHOT')
        expect(@version_podspec_file.version_value).to eq('1.3.2-SNAPSHOT')
        expect(@version_podspec_file.version_match[:major]).to eq('1')
        expect(@version_podspec_file.version_match[:minor]).to eq('3')
        expect(@version_podspec_file.version_match[:patch]).to eq('2')
        expect(@version_podspec_file.version_match[:prerelease]).to eq('SNAPSHOT')
      end
    
                UI.user_error!('Invalid device line, please provide a file according to the Apple Sample UDID file (http://devimages.apple.com/downloads/devices/Multiple-Upload-Samples.zip)') unless device.count == 2
    
                resulting_path = File.join('.', language, file_name)
            @data_by_language[language][output_name] << resulting_path
            @data_by_screen[screen_name][output_name][language] = resulting_path
            break # to not include iPhone 6 and 6 Plus (name is contained in the other name)
          end
        end
      end
    
      clubmate
    
      # Sets flash message if is_flashing_format? equals true
  def set_flash_message!(key, kind, options = {})
    if is_flashing_format?
      set_flash_message(key, kind, options)
    end
  end
    
    require 'minitest/autorun'
    
          def expire_data_after_sign_in!
        # session.keys will return an empty array if the session is not yet loaded.
        # This is a bug in both Rack and Rails.
        # A call to #empty? forces the session to be loaded.
        session.empty?
        session.keys.grep(/^devise\./).each { |k| session.delete(k) }
      end
    
          private
    
            # Attempt to find a user by its reset_password_token to reset its
        # password. If a user is found and token is still valid, reset its password and automatically
        # try saving the record. If not user is found, returns a new user
        # containing an error in reset_password_token attribute.
        # Attributes must contain reset_password_token, password and confirmation
        def reset_password_by_token(attributes={})
          original_token       = attributes[:reset_password_token]
          reset_password_token = Devise.token_generator.digest(self, :reset_password_token, original_token)