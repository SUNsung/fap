
        
              def setup_large_app_icon
        large_app_icon = raw_data['largeAppIcon']['value']
        @large_app_icon = nil
        @large_app_icon = Tunes::AppImage.factory(large_app_icon) if large_app_icon
      end
    
            value = arguments.first
        value = yield if value.nil? && block_given?
    
            # Then check for iTMSTransporter in the Xcode path
        [
          '../Applications/Application Loader.app/Contents/MacOS/itms',
          '../Applications/Application Loader.app/Contents/itms',
          '../SharedFrameworks/ContentDeliveryServices.framework/Versions/A/itms' # For Xcode 11
        ].each do |path|
          result = File.expand_path(File.join(self.xcode_path, path))
          return result if File.exist?(result)
        end
        UI.user_error!('Could not find transporter at #{self.xcode_path}. Please make sure you set the correct path to your Xcode installation.')
      elsif self.windows?
        [
          'C:/Program Files (x86)/itms'
        ].each do |path|
          return path if File.exist?(path)
        end
        UI.user_error!('Could not find transporter at usual locations. Please use environment variable `FASTLANE_ITUNES_TRANSPORTER_PATH` to specify your installation path.')
      else
        # not Mac or Windows
        return ''
      end
    end
    
            # @return (Array) Returns all Watches registered for this account
        def all_watches
          client.devices_by_class('watch').map { |device| self.factory(device) }
        end
    
          def self.details
        'This is useful when deploying automated builds. The changelog from Jenkins lists all the commit messages since the last build.'
      end
    
      private
    
        ActivityPub::DeliveryWorker.push_bulk(Relay.enabled.pluck(:inbox_url)) do |inbox_url|
      [signed_payload, @account.id, inbox_url]
    end
  rescue ActiveRecord::RecordNotFound
    true
  end
    
      let(:json) do
    {
      '@context': 'https://www.w3.org/ns/activitystreams',
      id: 'foo',
      type: 'Announce',
      actor: 'https://example.com/actor',
      object: object_json,
      to: 'http://example.com/followers',
    }.with_indifferent_access
  end
    
      it 'should respect scopes' do
    @session.within '//p[@id='first']' do
      expect { @session.assert_no_selector('.//a[@id='foo']') }.to raise_error(Capybara::ElementNotFound)
      @session.assert_no_selector('.//a[@id='red']')
    end
  end
    
      it 'should allow regexp matches' do
    expect do
      @session.assert_title(/w[a-z]{3}_js/)
    end.not_to raise_error
    
      it 'should be false if the given selector does not match the element' do
    expect { @element.assert_matches_selector(:css, '.not_number') }.to raise_error(Capybara::ElementNotFound)
  end