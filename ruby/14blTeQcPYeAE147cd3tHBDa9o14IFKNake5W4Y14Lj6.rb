
        
          nfs_setting = RUBY_PLATFORM =~ /darwin/ || RUBY_PLATFORM =~ /linux/
  config.vm.synced_folder '.', '/vagrant', id: 'vagrant-root'
    
      def enabled
    object.enabled?
  end
    
      def test_shared_substring
    bug12475 = '[ruby-dev:49655] [Bug #12475]'
    n = [*'0'..'9'].join('')*3
    e0 = ENV[n0 = 'E#{n}']
    e1 = ENV[n1 = 'E#{n}.']
    ENV[n0] = nil
    ENV[n1] = nil
    ENV[n1.chop] = 'T#{n}.'.chop
    ENV[n0], e0 = e0, ENV[n0]
    ENV[n1], e1 = e1, ENV[n1]
    assert_equal('T#{n}', e0, bug12475)
    assert_nil(e1, bug12475)
  end
    
      class Honda < Car
    def initialize(*args)
      self.make = 'Honda'
      super(*args)
    end
  end
    
        it 'runs all outer ensure clauses even if inner ensure clause raises exception' do
      ThreadSpecs.join_dying_thread_with_outer_ensure(@method) { ScratchPad.record :in_outer_ensure_clause }
      ScratchPad.recorded.should == :in_outer_ensure_clause
    end
    
      it 'spawns a new Thread running the block' do
    run = false
    t = Thread.send(@method) { run = true }
    t.should be_kind_of(Thread)
    t.join
    
    def each_schema_load_environment
  # If we're in development, also run this for the test environment.
  # This is a somewhat hacky way to do this, so here's why:
  # 1. We have to define this before we load the schema, or we won't
  #    have a timestamp_id function when we get to it in the schema.
  # 2. db:setup calls db:schema:load_if_ruby, which calls
  #    db:schema:load, which we define above as having a prerequisite
  #    of this task.
  # 3. db:schema:load ends up running
  #    ActiveRecord::Tasks::DatabaseTasks.load_schema_current, which
  #    calls a private method `each_current_configuration`, which
  #    explicitly also does the loading for the `test` environment
  #    if the current environment is `development`, so we end up
  #    needing to do the same, and we can't even use the same method
  #    to do it.
    
      def collection_presenter
    ActivityPub::CollectionPresenter.new(
      id: tag_url(@tag),
      type: :ordered,
      size: @tag.statuses.count,
      items: @statuses.map { |s| ActivityPub::TagManager.instance.uri_for(s) }
    )
  end
    
    module Sinatra
  class Application < Base
    
          def escape_string(str)
        str = @escaper.escape_url(str)        if @url
        str = @escaper.escape_html(str)       if @html
        str = @escaper.escape_javascript(str) if @javascript
        str
      end
    end
  end
end

    
            post '/', :file => Rack::Test::UploadedFile.new(temp_file.path), :other => '<bar>'
        expect(body).to eq('_escaped_params_tmp_file\nhello world\n&lt;bar&gt;')
      ensure
        File.unlink(temp_file.path)
      end
    end
  end
end
