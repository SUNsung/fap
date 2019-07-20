
        
          def test_pretty_print_new
    topic = Topic.new
    actual = +''
    PP.pp(topic, StringIO.new(actual))
    expected = <<~PRETTY
      #<Topic:0xXXXXXX
       id: nil,
       title: nil,
       author_name: nil,
       author_email_address: 'test@test.com',
       written_on: nil,
       bonus_time: nil,
       last_read: nil,
       content: nil,
       important: nil,
       approved: true,
       replies_count: 0,
       unique_replies_count: 0,
       parent_id: nil,
       parent_title: nil,
       type: nil,
       group: nil,
       created_at: nil,
       updated_at: nil>
    PRETTY
    assert actual.start_with?(expected.split('XXXXXX').first)
    assert actual.end_with?(expected.split('XXXXXX').last)
  end
    
    require 'cases/helper'
require 'models/numeric_data'
    
    class BugTest < Minitest::Test
  def test_stuff
    assert 'zomg'.present?
    refute ''.present?
  end
end

    
          if ActiveRecord::Base.connection.supports_comments?
        def test_invert_change_column_comment
          assert_raises(ActiveRecord::IrreversibleMigration) do
            @recorder.inverse_of :change_column_comment, [:table, :column, 'comment']
          end
        end
    
        %w(SPATIAL FULLTEXT UNIQUE).each do |type|
      expected = 'ALTER TABLE `people` ADD #{type} INDEX `index_people_on_last_name`  (`last_name`)'
      assert_sql(expected) do
        ActiveRecord::Base.connection.change_table(:people, bulk: true) do |t|
          t.index :last_name, type: type
        end
      end
    end
    
        # Returns the front matter defaults defined for the file's URL and/or type
    # as defined in _config.yml.
    def defaults
      @defaults ||= @site.frontmatter_defaults.all url, type
    end
    
        should 'hide unpublished posts' do
      published = Dir[dest_dir('publish_test/2008/02/02/*.html')].map \
        { |f| File.basename(f) }
      assert_equal 1, published.size
      assert_equal 'published.html', published.first
    end
    
          # `Site#documents` cannot be memoized so that `Site#docs_to_write` can access the
      # latest state of the attribute.
      #
      # Since this method will be called after `Site#pre_render` hook, the `Site#documents`
      # array shouldn't thereafter change and can therefore be safely memoized to prevent
      # additional computation of `Site#documents`.
      def documents
        @documents ||= @obj.documents
      end
    
    def name
  'jekyll'
end
    
      # Generate digests for assets URLs.
  config.assets.digest = true
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
      # insert data
  fields.each do |field, values|
    updated = '  s.#{field} = ['
    updated << values.map { |v| '\n    %p' % v }.join(',')
    updated << '\n  ]'
    content.sub!(/  s\.#{field} = \[\n(    .*\n)*  \]/, updated)
  end
    
            assert_equal 0, Sidekiq::Queue.new('queue_1').size
        assert_equal 1, Sidekiq::Queue.new('queue_2').size
        assert_equal 0, Sidekiq::Queue.new('queue_5').size
        assert_equal 1, Sidekiq::Queue.new('queue_6').size
      ensure
        Sidekiq.client_middleware.remove MyStopper
      end
    end
    
      describe 'lifecycle events' do
    it 'handles invalid input' do
      Sidekiq.options[:lifecycle_events][:startup].clear
    
        it 'disables testing in a block' do
      Sidekiq::Testing.fake!
      assert Sidekiq::Testing.fake?
    
      def perform(msg='lulz you forgot a msg!')
    $redis.lpush('sinkiq-example-messages', msg)
  end
end