
        
                UI.message('Uploading image file #{path}...')
        client.upload_image(image_path: File.expand_path(path),
                            image_type: image_type,
                              language: language)
      end
    end
    
        it 'reloads a build' do
      build = Spaceship::TestFlight::Build.new
      build.id = 1
      build.app_id = 2
      expect do
        build.reload
      end.to change(build, :bundle_id).from(nil).to('some-bundle-id')
    end
    
            resp_hash = response.to_hash
        if resp_hash[:status] == 401
          msg = 'Auth lost'
          logger.warn(msg)
          raise UnauthorizedAccessError.new, 'Unauthorized Access'
        end
    
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
    
        # @param lane [Lane] A lane object
    def add_lane(lane, override = false)
      lanes[lane.platform] ||= {}
    
          it 'requires the passwords to match when changing them' do
        visit edit_admin_user_path(users(:bob))
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: 'no_match'
        click_on 'Update User'
        expect(page).to have_text('Password confirmation doesn't match')
      end
    end
    
    describe ApplicationHelper do
  describe '#icon_tag' do
    it 'returns a Glyphicon icon element' do
      icon = icon_tag('glyphicon-help')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help')).to be_a Nokogiri::XML::Element
    end
    
      describe '#relative_distance_of_time_in_words' do
    it 'in the past' do
      expect(relative_distance_of_time_in_words(Time.now-5.minutes)).to eq('5m ago')
    end
    
        it 'optionally supports treating values that start with '$' as raw JSONPath' do
      expect(Utils.interpolate_jsonpaths('$.there.world', payload)).to eq('$.there.world')
      expect(Utils.interpolate_jsonpaths('$.there.world', payload, :leading_dollarsign_is_jsonpath => true)).to eq('WORLD')
    end
  end
    
      describe '#log_for_agent' do
    it 'creates AgentLogs' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(log).not_to be_new_record
      expect(log.agent).to eq(agents(:jane_website_agent))
      expect(log.outbound_event).to eq(events(:jane_website_agent_event))
      expect(log.message).to eq('some message')
      expect(log.level).to eq(4)
    end
    
    class ActivityPub::ReplyDistributionWorker
  include Sidekiq::Worker
  include Payloadable
    
      # Series of attempts to detect a default value method for collection.
  # config.collection_value_methods = [ :id, :to_s ]
    
      describe 'PUT #update' do
    it 'updates notifications settings' do
      user.settings['notification_emails'] = user.settings['notification_emails'].merge('follow' => false)
      user.settings['interactions'] = user.settings['interactions'].merge('must_be_follower' => true)
    
        # Initiate a re-follow for each follower
    origin_account.followers.local.select(:id).find_in_batches do |follower_accounts|
      UnfollowFollowWorker.push_bulk(follower_accounts.map(&:id)) do |follower_account_id|
        [follower_account_id, origin_account.id, target_account.id]
      end
    end
  end
    
      spec.files         = %w[
    LICENSE.txt
    README.md
    ext/etc/constdefs.h
    ext/etc/etc.c
    ext/etc/extconf.rb
    ext/etc/mkconstants.rb
    stub/etc.rb
    test/etc/test_etc.rb
  ]
  spec.bindir        = 'exe'
  spec.require_paths = ['lib']
  spec.extensions    = %w{ext/etc/extconf.rb}
    
      def self.getc
    unless @@buf.empty?
      return @@buf.shift
    end
    input = getwch
    alt = (@@GetKeyState.call(VK_MENU) & 0x80) != 0
    shift_enter = (@@GetKeyState.call(VK_SHIFT) & 0x80) != 0 && input.first == 0x0D
    if shift_enter
      # It's treated as Meta+Enter on Windows
      @@buf.concat(['\e'.ord])
      @@buf.concat(input)
    elsif input.size > 1
      @@buf.concat(input)
    else # single byte
      case input[0]
      when 0x00
        getwch
        alt = false
        input = getwch
        @@buf.concat(input)
      when 0xE0
        @@buf.concat(input)
        input = getwch
        @@buf.concat(input)
      when 0x03
        @@buf.concat(input)
      else
        @@buf.concat(input)
      end
    end
    if alt
      '\e'.ord
    else
      @@buf.shift
    end
  end
    
      it 'returns an empty string if a 0 length is given' do
    gz = Zlib::GzipReader.new @io
    gz.read(0).should == ''
  end
    
        unzipped = @inflator.inflate data.pack('C*')
    @inflator.finish
    
    output = File.new(OUTPUT_FILENAME, 'wb')
output.write(xml.target!)
output.close
    
    end
    
        def render(context)
      if parts = @text.match(/([a-zA-Z\d]*) (.*)/)
        gist, file = parts[1].strip, parts[2].strip
      else
        gist, file = @text.strip, ''
      end
      if gist.empty?
        ''
      else
        script_url = script_url_for gist, file
        code       = get_cached_gist(gist, file) || get_gist_from_web(gist, file)
        html_output_for script_url, code
      end
    end
    
    module Jekyll