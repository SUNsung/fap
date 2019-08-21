
        
            def modified_time
      @modified_time ||= File.stat(path).mtime
    end
    
    Jekyll::Deprecator.process(ARGV)
    
          def step_name(_keyword, _step_match, status, _source_indent, _background, _file_colon_line)
        @io.print CHARS[status]
        @io.print ' '
      end
      # rubocop:enable Metrics/ParameterLists
    
        context 'when user cannot update_project_member' do
      before do
        allow(presenter).to receive(:can?).with(user, :update_project_member, presenter).and_return(false)
        allow(presenter).to receive(:can?).with(user, :override_project_member, presenter).and_return(false)
      end
    
            def write_cache
          # No-op
        end
    
        it 'unwraps ActiveJob jobs' do
      ApiJob.perform_later(1, 2, 3)
      q = Sidekiq::Queue.new
      x = q.first
      assert_equal ApiJob.name, x.display_class
      assert_equal [1,2,3], x.display_args
    end
    
        assert_equal CustomMiddleware, chain.entries.last.klass
  end
    
            @poller.enqueue
    
      extend ActiveSupport::Concern
    
      include WithinOrganization