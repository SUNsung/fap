
        
                updated_podspec_content
      end
    end
  end
end

    
          context 'with appendix' do
        it 'returns the current version once parsed with appendix' do
          test_content = 'spec.version = '1.3.2.4''
          result = @version_podspec_file.parse(test_content)
          expect(result).to eq('1.3.2.4')
          expect(@version_podspec_file.version_value).to eq('1.3.2.4')
          expect(@version_podspec_file.version_match[:major]).to eq('1')
          expect(@version_podspec_file.version_match[:minor]).to eq('3')
          expect(@version_podspec_file.version_match[:patch]).to eq('2')
          expect(@version_podspec_file.version_match[:appendix]).to eq('.4')
        end
    
                if editor.should_skip?
              UI.message('Skipping framing of screenshot #{screenshot.path}.  No title provided in your Framefile.json or title.strings.')
            else
              Helper.show_loading_indicator('Framing screenshot '#{full_path}'')
              editor.frame!
            end
          rescue => ex
            UI.error(ex.to_s)
            UI.error('Backtrace:\n\t#{ex.backtrace.join('\n\t')}') if FastlaneCore::Globals.verbose?
          end
        end
      else
        UI.error('Could not find screenshots in current directory: '#{File.expand_path(path)}'')
      end
    end
    
        before do
      mock_client_response(:get_build) do
        {
          id: 1,
          bundleId: 'some-bundle-id',
          appAdamId: 'some-app-id',
          uploadDate: '2017-01-01T12:00:00.000+0000',
          betaReviewInfo: {
            contactFirstName: 'Dev',
            contactLastName: 'Toolio',
            contactEmail: 'dev-toolio@fabric.io'
          },
          exportCompliance: {
            usesEncryption: true,
            encryptionUpdated: false
          },
          testInfo: [
            {
              locale: 'en-US',
              description: 'test info',
              feedbackEmail: 'email@example.com',
              whatsNew: 'this is new!'
            }
          ],
          dSYMUrl: 'https://some_dsym_url.com',
          includesSymbols: false,
          buildSdk: '13A340',
          fileName: 'AppName.ipa',
          containsODR: false,
          numberOfAssetPacks: 1
        }
      end
    end
    
          def self.download_file(url)
        uri = URI.parse(url)
        http = Net::HTTP.new(uri.host, uri.port)
        http.use_ssl = (uri.scheme == 'https')
        res = http.get(uri.request_uri)
        res.body
      end
    
          # @param current_path this is a path to either a dSYM or a zipped dSYM
      #   this might also be either nested or not, we're flexible
      def self.handle_dsym(params, current_path, max_worker_threads)
        if current_path.end_with?('.dSYM')
          upload_dsym(params, current_path)
        elsif current_path.end_with?('.zip')
          UI.message('Extracting '#{current_path}'...')
    
              # Store the number in the shared hash
          Actions.lane_context[SharedValues::BUILD_NUMBER] = build_number
        end
        return build_number
      rescue => ex
        return false if params[:hide_error_when_versioning_disabled]
        UI.error('Before being able to increment and read the version number from your Xcode project, you first need to setup your project properly. Please follow the guide at https://developer.apple.com/library/content/qa/qa1827/_index.html')
        raise ex
      end
    
            if Helper.ci? || Helper.test?
          # The 'BUILD_URL' environment variable is set automatically by Jenkins in every build
          jenkins_api_url = URI(ENV['BUILD_URL'] + 'api/json\?wrapper\=changes\&xpath\=//changeSet//comment')
          begin
            json = JSON.parse(Net::HTTP.get(jenkins_api_url))
            json['changeSet']['items'].each do |item|
              comment = params[:include_commit_body] ? item['comment'] : item['msg']
              changelog << comment.strip + '\n'
            end
          rescue => ex
            UI.error('Unable to read/parse changelog from jenkins: #{ex.message}')
          end
        end
    
          def check_ip_address
        if @ip_address && Postal.config.smtp_server.log_exclude_ips && @ip_address =~ Regexp.new(Postal.config.smtp_server.log_exclude_ips)
          @logging_enabled = false
        end
      end
    
                  # Parse the content of the message as appropriate
              if queued_message.message.should_parse?
                log '#{log_prefix} Parsing message content as it hasn't been parsed before'
                queued_message.message.parse_content
              end
    
      before_action do
    if params[:server_id]
      @server = organization.servers.present.find_by_permalink!(params[:server_id])
      params[:id] && @ip_pool_rule = @server.ip_pool_rules.find_by_uuid!(params[:id])
    else
      params[:id] && @ip_pool_rule = organization.ip_pool_rules.find_by_uuid!(params[:id])
    end
  end