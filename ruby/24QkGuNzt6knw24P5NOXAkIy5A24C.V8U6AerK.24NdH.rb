
        
            def purge_tombstone(grace_period)
    end
    
        it 'should import from ssh url' do
      Discourse::Utils.expects(:execute_command).with({
        'GIT_SSH_COMMAND' => 'ssh -i #{@ssh_folder}/id_rsa -o StrictHostKeyChecking=no'
      }, 'git', 'clone', ssh_url, @temp_folder)
    
      describe '.overrides_by_locale' do
    it 'should cache overrides for each locale' do
      override_translation('en', 'got', 'summer')
      override_translation('zh_TW', 'got', '冬季')
    
        unless @topic.topic_allowed_users.where(user_id: @user.id).exists?
      unless @topic.topic_allowed_groups.where('group_id IN (
                                              SELECT group_id FROM group_users where user_id = ?
                                           )', @user.id).exists?
        @topic.topic_allowed_users.create!(user_id: @user.id)
      end
    end
  end
    
          @s3_helper.ensure_cors!([rule])
    end
    
    require_dependency 'reviewable_score_type_serializer'
    
          # Now it's time to merge the (potentially) existing mapping
      #   (e.g. coming from `provisioningProfiles` of the `export_options` or from previous match calls)
      # with the secondary hash we just created (or was provided as parameter).
      # Both might include information about what profile to use
      # This is important as it might not be clear for the user that they have to call match for each app target
      # before adding this code, we'd only either use whatever we get from match, or what's defined in the Xcode project
      # With the code below, we'll make sure to take the best of it:
      #
      #   1) A provisioning profile is defined in the `primary_mapping`
      #   2) A provisioning profile is defined in the `secondary_mapping`
      #   3) On a conflict (app identifier assigned both in xcode and match)
      #     3.1) we'll choose whatever matches what's defined as the `export_method`
      #     3.2) If both include the right `export_method`, we'll prefer the one from `primary_mapping`
      #     3.3) If none has the right export_method, we'll use whatever is defined in the Xcode project
      #
      # To get a better sense of this, check out code_signing_spec.rb for some test cases
    
          # Path to the project or workspace as parameter
      # This will also include the scheme (if given)
      # @return [Array] The array with all the components to join
      def project_path_array
        proj = Snapshot.project.xcodebuild_parameters
        return proj if proj.count > 0
        UI.user_error!('No project/workspace found')
      end
    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :fallback_changelog,
                                       description: 'Fallback changelog if there is not one on Jenkins, or it couldn't be read',
                                       optional: true,
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :include_commit_body,
                                       description: 'Include the commit body along with the summary',
                                       optional: true,
                                       is_string: false,
                                       default_value: true)
        ]
      end
    
          def self.category
        :code_signing
      end
    end
  end
end

    
            desc 'Requests access for the authenticated user to a #{source_type}.' do
          detail 'This feature was introduced in GitLab 8.11.'
          success Entities::AccessRequester
        end
        post ':id/access_requests' do
          source = find_source(source_type, params[:id])
          access_requester = source.request_access(current_user)
    
        # The path used after unlocking the resource
    def after_unlock_path_for(resource)
      new_session_path(resource)  if is_navigational_format?
    end
    
              if mod.const_defined?('ClassMethods')
            class_mod = mod.const_get('ClassMethods')
            extend class_mod
    
          def test_on_event5
        ev = WIN32OLE_EVENT.new(@db, 'ConnectionEvents')
        ev.on_event {|*args| default_handler(*args)}
        ev.on_event('WillConnect'){|*args| handler3(*args)}
        @db.open
        message_loop
        assert_match(/ConnectComplete/, @event)
        assert(/WillConnect/ !~ @event)
        assert_equal(CONNSTR, @event3)
      end
    
      it 'calls the given block for each line in the stream, passing the line as an argument' do
    ScratchPad.record []
    @gzreader.send(@method) { |b| ScratchPad << b }
    
    describe 'GzipWriter#write' do
  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new ''.b
  end
    
      before do
    @zeros    = Zlib::Deflate.deflate('0' * 100_000)
    @inflator = Zlib::Inflate.new
    @chunks   = []
    
          it 'returns scopes by built types, versioned platform names and subspec names' do
        variants = PodVariantSet.new([
          PodVariant.new([@root_spec, @default_subspec], [], [], Platform.new(:ios, '7.0')),
          PodVariant.new([@root_spec, @default_subspec], [], [], Platform.ios),
          PodVariant.new([@root_spec, @default_subspec], [], [], Platform.osx, Target::BuildType.dynamic_framework),
          PodVariant.new([@root_spec, @default_subspec, @foo_subspec], [], [], Platform.osx, Target::BuildType.dynamic_framework),
        ])
        variants.scope_suffixes.values.should == %w(
          library-iOS7.0
          library-iOS
          framework
          .default-Foo
        )
      end
    
    - (BOOL)application:(UIApplication *)__unused application didFinishLaunchingWithOptions:(NSDictionary *)__unused launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.rootViewController = [UIViewController new];
    }
    
            # Cleans up projects before writing.
        #
        def cleanup_projects(projects)
          projects.each do |project|
            [project.pods, project.support_files_group,
             project.development_pods, project.dependencies_group].each { |group| group.remove_from_project if group.empty? }
            project.sort(:groups_position => :below)
          end
        end
      end
    end
  end
end

    
    @@ login
<form action='/'>
  <label for='user'>User Name:</label>
  <input name='user' value='' />
  <input type='submit' value='GO!' />
</form>
    
          def unmasked_token?(token)
        token.length == TOKEN_LENGTH
      end
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
      it 'accepts post form requests with correct authenticity_token field' do
    post('/', {'authenticity_token' => token}, 'rack.session' => session)
    expect(last_response).to be_ok
  end
    
    end

    
      it 'allows middleware to abruptly stop processing rest of chain' do
    recorder = []
    chain = Sidekiq::Middleware::Chain.new
    chain.add NonYieldingMiddleware
    chain.add CustomMiddleware, 1, recorder
    
          assert SomeScheduledWorker.perform_in(1.month, 'mike')
      assert_equal 2, ss.size
    
        assert_raises InlineError do
      Sidekiq::Client.enqueue(InlineWorker, false)
    end
  end
    
        ## Write the results to a file
    ## Requires railsexpress patched MRI build
    # brew install qcachegrind
    #File.open('callgrind.profile', 'w') do |f|
      #RubyProf::CallTreePrinter.new(result).print(f, :min_percent => 1)
    #end
  end
end
    
        msg = 'Actual pane does not match expected'
    msg << '\n  Expected #{@commands} but has #{actual.commands}' if @commands
    msg << '\n  Expected pane to have #{@expected_attrs}' if @expected_attrs
  end