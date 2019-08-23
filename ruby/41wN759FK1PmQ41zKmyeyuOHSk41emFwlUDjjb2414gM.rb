
        
                private
    
    end
    
          # @return [Bool] whether this resolved specification is by non-library targets.
      #
      attr_reader :used_by_non_library_targets_only
      alias used_by_non_library_targets_only? used_by_non_library_targets_only
    
          # @return [Pathname] The path of the license file as indicated in the
      #         specification or auto-detected.
      #
      def license
        spec_license || path_list.glob([GLOB_PATTERNS[:license]]).first
      end
    
        obj = Helpers.new('HTTP_ACCEPT_LANGUAGE' => 'pt-PT,pt;q=0.8,en-US;q=0.6,en;q=0.4')
    assert_equal 'pt', obj.locale
    
            Sidekiq.redis do |conn|
          %w(queue:queue_1 queue:queue_2 queue:queue_4 queue:queue_5).each do |queue_name|
            assert_equal 1, conn.llen(queue_name)
            job = Sidekiq.load_json(conn.lrange(queue_name, 0, -1)[0])
            assert_equal enqueued_time.to_f, job['enqueued_at']
            assert_equal created_time.to_f,  job['created_at']
          end
        end
    
            before do
          allow(File).to receive(:exist?).with(anything).and_return(false)
          expect(File).to receive(:exist?).with(project_path).and_return(true)
        end
    
        def pane_index
      index + tab.project.pane_base_index
    end
    
      describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
        def deprecation_checks
      [
        rvm_or_rbenv?,
        tabs?,
        cli_args?,
        legacy_synchronize?,
        pre?,
        post?
      ]
    end
    
      describe '#tmux_select_first_pane' do
    it 'targets the pane based on the configured pane_base_index' do
      expect(window.tmux_select_first_pane).to eq('tmux select-pane -t test:1.0')
    end
  end
end
