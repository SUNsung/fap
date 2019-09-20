
        
              def key?(key)
        (key != 'posts' && @obj.collections.key?(key)) || super
      end
    
    #############################################################################
#
# Helper functions
#
#############################################################################
    
    def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
    AfterConfiguration do |config|
  f = Jekyll::Cucumber::Formatter.new(nil, $stdout, {})
    
            def initialize
          @websockets = []
          @connections_count = 0
          @started_event = Utils::ThreadEvent.new
          @stopped_event = Utils::ThreadEvent.new
        end
    
        it 'returns a label 'No' if a given agent is not working' do
      stub(@agent).working? { false }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'No'
    end
  end
    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
        it 'for the afternoon' do
      expect(@scheduler.send(:hour_to_schedule_name, 17)).to eq('5pm')
    end
  end
    
      let :new_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title', 'hidden' => true }
    }
  end
    
    describe Agents::CommanderAgent do
  let(:target) {
    agents(:bob_website_agent)
  }
    
          extra do
        { raw_info: decoded }
      end
    
          expect(diffable.project.repository)
        .to receive(:diff_stats)
        .with(diffable.diff_refs.base_sha, diffable.diff_refs.head_sha)
        .and_call_original
    
            desc 'Removes a badge from a project or group.' do
          detail 'This feature was introduced in GitLab 10.6.'
        end
        params do
          requires :badge_id, type: Integer, desc: 'The badge ID'
        end
        delete ':id/badges/:badge_id' do
          source = find_source_if_admin(source_type)
          badge = find_badge(source)
    
              member = source.members.find_by!(user_id: params[:user_id])
          updated_member =
            ::Members::UpdateService
              .new(current_user, declared_params(include_missing: false))
              .execute(member)
    
        it 'deprecated if build.with? conditional dependency' do
      expect_offense(<<~RUBY)
        class Foo < Formula
          desc 'foo'
          url 'https://brew.sh/foo-1.0.tgz'
          depends_on 'foo' if build.with? 'foo'
          ^^^^^^^^^^^^^^^^ Replace depends_on 'foo' if build.with? 'foo' with depends_on 'foo' => :optional
        end
      RUBY
    end
    
          context 'and 1.7 is required' do
        subject { described_class.new(%w[1.7]) }
    
          def update_instructions
        if OS::Mac.prerelease?
          <<~EOS
            Xcode can be updated from:
              #{Formatter.url('https://developer.apple.com/download/more/')}
          EOS
        else
          <<~EOS
            Xcode can be updated from the App Store.
          EOS
        end
      end
    
        context 'with a file name trailing the second query parameter' do
      let(:url) { 'https://example.com/dl?a=1&file=cask.zip&b=2' }
    
          subdir
    end
    
            it 'calls errors.add' do
          expect(errors).to have_received(:add)
            .with(:base, I18n.t('users.follow_limit_reached', limit: FollowLimitValidator::LIMIT))
        end
      end
    
      # Namespaces where SimpleForm should look for custom input classes that
  # override default inputs.
  # config.custom_inputs_namespaces << 'CustomInputs'
    
          def deprecated_pods
        @deprecated_pods ||= begin
          spec_sets.map(&:specification).select do |spec|
            spec.deprecated || spec.deprecated_in_favor_of
          end.compact.uniq
        end
      end
    
            # @return [Project] Generated and prepared project.
        #
        def generate!
          project = create_project(path, object_version, pod_target_subproject)
          prepare(sandbox, project, pod_targets, build_configurations, platforms, podfile_path)
          project
        end
    
          # Prints an info to the user. The info is always displayed.
      # It respects the current indentation level only in verbose
      # mode.
      #
      # Any title printed in the optional block is treated as a message.
      #
      # @param [String] message
      #        The message to print.
      #
      def info(message)
        indentation = config.verbose? ? self.indentation_level : 0
        indented = wrap_string(message, indentation)
        puts(indented)
    
    module Pod
  module UserInterface
    # Redirects GH-issues delegate callbacks to CocoaPods UI methods.
    #
    class InspectorReporter
      # Called just as the investigation has begun.
      # Lets the user know that it's looking for an issue.
      #
      # @param [query] String unused
      #
      # @param [GhInspector::Inspector] inspector
      #        The current inspector
      #
      # @return [void]
      #
      def inspector_started_query(_, inspector)
        UI.puts 'Looking for related issues on #{inspector.repo_owner}/#{inspector.repo_name}...'
      end
    
              # Creates a file reference to the xcconfig generated by
          # CocoaPods (if needed) and sets it as the base configuration of
          # build configuration of the user target.
          #
          # @param  [Target::AggregateTarget] pod_bundle
          #         The Pods bundle.
          #
          # @param  [PBXNativeTarget] target
          #         The native target.
          #
          # @param  [Xcodeproj::XCBuildConfiguration] config
          #         The build configuration.
          #
          def self.set_target_xcconfig(pod_bundle, target, config)
            file_ref = create_xcconfig_ref(pod_bundle, config)
            path = file_ref.path
    
          def plist_title
        'Acknowledgements'
      end
    
    describe Pod::Generator::Plist do
  before do
    @file_accessor = fixture_file_accessor('banana-lib/BananaLib.podspec')
    @spec = @file_accessor.spec
    @generator = Pod::Generator::Plist.new([@file_accessor])
    @spec.stubs(:name).returns('POD_NAME')
    @spec.stubs(:license).returns(:type => 'MIT')
    @generator.stubs(:license_text).returns('LICENSE_TEXT')
  end
    
        <div id='rack'>
      <h3 id='env-info'>Rack ENV</h3>
      <table class='req'>
        <tr>
          <th>Variable</th>
          <th>Value</th>
        </tr>
         <% env.sort_by { |k, v| k.to_s }.each { |key, val| %>
         <tr>
           <td><%=h key %></td>
           <td class='code'><div><%=h val %></div></td>
         </tr>
         <% } %>
      </table>
      <div class='clear'></div>
    </div> <!-- /RACK ENV -->
    
      # fetch data
  fields = {
    :authors => `git shortlog -sn`.force_encoding('utf-8').scan(/[^\d\s].*/),
    :email   => ['mail@zzak.io', 'konstantin.haase@gmail.com'],
    :files   => %w(License README.md Rakefile Gemfile rack-protection.gemspec) + Dir['lib/**/*']
  }
    
          def safe?(env)
        %w[GET HEAD OPTIONS TRACE].include? env['REQUEST_METHOD']
      end
    
            if has_vector?(request, headers)
          warn env, 'attack prevented by #{self.class}'
    
      it 'should allow setting CSP3 no arg directives' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :block_all_mixed_content => true, :disown_opener => true, :upgrade_insecure_requests => true
    
          it 'is not fooled by single line blocks' do
        expect_no_offenses(<<~RUBY)
          some_method #{open} do_something #{close}
          something_else
        RUBY
      end
    end
  end
end

    
              concerning :SecondThing do
            def omg
            end
            private
            def method
            end
            private
            ^^^^^^^ Useless `private` access modifier.
            def another_method
            end
          end
         end
      RUBY
    end
  end
    
          it { expect(if_node.ternary?).to be_truthy }
    end
  end
    
            def on_if(node)
          return if correct_style?(node)
    
          # Returns an array of all the values in the `hash` literal.
      #
      # @return [Array<Node>] an array of values in the `hash` literal
      def values
        each_pair.map(&:value)
      end
    
    Liquid::Template.register_tag('config_tag', ConfigTag)
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
        RBENVRVM_DEP_MSG = <<-M
    DEPRECATION: rbenv/rvm-specific options have been replaced by the
    `pre_tab` option and will not be supported in 0.8.0.
    M
    TABS_DEP_MSG = <<-M
    DEPRECATION: The tabs option has been replaced by the `windows` option
    and will not be supported in 0.8.0.
    M
    CLIARGS_DEP_MSG = <<-M
    DEPRECATION: The `cli_args` option has been replaced by the `tmux_options`
    option and will not be supported in 0.8.0.
    M
    SYNC_DEP_MSG = <<-M
    DEPRECATION: The `synchronize` option's current default behaviour is to
    enable pane synchronization before running commands. In a future release,
    the default synchronization option will be `after`, i.e. synchronization of
    panes will occur after the commands described in each of the panes
    have run. At that time, the current behavior will need to be explicitly
    enabled, using the `synchronize: before` option. To use this behaviour
    now, use the 'synchronize: after' option.
    M
    PRE_DEP_MSG = <<-M
    DEPRECATION: The `pre` option has been replaced by project hooks (`on_project_start` and
    `on_project_restart`) and will be removed in a future release.
    M
    POST_DEP_MSG = <<-M
    DEPRECATION: The `post` option has been replaced by project hooks (`on_project_stop` and
    `on_project_exit`) and will be removed in a future release.
    M
    
      context 'hook value is Array' do
    before do
      project.yaml[hook_name] = [
        'echo 'on hook'',
        'echo 'another command here''
      ]
    end
    
      orig_stdout = $stdout
  orig_stderr = $stderr
    
          def version_warning?(suppress_flag)
        !Tmuxinator::TmuxVersion.supported? && !suppress_flag
      end