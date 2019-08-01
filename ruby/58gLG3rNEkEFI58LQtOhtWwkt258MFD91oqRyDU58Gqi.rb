
        
              file = create_test_for_env('development')
      results = Dir.chdir(app_path) {
        `RAILS_ENV=development ruby -Ilib:test #{file}`.each_line.map { |line| JSON.parse line }
      }
      assert_equal 1, results.length
      failures = results.first['failures']
      flunk(failures.first) unless failures.empty?
    
        def render_xml_with_custom_content_type
      render xml: '<blah/>', content_type: 'application/atomsvc+xml'
    end
    
      teardown do
    I18n.locale = @old_locale
  end
    
    require 'abstract_unit'
require 'active_support/core_ext/hash/conversions'
    
          def subscribed(callback, pattern = nil, monotonic: false, &block)
        subscriber = notifier.subscribe(pattern, callback, monotonic: monotonic)
        yield
      ensure
        unsubscribe(subscriber)
      end
    
        describe 'when id is negative' do
      it 'should return the right depth' do
        upload.update!(id: -999)
    
        it 'should import branch from ssh url' do
      Discourse::Utils.expects(:execute_command).with({
        'GIT_SSH_COMMAND' => 'ssh -i #{@ssh_folder}/id_rsa -o StrictHostKeyChecking=no'
      }, 'git', 'clone', '--single-branch', '-b', branch, ssh_url, @temp_folder)
    
        post_action_types = PostActionType.where(id: PostActionType.flag_types.values).order('id')
    
        render json: response
  end
    
        def file_regex
      @file_regex ||= begin
        path = @s3_helper.s3_bucket_folder_path || ''
    
      def source_regex(db_name, filename, multisite:)
    bucket = Regexp.escape(SiteSetting.s3_backup_bucket)
    prefix = file_prefix(db_name, multisite)
    filename = Regexp.escape(filename)
    expires = S3Helper::DOWNLOAD_URL_EXPIRES_AFTER_SECONDS
    
        load_diff(diff_fields, :cur, cur)
    load_diff(diff_fields, :prev, prev)
    
          get '/admin/logs/staff_action_logs/#{record.id}/diff.json'
      expect(response.status).to eq(200)
    
        body = JSON.parse(serializer.to_json)
    
          REVIEW_INFORMATION_VALUES.each do |key, option_name|
        v.send('#{key}=', info[option_name].to_s.chomp) if info[option_name]
      end
      v.review_user_needed = (v.review_demo_user.to_s.chomp + v.review_demo_password.to_s.chomp).length > 0
    end
    
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
    
            @transit_app_file = Tunes::TransitAppFile.factory({}) if @transit_app_file.nil?
        @transit_app_file .url = nil # response.headers['Location']
        @transit_app_file.asset_token = geojson_data['token']
        @transit_app_file.name = upload_file.file_name
        @transit_app_file.time_stamp = Time.now.to_i * 1000 # works without but...
      end
    
            return unless (path || '').length > 0
        UI.user_error!('Could not find podspec file at path '#{path}'') unless File.exist?(path)
    
          def build_settings
        config = Snapshot.config
    
            if Snapshot.config[:namespace_log_files]
          name_components << device_type if device_type
          name_components << language if language
          name_components << locale if locale
        end
    
    describe Match::CommandsGenerator do
  let(:available_options) { Match::Options.available_options }
    
          def self.example_code
        [
          'register_devices(
            devices: {
              'Luka iPhone 6' => '1234567890123456789012345678901234567890',
              'Felix iPad Air 2' => 'abcdefghijklmnopqrstvuwxyzabcdefghijklmn'
            }
          ) # Simply provide a list of devices as a Hash',
          'register_devices(
            devices_file: './devices.txt'
          ) # Alternatively provide a standard UDID export .txt file, see the Apple Sample (http://devimages.apple.com/downloads/devices/Multiple-Upload-Samples.zip)',
          'register_devices(
            devices_file: './devices.txt', # You must pass in either `devices_file` or `devices`.
            team_id: 'XXXXXXXXXX',         # Optional, if you're a member of multiple teams, then you need to pass the team ID here.
            username: 'luka@goonbee.com'   # Optional, lets you override the Apple Member Center username.
          )',
          'register_devices(
            devices: {
              'Luka MacBook' => '12345678-1234-1234-1234-123456789012',
              'Felix MacBook Pro' => 'ABCDEFGH-ABCD-ABCD-ABCD-ABCDEFGHIJKL'
            },
            platform: 'mac'
          ) # Register devices for Mac'
        ]
      end
    
          def self.category
        :production
      end
    end
  end
end

    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :workspace,
                                       env_name: 'IPA_WORKSPACE',
                                       description: 'WORKSPACE Workspace (.xcworkspace) file to use to build app (automatically detected in current directory)',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :project,
                                       env_name: 'IPA_PROJECT',
                                       description: 'Project (.xcodeproj) file to use to build app (automatically detected in current directory, overridden by --workspace option, if passed)',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :configuration,
                                       env_name: 'IPA_CONFIGURATION',
                                       description: 'Configuration used to build',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :scheme,
                                       env_name: 'IPA_SCHEME',
                                       description: 'Scheme used to build app',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :clean,
                                       env_name: 'IPA_CLEAN',
                                       description: 'Clean project before building',
                                       optional: true,
                                       is_string: false),
          FastlaneCore::ConfigItem.new(key: :archive,
                                       env_name: 'IPA_ARCHIVE',
                                       description: 'Archive project after building',
                                       optional: true,
                                       is_string: false),
          FastlaneCore::ConfigItem.new(key: :destination,
                                       env_name: 'IPA_DESTINATION',
                                       description: 'Build destination. Defaults to current directory',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :embed,
                                       env_name: 'IPA_EMBED',
                                       description: 'Sign .ipa file with .mobileprovision',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :identity,
                                       env_name: 'IPA_IDENTITY',
                                       description: 'Identity to be used along with --embed',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :sdk,
                                       env_name: 'IPA_SDK',
                                       description: 'Use SDK as the name or path of the base SDK when building the project',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :ipa,
                                       env_name: 'IPA_IPA',
                                       description: 'Specify the name of the .ipa file to generate (including file extension)',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :xcconfig,
                                       env_name: 'IPA_XCCONFIG',
                                       description: 'Use an extra XCCONFIG file to build the app',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :xcargs,
                                       env_name: 'IPA_XCARGS',
                                       description: 'Pass additional arguments to xcodebuild when building the app. Be sure to quote multiple args',
                                       optional: true,
                                       type: :shell_string)
        ]
      end
    
          def self.example_code
        [
          'make_changelog_from_jenkins(
            # Optional, lets you set a changelog in the case is not generated on Jenkins or if ran outside of Jenkins
            fallback_changelog: 'Bug fixes and performance enhancements'
          )'
        ]
      end
    
              # Build up the paths that we need to listen to.
          paths = {}
          ignores = []
          with_target_vms(argv) do |machine|
            next if machine.state.id == :not_created
            cwd = machine.env.cwd.to_s
    
            # Build up the actual command to execute
        command = [
          'rsync',
          args,
          '-e', rsh.flatten.join(' '),
          excludes.map { |e| ['--exclude', e] },
          hostpath,
          '#{username}@#{host}:#{guestpath}',
        ].flatten
    
        def new_entry(name, provider, version)
      Vagrant::MachineIndex::Entry.new.tap do |entry|
        entry.extra_data['box'] = {
          'name' => name,
          'provider' => provider,
          'version' => version,
        }
      end
    end
    
            def delete_encrypted_data_bag_secret
          remote_file = guest_encrypted_data_bag_secret_key_path
          return if remote_file.nil?
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
        it 'has the valid configuration' do
      expect(subject.config.vm.box).to eq('foo')
    end
    
        # The persistent data directory where global data can be stored. It
    # is up to the creator of the data in this directory to properly
    # remove it when it is no longer needed.
    #
    # @return [Pathname]
    attr_reader :data_dir
    
      # Tell browsers whether to use the native HTML5 validations (novalidate form option).
  # These validations are enabled in SimpleForm's internal config but disabled by default
  # in this configuration, which is recommended due to some quirks from different browsers.
  # To stop SimpleForm from generating the novalidate option, enabling the HTML5 validations,
  # change this configuration to true.
  config.browser_validations = false
    
          expect(response).to redirect_to(settings_preferences_notifications_path)
      user.reload
      expect(user.settings['notification_emails']['follow']).to be true
      expect(user.settings['interactions']['must_be_follower']).to be false
    end
  end
end

    
      describe 'GET #show' do
    let(:poll) { Fabricate(:poll, status: Fabricate(:status, visibility: visibility)) }
    
            it 'does not create anything' do
          expect(sender.statuses.count).to eq 0
        end
      end
    end
    
      def forward_to_origin!
    ActivityPub::DeliveryWorker.perform_async(
      payload,
      some_local_account.id,
      @target_account.inbox_url
    )
  end
    
      def self.move_cursor_up(val)
    if val > 0
      @@SetConsoleCursorPosition.call(@@hConsoleHandle, (cursor_pos.y - val) * 65536 + cursor_pos.x)
    elsif val < 0
      move_cursor_down(-val)
    end
  end
    
        @inflator.inflate(@zeros) do |chunk|
      @chunks << chunk
      break
    end
    
        if @contact.present?
      respond_to do |format|
        format.json do
          render json: AspectMembershipPresenter.new(
            AspectMembership.where(contact_id: @contact.id, aspect_id: @aspect.id).first)
          .base_hash
        end
      end
    else
      respond_to do |format|
        format.json do
          render plain: I18n.t('aspects.add_to_aspect.failure'), status: 409
        end
      end
    end
  end
    
    class CommentsController < ApplicationController
  before_action :authenticate_user!, except: :index
    
        unless valid_emails.empty?
      Workers::Mail::InviteEmail.perform_async(valid_emails.join(','), current_user.id, inviter_params)
    end
    
    team = ['Ryan Tomayko', 'Blake Mizerany', 'Simon Rozet', 'Konstantin Haase', 'Zachary Scott']
desc 'list of contributors'
task :thanks, ['release:all', :backports] do |t, a|
  a.with_defaults :release => '#{prev_version}..HEAD',
    :backports => '#{prev_feature}.0..#{prev_feature}.x'
  included = `git log --format=format:'%aN\t%s' #{a.release}`.lines.map { |l| l.force_encoding('binary') }
  excluded = `git log --format=format:'%aN\t%s' #{a.backports}`.lines.map { |l| l.force_encoding('binary') }
  commits  = (included - excluded).group_by { |c| c[/^[^\t]+/] }
  authors  = commits.keys.sort_by { |n| - commits[n].size } - team
  puts authors[0..-2].join(', ') << ' and ' << authors.last,
    '(based on commits included in #{a.release}, but not in #{a.backports})'
end
    
          def self.default_options(options)
        define_method(:default_options) { super().merge(options) }
      end
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
          class << self
        alias escape_url escape
        public :escape_html
      end
    
          def call(env)
        request               = Request.new(env)
        status, headers, body = app.call(env)
    
        it 'sets a session authenticity token if one does not exist' do
      session = {}
      allow(Rack::Protection::AuthenticityToken).to receive(:random_token).and_return(token)
      allow_any_instance_of(Rack::Protection::AuthenticityToken).to receive(:mask_token).and_return(masked_token)
      Rack::Protection::AuthenticityToken.token(session)
      expect(session[:csrf]).to eq(token)
    end
  end
    
      # Capybara javascript drivers require transactional fixtures set to false, and we use DatabaseCleaner
  # to cleanup after each test instead.  Without transactional fixtures set to false the records created
  # to setup a test will be unavailable to the browser, which runs under a separate server instance.
  config.use_transactional_fixtures = false
    
              scope = scope.not_deleted unless params[:show_deleted]
          scope = scope.not_discontinued unless params[:show_discontinued]
        else
          scope = Product.accessible_by(current_ability, :show).active.includes(*product_includes)
        end
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
            private
    
            def create
          authorize! :create, Spree::OptionType
          @option_type = Spree::OptionType.new(option_type_params)
          if @option_type.save
            render :show, status: 201
          else
            invalid_resource!(@option_type)
          end
        end
    
            def update
          if @property
            authorize! :update, @property
            @property.update(property_params)
            respond_with(@property, status: 200, default_template: :show)
          else
            invalid_resource!(@property)
          end
        end
    
              error =
            if @quantity < 0 && @target_shipment == @original_shipment
              '#{Spree.t(:negative_quantity, scope: 'api')}, \n#{Spree.t('wrong_shipment_target', scope: 'api')}'
            elsif @target_shipment == @original_shipment
              Spree.t(:wrong_shipment_target, scope: 'api')
            elsif @quantity < 0
              Spree.t(:negative_quantity, scope: 'api')
            end
    
            def product
          if params[:product_id]
            @product ||= Spree::Product.accessible_by(current_ability, :show).
                         friendly.find(params[:product_id])
          end
        end
    
        it 'leaves chat channel' do
      membership = ChatChannelMembership.last
      sign_in second_user
      delete '/chat_channel_memberships/#{membership.chat_channel.id}', params: {}
      expect(ChatChannelMembership.find(membership.id).status).to eq('left_channel')
    end
  end
end

    
          it 'renders to appropriate page if user changes username twice and go to middle username' do
        user.update(username: 'new_hotness_#{rand(10_000)}')
        middle_username = user.username
        user.update(username: 'new_new_username_#{rand(10_000)}')
        get '/#{middle_username}/#{article.slug}'
        expect(response.body).to redirect_to('/#{user.username}/#{article.slug}')
      end
    end
    
      def define_categories
    cat_info = {
      'collabs': ['Collaborators Wanted', '#5AE8D9'],
      'cfp': ['Call For Proposal', '#f58f8d'],
      'forhire': ['Available For Hire', '#b78cf4'],
      'education': ['Education', '#5AABE8'],
      'jobs': ['Now Hiring', '#53c3ad'],
      'mentors': ['Offering Mentorship', '#A69EE8'],
      'mentees': ['Looking For Mentorship', '#88aedb'],
      'forsale': ['Stuff For Sale', '#d0adfb'],
      'events': ['Upcoming Event', '#f8b3d0'],
      'misc': ['Miscellaneous', '#6393FF'],
      'products': ['Products & Tools', '#5AE8D9']
    }
    @category = cat_info[@listing.category.to_sym][0]
    @cat_color = cat_info[@listing.category.to_sym][1]
  end
end

    
      def self.send_to_buffer(text, buffer_profile_id_code)
    client = Buffer::Client.new(ApplicationConfig['BUFFER_ACCESS_TOKEN'])
    client.create_update(
      body: {
        text:
        text,
        profile_ids: [
          buffer_profile_id_code,
        ]
      },
    )
  end
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
        def get_gist_from_web(gist, file)
      gist_url = get_gist_url_for(gist, file)
      data     = get_web_content(gist_url)
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
    module Jekyll