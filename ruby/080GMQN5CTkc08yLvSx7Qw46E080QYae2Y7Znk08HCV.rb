
        
          enum status: [:proposed, :written, :published]
  enum read_status: { unread: 0, reading: 2, read: 3, forgotten: nil }
  enum nullable_status: [:single, :married]
  enum language: [:english, :spanish, :french], _prefix: :in
  enum author_visibility: [:visible, :invisible], _prefix: true
  enum illustrator_visibility: [:visible, :invisible], _prefix: true
  enum font_size: [:small, :medium, :large], _prefix: :with, _suffix: true
  enum difficulty: [:easy, :medium, :hard], _suffix: :to_read
  enum cover: { hard: 'hard', soft: 'soft' }
    
          def test_missing_helper_error_has_the_right_path
        e = assert_raise(AbstractController::Helpers::MissingHelperError) { AbstractInvalidHelpers.helper(:missing) }
        assert_equal 'helpers/missing_helper.rb', e.path
      end
    end
  end
end

    
          assert_equal %w(main.scss symlinked-file).length, site.pages.length
      refute_equal [], site.static_files
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

    
          def cell_prefix(status)
        @prefixes[status]
      end
    
        it 'returns a label 'Disabled' if a given agent is disabled' do
      stub(@agent).disabled? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Disabled'
    end
    
    describe DotHelper do
  describe 'with example Agents' do
    class Agents::DotFoo < Agent
      default_schedule '2pm'
    
        context '#run' do
      before do
        mock(@agent_runner).run_workers
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
    
    # This class finds files in a repository by name and content
# the result is joined and sorted by file name
module Gitlab
  class FileFinder
    attr_reader :project, :ref
    
    shared_examples 'diff statistics' do |test_include_stats_flag: true|
  def stub_stats_find_by_path(path, stats_mock)
    expect_next_instance_of(Gitlab::Git::DiffStatsCollection) do |collection|
      allow(collection).to receive(:find_by_path).and_call_original
      expect(collection).to receive(:find_by_path).with(path).and_return(stats_mock)
    end
  end
    
          validates virtual_attribute, allow_nil: true, duration: { message: parameters[:error_message] }
    end
    
        %w[group project].each do |source_type|
      params do
        requires :id, type: String, desc: 'The ID of a #{source_type}'
      end
      resource source_type.pluralize, requirements: API::NAMESPACE_OR_PROJECT_REQUIREMENTS do
        desc 'Gets a list of #{source_type} badges viewable by the authenticated user.' do
          detail 'This feature was introduced in GitLab 10.6.'
          success Entities::Badge
        end
        params do
          use :pagination
        end
        get ':id/badges' do
          source = find_source(source_type, params[:id])
    
      def deprecated_option(hash)
    raise ArgumentError, 'deprecated_option hash must not be empty' if hash.empty?
    
          # Returns a Pathname object corresponding to Xcode.app's Developer
      # directory or nil if Xcode.app is not installed
      def prefix
        @prefix ||=
          begin
            dir = MacOS.active_developer_dir
    
          it 'adds the appropriate curl args and does not URL-encode the cookies' do
        expect(subject).to receive(:system_command!) { |*, args:, **|
          expect(args.each_cons(2)).to include(['-b', 'coo=k/e;mon=ster'])
        }
    
      let(:payload) do
    {
      '@context': 'https://www.w3.org/ns/activitystreams',
      id: 'foo',
      type: 'Create',
      actor: ActivityPub::TagManager.instance.uri_for(actor),
      object: {
        id: 'bar',
        type: 'Note',
        content: 'Lorem ipsum',
      },
    }
  end
    
        puts 'Downloading emojos from source... (#{source})'
    
    RSpec.describe FollowLimitValidator, type: :validator do
  describe '#validate' do
    before do
      allow_any_instance_of(described_class).to receive(:limit_reached?).with(account) do
        limit_reached
      end
    
      FREQUENCY      = 7.days.freeze
  SIGN_IN_OFFSET = 1.day.freeze
    
          def ==(other)
        if other.class == self.class
          other.source_path == @source_path && other.dsym_path == @dsym_path && other.bcsymbolmap_paths == @bcsymbolmap_paths
        else
          false
        end
      end
    
          # @return [Array<Pathname>] The paths of the files which should be
      #         included in resources bundles by the Pod.
      #
      def resource_bundle_files
        resource_bundles.values.flatten
      end
    
            index = UI.gets.chomp.to_i - 1
        if index < 0 || index > array.count - 1
          raise Informative, '#{index + 1} is invalid [1-#{array.count}]'
        else
          index
        end
      end