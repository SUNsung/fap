
        
              should 'create URL with non-alphabetic characters' do
        @page = setup_page('+', '%# +.md')
        assert_equal '/+/%25%23%20+.html', @page.url
      end
    
    module Jekyll
  module Drops
    class SiteDrop < Drop
      extend Forwardable
    
    def version
  Jekyll::VERSION
end
    
      def avatar_lookup
    @avatar_lookup ||= options[:avatar_lookup] || AvatarLookup.new(user_ids)
  end
    
      def index
    @description_meta = I18n.t('tags.title')
    @title = @description_meta
    
          @s3_helper.ensure_cors!([rule])
    end
    
          before do
        SiteSetting.s3_upload_bucket = 's3-upload-bucket'
        SiteSetting.s3_access_key_id = 's3-access-key-id'
        SiteSetting.s3_secret_access_key = 's3-secret-access-key'
        SiteSetting.s3_region = 'us-west-1'
        SiteSetting.enable_s3_uploads = true
    
      context 'uploading to s3' do
    before(:each) do
      SiteSetting.s3_upload_bucket = 'some-really-cool-bucket'
      SiteSetting.s3_access_key_id = 's3-access-key-id'
      SiteSetting.s3_secret_access_key = 's3-secret-access-key'
      SiteSetting.enable_s3_uploads = true
    end
    
        serializer = TopicViewPostsSerializer.new(
      topic_view,
      scope: Guardian.new(Fabricate(:admin)),
      root: false
    )
    
          # Load trade representative contact information
      options[:trade_representative_contact_information] ||= {}
      TRADE_REPRESENTATIVE_CONTACT_INFORMATION_VALUES.values.each do |option_name|
        path = File.join(options[:metadata_path], TRADE_REPRESENTATIVE_CONTACT_INFORMATION_DIR, '#{option_name}.txt')
        next unless File.exist?(path)
        next if options[:trade_representative_contact_information][option_name].to_s.length > 0
    
    module Spaceship
  # Set of utility methods useful to work with media files
  module Utilities #:nodoc:
    # Identifies the content_type of a file based on its file name extension.
    # Supports all formats required by DU-UTC right now (video, images and json)
    # @param path (String) the path to the file
    def content_type(path)
      supported_file_types = {
        '.jpg' => 'image/jpeg',
        '.jpeg' => 'image/jpeg',
        '.png' => 'image/png',
        '.geojson' => 'application/json',
        '.mov' => 'video/quicktime',
        '.m4v' => 'video/mp4',
        '.mp4' => 'video/mp4',
        '.txt' => 'text/plain',
        '.pdf' => 'application/pdf',
        '.doc' => 'application/msword',
        '.docx' => 'application/vnd.openxmlformats-officedocument.wordprocessingml.document',
        '.rtf' => 'application/rtf',
        '.pages' => 'application/x-iwork-pages-sffpages',
        '.xls' => 'application/vnd.ms-excel',
        '.xlsx' => 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet',
        '.numbers' => 'application/x-iwork-numbers-sffnumbers',
        '.rar' => 'application/x-rar-compressed',
        '.plist' => 'application/xml',
        '.crash' => 'text/x-apport',
        '.avi' => 'video/x-msvideo',
        '.zip' => 'application/zip'
      }
    
        def itc_stub_valid_version_update_with_autorelease_and_release_on_datetime
      # Called from the specs to simulate valid server responses
      stub_request(:post, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/apps/898536088/platforms/ios/versions/812106519').
        to_return(status: 200, body: itc_read_fixture_file('update_app_version_with_autorelease_overwrite_success.json'),
                  headers: { 'Content-Type' => 'application/json' })
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
    
        class GetBuildNumberAction < Action
      require 'shellwords'
    
          desc 'Get the text for a specific template present in local filesystem' do
        detail 'This feature was introduced in GitLab #{gitlab_version}.'
        success Entities::Template
      end
      params do
        requires :name, type: String, desc: 'The name of the template'
      end
      get 'templates/#{template_type}/:name', requirements: { name: /[\w\.-]+/ } do
        finder = TemplateFinder.build(template_type, nil, name: declared(params)[:name])
        new_template = finder.execute
    
    describe Gitlab::Template::Finders::GlobalTemplateFinder do
  let(:base_dir) { Dir.mktmpdir }
    
      def notification_service
    @notification_service ||= NotificationService.new
  end
end

    
        def sha256(value)
      salt = Settings.attr_encrypted_db_key_base_truncated
      ::Digest::SHA256.base64digest('#{value}#{salt}')
    end
    
            def diff_stats_collection
          strong_memoize(:diff_stats) do
            # There are scenarios where we don't need to request Diff Stats,
            # when caching for instance.
            next unless @include_stats
            next unless diff_refs
    
          it 'creates a new user' do
        visit new_admin_user_path
        fill_in 'Email', with: 'test@test.com'
        fill_in 'Username', with: 'usertest'
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: '12345678'
        click_on 'Create User'
        expect(page).to have_text('User 'usertest' was successfully created.')
        expect(page).to have_text('test@test.com')
      end
    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
        context 'running workers' do
      before do
        AgentRunner.class_variable_set(:@@agents, [HuginnScheduler, DelayedJobWorker])
        stub.instance_of(HuginnScheduler).setup
        stub.instance_of(DelayedJobWorker).setup
      end
    
      describe '#filename' do
    it 'strips special characters' do
      expect(AgentsExporter.new(:name => 'ƏfooƐƕƺbar').filename).to eq('foo-bar.json')
    end
    
        @agent1 = Agents::SchedulerAgent.new(name: 'Scheduler 1', options: { action: 'run', schedule: '*/1 * * * * *' }).tap { |a|
      a.user = users(:bob)
      a.save!
    }
    @agent2 = Agents::SchedulerAgent.new(name: 'Scheduler 2', options: { action: 'run', schedule: '*/1 * * * * *' }).tap { |a|
      a.user = users(:bob)
      a.save!
    }
  end
    
      describe 'migrating the 'make_message' format' do
    it 'should work' do
      expect(LiquidMigrator.convert_make_message('<message>')).to eq('{{message}}')
      expect(LiquidMigrator.convert_make_message('<new.message>')).to eq('{{new.message}}')
      expect(LiquidMigrator.convert_make_message('Hello <world>. How is <nested.life>')).to eq('Hello {{world}}. How is {{nested.life}}')
    end
  end
    
    describe Utils do
  describe '#unindent' do
    it 'unindents to the level of the greatest consistant indention' do
      expect(Utils.unindent(<<-MD)).to eq('Hello World')
        Hello World
      MD
    
        it 'requires a valid log level' do
      @log.level = nil
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:level)
    
        it 'should generate the correct last checkpoint url' do
      @checker.options['path'] = 'last_checkpoint/usps/9361289878905919630610'
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/last_checkpoint/usps/9361289878905919630610')
    end
  end
    
      describe '#working?' do
    it 'should not be working until the first event was received' do
      expect(@checker).not_to be_working
      @checker.last_receive_at = Time.now
      expect(@checker).to be_working
    end
  end
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
      # Eager load code on boot. This eager loads most of Rails and
  # your application in memory, allowing both thread web servers
  # and those relying on copy on write to perform better.
  # Rake tasks automatically ignore this option for performance.
  config.eager_load = true
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end