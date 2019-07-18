
        
            should 'not filter symlink entries when safe mode disabled' do
      allow(File).to receive(:symlink?).with('symlink.js').and_return(true)
      files = %w(symlink.js)
      assert_equal files, @site.reader.filter_entries(files)
    end
    
        # --
    # NOTE: Pathutil#in_path? gets the realpath.
    # @param [<Anything>] entry the entry you want to validate.
    # Check if a path is outside of our given root.
    # --
    def symlink_outside_site_source?(entry)
      !Pathutil.new(entry).in_path?(
        site.in_source_dir
      )
    end
    
          def key?(key)
        (key != 'posts' && @obj.collections.key?(key)) || super
      end
    
    require 'rdoc/task'
Rake::RDocTask.new do |rdoc|
  rdoc.rdoc_dir = 'rdoc'
  rdoc.title = '#{name} #{version}'
  rdoc.rdoc_files.include('README*')
  rdoc.rdoc_files.include('lib/**/*.rb')
end
    
    Nullam luctus fermentum est id blandit. Phasellus consectetur ullamcorper
ligula, {% if author == 'Jane Doe' %} at finibus eros laoreet id. {% else %}
Etiam sit amet est in libero efficitur.{% endif %}
tristique. Ut nec magna augue. Quisque ut fringilla lacus, ac dictum enim.
Aliquam vel ornare mauris. Suspendisse ornare diam tempor nulla facilisis
aliquet. Sed ultrices placerat ultricies.
LIQUID
    
    require 'benchmark/ips'
require 'pathutil'
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
          def step_name(_keyword, _step_match, status, _source_indent, _background, _file_colon_line)
        @io.print CHARS[status]
        @io.print ' '
      end
      # rubocop:enable Metrics/ParameterLists
    
        context 'if compliant?' do
      let(:compliant) { true }
    
        it 'returns http success' do
      expect(response).to have_http_status(200)
    end
    
      def refresh_poll
    ActivityPub::FetchRemotePollService.new.call(@poll, current_account) if user_signed_in? && @poll.possibly_stale?
  end
end

    
          respond_with do |format|
        format.html do
          gon.preloads[:pods] = pods_json
          gon.unchecked_count = Pod.unchecked.count
          gon.version_failed_count = Pod.version_failed.count
          gon.error_count = Pod.check_failed.count
    
    class AdminsController < Admin::AdminController
  include ApplicationHelper
    
      rescue_from ActiveRecord::RecordNotFound do
    render plain: I18n.t('aspect_memberships.destroy.no_membership'), status: 404
  end
    
      private
    
      respond_to :html, :mobile
  respond_to :json, :only => :show
    
        it { expect(self_class_node.identifier.self_type?).to be(true) }
  end
    
            # If the call has a second argument, we can insert a line
        # break before the second argument and the rest of the
        # argument will get auto-formatted onto separate lines
        # by other cops.
        has_second_element = elements.length >= 2
    
          context 'and AllowUnusedKeywordArguments set' do
        let(:cop_config) { { 'AllowUnusedKeywordArguments' => true } }
    
            rhs
      end
    end
  end
end

    
      describe '.new' do
    context 'with a regular if statement' do
      let(:source) { 'if foo?; :bar; end' }
    
          preliminary_path = '#{@path}_#{rand(1_000_000_000)}'
      # RuboCop must be in control of where its cached data is stored. A
      # symbolic link anywhere in the cache directory tree can be an
      # indication that a symlink attack is being waged.
      return if symlink_protection_triggered?(dir)
    
          # Returns the iteration variable of the `for` loop.
      #
      # @return [Node] The iteration variable of the `for` loop
      def variable
        node_parts[0]
      end
    
          def line_class(line)
        if line =~ /^@@/
          'gc'
        elsif line =~ /^\+/
          'gi'
        elsif line =~ /^\-/
          'gd'
        else
          ''
        end
      end
    
          def mathjax_config
        @mathjax_config
      end
    
        @wiki.clear_cache
    page = @wiki.page(name)
    assert_not_equal 'abc', page.raw_data
  end
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
    def gemspec_file
  '#{name}.gemspec'
end