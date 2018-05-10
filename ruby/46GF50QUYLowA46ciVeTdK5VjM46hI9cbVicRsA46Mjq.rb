
        
            assert_equal %(dont <\\/close> tags), j(%(dont </close> tags))
  end
    
      test 'response status aliases deprecated' do
    response = ActionDispatch::TestResponse.create
    assert_deprecated { response.success? }
    assert_deprecated { response.missing? }
    assert_deprecated { response.error? }
  end
end

    
      def test_assert_select_email
    assert_raise ActiveSupport::TestCase::Assertion do
      assert_select_email {}
    end
    
        # Get rid of any info 'dir' files, so they don't conflict at the link stage
    info_dir_file = @f.info + 'dir'
    if info_dir_file.file? && !@f.skip_clean?(info_dir_file)
      observe_file_removal info_dir_file
    end
    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end

    
          # Reads data from an IO object while it can, returning the data it reads.
      # When it encounters a case when it can't read anymore, it returns the
      # data.
      #
      # @return [String]
      def self.read_until_block(io)
        data = ''
    
      def test_utime_with_minus_time_segv
    bug5596 = '[ruby-dev:44838]'
    assert_in_out_err([], <<-EOS, [bug5596], [])
      require 'tempfile'
      t = Time.at(-1)
      begin
        Tempfile.create('test_utime_with_minus_time_segv') {|f|
          File.utime(t, t, f)
        }
      rescue
      end
      puts '#{bug5596}'
    EOS
  end
    
      def test_at_with_unit
    assert_equal(123456789, Time.at(0, 123456789, :nanosecond).nsec)
    assert_equal(123456789, Time.at(0, 123456789, :nsec).nsec)
    assert_equal(123456000, Time.at(0, 123456, :microsecond).nsec)
    assert_equal(123456000, Time.at(0, 123456, :usec).nsec)
    assert_equal(123000000, Time.at(0, 123, :millisecond).nsec)
    assert_raise(ArgumentError){ Time.at(0, 1, 2) }
    assert_raise(ArgumentError){ Time.at(0, 1, :invalid) }
    assert_raise(ArgumentError){ Time.at(0, 1, nil) }
  end
    
    describe :string_unpack_64bit_le_extra, shared: true do
  it 'adds nil for each element requested beyond the end of the String' do
    [ ['',                  [nil, nil, nil]],
      ['abcdefgh',          [7523094288207667809, nil, nil]],
      ['abcdefghcdefab',    [7523094288207667809, nil, nil]],
      ['abcdefghcdefabde',  [7523094288207667809, 7306072665971057763, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
end
    
      class SubclassX
    attr_reader :key
    def initialize(*)
      @key = :value
      super
    end
  end
end

    
      def self.sleeping_thread
    Thread.new do
      begin
        sleep
        ScratchPad.record :woken
      rescue Object => e
        ScratchPad.record e
      end
    end
  end
    
            def define_logger(name, options = {})
          class_eval <<-RUBY, __FILE__, __LINE__ + 1
            def #{name}(message)
              #{options.fetch(:to, :log)}(#{name.inspect}, message)
            end
          RUBY
        end
      end
    end
  end
end

    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
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
      # In math and Python, we can use `x < y < z` style comparison to compare
      # multiple value. However, we can't use the comparison in Ruby. However,
      # the comparison is not syntax error. This cop checks the bad usage of
      # comparison operators.
      #
      # @example
      #
      #   # bad
      #
      #   x < y < z
      #   10 <= x <= 20
      #
      # @example
      #
      #   # good
      #
      #   x < y && y < z
      #   10 <= x && x <= 20
      class MultipleCompare < Cop
        MSG = 'Use the `&&` operator to compare multiple values.'.freeze
    
            # @param lines [Array<String>]
        # @param annotations [Array<(Integer, String)>]
        #   each entry is the annotated line number and the annotation text
        #
        # @note annotations are sorted so that reconstructing the annotation
        #   text via {#to_s} is deterministic
        def initialize(lines, annotations)
          @lines       = lines.freeze
          @annotations = annotations.sort.freeze
        end