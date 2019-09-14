
        
              def test_declare_missing_helper
        e = assert_raise AbstractController::Helpers::MissingHelperError do
          AbstractHelpers.helper :missing
        end
        assert_equal 'helpers/missing_helper.rb', e.path
      end
    
          it { expect(presenter.can_update?).to eq(true) }
    end
    
    shared_examples 'diff statistics' do |test_include_stats_flag: true|
  def stub_stats_find_by_path(path, stats_mock)
    expect_next_instance_of(Gitlab::Git::DiffStatsCollection) do |collection|
      allow(collection).to receive(:find_by_path).and_call_original
      expect(collection).to receive(:find_by_path).with(path).and_return(stats_mock)
    end
  end
    
      def reset_authentication_token
    current_user&.reset_authentication_token!
  end
end

    
      def self.diaspora_id_host
    '@#{AppConfig.bare_pod_uri}'
  end
    
      def weekly_user_stats
    @created_users_by_week = Hash.new{ |h,k| h[k] = [] }
    @created_users = User.where('username IS NOT NULL and created_at IS NOT NULL')
    @created_users.find_each do |u|
      week = u.created_at.beginning_of_week.strftime('%Y-%m-%d')
      @created_users_by_week[week] << u.username
    end
    
        if @aspect.save
      result = {id: @aspect.id, name: @aspect.name}
      if aspecting_person_id.present?
        aspect_membership = connect_person_to_aspect(aspecting_person_id)
        result[:aspect_membership] = AspectMembershipPresenter.new(aspect_membership).base_hash if aspect_membership
      end
    
      def new
    respond_to do |format|
      format.mobile { render layout: false }
    end
  end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
          def html?(headers)
        return false unless header = headers.detect { |k,v| k.downcase == 'content-type' }
        options[:html_types].include? header.last[/^\w+\/\w+/]
      end
    end
  end
end

    
      subject { described_class.new(lambda {}) }
    
      it 'denies post form requests with wrong authenticity_token field' do
    post('/', {'authenticity_token' => bad_token}, 'rack.session' => session)
    expect(last_response).not_to be_ok
  end
    
          it { expect(class_node.body).to be(nil) }
    end
  end
end

    
      describe '.new' do
    let(:source) do
      'module Foo; end'
    end
    
            nodes.first.first_line == nodes.last.last_line
      end
    
            def correct_style?(node)
          !contains_guard_clause?(node) ||
            next_line_rescue_or_ensure?(node) ||
            next_sibling_parent_empty_or_else?(node) ||
            next_sibling_empty_or_guard_clause?(node)
        end
    
      it 'does not register offense for multiple guard clauses' do
    expect_no_offenses(<<~RUBY)
      def foo
        return another_object if something?
        return another_object if something_else?
        return another_object if something_different?
    
          # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `block` node body is a void context
      def void_context?
        VOID_CONTEXT_METHODS.include?(method_name)
      end
    end
  end
end

    
          # Returns the body of the `for` loop.
      #
      # @return [Node, nil] The body of the `for` loop.
      def body
        node_parts[2]
      end
    end
  end
end

    
          # Calls the given block for each `value` node in the `hash` literal.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_value
        return pairs.map(&:value).to_enum unless block_given?
    
            branches.each do |branch|
          yield branch
        end
      end
    end
  end
end

    
          def after
        @versions[1][0..6]
      end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift(int, shift)
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
        @wiki.clear_cache
    page_2 = @wiki.page(page_1.name)
    assert_equal 'abc', page_2.raw_data
    assert_equal 'def', page_2.version.message
    assert_not_equal page_1.version.sha, page_2.version.sha
  end
    
        assert body.include?('<span class='username'>Charles Pence</span>'), '/latest_changes should include the Author Charles Pence'
    assert body.include?('a8ad3c0'), '/latest_changes should include the :latest_changes_count commit'
    assert !body.include?('60f12f4'), '/latest_changes should not include more than latest_changes_count commits'
    assert body.include?('<a href='Data-Two.csv/874f597a5659b4c3b153674ea04e406ff393975e'>Data-Two.csv</a>'), '/latest_changes include links to modified files in #{body}'
    assert body.include?('<a href='Hobbit/874f597a5659b4c3b153674ea04e406ff393975e'>Hobbit.md</a>'), '/latest_changes should include links to modified pages in #{body}'
  end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, false
    
        # Extract the path string that Gollum::Wiki expects
    def extract_path(file_path)
      return nil if file_path.nil?
      last_slash = file_path.rindex('/')
      if last_slash
        file_path[0, last_slash]
      end
    end
    
        def tmux_pre_window_command
      return unless project.pre_window
    
          say 'Checking if $EDITOR is set ==> '
      yes_no Tmuxinator::Doctor.editor?
    
          def sample
        asset_path 'sample.yml'
      end
    
        # We're going to create a global server that can be used by any tests.
    # Because the mail databases don't use any transactions, all data left in the
    # database will be left there unless removed.
    DatabaseCleaner.start
    GLOBAL_SERVER = FactoryBot.create(:server, :provision_database => true)
  end
    
      private
    
    desc 'Default: run unit tests.'
task :default => [:clean, :all]
    
                  convert(':src :dst',
                src: File.expand_path(file.path),
                dst: File.expand_path(dst.path)
              )