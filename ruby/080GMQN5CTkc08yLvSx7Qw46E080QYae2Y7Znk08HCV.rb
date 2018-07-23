
        
          def test_should_merge_errors_on_the_associated_models_onto_the_parent_even_if_it_is_not_valid
    @pirate.ship.name   = nil
    @pirate.catchphrase = nil
    assert_predicate @pirate, :invalid?
    assert_predicate @pirate.errors[:'ship.name'], :any?
    assert_predicate @pirate.errors[:catchphrase], :any?
  end
    
      before_destroy :overwrite_to_raise
    
      validate :check_empty_title
  validate :check_content_mismatch, on: :create
  validate :check_wrong_update, on: :update
  validate :check_author_name_is_secret, on: :special_case
    
        private
      def ping
      end
  end
    
        def connect
      @connected = true
    end
    
      def save_and_refresh_staff_groups!
    transaction do
      self.save!
      Group.refresh_automatic_groups!(:admins, :moderators, :staff)
    end
  end
    
      def self.fragment_cache
    @cache ||= DistributedCache.new('am_serializer_fragment_cache')
  end
    
        def entries_as_json
      @entries.sort! { |a, b| sort_fn(a.name, b.name) }.map(&:as_json)
    end
    
            hash.each do |key, value|
          self[convert_key(key)] = value
        end
      end
    
            def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
    module RuboCop
  module Cop
    module Lint
      # Don't omit the accumulator when calling `next` in a `reduce` block.
      #
      # @example
      #
      #   # bad
      #
      #   result = (1..4).reduce(0) do |acc, i|
      #     next if i.odd?
      #     acc + i
      #   end
      #
      # @example
      #
      #   # good
      #
      #   result = (1..4).reduce(0) do |acc, i|
      #     next acc if i.odd?
      #     acc + i
      #   end
      class NextWithoutAccumulator < Cop
        MSG = 'Use `next` with an accumulator argument in a `reduce`.'.freeze
    
            # @param annotated_source [String] string passed to the matchers
        #
        # Separates annotation lines from source lines. Tracks the real
        # source line number that each annotation corresponds to.
        #
        # @return [AnnotatedSource]
        def self.parse(annotated_source)
          source      = []
          annotations = []
    
          context 'source without blank lines' do
        let(:source) do
          <<-RUBY.strip_indent
            #{type} SomeObject
              def do_something; end
            end
          RUBY
        end