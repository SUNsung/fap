
        
          it 'can dynamically generate a poll' do
    
        def handle_bounce(e)
      # never reply to bounced emails
      log_email_process_failure(@mail, e)
      set_incoming_email_rejection_message(@receiver.incoming_email, I18n.t('emails.incoming.errors.bounced_email_error'))
    end
    
      def create_list(filter, options = {}, topics = nil)
    topics ||= default_results(options)
    topics = yield(topics) if block_given?
    
      PRIVATE_IP ||= /^(127\.)|(192\.168\.)|(10\.)|(172\.1[6-9]\.)|(172\.2[0-9]\.)|(172\.3[0-1]\.)|(::1$)|([fF][cCdD])/
    
          auto_close
    end
    
        context 'with a category restriction' do
      fab!(:category) { Fabricate(:category, read_restricted: true) }
      let(:topic) { Fabricate(:topic, category: category) }
      let(:post) { Fabricate(:post, topic: topic) }
      fab!(:moderator) { Fabricate(:moderator) }
      fab!(:admin) { Fabricate(:admin) }
    
        def remote?
      true
    end
    
        end
    
          json = JSON.parse(response.body)
      expect(response.status).to eq(200)
      expect(json['staff_action_logs'].length).to eq(3)
      expect(json['staff_action_logs'][0]['new_value']).to eq('value 4')
    
        module_function :content_type, :grab_video_preview, :portrait?, :resolution, :video_resolution, :md5digest
  end
end

    
            # Gets actual simctl device type from device name
        return device_names.map do |device_name|
          device = SimCtl.device(name: device_name)
          if device
            device.devicetype.name
          end
        end.compact
      end
    end
  end
end

    
            [
          FastlaneCore::ConfigItem.new(key: :name,
                                       env_name: 'FL_REGISTER_DEVICE_NAME',
                                       description: 'Provide the name of the device to register as'),
          FastlaneCore::ConfigItem.new(key: :udid,
                                       env_name: 'FL_REGISTER_DEVICE_UDID',
                                       description: 'Provide the UDID of the device to register as'),
          FastlaneCore::ConfigItem.new(key: :team_id,
                                     env_name: 'REGISTER_DEVICE_TEAM_ID',
                                     code_gen_sensitive: true,
                                     default_value: CredentialsManager::AppfileConfig.try_fetch_value(:team_id),
                                       default_value_dynamic: true,
                                     description: 'The ID of your Developer Portal team if you're in multiple teams',
                                     optional: true,
                                     verify_block: proc do |value|
                                       ENV['FASTLANE_TEAM_ID'] = value.to_s
                                     end),
          FastlaneCore::ConfigItem.new(key: :team_name,
                                       env_name: 'REGISTER_DEVICE_TEAM_NAME',
                                       description: 'The name of your Developer Portal team if you're in multiple teams',
                                       optional: true,
                                       code_gen_sensitive: true,
                                       default_value: CredentialsManager::AppfileConfig.try_fetch_value(:team_name),
                                       default_value_dynamic: true,
                                       verify_block: proc do |value|
                                         ENV['FASTLANE_TEAM_NAME'] = value.to_s
                                       end),
          FastlaneCore::ConfigItem.new(key: :username,
                                       env_name: 'DELIVER_USER',
                                       description: 'Optional: Your Apple ID',
                                       default_value: user,
                                       default_value_dynamic: true)
        ]
      end
    
            expected_options = FastlaneCore::Configuration.create(available_options, { git_branch: 'my-branch' })
    
          def self.is_supported?(platform)
        platform == :android
      end
    
          def self.get_target!(project, target_name)
        targets = project.targets
    
          it 'updates an existing user' do
        visit edit_admin_user_path(users(:bob))
        check 'Admin'
        click_on 'Update User'
        expect(page).to have_text('User 'bob' was successfully updated.')
        visit edit_admin_user_path(users(:bob))
        expect(page).to have_checked_field('Admin')
      end
    
    describe LiquidMigrator do
  describe 'converting JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('$.data', true)).to eq('{{data}}')
      expect(LiquidMigrator.convert_string('$.data.test', true)).to eq('{{data.test}}')
      expect(LiquidMigrator.convert_string('$first_title', true)).to eq('{{first_title}}')
    end
    
      let :agent do
    Agents::WebsiteAgent.create!(
      user: users(:bob),
      name: 'xkcd',
      options: valid_options,
      keep_events_for: 2.days
    )
  end
    
        describe 'with an integer' do
      it 'prepends the corresponding character to the stream' do
        @gz.ungetc 0x21
        @gz.read.should == '!12345abcde'
      end
    
          gzio.mtime.should == Time.at(1)
    end
    
    describe 'GzipWriter#write' do
  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new ''.b
  end
    
      after :each do
    @z.close unless @z.closed?
  end
    
        before do
      @inflator.inflate(@zeros) do |chunk|
        @chunks << chunk
        break
      end
    end
    
      def contacts_by_type(type)
    order = ['profiles.first_name ASC', 'profiles.last_name ASC', 'profiles.diaspora_handle ASC']
    contacts = case type
      when 'all'
        order.unshift 'receiving DESC'
        current_user.contacts
      when 'only_sharing'
        current_user.contacts.only_sharing
      when 'receiving'
        current_user.contacts.receiving
      when 'by_aspect'
        order.unshift 'contact_id IS NOT NULL DESC'
        contacts_by_aspect(@aspect.id)
      else
        raise ArgumentError, 'unknown type #{type}'
      end
    contacts.includes(person: :profile)
            .order(order)
  end
    
        respond_to do |format|
      format.html
      format.xml { render :xml => @notifications.to_xml }
      format.json {
        render json: render_as_json(@unread_notification_count, @grouped_unread_notification_counts, @notifications)
      }
    end
  end
    
    Then(/^directory symlinks are created in the new release$/) do
  pending
  TestApp.linked_dirs.each do |dir|
    run_vagrant_command(test_symlink_exists(TestApp.release_path.join(dir)))
  end
end
    
        def any?(key)
      value = fetch(key)
      if value && value.respond_to?(:any?)
        begin
          return value.any?
        rescue ArgumentError # rubocop:disable Lint/HandleExceptions
          # Gracefully ignore values whose `any?` method doesn't accept 0 args
        end
      end
    
          def assert_value_or_block_not_both(value, block)
        return if value.nil? || block.nil?
        raise Capistrano::ValidationError,
              'Value and block both passed to Configuration#set'
      end