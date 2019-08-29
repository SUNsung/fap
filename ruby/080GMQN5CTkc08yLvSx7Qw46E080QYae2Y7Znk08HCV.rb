
        
                @version_value = '#{major}.#{minor}.#{patch}'
      end
    
          def initialize(wrapped_ex, options)
        @wrapped_exception = wrapped_ex
        @recovered_options = options
      end
    end
    
          def self.allowed_services_description
        return Produce::DeveloperCenter::ALLOWED_SERVICES.map do |k, v|
          '#{k}: (#{v.join('|')})(:on|:off)(true|false)'
        end.join(', ')
      end
    
      before do
    # Use a simple client for all data models
    allow(Spaceship::TestFlight::Base).to receive(:client).and_return(mock_client)
    allow(mock_client).to receive(:team_id).and_return('')
  end
    
            raise ex
      end
    end
    
      describe :find_build do
    context 'one build' do
      let(:fake_builds) { make_fake_builds(1) }
      it 'finds the one build' do
        only_build = fake_builds.first
        expect(review_submitter.find_build(fake_builds)).to eq(only_build)
      end
    end
    
          def options(language, locale)
        config = Snapshot.config
        result_bundle_path = resolve_result_bundle_path(language, locale) if config[:result_bundle]
    
          def self.is_supported?(platform)
        [:ios, :mac].include?(platform)
      end
    
            Actions.lane_context[SharedValues::PODSPEC_VERSION_NUMBER] = version_podspec_file.version_value
      end
    
        SPLIT_INTS = /(?<=\d)\.(?=[\s\d])/.freeze
    
        def push(*names)
      @filters.push *filter_const(names)
    end
    
            css('br', 'hr', '.material-icons', '.header-link', '.breadcrumb').remove
    
            css('h1').each_with_index do |node, i|
          next if i == 0
          node.name = 'h2'
        end
    
      # When true, warn user if they just used next-to-last attempt of authentication
  mattr_accessor :last_attempt_warning
  @@last_attempt_warning = true
    
    module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
          klass.devise_modules.each do |mod|
        constant = const_get(mod.to_s.classify)
    
              find_method_with_args(body_node, :system, 'go', 'get') do
            problem 'Do not use `go get`. Please ask upstream to implement Go vendoring'
          end
    
      def initialize
    @rebuild = 0
    @prefix = Homebrew::DEFAULT_PREFIX
    @cellar = Homebrew::DEFAULT_CELLAR
    @collector = Utils::Bottles::Collector.new
    @root_url_specs = {}
  end
    
    describe SoftwareSpec do
  subject(:spec) { described_class.new }
    
      describe '#cached_location' do
    it 'returns the path of the cached resource' do
      allow_any_instance_of(described_class).to receive(:cache_tag).and_return('foo')
      downloader = described_class.new(url, 'baz', version)
      expect(downloader.cached_location).to eq(HOMEBREW_CACHE/'baz--foo')
    end
  end
end
    
      context do
    let(:asshole)  { Fabricate(:account, username: 'asshole') }
    let(:reply_to) { Fabricate(:status, account: asshole) }
    let(:activity) { Fabricate(:mention, account: recipient, status: Fabricate(:status, account: sender, thread: reply_to)) }
    
      def show
    render json: @poll, serializer: REST::PollSerializer, include_results: true
  end
    
      describe 'GET #show' do
    let(:poll) { Fabricate(:poll, status: Fabricate(:status, visibility: visibility)) }
    
    require 'open-uri'
require 'json'
require 'strscan'
require 'forwardable'
require 'term/ansicolor'
require 'fileutils'
    
        it 'fetches the correct path for ruby' do
      ruby_path = File.basename(Executable.which('ruby'))
      ruby_path.should == 'ruby'
    end
    
    def fixture_pod_target(spec_or_name, host_requires_frameworks = false, user_build_configurations = {}, archs = [],
                       platform = Pod::Platform.new(:ios, '6.0'), target_definitions = [], scope_suffix = nil, build_type: nil)
  spec = spec_or_name.is_a?(Pod::Specification) ? spec_or_name : fixture_spec(spec_or_name)
  fixture_pod_target_with_specs([spec], host_requires_frameworks, user_build_configurations, archs, platform,
                                target_definitions, scope_suffix, :build_type => build_type)
end
    
    module Pod
  class Target
    describe BuildType do
      describe '#initialize' do
        it 'returns static library by default' do
          BuildType.new.should == BuildType.static_library
        end
    
          def all_paths
        [source_path, dsym_path, bcsymbolmap_paths].flatten.compact
      end
    end
  end
end

    
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

    
          def ensure_external_podspecs_present!
        return unless config.podfile
        config.podfile.dependencies.each do |dep|
          next if dep.external_source.nil?
          unless config.sandbox.specification(dep.root_name)
            raise Informative, 'You must run `pod install` first to ensure that the ' \
              'podspec for `#{dep.root_name}` has been fetched.'
          end
        end
      end
    end
  end
end

    
      class VagrantSSHCommandError < RuntimeError; end
    
        def configure_sshkit_output(sshkit)
      format_args = [fetch(:format)]
      format_args.push(fetch(:format_options)) if any?(:format_options)
    
        require 'capistrano/scm/git'
    install_plugin Capistrano::SCM::Git
    
          def trusted_keys
        @trusted_keys.dup
      end